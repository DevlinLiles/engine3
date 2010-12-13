/*
 * AABBTree.h
 *
 *  Created on: 05/12/2010
 *      Author: victor
 */

#ifndef AABBTREE_H_
#define AABBTREE_H_

#include "Vector3.h"
#include "../../system/lang.h"
#include "../../system/util/Vector.h"

#include "AABB.h"

#include "Triangle.h"
#include "Sphere.h"
#include "Ray.h"
#include "AABBNode.h"

namespace engine {
 namespace util {

 // heuristic struct, passed down the tree
 struct AABBTreeHeuristic {
	 uint8 maxdepth; // maximum depth
	 uint32 mintricnt; // minimum triangle count
	 uint32 tartricnt; // target triangle count
	 float minerror; // minimum error required
	 bool storePrimitives; //store triangles
 };

	class AABBTree : public AABBNode {
	public:
		AABBTree(Vector<Triangle>& trilist, int depth, const AABBTreeHeuristic& heurdata) : AABBNode(trilist, depth, heurdata) {

		}
	};

 }
}

#endif /* AABTREE_H_ */