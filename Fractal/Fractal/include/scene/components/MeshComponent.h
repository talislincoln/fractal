#ifndef _MESHCOMPONENT_H
#define _MESHCOMPONENT_H

#include <Fractal\include\scene\Component.h>
#include <Fractal\include\interfaces\IDrawable.h>
#include <Fractal\include\graphics\MeshData.h>
#include "graphics\materials\DefaultMeshMaterial.h"
#include "graphics\vao.h"
namespace fractal {
	namespace fscene {
		class TransformComponent;
		using namespace fmath;
		class MeshComponent : public Component, public IDrawable {
		public:
			MeshComponent( fgraphics::MeshData* md_, 
				fgraphics::Material* m = new fgraphics::DefaultMaterial()
			);
			MeshComponent(fgraphics::Material* m = new fgraphics::DefaultMaterial()
			, fgraphics::Vao* vao_ = new fgraphics::Vao());
			virtual ~MeshComponent();

			virtual bool initialize();
			virtual void draw() const;
			virtual void update();
			virtual bool shutdown();
			inline void setMaterial(fractal::fgraphics::Material* m) {
				m_material = m;
			}
			void setTexture(fgraphics::Texture* texture);
		private:
			fgraphics::Material* m_material;
			fgraphics::Vao* m_vao;
		};
	}
}

#endif // !_MESHCOMPONENT_H
