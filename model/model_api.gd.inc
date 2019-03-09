const ApiAccount = ['user', 'wallet', 'email', 'devices', 'custom_id', 'verify_time']
@define __ApiAccount__body user, wallet, email, devices, custom_id, verify_time
@define __ApiAccount__array user, wallet, email, devices, custom_id, verify_time
@define __ApiAccount__dict user=user, wallet=wallet, email=email, devices=devices, custom_id=custom_id, verify_time=verify_time
const ApiAccountCustom = ['id']
@define __ApiAccountCustom__body id
@define __ApiAccountCustom__array id
@define __ApiAccountCustom__dict id=id
const ApiAccountDevice = ['id']
@define __ApiAccountDevice__body id
@define __ApiAccountDevice__array id
@define __ApiAccountDevice__dict id=id
const ApiAccountEmail = ['email', 'password']
@define __ApiAccountEmail__body email, password
@define __ApiAccountEmail__array email, password
@define __ApiAccountEmail__dict email=email, password=password
const ApiAccountFacebook = ['token']
@define __ApiAccountFacebook__body token
@define __ApiAccountFacebook__array token
@define __ApiAccountFacebook__dict token=token
const ApiAccountGameCenter = ['player_id', 'bundle_id', 'timestamp_seconds', 'salt', 'signature', 'public_key_url']
@define __ApiAccountGameCenter__body player_id, bundle_id, timestamp_seconds, salt, signature, public_key_url
@define __ApiAccountGameCenter__array player_id, bundle_id, timestamp_seconds, salt, signature, public_key_url
@define __ApiAccountGameCenter__dict player_id=player_id, bundle_id=bundle_id, timestamp_seconds=timestamp_seconds, salt=salt, signature=signature, public_key_url=public_key_url
const ApiAccountGoogle = ['token']
@define __ApiAccountGoogle__body token
@define __ApiAccountGoogle__array token
@define __ApiAccountGoogle__dict token=token
const ApiAccountSteam = ['token']
@define __ApiAccountSteam__body token
@define __ApiAccountSteam__array token
@define __ApiAccountSteam__dict token=token
const ApiChannelMessage = ['channel_id', 'message_id', 'code', 'sender_id', 'username', 'content', 'create_time', 'update_time', 'persistent']
@define __ApiChannelMessage__body channel_id, message_id, code, sender_id, username, content, create_time, update_time, persistent
@define __ApiChannelMessage__array channel_id, message_id, code, sender_id, username, content, create_time, update_time, persistent
@define __ApiChannelMessage__dict channel_id=channel_id, message_id=message_id, code=code, sender_id=sender_id, username=username, content=content, create_time=create_time, update_time=update_time, persistent=persistent
const ApiChannelMessageList = ['messages', 'next_cursor', 'prev_cursor']
@define __ApiChannelMessageList__body messages, next_cursor, prev_cursor
@define __ApiChannelMessageList__array messages, next_cursor, prev_cursor
@define __ApiChannelMessageList__dict messages=messages, next_cursor=next_cursor, prev_cursor=prev_cursor
const ApiCreateGroupRequest = ['name', 'description', 'lang_tag', 'avatar_url', 'open']
@define __ApiCreateGroupRequest__body name, description, lang_tag, avatar_url, open
@define __ApiCreateGroupRequest__array name, description, lang_tag, avatar_url, open
@define __ApiCreateGroupRequest__dict name=name, description=description, lang_tag=lang_tag, avatar_url=avatar_url, open=open
const ApiDeleteStorageObjectId = ['collection', 'key', 'version']
@define __ApiDeleteStorageObjectId__body collection, key, version
@define __ApiDeleteStorageObjectId__array collection, key, version
@define __ApiDeleteStorageObjectId__dict collection=collection, key=key, version=version
const ApiDeleteStorageObjectsRequest = ['object_ids']
@define __ApiDeleteStorageObjectsRequest__body object_ids
@define __ApiDeleteStorageObjectsRequest__array object_ids
@define __ApiDeleteStorageObjectsRequest__dict object_ids=object_ids
const ApiFriend = ['user', 'state']
@define __ApiFriend__body user, state
@define __ApiFriend__array user, state
@define __ApiFriend__dict user=user, state=state
const ApiFriends = ['friends']
@define __ApiFriends__body friends
@define __ApiFriends__array friends
@define __ApiFriends__dict friends=friends
const ApiGroup = ['id', 'creator_id', 'name', 'description', 'lang_tag', 'metadata', 'avatar_url', 'open', 'edge_count', 'max_count', 'create_time', 'update_time']
@define __ApiGroup__body id, creator_id, name, description, lang_tag, metadata, avatar_url, open, edge_count, max_count, create_time, update_time
@define __ApiGroup__array id, creator_id, name, description, lang_tag, metadata, avatar_url, open, edge_count, max_count, create_time, update_time
@define __ApiGroup__dict id=id, creator_id=creator_id, name=name, description=description, lang_tag=lang_tag, metadata=metadata, avatar_url=avatar_url, open=open, edge_count=edge_count, max_count=max_count, create_time=create_time, update_time=update_time
const ApiGroupList = ['groups', '_cursor']
@define __ApiGroupList__body groups, _cursor
@define __ApiGroupList__array groups, _cursor
@define __ApiGroupList__dict groups=groups, _cursor=_cursor
const ApiGroupUserList = ['group_users']
@define __ApiGroupUserList__body group_users
@define __ApiGroupUserList__array group_users
@define __ApiGroupUserList__dict group_users=group_users
const ApiLeaderboardRecord = ['leaderboard_id', 'owner_id', 'username', 'score', 'subscore', 'num_score', 'metadata', 'create_time', 'update_time', 'expiry_time', 'rank', 'max_num_score']
@define __ApiLeaderboardRecord__body leaderboard_id, owner_id, username, score, subscore, num_score, metadata, create_time, update_time, expiry_time, rank, max_num_score
@define __ApiLeaderboardRecord__array leaderboard_id, owner_id, username, score, subscore, num_score, metadata, create_time, update_time, expiry_time, rank, max_num_score
@define __ApiLeaderboardRecord__dict leaderboard_id=leaderboard_id, owner_id=owner_id, username=username, score=score, subscore=subscore, num_score=num_score, metadata=metadata, create_time=create_time, update_time=update_time, expiry_time=expiry_time, rank=rank, max_num_score=max_num_score
const ApiLeaderboardRecordList = ['records', 'owner_records', 'next_cursor', 'prev_cursor']
@define __ApiLeaderboardRecordList__body records, owner_records, next_cursor, prev_cursor
@define __ApiLeaderboardRecordList__array records, owner_records, next_cursor, prev_cursor
@define __ApiLeaderboardRecordList__dict records=records, owner_records=owner_records, next_cursor=next_cursor, prev_cursor=prev_cursor
const ApiMatch = ['match_id', 'authoritative', 'label', 'size']
@define __ApiMatch__body match_id, authoritative, label, size
@define __ApiMatch__array match_id, authoritative, label, size
@define __ApiMatch__dict match_id=match_id, authoritative=authoritative, label=label, size=size
const ApiMatchList = ['matches']
@define __ApiMatchList__body matches
@define __ApiMatchList__array matches
@define __ApiMatchList__dict matches=matches
const ApiNotification = ['id', 'subject', 'content', 'code', 'sender_id', 'create_time', 'persistent']
@define __ApiNotification__body id, subject, content, code, sender_id, create_time, persistent
@define __ApiNotification__array id, subject, content, code, sender_id, create_time, persistent
@define __ApiNotification__dict id=id, subject=subject, content=content, code=code, sender_id=sender_id, create_time=create_time, persistent=persistent
const ApiNotificationList = ['notifications', 'cacheable_cursor']
@define __ApiNotificationList__body notifications, cacheable_cursor
@define __ApiNotificationList__array notifications, cacheable_cursor
@define __ApiNotificationList__dict notifications=notifications, cacheable_cursor=cacheable_cursor
const ApiReadStorageObjectId = ['collection', 'key', 'user_id']
@define __ApiReadStorageObjectId__body collection, key, user_id
@define __ApiReadStorageObjectId__array collection, key, user_id
@define __ApiReadStorageObjectId__dict collection=collection, key=key, user_id=user_id
const ApiReadStorageObjectsRequest = ['object_ids']
@define __ApiReadStorageObjectsRequest__body object_ids
@define __ApiReadStorageObjectsRequest__array object_ids
@define __ApiReadStorageObjectsRequest__dict object_ids=object_ids
const ApiRpc = ['id', 'payload', 'http_key']
@define __ApiRpc__body id, payload, http_key
@define __ApiRpc__array id, payload, http_key
@define __ApiRpc__dict id=id, payload=payload, http_key=http_key
const ApiSession = ['created', 'token', 'udp_token']
@define __ApiSession__body created, token, udp_token
@define __ApiSession__array created, token, udp_token
@define __ApiSession__dict created=created, token=token, udp_token=udp_token
const ApiStorageObject = ['collection', 'key', 'user_id', 'value', 'version', 'permission_read', 'permission_write', 'create_time', 'update_time']
@define __ApiStorageObject__body collection, key, user_id, value, version, permission_read, permission_write, create_time, update_time
@define __ApiStorageObject__array collection, key, user_id, value, version, permission_read, permission_write, create_time, update_time
@define __ApiStorageObject__dict collection=collection, key=key, user_id=user_id, value=value, version=version, permission_read=permission_read, permission_write=permission_write, create_time=create_time, update_time=update_time
const ApiStorageObjectAck = ['collection', 'key', 'version', 'user_id']
@define __ApiStorageObjectAck__body collection, key, version, user_id
@define __ApiStorageObjectAck__array collection, key, version, user_id
@define __ApiStorageObjectAck__dict collection=collection, key=key, version=version, user_id=user_id
const ApiStorageObjectAcks = ['acks']
@define __ApiStorageObjectAcks__body acks
@define __ApiStorageObjectAcks__array acks
@define __ApiStorageObjectAcks__dict acks=acks
const ApiStorageObjectList = ['objects', '_cursor']
@define __ApiStorageObjectList__body objects, _cursor
@define __ApiStorageObjectList__array objects, _cursor
@define __ApiStorageObjectList__dict objects=objects, _cursor=_cursor
const ApiStorageObjects = ['objects']
@define __ApiStorageObjects__body objects
@define __ApiStorageObjects__array objects
@define __ApiStorageObjects__dict objects=objects
const ApiTournament = ['id', 'title', 'description', 'category', 'sort_order', 'size', 'max_size', 'max_num_score', 'can_enter', 'end_active', 'next_reset', 'metadata', 'create_time', 'start_time', 'end_time', 'duration']
@define __ApiTournament__body id, title, description, category, sort_order, size, max_size, max_num_score, can_enter, end_active, next_reset, metadata, create_time, start_time, end_time, duration
@define __ApiTournament__array id, title, description, category, sort_order, size, max_size, max_num_score, can_enter, end_active, next_reset, metadata, create_time, start_time, end_time, duration
@define __ApiTournament__dict id=id, title=title, description=description, category=category, sort_order=sort_order, size=size, max_size=max_size, max_num_score=max_num_score, can_enter=can_enter, end_active=end_active, next_reset=next_reset, metadata=metadata, create_time=create_time, start_time=start_time, end_time=end_time, duration=duration
const ApiTournamentList = ['tournaments', '_cursor']
@define __ApiTournamentList__body tournaments, _cursor
@define __ApiTournamentList__array tournaments, _cursor
@define __ApiTournamentList__dict tournaments=tournaments, _cursor=_cursor
const ApiTournamentRecordList = ['records', 'owner_records', 'next_cursor', 'prev_cursor']
@define __ApiTournamentRecordList__body records, owner_records, next_cursor, prev_cursor
@define __ApiTournamentRecordList__array records, owner_records, next_cursor, prev_cursor
@define __ApiTournamentRecordList__dict records=records, owner_records=owner_records, next_cursor=next_cursor, prev_cursor=prev_cursor
const ApiUpdateAccountRequest = ['username', 'display_name', 'avatar_url', 'lang_tag', 'location', 'timezone']
@define __ApiUpdateAccountRequest__body username, display_name, avatar_url, lang_tag, location, timezone
@define __ApiUpdateAccountRequest__array username, display_name, avatar_url, lang_tag, location, timezone
@define __ApiUpdateAccountRequest__dict username=username, display_name=display_name, avatar_url=avatar_url, lang_tag=lang_tag, location=location, timezone=timezone
const ApiUpdateGroupRequest = ['group_id', 'name', 'description', 'lang_tag', 'avatar_url', 'open']
@define __ApiUpdateGroupRequest__body group_id, name, description, lang_tag, avatar_url, open
@define __ApiUpdateGroupRequest__array group_id, name, description, lang_tag, avatar_url, open
@define __ApiUpdateGroupRequest__dict group_id=group_id, name=name, description=description, lang_tag=lang_tag, avatar_url=avatar_url, open=open
const ApiUser = ['id', 'username', 'display_name', 'avatar_url', 'lang_tag', 'location', 'timezone', 'metadata', 'facebook_id', 'google_id', 'gamecenter_id', 'steam_id', 'online', 'edge_count', 'create_time', 'update_time']
@define __ApiUser__body id, username, display_name, avatar_url, lang_tag, location, timezone, metadata, facebook_id, google_id, gamecenter_id, steam_id, online, edge_count, create_time, update_time
@define __ApiUser__array id, username, display_name, avatar_url, lang_tag, location, timezone, metadata, facebook_id, google_id, gamecenter_id, steam_id, online, edge_count, create_time, update_time
@define __ApiUser__dict id=id, username=username, display_name=display_name, avatar_url=avatar_url, lang_tag=lang_tag, location=location, timezone=timezone, metadata=metadata, facebook_id=facebook_id, google_id=google_id, gamecenter_id=gamecenter_id, steam_id=steam_id, online=online, edge_count=edge_count, create_time=create_time, update_time=update_time
const ApiUserGroupList = ['user_groups']
@define __ApiUserGroupList__body user_groups
@define __ApiUserGroupList__array user_groups
@define __ApiUserGroupList__dict user_groups=user_groups
const ApiUsers = ['users']
@define __ApiUsers__body users
@define __ApiUsers__array users
@define __ApiUsers__dict users=users
const ApiWriteStorageObject = ['collection', 'key', 'value', 'version', 'permission_read', 'permission_write']
@define __ApiWriteStorageObject__body collection, key, value, version, permission_read, permission_write
@define __ApiWriteStorageObject__array collection, key, value, version, permission_read, permission_write
@define __ApiWriteStorageObject__dict collection=collection, key=key, value=value, version=version, permission_read=permission_read, permission_write=permission_write
const ApiWriteStorageObjectsRequest = ['objects']
@define __ApiWriteStorageObjectsRequest__body objects
@define __ApiWriteStorageObjectsRequest__array objects
@define __ApiWriteStorageObjectsRequest__dict objects=objects
const GroupUserListGroupUser = ['user', 'state']
@define __GroupUserListGroupUser__body user, state
@define __GroupUserListGroupUser__array user, state
@define __GroupUserListGroupUser__dict user=user, state=state
const ProtobufEmpty = []
@define __ProtobufEmpty__body 
@define __ProtobufEmpty__array 
@define __ProtobufEmpty__dict 
const UserGroupListUserGroup = ['group', 'state']
@define __UserGroupListUserGroup__body group, state
@define __UserGroupListUserGroup__array group, state
@define __UserGroupListUserGroup__dict group=group, state=state
const WriteLeaderboardRecordRequestLeaderboardRecordWrite = ['score', 'subscore', 'metadata']
@define __WriteLeaderboardRecordRequestLeaderboardRecordWrite__body score, subscore, metadata
@define __WriteLeaderboardRecordRequestLeaderboardRecordWrite__array score, subscore, metadata
@define __WriteLeaderboardRecordRequestLeaderboardRecordWrite__dict score=score, subscore=subscore, metadata=metadata
const WriteTournamentRecordRequestTournamentRecordWrite = ['score', 'subscore', 'metadata']
@define __WriteTournamentRecordRequestTournamentRecordWrite__body score, subscore, metadata
@define __WriteTournamentRecordRequestTournamentRecordWrite__array score, subscore, metadata
@define __WriteTournamentRecordRequestTournamentRecordWrite__dict score=score, subscore=subscore, metadata=metadata
