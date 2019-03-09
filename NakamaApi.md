# swgclient.NakamaApi

All URIs are relative to *http://127.0.0.1:7350*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_friends**](NakamaApi.md#add_friends) | **POST** /v2/friend | Add friends by ID or username to a user&#39;s account.
[**add_group_users**](NakamaApi.md#add_group_users) | **POST** /v2/group/{group_id}/add | Add users to a group.
[**authenticate_custom**](NakamaApi.md#authenticate_custom) | **POST** /v2/account/authenticate/custom | Authenticate a user with a custom id against the server.
[**authenticate_device**](NakamaApi.md#authenticate_device) | **POST** /v2/account/authenticate/device | Authenticate a user with a device id against the server.
[**authenticate_email**](NakamaApi.md#authenticate_email) | **POST** /v2/account/authenticate/email | Authenticate a user with an email+password against the server.
[**authenticate_facebook**](NakamaApi.md#authenticate_facebook) | **POST** /v2/account/authenticate/facebook | Authenticate a user with a Facebook OAuth token against the server.
[**authenticate_game_center**](NakamaApi.md#authenticate_game_center) | **POST** /v2/account/authenticate/gamecenter | Authenticate a user with Apple&#39;s GameCenter against the server.
[**authenticate_google**](NakamaApi.md#authenticate_google) | **POST** /v2/account/authenticate/google | Authenticate a user with Google against the server.
[**authenticate_steam**](NakamaApi.md#authenticate_steam) | **POST** /v2/account/authenticate/steam | Authenticate a user with Steam against the server.
[**block_friends**](NakamaApi.md#block_friends) | **POST** /v2/friend/block | Block one or more users by ID or username.
[**create_group**](NakamaApi.md#create_group) | **POST** /v2/group | Create a new group with the current user as the owner.
[**delete_friends**](NakamaApi.md#delete_friends) | **DELETE** /v2/friend | Delete one or more users by ID or username.
[**delete_group**](NakamaApi.md#delete_group) | **DELETE** /v2/group/{group_id} | Delete a group by ID.
[**delete_leaderboard_record**](NakamaApi.md#delete_leaderboard_record) | **DELETE** /v2/leaderboard/{leaderboard_id} | Delete a leaderboard record.
[**delete_notifications**](NakamaApi.md#delete_notifications) | **DELETE** /v2/notification | Delete one or more notifications for the current user.
[**delete_storage_objects**](NakamaApi.md#delete_storage_objects) | **PUT** /v2/storage/delete | Delete one or more objects by ID or username.
[**get_account**](NakamaApi.md#get_account) | **GET** /v2/account | Fetch the current user&#39;s account.
[**get_users**](NakamaApi.md#get_users) | **GET** /v2/user | Fetch zero or more users by ID and/or username.
[**healthcheck**](NakamaApi.md#healthcheck) | **GET** /healthcheck | A healthcheck which load balancers can use to check the service.
[**import_facebook_friends**](NakamaApi.md#import_facebook_friends) | **POST** /v2/friend/facebook | Import Facebook friends and add them to a user&#39;s account.
[**join_group**](NakamaApi.md#join_group) | **POST** /v2/group/{group_id}/join | Immediately join an open group, or request to join a closed one.
[**join_tournament**](NakamaApi.md#join_tournament) | **POST** /v2/tournament/{tournament_id}/join | Attempt to join an open and running tournament.
[**kick_group_users**](NakamaApi.md#kick_group_users) | **POST** /v2/group/{group_id}/kick | Kick a set of users from a group.
[**leave_group**](NakamaApi.md#leave_group) | **POST** /v2/group/{group_id}/leave | Leave a group the user is a member of.
[**link_custom**](NakamaApi.md#link_custom) | **POST** /v2/account/link/custom | Add a custom ID to the social profiles on the current user&#39;s account.
[**link_device**](NakamaApi.md#link_device) | **POST** /v2/account/link/device | Add a device ID to the social profiles on the current user&#39;s account.
[**link_email**](NakamaApi.md#link_email) | **POST** /v2/account/link/email | Add an email+password to the social profiles on the current user&#39;s account.
[**link_facebook**](NakamaApi.md#link_facebook) | **POST** /v2/account/link/facebook | Add Facebook to the social profiles on the current user&#39;s account.
[**link_game_center**](NakamaApi.md#link_game_center) | **POST** /v2/account/link/gamecenter | Add Apple&#39;s GameCenter to the social profiles on the current user&#39;s account.
[**link_google**](NakamaApi.md#link_google) | **POST** /v2/account/link/google | Add Google to the social profiles on the current user&#39;s account.
[**link_steam**](NakamaApi.md#link_steam) | **POST** /v2/account/link/steam | Add Steam to the social profiles on the current user&#39;s account.
[**list_channel_messages**](NakamaApi.md#list_channel_messages) | **GET** /v2/channel/{channel_id} | List a channel&#39;s message history.
[**list_friends**](NakamaApi.md#list_friends) | **GET** /v2/friend | List all friends for the current user.
[**list_group_users**](NakamaApi.md#list_group_users) | **GET** /v2/group/{group_id}/user | List all users that are part of a group.
[**list_groups**](NakamaApi.md#list_groups) | **GET** /v2/group | List groups based on given filters.
[**list_leaderboard_records**](NakamaApi.md#list_leaderboard_records) | **GET** /v2/leaderboard/{leaderboard_id} | List leaderboard records.
[**list_leaderboard_records_around_owner**](NakamaApi.md#list_leaderboard_records_around_owner) | **GET** /v2/leaderboard/{leaderboard_id}/owner/{owner_id} | List leaderboard records that belong to a user.
[**list_matches**](NakamaApi.md#list_matches) | **GET** /v2/match | Fetch list of running matches.
[**list_notifications**](NakamaApi.md#list_notifications) | **GET** /v2/notification | Fetch list of notifications.
[**list_storage_objects**](NakamaApi.md#list_storage_objects) | **GET** /v2/storage/{collection} | List publicly readable storage objects in a given collection.
[**list_storage_objects2**](NakamaApi.md#list_storage_objects2) | **GET** /v2/storage/{collection}/{user_id} | List publicly readable storage objects in a given collection.
[**list_tournament_records**](NakamaApi.md#list_tournament_records) | **GET** /v2/tournament/{tournament_id} | List tournament records.
[**list_tournament_records_around_owner**](NakamaApi.md#list_tournament_records_around_owner) | **GET** /v2/tournament/{tournament_id}/owner/{owner_id} | List tournament records for a given owner.
[**list_tournaments**](NakamaApi.md#list_tournaments) | **GET** /v2/tournament | List current or upcoming tournaments.
[**list_user_groups**](NakamaApi.md#list_user_groups) | **GET** /v2/user/{user_id}/group | List groups the current user belongs to.
[**promote_group_users**](NakamaApi.md#promote_group_users) | **POST** /v2/group/{group_id}/promote | Promote a set of users in a group to the next role up.
[**read_storage_objects**](NakamaApi.md#read_storage_objects) | **POST** /v2/storage | Get storage objects.
[**rpc_func**](NakamaApi.md#rpc_func) | **POST** /v2/rpc/{id} | Execute a Lua function on the server.
[**rpc_func2**](NakamaApi.md#rpc_func2) | **GET** /v2/rpc/{id} | Execute a Lua function on the server.
[**unlink_custom**](NakamaApi.md#unlink_custom) | **POST** /v2/account/unlink/custom | Remove the custom ID from the social profiles on the current user&#39;s account.
[**unlink_device**](NakamaApi.md#unlink_device) | **POST** /v2/account/unlink/device | Remove the device ID from the social profiles on the current user&#39;s account.
[**unlink_email**](NakamaApi.md#unlink_email) | **POST** /v2/account/unlink/email | Remove the email+password from the social profiles on the current user&#39;s account.
[**unlink_facebook**](NakamaApi.md#unlink_facebook) | **POST** /v2/account/unlink/facebook | Remove Facebook from the social profiles on the current user&#39;s account.
[**unlink_game_center**](NakamaApi.md#unlink_game_center) | **POST** /v2/account/unlink/gamecenter | Remove Apple&#39;s GameCenter from the social profiles on the current user&#39;s account.
[**unlink_google**](NakamaApi.md#unlink_google) | **POST** /v2/account/unlink/google | Remove Google from the social profiles on the current user&#39;s account.
[**unlink_steam**](NakamaApi.md#unlink_steam) | **POST** /v2/account/unlink/steam | Remove Steam from the social profiles on the current user&#39;s account.
[**update_account**](NakamaApi.md#update_account) | **PUT** /v2/account | Update fields in the current user&#39;s account.
[**update_group**](NakamaApi.md#update_group) | **PUT** /v2/group/{group_id} | Update fields in a given group.
[**write_leaderboard_record**](NakamaApi.md#write_leaderboard_record) | **POST** /v2/leaderboard/{leaderboard_id} | Write a record to a leaderboard.
[**write_storage_objects**](NakamaApi.md#write_storage_objects) | **PUT** /v2/storage | Write objects into the storage engine.
[**write_tournament_record**](NakamaApi.md#write_tournament_record) | **PUT** /v2/tournament/{tournament_id} | Write a record to a tournament.


# **add_friends**
> ProtobufEmpty add_friends()

Add friends by ID or username to a user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()

try:
    # Add friends by ID or username to a user's account.
    api_response = api_instance.add_friends()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->add_friends: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_group_users**
> ProtobufEmpty add_group_users(group_id)

Add users to a group.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The group to add users to.

try:
    # Add users to a group.
    api_response = api_instance.add_group_users(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->add_group_users: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The group to add users to. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_custom**
> ApiSession authenticate_custom(body, create=create, username=username)

Authenticate a user with a custom id against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountCustom() # ApiAccountCustom | The custom account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)

try:
    # Authenticate a user with a custom id against the server.
    api_response = api_instance.authenticate_custom(body, create=create, username=username)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_custom: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountCustom**](ApiAccountCustom.md)| The custom account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_device**
> ApiSession authenticate_device(body, create=create, username=username)

Authenticate a user with a device id against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountDevice() # ApiAccountDevice | The device account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)

try:
    # Authenticate a user with a device id against the server.
    api_response = api_instance.authenticate_device(body, create=create, username=username)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_device: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountDevice**](ApiAccountDevice.md)| The device account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_email**
> ApiSession authenticate_email(body, create=create, username=username)

Authenticate a user with an email+password against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountEmail() # ApiAccountEmail | The email account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)

try:
    # Authenticate a user with an email+password against the server.
    api_response = api_instance.authenticate_email(body, create=create, username=username)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_email: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountEmail**](ApiAccountEmail.md)| The email account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_facebook**
> ApiSession authenticate_facebook(body, create=create, username=username, _sync=_sync)

Authenticate a user with a Facebook OAuth token against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountFacebook() # ApiAccountFacebook | The Facebook account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)
_sync = true # bool | Import Facebook friends for the user. (optional)

try:
    # Authenticate a user with a Facebook OAuth token against the server.
    api_response = api_instance.authenticate_facebook(body, create=create, username=username, _sync=_sync)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_facebook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountFacebook**](ApiAccountFacebook.md)| The Facebook account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 
 **_sync** | **bool**| Import Facebook friends for the user. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_game_center**
> ApiSession authenticate_game_center(body, create=create, username=username)

Authenticate a user with Apple's GameCenter against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountGameCenter() # ApiAccountGameCenter | The Game Center account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)

try:
    # Authenticate a user with Apple's GameCenter against the server.
    api_response = api_instance.authenticate_game_center(body, create=create, username=username)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_game_center: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountGameCenter**](ApiAccountGameCenter.md)| The Game Center account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_google**
> ApiSession authenticate_google(body, create=create, username=username)

Authenticate a user with Google against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountGoogle() # ApiAccountGoogle | The Google account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)

try:
    # Authenticate a user with Google against the server.
    api_response = api_instance.authenticate_google(body, create=create, username=username)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_google: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountGoogle**](ApiAccountGoogle.md)| The Google account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **authenticate_steam**
> ApiSession authenticate_steam(body, create=create, username=username)

Authenticate a user with Steam against the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure HTTP basic authorization: BasicAuth
configuration = swgclient.Configuration()
configuration.username = 'YOUR_USERNAME'
configuration.password = 'YOUR_PASSWORD'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
body = swgclient.ApiAccountSteam() # ApiAccountSteam | The Steam account details.
create = true # bool | Register the account if the user does not already exist. (optional)
username = 'username_example' # String | Set the username on the account at register. Must be unique. (optional)

try:
    # Authenticate a user with Steam against the server.
    api_response = api_instance.authenticate_steam(body, create=create, username=username)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->authenticate_steam: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountSteam**](ApiAccountSteam.md)| The Steam account details. | 
 **create** | **bool**| Register the account if the user does not already exist. | [optional] 
 **username** | **String**| Set the username on the account at register. Must be unique. | [optional] 

### Return type

[**ApiSession**](ApiSession.md)

### Authorization

[BasicAuth](../README.md#BasicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **block_friends**
> ProtobufEmpty block_friends()

Block one or more users by ID or username.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()

try:
    # Block one or more users by ID or username.
    api_response = api_instance.block_friends()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->block_friends: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_group**
> ApiGroup create_group(body)

Create a new group with the current user as the owner.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiCreateGroupRequest() # ApiCreateGroupRequest | 

try:
    # Create a new group with the current user as the owner.
    api_response = api_instance.create_group(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->create_group: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiCreateGroupRequest**](ApiCreateGroupRequest.md)|  | 

### Return type

[**ApiGroup**](ApiGroup.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_friends**
> ProtobufEmpty delete_friends(ids=ids, usernames=usernames)

Delete one or more users by ID or username.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
ids = ['ids_example'] # List[String] | The account id of a user. (optional)
usernames = ['usernames_example'] # List[String] | The account username of a user. (optional)

try:
    # Delete one or more users by ID or username.
    api_response = api_instance.delete_friends(ids=ids, usernames=usernames)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->delete_friends: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ids** | [**List[String]**](String.md)| The account id of a user. | [optional] 
 **usernames** | [**List[String]**](String.md)| The account username of a user. | [optional] 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_group**
> ProtobufEmpty delete_group(group_id)

Delete a group by ID.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The id of a group.

try:
    # Delete a group by ID.
    api_response = api_instance.delete_group(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->delete_group: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The id of a group. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_leaderboard_record**
> ProtobufEmpty delete_leaderboard_record(leaderboard_id)

Delete a leaderboard record.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
leaderboard_id = 'leaderboard_id_example' # String | The leaderboard ID to delete from.

try:
    # Delete a leaderboard record.
    api_response = api_instance.delete_leaderboard_record(leaderboard_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->delete_leaderboard_record: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **leaderboard_id** | **String**| The leaderboard ID to delete from. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_notifications**
> ProtobufEmpty delete_notifications(ids=ids)

Delete one or more notifications for the current user.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
ids = ['ids_example'] # List[String] | The id of notifications. (optional)

try:
    # Delete one or more notifications for the current user.
    api_response = api_instance.delete_notifications(ids=ids)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->delete_notifications: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ids** | [**List[String]**](String.md)| The id of notifications. | [optional] 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_storage_objects**
> ProtobufEmpty delete_storage_objects(body)

Delete one or more objects by ID or username.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiDeleteStorageObjectsRequest() # ApiDeleteStorageObjectsRequest | 

try:
    # Delete one or more objects by ID or username.
    api_response = api_instance.delete_storage_objects(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->delete_storage_objects: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiDeleteStorageObjectsRequest**](ApiDeleteStorageObjectsRequest.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_account**
> ApiAccount get_account()

Fetch the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()

try:
    # Fetch the current user's account.
    api_response = api_instance.get_account()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->get_account: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ApiAccount**](ApiAccount.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_users**
> ApiUsers get_users(ids=ids, usernames=usernames, facebook_ids=facebook_ids)

Fetch zero or more users by ID and/or username.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
ids = ['ids_example'] # List[String] | The account id of a user. (optional)
usernames = ['usernames_example'] # List[String] | The account username of a user. (optional)
facebook_ids = ['facebook_ids_example'] # List[String] | The Facebook ID of a user. (optional)

try:
    # Fetch zero or more users by ID and/or username.
    api_response = api_instance.get_users(ids=ids, usernames=usernames, facebook_ids=facebook_ids)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->get_users: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ids** | [**List[String]**](String.md)| The account id of a user. | [optional] 
 **usernames** | [**List[String]**](String.md)| The account username of a user. | [optional] 
 **facebook_ids** | [**List[String]**](String.md)| The Facebook ID of a user. | [optional] 

### Return type

[**ApiUsers**](ApiUsers.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **healthcheck**
> ProtobufEmpty healthcheck()

A healthcheck which load balancers can use to check the service.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()

try:
    # A healthcheck which load balancers can use to check the service.
    api_response = api_instance.healthcheck()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->healthcheck: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **import_facebook_friends**
> ProtobufEmpty import_facebook_friends(body, reset=reset)

Import Facebook friends and add them to a user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountFacebook() # ApiAccountFacebook | The Facebook account details.
reset = true # bool | Reset the current user's friends list. (optional)

try:
    # Import Facebook friends and add them to a user's account.
    api_response = api_instance.import_facebook_friends(body, reset=reset)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->import_facebook_friends: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountFacebook**](ApiAccountFacebook.md)| The Facebook account details. | 
 **reset** | **bool**| Reset the current user&#39;s friends list. | [optional] 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **join_group**
> ProtobufEmpty join_group(group_id)

Immediately join an open group, or request to join a closed one.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The group ID to join. The group must already exist.

try:
    # Immediately join an open group, or request to join a closed one.
    api_response = api_instance.join_group(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->join_group: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The group ID to join. The group must already exist. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **join_tournament**
> ProtobufEmpty join_tournament(tournament_id)

Attempt to join an open and running tournament.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
tournament_id = 'tournament_id_example' # String | The ID of the tournament to join. The tournament must already exist.

try:
    # Attempt to join an open and running tournament.
    api_response = api_instance.join_tournament(tournament_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->join_tournament: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tournament_id** | **String**| The ID of the tournament to join. The tournament must already exist. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **kick_group_users**
> ProtobufEmpty kick_group_users(group_id)

Kick a set of users from a group.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The group ID to kick from.

try:
    # Kick a set of users from a group.
    api_response = api_instance.kick_group_users(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->kick_group_users: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The group ID to kick from. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **leave_group**
> ProtobufEmpty leave_group(group_id)

Leave a group the user is a member of.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The group ID to leave.

try:
    # Leave a group the user is a member of.
    api_response = api_instance.leave_group(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->leave_group: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The group ID to leave. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_custom**
> ProtobufEmpty link_custom(body)

Add a custom ID to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountCustom() # ApiAccountCustom | 

try:
    # Add a custom ID to the social profiles on the current user's account.
    api_response = api_instance.link_custom(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_custom: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountCustom**](ApiAccountCustom.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_device**
> ProtobufEmpty link_device(body)

Add a device ID to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountDevice() # ApiAccountDevice | 

try:
    # Add a device ID to the social profiles on the current user's account.
    api_response = api_instance.link_device(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_device: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountDevice**](ApiAccountDevice.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_email**
> ProtobufEmpty link_email(body)

Add an email+password to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountEmail() # ApiAccountEmail | 

try:
    # Add an email+password to the social profiles on the current user's account.
    api_response = api_instance.link_email(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_email: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountEmail**](ApiAccountEmail.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_facebook**
> ProtobufEmpty link_facebook(body, _sync=_sync)

Add Facebook to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountFacebook() # ApiAccountFacebook | The Facebook account details.
_sync = true # bool | Import Facebook friends for the user. (optional)

try:
    # Add Facebook to the social profiles on the current user's account.
    api_response = api_instance.link_facebook(body, _sync=_sync)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_facebook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountFacebook**](ApiAccountFacebook.md)| The Facebook account details. | 
 **_sync** | **bool**| Import Facebook friends for the user. | [optional] 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_game_center**
> ProtobufEmpty link_game_center(body)

Add Apple's GameCenter to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountGameCenter() # ApiAccountGameCenter | 

try:
    # Add Apple's GameCenter to the social profiles on the current user's account.
    api_response = api_instance.link_game_center(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_game_center: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountGameCenter**](ApiAccountGameCenter.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_google**
> ProtobufEmpty link_google(body)

Add Google to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountGoogle() # ApiAccountGoogle | 

try:
    # Add Google to the social profiles on the current user's account.
    api_response = api_instance.link_google(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_google: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountGoogle**](ApiAccountGoogle.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **link_steam**
> ProtobufEmpty link_steam(body)

Add Steam to the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountSteam() # ApiAccountSteam | 

try:
    # Add Steam to the social profiles on the current user's account.
    api_response = api_instance.link_steam(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->link_steam: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountSteam**](ApiAccountSteam.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_channel_messages**
> ApiChannelMessageList list_channel_messages(channel_id, limit=limit, forward=forward, _cursor=_cursor)

List a channel's message history.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
channel_id = 'channel_id_example' # String | The channel ID to list from.
limit = 56 # int | Max number of records to return. Between 1 and 100. (optional)
forward = true # bool | True if listing should be older messages to newer, false if reverse. (optional)
_cursor = '_cursor_example' # String | A pagination cursor, if any. (optional)

try:
    # List a channel's message history.
    api_response = api_instance.list_channel_messages(channel_id, limit=limit, forward=forward, _cursor=_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_channel_messages: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **channel_id** | **String**| The channel ID to list from. | 
 **limit** | **int**| Max number of records to return. Between 1 and 100. | [optional] 
 **forward** | **bool**| True if listing should be older messages to newer, false if reverse. | [optional] 
 **_cursor** | **String**| A pagination cursor, if any. | [optional] 

### Return type

[**ApiChannelMessageList**](ApiChannelMessageList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_friends**
> ApiFriends list_friends()

List all friends for the current user.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()

try:
    # List all friends for the current user.
    api_response = api_instance.list_friends()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_friends: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ApiFriends**](ApiFriends.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_group_users**
> ApiGroupUserList list_group_users(group_id)

List all users that are part of a group.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The group ID to list from.

try:
    # List all users that are part of a group.
    api_response = api_instance.list_group_users(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_group_users: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The group ID to list from. | 

### Return type

[**ApiGroupUserList**](ApiGroupUserList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_groups**
> ApiGroupList list_groups(name=name, _cursor=_cursor, limit=limit)

List groups based on given filters.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
name = 'name_example' # String | List groups that contain this value in their names. (optional)
_cursor = '_cursor_example' # String | Optional pagination cursor. (optional)
limit = 56 # int | Max number of groups to return. Between 1 and 100. (optional)

try:
    # List groups based on given filters.
    api_response = api_instance.list_groups(name=name, _cursor=_cursor, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_groups: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| List groups that contain this value in their names. | [optional] 
 **_cursor** | **String**| Optional pagination cursor. | [optional] 
 **limit** | **int**| Max number of groups to return. Between 1 and 100. | [optional] 

### Return type

[**ApiGroupList**](ApiGroupList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_leaderboard_records**
> ApiLeaderboardRecordList list_leaderboard_records(leaderboard_id, owner_ids=owner_ids, limit=limit, _cursor=_cursor)

List leaderboard records.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
leaderboard_id = 'leaderboard_id_example' # String | The ID of the leaderboard to list for.
owner_ids = ['owner_ids_example'] # List[String] | One or more owners to retrieve records for. (optional)
limit = 56 # int | Max number of records to return. Between 1 and 100. (optional)
_cursor = '_cursor_example' # String | A next or previous page cursor. (optional)

try:
    # List leaderboard records.
    api_response = api_instance.list_leaderboard_records(leaderboard_id, owner_ids=owner_ids, limit=limit, _cursor=_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_leaderboard_records: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **leaderboard_id** | **String**| The ID of the leaderboard to list for. | 
 **owner_ids** | [**List[String]**](String.md)| One or more owners to retrieve records for. | [optional] 
 **limit** | **int**| Max number of records to return. Between 1 and 100. | [optional] 
 **_cursor** | **String**| A next or previous page cursor. | [optional] 

### Return type

[**ApiLeaderboardRecordList**](ApiLeaderboardRecordList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_leaderboard_records_around_owner**
> ApiLeaderboardRecordList list_leaderboard_records_around_owner(leaderboard_id, owner_id, limit=limit)

List leaderboard records that belong to a user.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
leaderboard_id = 'leaderboard_id_example' # String | The ID of the tournament to list for.
owner_id = 'owner_id_example' # String | The owner to retrieve records around.
limit = 789 # int | Max number of records to return. Between 1 and 100. (optional)

try:
    # List leaderboard records that belong to a user.
    api_response = api_instance.list_leaderboard_records_around_owner(leaderboard_id, owner_id, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_leaderboard_records_around_owner: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **leaderboard_id** | **String**| The ID of the tournament to list for. | 
 **owner_id** | **String**| The owner to retrieve records around. | 
 **limit** | **int**| Max number of records to return. Between 1 and 100. | [optional] 

### Return type

[**ApiLeaderboardRecordList**](ApiLeaderboardRecordList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_matches**
> ApiMatchList list_matches(limit=limit, authoritative=authoritative, label=label, min_size=min_size, max_size=max_size, query=query)

Fetch list of running matches.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
limit = 56 # int | Limit the number of returned matches. (optional)
authoritative = true # bool | Authoritative or relayed matches. (optional)
label = 'label_example' # String | Label filter. (optional)
min_size = 56 # int | Minimum user count. (optional)
max_size = 56 # int | Maximum user count. (optional)
query = 'query_example' # String | Arbitrary label query. (optional)

try:
    # Fetch list of running matches.
    api_response = api_instance.list_matches(limit=limit, authoritative=authoritative, label=label, min_size=min_size, max_size=max_size, query=query)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_matches: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| Limit the number of returned matches. | [optional] 
 **authoritative** | **bool**| Authoritative or relayed matches. | [optional] 
 **label** | **String**| Label filter. | [optional] 
 **min_size** | **int**| Minimum user count. | [optional] 
 **max_size** | **int**| Maximum user count. | [optional] 
 **query** | **String**| Arbitrary label query. | [optional] 

### Return type

[**ApiMatchList**](ApiMatchList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_notifications**
> ApiNotificationList list_notifications(limit=limit, cacheable_cursor=cacheable_cursor)

Fetch list of notifications.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
limit = 56 # int | The number of notifications to get. Between 1 and 100. (optional)
cacheable_cursor = 'cacheable_cursor_example' # String | A cursor to page through notifications. May be cached by clients to get from point in time forwards. (optional)

try:
    # Fetch list of notifications.
    api_response = api_instance.list_notifications(limit=limit, cacheable_cursor=cacheable_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_notifications: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| The number of notifications to get. Between 1 and 100. | [optional] 
 **cacheable_cursor** | **String**| A cursor to page through notifications. May be cached by clients to get from point in time forwards. | [optional] 

### Return type

[**ApiNotificationList**](ApiNotificationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_storage_objects**
> ApiStorageObjectList list_storage_objects(collection, user_id=user_id, limit=limit, _cursor=_cursor)

List publicly readable storage objects in a given collection.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
collection = 'collection_example' # String | The collection which stores the object.
user_id = 'user_id_example' # String | ID of the user. (optional)
limit = 56 # int | The number of storage objects to list. Between 1 and 100. (optional)
_cursor = '_cursor_example' # String | The cursor to page through results from. (optional)

try:
    # List publicly readable storage objects in a given collection.
    api_response = api_instance.list_storage_objects(collection, user_id=user_id, limit=limit, _cursor=_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_storage_objects: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **collection** | **String**| The collection which stores the object. | 
 **user_id** | **String**| ID of the user. | [optional] 
 **limit** | **int**| The number of storage objects to list. Between 1 and 100. | [optional] 
 **_cursor** | **String**| The cursor to page through results from. | [optional] 

### Return type

[**ApiStorageObjectList**](ApiStorageObjectList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_storage_objects2**
> ApiStorageObjectList list_storage_objects2(collection, user_id, limit=limit, _cursor=_cursor)

List publicly readable storage objects in a given collection.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
collection = 'collection_example' # String | The collection which stores the object.
user_id = 'user_id_example' # String | ID of the user.
limit = 56 # int | The number of storage objects to list. Between 1 and 100. (optional)
_cursor = '_cursor_example' # String | The cursor to page through results from. (optional)

try:
    # List publicly readable storage objects in a given collection.
    api_response = api_instance.list_storage_objects2(collection, user_id, limit=limit, _cursor=_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_storage_objects2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **collection** | **String**| The collection which stores the object. | 
 **user_id** | **String**| ID of the user. | 
 **limit** | **int**| The number of storage objects to list. Between 1 and 100. | [optional] 
 **_cursor** | **String**| The cursor to page through results from. | [optional] 

### Return type

[**ApiStorageObjectList**](ApiStorageObjectList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_tournament_records**
> ApiTournamentRecordList list_tournament_records(tournament_id, owner_ids=owner_ids, limit=limit, _cursor=_cursor)

List tournament records.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
tournament_id = 'tournament_id_example' # String | The ID of the tournament to list for.
owner_ids = ['owner_ids_example'] # List[String] | One or more owners to retrieve records for. (optional)
limit = 56 # int | Max number of records to return. Between 1 and 100. (optional)
_cursor = '_cursor_example' # String | A next or previous page cursor. (optional)

try:
    # List tournament records.
    api_response = api_instance.list_tournament_records(tournament_id, owner_ids=owner_ids, limit=limit, _cursor=_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_tournament_records: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tournament_id** | **String**| The ID of the tournament to list for. | 
 **owner_ids** | [**List[String]**](String.md)| One or more owners to retrieve records for. | [optional] 
 **limit** | **int**| Max number of records to return. Between 1 and 100. | [optional] 
 **_cursor** | **String**| A next or previous page cursor. | [optional] 

### Return type

[**ApiTournamentRecordList**](ApiTournamentRecordList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_tournament_records_around_owner**
> ApiTournamentRecordList list_tournament_records_around_owner(tournament_id, owner_id, limit=limit)

List tournament records for a given owner.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
tournament_id = 'tournament_id_example' # String | The ID of the tournament to list for.
owner_id = 'owner_id_example' # String | The owner to retrieve records around.
limit = 789 # int | Max number of records to return. Between 1 and 100. (optional)

try:
    # List tournament records for a given owner.
    api_response = api_instance.list_tournament_records_around_owner(tournament_id, owner_id, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_tournament_records_around_owner: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tournament_id** | **String**| The ID of the tournament to list for. | 
 **owner_id** | **String**| The owner to retrieve records around. | 
 **limit** | **int**| Max number of records to return. Between 1 and 100. | [optional] 

### Return type

[**ApiTournamentRecordList**](ApiTournamentRecordList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_tournaments**
> ApiTournamentList list_tournaments(category_start=category_start, category_end=category_end, start_time=start_time, end_time=end_time, limit=limit, _cursor=_cursor)

List current or upcoming tournaments.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
category_start = 789 # int | The start of the categories to include. Defaults to 0. (optional)
category_end = 789 # int | The end of the categories to include. Defaults to 128. (optional)
start_time = 789 # int | The start time for tournaments. Defaults to epoch. (optional)
end_time = 789 # int | The end time for tournaments. Defaults to +1 year from current Unix time. (optional)
limit = 56 # int | Max number of records to return. Between 1 and 100. (optional)
_cursor = '_cursor_example' # String | A next page cursor for listings (optional). (optional)

try:
    # List current or upcoming tournaments.
    api_response = api_instance.list_tournaments(category_start=category_start, category_end=category_end, start_time=start_time, end_time=end_time, limit=limit, _cursor=_cursor)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_tournaments: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **category_start** | **int**| The start of the categories to include. Defaults to 0. | [optional] 
 **category_end** | **int**| The end of the categories to include. Defaults to 128. | [optional] 
 **start_time** | **int**| The start time for tournaments. Defaults to epoch. | [optional] 
 **end_time** | **int**| The end time for tournaments. Defaults to +1 year from current Unix time. | [optional] 
 **limit** | **int**| Max number of records to return. Between 1 and 100. | [optional] 
 **_cursor** | **String**| A next page cursor for listings (optional). | [optional] 

### Return type

[**ApiTournamentList**](ApiTournamentList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_user_groups**
> ApiUserGroupList list_user_groups(user_id)

List groups the current user belongs to.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
user_id = 'user_id_example' # String | ID of the user.

try:
    # List groups the current user belongs to.
    api_response = api_instance.list_user_groups(user_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->list_user_groups: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user_id** | **String**| ID of the user. | 

### Return type

[**ApiUserGroupList**](ApiUserGroupList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **promote_group_users**
> ProtobufEmpty promote_group_users(group_id)

Promote a set of users in a group to the next role up.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The group ID to promote in.

try:
    # Promote a set of users in a group to the next role up.
    api_response = api_instance.promote_group_users(group_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->promote_group_users: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The group ID to promote in. | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **read_storage_objects**
> ApiStorageObjects read_storage_objects(body)

Get storage objects.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiReadStorageObjectsRequest() # ApiReadStorageObjectsRequest | 

try:
    # Get storage objects.
    api_response = api_instance.read_storage_objects(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->read_storage_objects: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiReadStorageObjectsRequest**](ApiReadStorageObjectsRequest.md)|  | 

### Return type

[**ApiStorageObjects**](ApiStorageObjects.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **rpc_func**
> ApiRpc rpc_func(id, body)

Execute a Lua function on the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure API key authorization: HttpKeyAuth
configuration = swgclient.Configuration()
configuration.api_key['http_key'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['http_key'] = 'Bearer'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
id = 'id_example' # String | The identifier of the function.
body = 'body_example' # String | The payload of the function which must be a JSON object.

try:
    # Execute a Lua function on the server.
    api_response = api_instance.rpc_func(id, body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->rpc_func: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The identifier of the function. | 
 **body** | **String**| The payload of the function which must be a JSON object. | 

### Return type

[**ApiRpc**](ApiRpc.md)

### Authorization

[HttpKeyAuth](../README.md#HttpKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **rpc_func2**
> ApiRpc rpc_func2(id, payload=payload, http_key=http_key)

Execute a Lua function on the server.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# Configure API key authorization: HttpKeyAuth
configuration = swgclient.Configuration()
configuration.api_key['http_key'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['http_key'] = 'Bearer'

# create an instance of the API class
api_instance = swgclient.NakamaApi(swgclient.ApiClient(configuration))
id = 'id_example' # String | The identifier of the function.
payload = 'payload_example' # String | The payload of the function which must be a JSON object. (optional)
http_key = 'http_key_example' # String | The authentication key used when executed as a non-client HTTP request. (optional)

try:
    # Execute a Lua function on the server.
    api_response = api_instance.rpc_func2(id, payload=payload, http_key=http_key)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->rpc_func2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The identifier of the function. | 
 **payload** | **String**| The payload of the function which must be a JSON object. | [optional] 
 **http_key** | **String**| The authentication key used when executed as a non-client HTTP request. | [optional] 

### Return type

[**ApiRpc**](ApiRpc.md)

### Authorization

[HttpKeyAuth](../README.md#HttpKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_custom**
> ProtobufEmpty unlink_custom(body)

Remove the custom ID from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountCustom() # ApiAccountCustom | 

try:
    # Remove the custom ID from the social profiles on the current user's account.
    api_response = api_instance.unlink_custom(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_custom: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountCustom**](ApiAccountCustom.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_device**
> ProtobufEmpty unlink_device(body)

Remove the device ID from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountDevice() # ApiAccountDevice | 

try:
    # Remove the device ID from the social profiles on the current user's account.
    api_response = api_instance.unlink_device(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_device: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountDevice**](ApiAccountDevice.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_email**
> ProtobufEmpty unlink_email(body)

Remove the email+password from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountEmail() # ApiAccountEmail | 

try:
    # Remove the email+password from the social profiles on the current user's account.
    api_response = api_instance.unlink_email(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_email: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountEmail**](ApiAccountEmail.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_facebook**
> ProtobufEmpty unlink_facebook(body)

Remove Facebook from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountFacebook() # ApiAccountFacebook | 

try:
    # Remove Facebook from the social profiles on the current user's account.
    api_response = api_instance.unlink_facebook(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_facebook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountFacebook**](ApiAccountFacebook.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_game_center**
> ProtobufEmpty unlink_game_center(body)

Remove Apple's GameCenter from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountGameCenter() # ApiAccountGameCenter | 

try:
    # Remove Apple's GameCenter from the social profiles on the current user's account.
    api_response = api_instance.unlink_game_center(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_game_center: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountGameCenter**](ApiAccountGameCenter.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_google**
> ProtobufEmpty unlink_google(body)

Remove Google from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountGoogle() # ApiAccountGoogle | 

try:
    # Remove Google from the social profiles on the current user's account.
    api_response = api_instance.unlink_google(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_google: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountGoogle**](ApiAccountGoogle.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unlink_steam**
> ProtobufEmpty unlink_steam(body)

Remove Steam from the social profiles on the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiAccountSteam() # ApiAccountSteam | 

try:
    # Remove Steam from the social profiles on the current user's account.
    api_response = api_instance.unlink_steam(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->unlink_steam: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiAccountSteam**](ApiAccountSteam.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account**
> ProtobufEmpty update_account(body)

Update fields in the current user's account.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiUpdateAccountRequest() # ApiUpdateAccountRequest | 

try:
    # Update fields in the current user's account.
    api_response = api_instance.update_account(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->update_account: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiUpdateAccountRequest**](ApiUpdateAccountRequest.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_group**
> ProtobufEmpty update_group(group_id, body)

Update fields in a given group.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
group_id = 'group_id_example' # String | The ID of the group to update.
body = swgclient.ApiUpdateGroupRequest() # ApiUpdateGroupRequest | 

try:
    # Update fields in a given group.
    api_response = api_instance.update_group(group_id, body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->update_group: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **group_id** | **String**| The ID of the group to update. | 
 **body** | [**ApiUpdateGroupRequest**](ApiUpdateGroupRequest.md)|  | 

### Return type

[**ProtobufEmpty**](ProtobufEmpty.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **write_leaderboard_record**
> ApiLeaderboardRecord write_leaderboard_record(leaderboard_id, body)

Write a record to a leaderboard.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
leaderboard_id = 'leaderboard_id_example' # String | The ID of the leaderboard to write to.
body = swgclient.WriteLeaderboardRecordRequestLeaderboardRecordWrite() # WriteLeaderboardRecordRequestLeaderboardRecordWrite | Record input.

try:
    # Write a record to a leaderboard.
    api_response = api_instance.write_leaderboard_record(leaderboard_id, body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->write_leaderboard_record: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **leaderboard_id** | **String**| The ID of the leaderboard to write to. | 
 **body** | [**WriteLeaderboardRecordRequestLeaderboardRecordWrite**](WriteLeaderboardRecordRequestLeaderboardRecordWrite.md)| Record input. | 

### Return type

[**ApiLeaderboardRecord**](ApiLeaderboardRecord.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **write_storage_objects**
> ApiStorageObjectAcks write_storage_objects(body)

Write objects into the storage engine.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
body = swgclient.ApiWriteStorageObjectsRequest() # ApiWriteStorageObjectsRequest | 

try:
    # Write objects into the storage engine.
    api_response = api_instance.write_storage_objects(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->write_storage_objects: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ApiWriteStorageObjectsRequest**](ApiWriteStorageObjectsRequest.md)|  | 

### Return type

[**ApiStorageObjectAcks**](ApiStorageObjectAcks.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **write_tournament_record**
> ApiLeaderboardRecord write_tournament_record(tournament_id, body)

Write a record to a tournament.

### Example
```python
from __future__ import print_function
import time
import swgclient
from swgclient.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swgclient.NakamaApi()
tournament_id = 'tournament_id_example' # String | The tournament ID to write the record for.
body = swgclient.WriteTournamentRecordRequestTournamentRecordWrite() # WriteTournamentRecordRequestTournamentRecordWrite | Record input.

try:
    # Write a record to a tournament.
    api_response = api_instance.write_tournament_record(tournament_id, body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling NakamaApi->write_tournament_record: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tournament_id** | **String**| The tournament ID to write the record for. | 
 **body** | [**WriteTournamentRecordRequestTournamentRecordWrite**](WriteTournamentRecordRequestTournamentRecordWrite.md)| Record input. | 

### Return type

[**ApiLeaderboardRecord**](ApiLeaderboardRecord.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

