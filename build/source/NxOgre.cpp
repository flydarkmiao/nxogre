/** 
    
    This file is part of NxOgre.
    
    Copyright (c) 2009 Robin Southern, http://www.nxogre.org
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:
    
    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
    
*/

                                                                                       

// This is an automatically created file. Do not alter.
//~~ ub_begin 156993638fa4d18fbd50d7452fb9e282

#include "NxOgreActor.cpp"
#include "NxOgreActorMachinePart.cpp"
#include "NxOgreAllocator.cpp"
#include "NxOgreAuxiliaryScene.cpp"
#include "NxOgreBox.cpp"
#include "NxOgreBoxDescription.cpp"
#include "NxOgreCallback.cpp"
#include "NxOgreCapsule.cpp"
#include "NxOgreCapsuleDescription.cpp"
#include "NxOgreCharacterController.cpp"
#include "NxOgreCharacterControllerDescription.cpp"
#include "NxOgreClasses.cpp"
#include "NxOgreCloth.cpp"
#include "NxOgreClothDescription.cpp"
#include "NxOgreCommonMachineParts.cpp"
#include "NxOgreCompartment.cpp"
#include "NxOgreCompartmentDescription.cpp"
#include "NxOgreConvex.cpp"
#include "NxOgreConvexDescription.cpp"
#include "NxOgreD6Joint.cpp"
#include "NxOgreD6JointDescription.cpp"
#include "NxOgreErrorStream.cpp"
#include "NxOgreException.cpp"
#include "NxOgreFileResource.cpp"
#include "NxOgreFileResourceProtocol.cpp"
#include "NxOgreFixedJoint.cpp"
#include "NxOgreFixedSceneTimer.cpp"
#include "NxOgreFlatYAML.cpp"
#include "NxOgreFlower.cpp"
#include "NxOgreFluid.cpp"
#include "NxOgreFluidDescription.cpp"
#include "NxOgreFluidEmitter.cpp"
#include "NxOgreFluidEmitterDescription.cpp"
#include "NxOgreForceField.cpp"
#include "NxOgreForceFieldDescription.cpp"
#include "NxOgreForceFieldKernel.cpp"
#include "NxOgreForceFieldLinearKernel.cpp"
#include "NxOgreForceFieldLinearKernelDescription.cpp"
#include "NxOgreFunctions.cpp"
#include "NxOgreGC.cpp"
#include "NxOgreGroupsMask.cpp"
#include "NxOgreHeightField.cpp"
#include "NxOgreHeightFieldData.cpp"
#include "NxOgreHeightFieldGeometry.cpp"
#include "NxOgreHeightFieldGeometryDescription.cpp"
#include "NxOgreHeightFieldManager.cpp"
#include "NxOgreIntVectors.cpp"
#include "NxOgreJoint.cpp"
#include "NxOgreJointDescription.cpp"
#include "NxOgreJointDriveDescription.cpp"
#include "NxOgreJointHelper.cpp"
#include "NxOgreJointLimitDescription.cpp"
#include "NxOgreJointLimitSoftDescription.cpp"
#include "NxOgreKinematicActor.cpp"
#include "NxOgreKinematicSceneLink.cpp"
#include "NxOgreLinearInterpolationMap.cpp"
#include "NxOgreList.cpp"
#include "NxOgreMachine.cpp"
#include "NxOgreMachinePart.cpp"
#include "NxOgreMallocAllocator.cpp"
#include "NxOgreManualHeightField.cpp"
#include "NxOgreManualMesh.cpp"
#include "NxOgreMaterial.cpp"
#include "NxOgreMaterialDescription.cpp"
#include "NxOgreMath.cpp"
#include "NxOgreMatrix.cpp"
#include "NxOgreMemoryResource.cpp"
#include "NxOgreMemoryResourceProtocol.cpp"
#include "NxOgreMesh.cpp"
#include "NxOgreMeshData.cpp"
#include "NxOgreMeshGenerator.cpp"
#include "NxOgreMeshManager.cpp"
#include "NxOgreMeshRenderable.cpp"
#include "NxOgreMeshStats.cpp"
#include "NxOgreMotorDescription.cpp"
#include "NxOgreNodeRenderable.cpp"
#include "NxOgreNotice.cpp"
#include "NxOgreNXS.cpp"
#include "NxOgreParticleData.cpp"
#include "NxOgrePath.cpp"
#include "NxOgrePhysXCallback.cpp"
#include "NxOgrePhysXConfiguration.cpp"
#include "NxOgrePhysXController.cpp"
#include "NxOgrePhysXControllerHitReport.cpp"
#include "NxOgrePhysXControllerManager.cpp"
#include "NxOgrePhysXOutputStream.cpp"
#include "NxOgrePhysXParticleData.cpp"
#include "NxOgrePhysXPointer.cpp"
#include "NxOgrePhysXRaycastReport.cpp"
#include "NxOgrePhysXStream.cpp"
#include "NxOgrePhysXUserAllocator.cpp"
#include "NxOgrePlaneGeometry.cpp"
#include "NxOgrePlaneGeometryDescription.cpp"
#include "NxOgrePointRenderable.cpp"
#include "NxOgrePrincipalScene.cpp"
#include "NxOgrePrototypeFunctions.cpp"
#include "NxOgreQuat.cpp"
#include "NxOgreRadian.cpp"
#include "NxOgreRay.cpp"
#include "NxOgreRaycastHit.cpp"
#include "NxOgreReason.cpp"
#include "NxOgreRemoteDebugger.cpp"
#include "NxOgreRenderable.cpp"
#include "NxOgreResource.cpp"
#include "NxOgreResourceProtocol.cpp"
#include "NxOgreResourceStream.cpp"
#include "NxOgreResourceSystem.cpp"
#include "NxOgreRevoluteJoint.cpp"
#include "NxOgreRevoluteJointDescription.cpp"
#include "NxOgreRigidBody.cpp"
#include "NxOgreRigidBodyDescription.cpp"
#include "NxOgreRigidBodyEventIterator.cpp"
#include "NxOgreRigidBodyFunctions.cpp"
#include "NxOgreScene.cpp"
#include "NxOgreSceneDescription.cpp"
#include "NxOgreSceneGeometry.cpp"
#include "NxOgreSceneLink.cpp"
#include "NxOgreSceneTimer.cpp"
#include "NxOgreShape.cpp"
#include "NxOgreShapeDescription.cpp"
#include "NxOgreShapeFunctions.cpp"
#include "NxOgreSimple.cpp"
#include "NxOgreSoftBody.cpp"
#include "NxOgreSoftBodyDescription.cpp"
#include "NxOgreSphere.cpp"
#include "NxOgreSphereDescription.cpp"
#include "NxOgreSphericalJoint.cpp"
#include "NxOgreSphericalJointDescription.cpp"
#include "NxOgreSpringDescription.cpp"
#include "NxOgreStable.cpp"
#include "NxOgreString.cpp"
#include "NxOgreSweepQuery.cpp"
#include "NxOgreTimeListenerGroup.cpp"
#include "NxOgreTimer.cpp"
#include "NxOgreTimeStep.cpp"
#include "NxOgreTireFunction.cpp"
#include "NxOgreTriangle.cpp"
#include "NxOgreTriangleGeometry.cpp"
#include "NxOgreTriangleGeometryDescription.cpp"
#include "NxOgreUtil.cpp"
#include "NxOgreVec2.cpp"
#include "NxOgreVec3.cpp"
#include "NxOgreVec4.cpp"
#include "NxOgreVisualDebugger.cpp"
#include "NxOgreVisualDebuggerMeshData.cpp"
#include "NxOgreVolume.cpp"
#include "NxOgreWarning.cpp"
#include "NxOgreWheel.cpp"
#include "NxOgreWheelDescription.cpp"
#include "NxOgreWheelMachinePart.cpp"
#include "NxOgreWorld.cpp"
#include "NxOgreWorldDescription.cpp"
#include "NxOgreX.cpp"
#include "NxOgreXFunctions.cpp"

//~~ ub_end

