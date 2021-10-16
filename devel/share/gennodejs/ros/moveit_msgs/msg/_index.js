
"use strict";

let MoveGroupActionFeedback = require('./MoveGroupActionFeedback.js');
let MoveGroupResult = require('./MoveGroupResult.js');
let ExecuteTrajectoryFeedback = require('./ExecuteTrajectoryFeedback.js');
let MoveGroupSequenceActionFeedback = require('./MoveGroupSequenceActionFeedback.js');
let PickupGoal = require('./PickupGoal.js');
let ExecuteTrajectoryAction = require('./ExecuteTrajectoryAction.js');
let PlaceActionGoal = require('./PlaceActionGoal.js');
let ExecuteTrajectoryActionResult = require('./ExecuteTrajectoryActionResult.js');
let MoveGroupSequenceFeedback = require('./MoveGroupSequenceFeedback.js');
let PlaceActionFeedback = require('./PlaceActionFeedback.js');
let MoveGroupGoal = require('./MoveGroupGoal.js');
let PlaceAction = require('./PlaceAction.js');
let MoveGroupSequenceActionGoal = require('./MoveGroupSequenceActionGoal.js');
let ExecuteTrajectoryActionGoal = require('./ExecuteTrajectoryActionGoal.js');
let ExecuteTrajectoryActionFeedback = require('./ExecuteTrajectoryActionFeedback.js');
let MoveGroupSequenceActionResult = require('./MoveGroupSequenceActionResult.js');
let ExecuteTrajectoryResult = require('./ExecuteTrajectoryResult.js');
let PickupActionResult = require('./PickupActionResult.js');
let MoveGroupAction = require('./MoveGroupAction.js');
let MoveGroupActionGoal = require('./MoveGroupActionGoal.js');
let PlaceGoal = require('./PlaceGoal.js');
let PlaceResult = require('./PlaceResult.js');
let PickupActionFeedback = require('./PickupActionFeedback.js');
let MoveGroupActionResult = require('./MoveGroupActionResult.js');
let MoveGroupSequenceAction = require('./MoveGroupSequenceAction.js');
let PickupFeedback = require('./PickupFeedback.js');
let PlaceActionResult = require('./PlaceActionResult.js');
let MoveGroupSequenceGoal = require('./MoveGroupSequenceGoal.js');
let MoveGroupSequenceResult = require('./MoveGroupSequenceResult.js');
let PlaceFeedback = require('./PlaceFeedback.js');
let PickupAction = require('./PickupAction.js');
let PickupResult = require('./PickupResult.js');
let MoveGroupFeedback = require('./MoveGroupFeedback.js');
let PickupActionGoal = require('./PickupActionGoal.js');
let ExecuteTrajectoryGoal = require('./ExecuteTrajectoryGoal.js');
let DisplayTrajectory = require('./DisplayTrajectory.js');
let PlanningOptions = require('./PlanningOptions.js');
let PositionConstraint = require('./PositionConstraint.js');
let MotionSequenceResponse = require('./MotionSequenceResponse.js');
let MoveItErrorCodes = require('./MoveItErrorCodes.js');
let MotionSequenceItem = require('./MotionSequenceItem.js');
let MotionPlanRequest = require('./MotionPlanRequest.js');
let PlanningSceneComponents = require('./PlanningSceneComponents.js');
let Constraints = require('./Constraints.js');
let WorkspaceParameters = require('./WorkspaceParameters.js');
let CollisionObject = require('./CollisionObject.js');
let CartesianPoint = require('./CartesianPoint.js');
let CartesianTrajectory = require('./CartesianTrajectory.js');
let PlannerParams = require('./PlannerParams.js');
let Grasp = require('./Grasp.js');
let PlanningSceneWorld = require('./PlanningSceneWorld.js');
let GripperTranslation = require('./GripperTranslation.js');
let MotionSequenceRequest = require('./MotionSequenceRequest.js');
let OrientedBoundingBox = require('./OrientedBoundingBox.js');
let ContactInformation = require('./ContactInformation.js');
let JointConstraint = require('./JointConstraint.js');
let OrientationConstraint = require('./OrientationConstraint.js');
let AllowedCollisionMatrix = require('./AllowedCollisionMatrix.js');
let LinkPadding = require('./LinkPadding.js');
let ConstraintEvalResult = require('./ConstraintEvalResult.js');
let VisibilityConstraint = require('./VisibilityConstraint.js');
let MotionPlanDetailedResponse = require('./MotionPlanDetailedResponse.js');
let KinematicSolverInfo = require('./KinematicSolverInfo.js');
let CostSource = require('./CostSource.js');
let RobotTrajectory = require('./RobotTrajectory.js');
let TrajectoryConstraints = require('./TrajectoryConstraints.js');
let PlannerInterfaceDescription = require('./PlannerInterfaceDescription.js');
let GenericTrajectory = require('./GenericTrajectory.js');
let PlaceLocation = require('./PlaceLocation.js');
let JointLimits = require('./JointLimits.js');
let ObjectColor = require('./ObjectColor.js');
let DisplayRobotState = require('./DisplayRobotState.js');
let BoundingVolume = require('./BoundingVolume.js');
let PlanningScene = require('./PlanningScene.js');
let AllowedCollisionEntry = require('./AllowedCollisionEntry.js');
let PositionIKRequest = require('./PositionIKRequest.js');
let AttachedCollisionObject = require('./AttachedCollisionObject.js');
let MotionPlanResponse = require('./MotionPlanResponse.js');
let LinkScale = require('./LinkScale.js');
let CartesianTrajectoryPoint = require('./CartesianTrajectoryPoint.js');
let RobotState = require('./RobotState.js');

