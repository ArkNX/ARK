// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AFDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AFDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace AFMsg {

namespace {

const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EItemType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameCardSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameTokenSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EBattleType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EShopType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ERankType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ENPCType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_AFDefine_2eproto() {
  protobuf_AddDesc_AFDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AFDefine.proto");
  GOOGLE_CHECK(file != NULL);
  EGameEventCode_descriptor_ = file->enum_type(0);
  EGameMsgID_descriptor_ = file->enum_type(1);
  EItemType_descriptor_ = file->enum_type(2);
  EGameEquipSubType_descriptor_ = file->enum_type(3);
  EGameGemSubType_descriptor_ = file->enum_type(4);
  EGameItemSubType_descriptor_ = file->enum_type(5);
  EGameCardSubType_descriptor_ = file->enum_type(6);
  EGameTokenSubType_descriptor_ = file->enum_type(7);
  EGameItemExpiredType_descriptor_ = file->enum_type(8);
  EDrawDropItemState_descriptor_ = file->enum_type(9);
  EGuildPowerType_descriptor_ = file->enum_type(10);
  ETaskState_descriptor_ = file->enum_type(11);
  ETaskType_descriptor_ = file->enum_type(12);
  EBattleType_descriptor_ = file->enum_type(13);
  EShopType_descriptor_ = file->enum_type(14);
  ERankType_descriptor_ = file->enum_type(15);
  ENPCType_descriptor_ = file->enum_type(16);
  EPropertyType_descriptor_ = file->enum_type(17);
  EGameElementType_descriptor_ = file->enum_type(18);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AFDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_AFDefine_2eproto() {
}

void protobuf_AddDesc_AFDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016AFDefine.proto\022\005AFMsg*\266\n\n\016EGameEventCo"
    "de\022\020\n\014EGEC_SUCCESS\020\000\022\025\n\021EGEC_UNKOWN_ERRO"
    "R\020\001\022\026\n\022EGEC_ACCOUNT_EXIST\020\002\022\033\n\027EGEC_ACCO"
    "UNTPWD_INVALID\020\003\022\026\n\022EGEC_ACCOUNT_USING\020\004"
    "\022\027\n\023EGEC_ACCOUNT_LOCKED\020\005\022\030\n\024EGEC_ACCOUN"
    "T_SUCCESS\020\006\022\033\n\027EGEC_VERIFY_KEY_SUCCESS\020\007"
    "\022\030\n\024EGEC_VERIFY_KEY_FAIL\020\010\022\035\n\031EGEC_SELEC"
    "TSERVER_SUCCESS\020\t\022\032\n\026EGEC_SELECTSERVER_F"
    "AIL\020\n\022\030\n\024EGEC_CHARACTER_EXIST\020n\022\032\n\026EGEC_"
    "SVRZONEID_INVALID\020o\022\031\n\025EGEC_CHARACTER_NU"
    "MOUT\020p\022\032\n\026EGEC_CHARACTER_INVALID\020q\022\033\n\027EG"
    "EC_CHARACTER_NOTEXIST\020r\022\030\n\024EGEC_CHARACTE"
    "R_USING\020s\022\031\n\025EGEC_CHARACTER_LOCKED\020t\022\026\n\022"
    "EGEC_ZONE_OVERLOAD\020u\022\023\n\017EGEC_NOT_ONLINE\020"
    "v\022\027\n\023EGEC_ALREAY_IN_TEAM\020w\022\034\n\030EGEC_INVAL"
    "ID_TEAM_INVITE\020x\022\022\n\016EGEC_TEAM_FULL\020y\022\032\n\026"
    "EGEC_MAIL_UPDATE_ERROR\020z\022\034\n\030EGEC_MAIL_TO"
    "NAME_INVALID\020{\022\032\n\026EGEC_MAIL_DELETE_ERROR"
    "\020|\022\033\n\027EGEC_MAIL_TOWNAME_EQUAL\020}\022\023\n\017EGEC_"
    "LACK_MONEY\020~\022\025\n\021EGEC_FULL_PACKAGE\020\177\022\026\n\021E"
    "GEC_INVALID_ITEM\020\200\001\022\035\n\030EGEC_INVALID_CONS"
    "IGNMENT\020\201\001\022\030\n\023EGEC_NOT_ENOUGH_VIP\020\202\001\022\024\n\017"
    "EGEC_NEED_LEVEL\020\203\001\022\031\n\024EGEC_MAX_FRIEND_LI"
    "ST\020\204\001\022\030\n\023EGEC_MAX_ENEMY_LIST\020\205\001\022\030\n\023EGEC_"
    "MAX_GANGS_LSIT\020\206\001\022\032\n\025EGEC_LIMITS_TO_RIGH"
    "TS\020\207\001\022\034\n\027EGEC_INVALID_GANGS_NAME\020\210\001\022\034\n\027E"
    "GEC_REPEAT_ENTER_GANGS\020\211\001\022\035\n\030EGEC_INVALI"
    "D_GANGSMEMBER\020\212\001\022\034\n\027EGEC_MASTER_LEAVE_GA"
    "NGS\020\213\001\022\033\n\026EGEC_GANGS_TITLE_OUTOF\020\214\001\022\035\n\030E"
    "GEC_ENTER_GATEWAY_FAILD\020\215\001\022\030\n\023EGEC_NO_SE"
    "RVER4ZONE\020\216\001\022\027\n\022EGEC_INVALID_SKILL\020\217\001\022\034\n"
    "\027EGEC_ENTER_GAME_SUCCESS\020\220\001\022\036\n\031EGEC_CREA"
    "TE_GUILD_SUCCESS\020\310\001\022\034\n\027EGEC_JOIN_GUILD_S"
    "UCCESS\020\311\001\022\035\n\030EGEC_LEAVE_GUILD_SUCCESS\020\312\001"
    "*\311,\n\nEGameMsgID\022\017\n\013EGMI_UNKNOW\020\000\022\025\n\021EGMI"
    "_EVENT_RESULT\020\001\022\030\n\024EGMI_EVENT_TRANSPOND\020"
    "\002\022\025\n\021EGMI_CLOSE_SOCKET\020\003\022\035\n\031EGMI_MTL_WOR"
    "LD_REGISTERED\020\n\022\037\n\033EGMI_MTL_WORLD_UNREGI"
    "STERED\020\013\022\032\n\026EGMI_MTL_WORLD_REFRESH\020\014\022\035\n\031"
    "EGMI_LTM_LOGIN_REGISTERED\020\024\022\037\n\033EGMI_LTM_"
    "LOGIN_UNREGISTERED\020\025\022\032\n\026EGMI_LTM_LOGIN_R"
    "EFRESH\020\026\022\036\n\032EGMI_PTWG_PROXY_REGISTERED\020\036"
    "\022 \n\034EGMI_PTWG_PROXY_UNREGISTERED\020\037\022\033\n\027EG"
    "MI_PTWG_PROXY_REFRESH\020 \022\034\n\030EGMI_GTW_GAME"
    "_REGISTERED\020(\022\036\n\032EGMI_GTW_GAME_UNREGISTE"
    "RED\020)\022\031\n\025EGMI_GTW_GAME_REFRESH\020*\022\025\n\021EGMI"
    "_STS_NET_INFO\0202\022\027\n\023EGMI_STS_HEART_BEAT\020d"
    "\022\022\n\016EGMI_REQ_LOGIN\020e\022\022\n\016EGMI_ACK_LOGIN\020f"
    "\022\023\n\017EGMI_REQ_LOGOUT\020g\022\027\n\023EGMI_REQ_WORLD_"
    "LIST\020n\022\027\n\023EGMI_ACK_WORLD_LIST\020o\022\032\n\026EGMI_"
    "REQ_CONNECT_WORLD\020p\022\032\n\026EGMI_ACK_CONNECT_"
    "WORLD\020q\022 \n\034EGMI_REQ_KICK_CLIENT_INWORLD\020"
    "r\022\030\n\024EGMI_REQ_CONNECT_KEY\020x\022\030\n\024EGMI_ACK_"
    "CONNECT_KEY\020z\022\033\n\026EGMI_REQ_SELECT_SERVER\020"
    "\202\001\022\033\n\026EGMI_ACK_SELECT_SERVER\020\203\001\022\027\n\022EGMI_"
    "REQ_ROLE_LIST\020\204\001\022\027\n\022EGMI_ACK_ROLE_LIST\020\205"
    "\001\022\031\n\024EGMI_REQ_CREATE_ROLE\020\206\001\022\031\n\024EGMI_REQ"
    "_DELETE_ROLE\020\207\001\022\032\n\025EGMI_REQ_RECOVER_ROLE"
    "\020\210\001\022\030\n\023EGMI_REQ_ENTER_GAME\020\226\001\022\030\n\023EGMI_AC"
    "K_ENTER_GAME\020\227\001\022\030\n\023EGMI_REQ_LEAVE_GAME\020\230"
    "\001\022\030\n\023EGMI_ACK_LEAVE_GAME\020\231\001\022\027\n\022EGMI_REQ_"
    "SWAP_GAME\020\232\001\022\030\n\023EGMI_REQ_SWAP_SCENE\020\233\001\022\030"
    "\n\023EGMI_ACK_SWAP_SCENE\020\234\001\022\030\n\023EGMI_REQ_END"
    "_BATTLE\020\235\001\022\030\n\023EGMI_ACK_END_BATTLE\020\236\001\022\032\n\025"
    "EGMI_ACK_OBJECT_ENTRY\020\310\001\022\032\n\025EGMI_ACK_OBJ"
    "ECT_LEAVE\020\311\001\022#\n\036EGMI_ACK_OBJECT_PROPERTY"
    "_ENTRY\020\312\001\022!\n\034EGMI_ACK_OBJECT_RECORD_ENTR"
    "Y\020\313\001\022\033\n\026EGMI_ACK_PROPERTY_DATA\020\322\001\022\025\n\020EGM"
    "I_ACK_ADD_ROW\020\334\001\022\030\n\023EGMI_ACK_REMOVE_ROW\020"
    "\335\001\022\026\n\021EGMI_ACK_SWAP_ROW\020\336\001\022\031\n\024EGMI_ACK_R"
    "ECORD_DATA\020\337\001\022\032\n\025EGMI_ACK_RECORD_CLEAR\020\345"
    "\001\022\031\n\024EGMI_ACK_RECORD_SORT\020\346\001\022\022\n\rEGMI_REQ"
    "_MOVE\020\353\001\022\022\n\rEGMI_ACK_MOVE\020\354\001\022\031\n\024EGMI_REQ"
    "_MOVE_IMMUNE\020\355\001\022\031\n\024EGMI_ACK_MOVE_IMMUNE\020"
    "\356\001\022\033\n\026EGMI_REQ_SKILL_OBJECTX\020\360\001\022\033\n\026EGMI_"
    "ACK_SKILL_OBJECTX\020\361\001\022\027\n\022EGMI_REQ_SKILL_P"
    "OS\020\362\001\022\027\n\022EGMI_ACK_SKILL_POS\020\363\001\022\031\n\024EGMI_R"
    "EQ_ITEM_OBJECT\020\364\001\022\031\n\024EGMI_ACK_ITEM_OBJEC"
    "T\020\365\001\022\026\n\021EGMI_REQ_ITEM_POS\020\366\001\022\026\n\021EGMI_ACK"
    "_ITEM_POS\020\367\001\022\022\n\rEGMI_REQ_CHAT\020\372\001\022\022\n\rEGMI"
    "_ACK_CHAT\020\373\001\022\027\n\022EGMI_REQ_SALE_ITEM\020\374\001\022\030\n"
    "\023EGMI_REQ_SPLIT_ITEM\020\375\001\022\032\n\025EGMI_REQ_PROD"
    "UCE_ITEM\020\376\001\022\027\n\022EGMI_REQ_PICK_ITEM\020\377\001\022\031\n\024"
    "EGMI_REQ_ACCEPT_TASK\020\200\002\022\034\n\027EGMI_REQ_COMP"
    "ELETE_TASK\020\201\002\022\026\n\021EGMI_REQ_JOIN_PVP\020\204\002\022\026\n"
    "\021EGMI_REQ_EXIT_PVP\020\205\002\022\027\n\022EGMT_ACK_START_"
    "PVP\020\206\002\022\034\n\027EGMI_REQ_SEARCH_OPPNENT\020\230\002\022\034\n\027"
    "EGMI_ACK_SEARCH_OPPNENT\020\231\002\022\033\n\026EGMT_REQ_S"
    "TART_OPPNENT\020\232\002\022\033\n\026EGMT_ACK_START_OPPNEN"
    "T\020\233\002\022\033\n\026EGMI_ACK_ONLINE_NOTIFY\020\242\002\022\034\n\027EGM"
    "I_ACK_OFFLINE_NOTIFY\020\243\002\022\032\n\025EGMI_REQ_CREA"
    "TE_GUILD\020\254\002\022\032\n\025EGMI_ACK_CREATE_GUILD\020\255\002\022"
    "\030\n\023EGMI_REQ_JOIN_GUILD\020\256\002\022\030\n\023EGMI_ACK_JO"
    "IN_GUILD\020\257\002\022\031\n\024EGMI_REQ_LEAVE_GUILD\020\260\002\022\031"
    "\n\024EGMI_ACK_LEAVE_GUILD\020\261\002\022\027\n\022EGMI_REQ_OP"
    "R_GUILD\020\262\002\022\027\n\022EGMI_ACK_OPR_GUILD\020\263\002\022\032\n\025E"
    "GMI_REQ_SEARCH_GUILD\020\264\002\022\032\n\025EGMI_ACK_SEAR"
    "CH_GUILD\020\265\002\022\033\n\026EGMI_REQ_OPR_GUILDINFO\020\266\002"
    "\022\033\n\026EGMI_ACK_OPR_GUILDINFO\020\267\002\022\035\n\030EGMI_RE"
    "Q_GUILDECTYPEINFO\020\270\002\022\035\n\030EGMI_ACK_GUILDEC"
    "TYPEINFO\020\271\002\022\035\n\030EGMI_SET_GUILDECTYPEINFO\020"
    "\272\002\022\035\n\030EGMI_ReqEnterGuildEctype\020\273\002\022\036\n\031EGE"
    "C_REQ_CREATE_CHATGROUP\020\220\003\022\036\n\031EGEC_ACK_CR"
    "EATE_CHATGROUP\020\221\003\022\034\n\027EGEC_REQ_JOIN_CHATG"
    "ROUP\020\222\003\022\034\n\027EGEC_ACK_JOIN_CHATGROUP\020\223\003\022\035\n"
    "\030EGEC_REQ_LEAVE_CHATGROUP\020\224\003\022\035\n\030EGEC_ACK"
    "_LEAVE_CHATGROUP\020\225\003\022$\n\037EGEC_REQ_SUBSCRIP"
    "TION_CHATGROUP\020\226\003\022*\n%EGEC_REQ_CANCELSUBS"
    "CRIPTION_CHATGROUP\020\227\003\022\036\n\031EGEC_REQ_INVITE"
    "_CHATGROUP\020\230\003\022\036\n\031EGEC_ACK_INVITE_CHATGRO"
    "UP\020\231\003\022\034\n\027EGEC_REQ_KICK_CHATGROUP\020\232\003\022\034\n\027E"
    "GEC_ACK_KICK_CHATGROUP\020\233\003\022\037\n\032EGEC_REQ_CH"
    "ATGROUP_TO_TEAM\020\302\003\022\037\n\032EGEC_ACK_CHATGROUP"
    "_TO_TEAM\020\303\003\022%\n EGEC_REQ_INTENSIFYLEVEL_T"
    "O_EQUIP\020\364\003\022%\n EGEC_ACK_INTENSIFYLEVEL_TO"
    "_EQUIP\020\365\003\022\033\n\026EGEC_REQ_HOLE_TO_EQUIP\020\366\003\022\033"
    "\n\026EGEC_ACK_HOLE_TO_EQUIP\020\367\003\022!\n\034EGEC_REQ_"
    "INLAYSTONE_TO_EQUIP\020\370\003\022!\n\034EGEC_ACK_INLAY"
    "STONE_TO_EQUIP\020\371\003\022#\n\036EGEC_REQ_ELEMENTLEV"
    "EL_TO_EQUIP\020\372\003\022#\n\036EGEC_ACK_ELEMENTLEVEL_"
    "TO_EQUIP\020\373\003\022\034\n\027EGEC_REQ_SET_FIGHT_HERO\020\374"
    "\003\022\024\n\017EGEC_WEAR_EQUIP\020\375\003\022\027\n\022EGEC_TAKEOFF_"
    "EQUIP\020\376\003\022\032\n\025EGEC_REQ_MINING_TITLE\020\330\004\022\027\n\022"
    "EGEC_REQ_SEND_MAIL\020\274\005\022\027\n\022EGEC_REQ_DRAW_M"
    "AIL\020\275\005\022\031\n\024EGEC_REQ_DELETE_MAIL\020\276\005\022 \n\033EGM"
    "I_ACK_CLONE_OBJECT_ENTRY\020\240\006\022 \n\033EGMI_ACK_"
    "CLONE_OBJECT_LEAVE\020\241\006\022)\n$EGMI_ACK_CLONE_"
    "OBJECT_PROPERTY_ENTRY\020\242\006\022\'\n\"EGMI_ACK_CLO"
    "NE_OBJECT_RECORD_ENTRY\020\243\006\022 \n\033EGMI_ACK_CL"
    "ONE_PROPERTY_INT\020\252\006\022\"\n\035EGMI_ACK_CLONE_PR"
    "OPERTY_FLOAT\020\253\006\022#\n\036EGMI_ACK_CLONE_PROPER"
    "TY_STRING\020\254\006\022#\n\036EGMI_ACK_CLONE_PROPERTY_"
    "DOUBLE\020\255\006\022#\n\036EGMI_ACK_CLONE_PROPERTY_OBJ"
    "ECT\020\256\006\022\033\n\026EGMI_ACK_CLONE_ADD_ROW\020\264\006\022\036\n\031E"
    "GMI_ACK_CLONE_REMOVE_ROW\020\265\006\022\034\n\027EGMI_ACK_"
    "CLONE_SWAP_ROW\020\266\006\022\036\n\031EGMI_ACK_CLONE_RECO"
    "RD_INT\020\267\006\022 \n\033EGMI_ACK_CLONE_RECORD_FLOAT"
    "\020\270\006\022!\n\034EGMI_ACK_CLONE_RECORD_DOUBLE\020\271\006\022!"
    "\n\034EGMI_ACK_CLONE_RECORD_STRING\020\272\006\022!\n\034EGM"
    "I_ACK_CLONE_RECORD_OBJECT\020\273\006\022 \n\033EGMI_ACK"
    "_CLONE_RECORD_CLEAR\020\274\006\022\037\n\032EGMI_ACK_CLONE"
    "_RECORD_SORT\020\275\006\022\030\n\023EGMI_REQSWICHSERVER\020\310"
    "\006\022\030\n\023EGMI_ACKSWICHSERVER\020\311\006\022\031\n\024EGMI_REQ_"
    "CREATE_TEAM\020\334\006\022\031\n\024EGMI_ACK_CREATE_TEAM\020\335"
    "\006\022\027\n\022EGMI_REQ_JOIN_TEAM\020\336\006\022\027\n\022EGMI_ACK_J"
    "OIN_TEAM\020\337\006\022\030\n\023EGMI_REQ_LEAVE_TEAM\020\340\006\022\030\n"
    "\023EGMI_ACK_LEAVE_TEAM\020\341\006\022\031\n\024EGMI_REQ_INVI"
    "TE_TEAM\020\342\006\022\034\n\027EGMI_REQ_OPRMEMBER_TEAM\020\343\006"
    "\022\034\n\027EGMI_ACK_OPRMEMBER_TEAM\020\344\006\022\037\n\032EGMI_R"
    "EQ_TEAM_ENTER_ECTYPE\020\345\006\022\037\n\032EGMI_ACK_TEAM"
    "_ENTER_ECTYPE\020\346\006\022\033\n\026EGMI_REQ_MAP_GRID_IN"
    "FO\020\204\007\022\033\n\026EGMI_ACK_MAP_GRID_INFO\020\205\007\022\032\n\025EG"
    "MI_REQ_BIG_MAP_INFO\020\206\007\022\032\n\025EGMI_ACK_BIG_M"
    "AP_INFO\020\207\007\022\033\n\026EGMI_REQ_HOLD_MAP_GRID\020\216\007\022"
    "\033\n\026EGMI_ACK_HOLD_MAP_GRID\020\217\007\022 \n\033EGMI_REQ"
    "_LEAVE_MSG_MAP_GRID\020\220\007\022 \n\033EGMI_ACK_LEAVE"
    "_MSG_MAP_GRID\020\221\007\022 \n\033EGMI_REQ_GET_MAP_GRI"
    "D_AWARD\020\222\007\022 \n\033EGMI_ACK_GET_MAP_GRID_AWAR"
    "D\020\223\007\022\036\n\031EGMI_REQ_MAP_GRID_HUNTING\020\224\007\022\036\n\031"
    "EGMI_ACK_MAP_GRID_HUNTING\020\225\007\022\037\n\032EGMI_REQ"
    "_MAP_GRID_KING_WAR\020\226\007\022\037\n\032EGMI_ACK_MAP_GR"
    "ID_KING_WAR\020\227\007\022\036\n\031EGMI_REQ_CMD_PROPERTY_"
    "INT\020\350\007\022\036\n\031EGMI_REQ_CMD_PROPERTY_STR\020\351\007\022!"
    "\n\034EGMI_REQ_CMD_PROPERTY_OBJECT\020\352\007\022 \n\033EGM"
    "I_REQ_CMD_PROPERTY_FLOAT\020\353\007\022\034\n\027EGMI_REQ_"
    "CMD_RECORD_INT\020\354\007\022\034\n\027EGMI_REQ_CMD_RECORD"
    "_STR\020\355\007\022\037\n\032EGMI_REQ_CMD_RECORD_OBJECT\020\356\007"
    "\022\036\n\031EGMI_REQ_CMD_RECORD_FLOAT\020\357\007\022\030\n\023EGMI"
    "_REQ_CMD_NORMAL\020\360\007\022\034\n\027EGMI_REQ_PVPAPPLYM"
    "ACTCH\020\314\010\022\034\n\027EGMI_ACK_PVPAPPLYMACTCH\020\315\010\022\035"
    "\n\030EGMI_REQ_CREATEPVPECTYPE\020\316\010\022\035\n\030EGMI_AC"
    "K_CREATEPVPECTYPE\020\317\010\022\033\n\026EGMI_REQ_BUY_FOR"
    "M_SHOP\020\220N\022\033\n\026EGMI_ACK_BUY_FORM_SHOP\020\221N\022\037"
    "\n\032EGMI_REQ_MOVE_BUILD_OBJECT\020\222N\022\037\n\032EGMI_"
    "ACK_MOVE_BUILD_OBJECT\020\223N\022\032\n\025EGMI_REQ_UP_"
    "BUILD_LVL\020\365N\022\031\n\024EGMI_REQ_CREATE_ITEM\020\366N\022"
    "\033\n\026EGMI_REQ_BUILD_OPERATE\020\367N*R\n\tEItemTyp"
    "e\022\r\n\tEIT_EQUIP\020\000\022\013\n\007EIT_GEM\020\001\022\014\n\010EIT_ITE"
    "M\020\002\022\014\n\010EIT_CARD\020\003\022\r\n\tEIT_TOKEN\020\004*\221\001\n\021EGa"
    "meEquipSubType\022\024\n\020EQUIPTYPE_WEAPON\020\000\022\024\n\020"
    "EQUIPTYPE_HELMET\020\001\022\023\n\017EQUIPTYPE_ARMOR\020\002\022"
    "\023\n\017EQUIPTYPE_WRIST\020\003\022\022\n\016EQUIPTYPE_PANT\020\004"
    "\022\022\n\016EQUIPTYPE_BOOT\020\005*\262\001\n\017EGameGemSubType"
    "\022\024\n\020EGGSTYPE_GEM_ATK\020\000\022\024\n\020EGGSTYPE_GEM_D"
    "EF\020\001\022\025\n\021EGGSTYPE_GEM_FIRE\020\003\022\026\n\022EGGSTYPE_"
    "GEM_LIGHT\020\004\022\025\n\021EGGSTYPE_GEM_WIND\020\005\022\024\n\020EG"
    "GSTYPE_GEM_ICE\020\006\022\027\n\023EGGSTYPE_GEM_POISON\020"
    "\007*\263\001\n\020EGameItemSubType\022\023\n\017EGIT_ITEM_WATE"
    "R\020\000\022\025\n\021EGIT_ITEM_DIAMOND\020\001\022\026\n\022EGIT_ITEM_"
    "CURRENCY\020\002\022\021\n\rEGIT_ITEM_EXP\020\003\022\020\n\014EGIT_IT"
    "EM_HP\020\004\022\020\n\014EGIT_ITEM_MP\020\005\022\020\n\014EGIT_ITEM_S"
    "P\020\006\022\022\n\016EGIT_ITEM_PACK\020\007*Q\n\020EGameCardSubT"
    "ype\022\022\n\016EGCST_STRENGTH\020\001\022\021\n\rEGCST_AGILITY"
    "\020\002\022\026\n\022EGCST_INTELLIGENCE\020\003*w\n\021EGameToken"
    "SubType\022\026\n\022EGTST_TOKEN_REBORN\020\000\022\030\n\024EGTST"
    "_TOKEN_POSITION\020\001\022\026\n\022EGTST_TOKEN_BOUNTY\020"
    "\002\022\030\n\024EGTST_TOKEN_ACTIVITY\020\003*e\n\024EGameItem"
    "ExpiredType\022\016\n\nEGIET_NONE\020\000\022\023\n\017EGIET_USE"
    "_TIMES\020\001\022\023\n\017EGIET_REAL_TIME\020\002\022\023\n\017EGIET_E"
    "ND_INDEX\020\003*Y\n\022EDrawDropItemState\022\025\n\021E_DR"
    "AW_STATE_NONE\020\000\022\025\n\021E_DRAW_STATE_GAIN\020\001\022\025"
    "\n\021E_DRAW_STATE_RECV\020\002*s\n\017EGuildPowerType"
    "\022\033\n\027GUILD_POWER_TYPE_NORMAL\020\000\022#\n\037GUILD_P"
    "OWER_TYPE_VICE_PRESIDENT\020\001\022\036\n\032GUILD_POWE"
    "R_TYPE_PRESIDENT\020\002*V\n\nETaskState\022\023\n\017TASK"
    "_IN_PROCESS\020\000\022\r\n\tTASK_DONE\020\001\022\023\n\017TASK_DRA"
    "W_AWARD\020\002\022\017\n\013TASK_FINISH\020\003*\251\002\n\tETaskType"
    "\022 \n\034TASK_LEVEL_UPDATE_SOME_LEVEL\020\000\022\024\n\020TA"
    "SK_PASS_ECTYPE\020\001\022\032\n\026TASK_PASS_ECTYPE_COU"
    "NT\020\002\022$\n TASK_PASS_SOME_TYPE_ECTYPE_COUNT"
    "\020\003\022\033\n\027TASK_UPDATE_SKILL_COUNT\020\004\022\026\n\022TASK_"
    "CONSUME_MONEY\020\005\022\030\n\024TASK_CONSUME_DIAMOND\020"
    "\006\022\024\n\020TASK_ARENA_COUNT\020\007\022\033\n\027TASK_KILL_MON"
    "STER_COUNT\020\010\022 \n\034TASK_KILL_SOME_MONSTER_C"
    "OUNT\020\t*5\n\013EBattleType\022\021\n\rBATTLE_SINGLE\020\000"
    "\022\023\n\017BATTLE_PVE_TEAM\020\001*\201\001\n\tEShopType\022\020\n\014E"
    "ST_BUILDING\020\001\022\014\n\010EST_GOLD\020\002\022\017\n\013EST_DIAMO"
    "ND\020\003\022\n\n\006EST_SP\020\004\022\r\n\tEST_EQUIP\020\005\022\013\n\007EST_G"
    "EM\020\006\022\014\n\010EST_Hero\020\007\022\r\n\tEST_Other\020\010*{\n\tERa"
    "nkType\022\024\n\020ERT_PLAYER_LEVEL\020\001\022\023\n\017ERT_FIGH"
    "T_VALUE\020\002\022\024\n\020ERT_PLAYER_MONEY\020\003\022\023\n\017ERT_G"
    "UILD_LEVEL\020\004\022\030\n\024ERT_GUILD_KINGSOURCE\020\005*G"
    "\n\010ENPCType\022\023\n\017ENPCTYPE_NORMAL\020\000\022\021\n\rENPCT"
    "YPE_HERO\020\001\022\023\n\017ENPCTYPE_TURRET\020\002*H\n\rEProp"
    "ertyType\022\020\n\014EPT_STRENGTH\020\001\022\017\n\013EPT_AGILIT"
    "Y\020\002\022\024\n\020EPT_INTELLIGENCE\020\003*\207\001\n\020EGameEleme"
    "ntType\022\025\n\021EELEMENTTYPE_FIRE\020\000\022\026\n\022EELEMEN"
    "TTYPE_LIGHT\020\001\022\025\n\021EELEMENTTYPE_WIND\020\002\022\024\n\020"
    "EELEMENTTYPE_ICE\020\003\022\027\n\023EELEMENTTYPE_POISO"
    "N\020\004", 9163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AFDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AFDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AFDefine_2eproto {
  StaticDescriptorInitializer_AFDefine_2eproto() {
    protobuf_AddDesc_AFDefine_2eproto();
  }
} static_descriptor_initializer_AFDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEventCode_descriptor_;
}
bool EGameEventCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 200:
    case 201:
    case 202:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameMsgID_descriptor_;
}
bool EGameMsgID_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 20:
    case 21:
    case 22:
    case 30:
    case 31:
    case 32:
    case 40:
    case 41:
    case 42:
    case 50:
    case 100:
    case 101:
    case 102:
    case 103:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 120:
    case 122:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 200:
    case 201:
    case 202:
    case 203:
    case 210:
    case 220:
    case 221:
    case 222:
    case 223:
    case 229:
    case 230:
    case 235:
    case 236:
    case 237:
    case 238:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
    case 257:
    case 260:
    case 261:
    case 262:
    case 280:
    case 281:
    case 282:
    case 283:
    case 290:
    case 291:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 400:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 407:
    case 408:
    case 409:
    case 410:
    case 411:
    case 450:
    case 451:
    case 500:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 507:
    case 508:
    case 509:
    case 510:
    case 600:
    case 700:
    case 701:
    case 702:
    case 800:
    case 801:
    case 802:
    case 803:
    case 810:
    case 811:
    case 812:
    case 813:
    case 814:
    case 820:
    case 821:
    case 822:
    case 823:
    case 824:
    case 825:
    case 826:
    case 827:
    case 828:
    case 829:
    case 840:
    case 841:
    case 860:
    case 861:
    case 862:
    case 863:
    case 864:
    case 865:
    case 866:
    case 867:
    case 868:
    case 869:
    case 870:
    case 900:
    case 901:
    case 902:
    case 903:
    case 910:
    case 911:
    case 912:
    case 913:
    case 914:
    case 915:
    case 916:
    case 917:
    case 918:
    case 919:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1100:
    case 1101:
    case 1102:
    case 1103:
    case 10000:
    case 10001:
    case 10002:
    case 10003:
    case 10101:
    case 10102:
    case 10103:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EItemType_descriptor_;
}
bool EItemType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEquipSubType_descriptor_;
}
bool EGameEquipSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameGemSubType_descriptor_;
}
bool EGameGemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemSubType_descriptor_;
}
bool EGameItemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameCardSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameCardSubType_descriptor_;
}
bool EGameCardSubType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameTokenSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameTokenSubType_descriptor_;
}
bool EGameTokenSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemExpiredType_descriptor_;
}
bool EGameItemExpiredType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EDrawDropItemState_descriptor_;
}
bool EDrawDropItemState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGuildPowerType_descriptor_;
}
bool EGuildPowerType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskState_descriptor_;
}
bool ETaskState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskType_descriptor_;
}
bool ETaskType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBattleType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EBattleType_descriptor_;
}
bool EBattleType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EShopType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EShopType_descriptor_;
}
bool EShopType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ERankType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ERankType_descriptor_;
}
bool ERankType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ENPCType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ENPCType_descriptor_;
}
bool ENPCType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EPropertyType_descriptor_;
}
bool EPropertyType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameElementType_descriptor_;
}
bool EGameElementType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace AFMsg

// @@protoc_insertion_point(global_scope)