module.exports = {
  MoveGroupActionFeedback: MoveGroupActionFeedback,
  MoveGroupResult: MoveGroupResult,
  ExecuteTrajectoryFeedback: ExecuteTrajectoryFeedback,
  MoveGroupSequenceActionFeedback: MoveGroupSequenceActionFeedback,
  PickupGoal: PickupGoal,
  ExecuteTrajectoryAction: ExecuteTrajectoryAction,
  PlaceActionGoal: PlaceActionGoal,
  ExecuteTrajectoryActionResult: ExecuteTrajectoryActionResult,
  MoveGroupSequenceFeedback: MoveGroupSequenceFeedback,
  PlaceActionFeedback: PlaceActionFeedback,
  MoveGroupGoal: MoveGroupGoal,
  PlaceAction: PlaceAction,
  MoveGroupSequenceActionGoal: MoveGroupSequenceActionGoal,
  ExecuteTrajectoryActionGoal: ExecuteTrajectoryActionGoal,
  ExecuteTrajectoryActionFeedback: ExecuteTrajectoryActionFeedback,
  MoveGroupSequenceActionResult: MoveGroupSequenceActionResult,
  ExecuteTrajectoryResult: ExecuteTrajectoryResult,
  PickupActionResult: PickupActionResult,
  MoveGroupAction: MoveGroupAction,
  MoveGroupActionGoal: MoveGroupActionGoal,
  PlaceGoal: PlaceGoal,
  PlaceResult: PlaceResult,
  PickupActionFeedback: PickupActionFeedback,
  MoveGroupActionResult: MoveGroupActionResult,
  MoveGroupSequenceAction: MoveGroupSequenceAction,
  PickupFeedback: PickupFeedback,
  PlaceActionResult: PlaceActionResult,
  MoveGroupSequenceGoal: MoveGroupSequenceGoal,
  MoveGroupSequenceResult: MoveGroupSequenceResult,
  PlaceFeedback: PlaceFeedback,
  PickupAction: PickupAction,
  PickupResult: PickupResult,
  MoveGroupFeedback: MoveGroupFeedback,
  PickupActionGoal: PickupActionGoal,
  ExecuteTrajectoryGoal: ExecuteTrajectoryGoal,
  DisplayTrajectory: DisplayTrajectory,
  PlanningOptions: PlanningOptions,
  PositionConstraint: PositionConstraint,
  MotionSequenceResponse: MotionSequenceResponse,
  MoveItErrorCodes: MoveItErrorCodes,
  MotionSequenceItem: MotionSequenceItem,
  MotionPlanRequest: MotionPlanRequest,
  PlanningSceneComponents: PlanningSceneComponents,
  Constraints: Constraints,
  WorkspaceParameters: WorkspaceParameters,
  CollisionObject: CollisionObject,
  CartesianPoint: CartesianPoint,
  CartesianTrajectory: CartesianTrajectory,
  PlannerParams: PlannerParams,
  Grasp: Grasp,
  PlanningSceneWorld: PlanningSceneWorld,
  GripperTranslation: GripperTranslation,
  MotionSequenceRequest: MotionSequenceRequest,
  OrientedBoundingBox: OrientedBoundingBox,
  ContactInformation: ContactInformation,
  JointConstraint: JointConstraint,
  OrientationConstraint: OrientationConstraint,
  AllowedCollisionMatrix: AllowedCollisionMatrix,
  LinkPadding: LinkPadding,
  ConstraintEvalResult: ConstraintEvalResult,
  VisibilityConstraint: VisibilityConstraint,
  MotionPlanDetailedResponse: MotionPlanDetailedResponse,
  KinematicSolverInfo: KinematicSolverInfo,
  CostSource: CostSource,
  RobotTrajectory: RobotTrajectory,
  TrajectoryConstraints: TrajectoryConstraints,
  PlannerInterfaceDescription: PlannerInterfaceDescription,
  GenericTrajectory: GenericTrajectory,
  PlaceLocation: PlaceLocation,
  JointLimits: JointLimits,
  ObjectColor: ObjectColor,
  DisplayRobotState: DisplayRobotState,
  BoundingVolume: BoundingVolume,
  PlanningScene: PlanningScene,
  AllowedCollisionEntry: AllowedCollisionEntry,
  PositionIKRequest: PositionIKRequest,
  AttachedCollisionObject: AttachedCollisionObject,
  MotionPlanResponse: MotionPlanResponse,
  LinkScale: LinkScale,
  CartesianTrajectoryPoint: CartesianTrajectoryPoint,
  RobotState: RobotState,
};
