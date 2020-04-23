#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Barracuda.ITensorAllocator
struct ITensorAllocator_t5FA12859635D8072B2AA3303C5EFD275C0C79851;
// Barracuda.ITensorData
struct ITensorData_t037DDB6B2853CA0E269816BEA4257592C8DCFBDC;
// Barracuda.Tensor
struct Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437;
// MLAgents.GaugeNode
struct GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E;
// MLAgents.Inference.TensorProxy
struct TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1;
// MLAgents.Sensors.ISensor
struct ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4;
// MLAgents.Sensors.ISensor[]
struct ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056;
// MLAgents.Sensors.RenderTextureSensor
struct RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A;
// MLAgents.Sensors.RenderTextureSensorComponent
struct RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387;
// MLAgents.Sensors.SensorComponent
struct SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3;
// MLAgents.Sensors.SensorShapeValidator
struct SensorShapeValidator_t4CF99FDEB5F10EAEDCD4B0F9259ABCA3823DDE0E;
// MLAgents.Sensors.StackingSensor
struct StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F;
// MLAgents.Sensors.VectorSensor
struct VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499;
// MLAgents.Sensors.WriteAdapter
struct WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C;
// MLAgents.SideChannels.EngineConfigurationChannel
struct EngineConfigurationChannel_t3DE3175CA8308F40586A4B62CE99D3E1776E6E3C;
// MLAgents.SideChannels.FloatPropertiesChannel
struct FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234;
// MLAgents.SideChannels.IncomingMessage
struct IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF;
// MLAgents.SideChannels.OutgoingMessage
struct OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB;
// MLAgents.SideChannels.RawBytesChannel
struct RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960;
// MLAgents.SideChannels.SideChannel
struct SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F;
// MLAgents.TimerNode
struct TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE;
// MLAgents.TimerNode[]
struct TimerNodeU5BU5D_t351E8AAA8A1CFCA15C37D10D21ABCCA4D15D185F;
// MLAgents.TimerStack
struct TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F;
// MLAgents.UnityAgentsException
struct UnityAgentsException_t5376D7577819EFFC7457A7DCE829311EBA93FD5A;
// System.Action`1<System.Single>
struct Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,MLAgents.GaugeNode>[]
struct EntryU5BU5D_tEF06D2876DCD2AF9F18B164FEE359337F9188EEE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,MLAgents.TimerNode>[]
struct EntryU5BU5D_t8F20763B4E2E31CB3F405F4D56C479A0E2EBF56D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<System.Single>>[]
struct EntryU5BU5D_tBEF21AC82FA5BC1A279B5D4B18C8B63D045850B4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t06C60C942E5E5396F3966753FE4A0B9DBABA3DE8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t4456A03D539BE6A8E226E9456370974BD9251CF6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,MLAgents.GaugeNode>
struct KeyCollection_t9BF9C4D651DDA906FD91F9DD69234F56B397E223;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,MLAgents.TimerNode>
struct KeyCollection_t723DD13D588F9411A7F2DEEF48A40C3803D516B3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<System.Single>>
struct KeyCollection_t8AEDBCB40C3C740CE479A4D40AC7B5CA495DEE12;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,MLAgents.GaugeNode>
struct ValueCollection_tAB1BD82DE7452D5C642D0B976EE8F3FF2CC749FE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,MLAgents.TimerNode>
struct ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<System.Single>>
struct ValueCollection_t246752580B16D95DC0B28769D915FDFAFD833318;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t6EEF1E80D56DE41F8CD5DDAE896FF3FB64E0D745;
// System.Collections.Generic.Dictionary`2<MLAgents.Inference.TensorProxy/TensorType,System.Type>
struct Dictionary_2_t7720BF870270A1BB333953CCDD12937148951294;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C;
// System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode>
struct Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261;
// System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>
struct Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Single>>
struct Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Runtime.Serialization.DataContract>
struct Dictionary_2_t80E95B5C8E47413831CB9DDFF26B196F98EDE222;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t50CB4C9D6B2BF8FE9B5A3786BDDB4FFF0D91F873;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t8FCB5BDD2F23D48DA1EBD3AFE3390785A89CC67C;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tF9225691990EF9799D9F4B64E4063CA0D1DF03CA;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_tD8050EFFDED632495A996B4482065D561F3A7DBD;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t9FB3183151047CE8512A5C5FC3C5A6847B45F95E;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_tFFB5515FC97391D04D5034ED7F334357FED1FAE6;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t688BB8D16523A5C9E755B0B7A4B719D1454715D8;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,MLAgents.TimerNode>
struct IReadOnlyDictionary_2_t462BF51EB94E479BD060328C8AD0F9AAA8D322AF;
// System.Collections.Generic.List`1<MLAgents.Sensors.ISensor>
struct List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.Stack`1<MLAgents.TimerNode>
struct Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.DataContract
struct DataContract_tE893992323EF025452146F4B23FC66D9DAA63E4A;
// System.Runtime.Serialization.DateTimeFormat
struct DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3;
// System.Runtime.Serialization.IDataContractSurrogate
struct IDataContractSurrogate_tC517846B2A5BA30FF4CEBCE2493FA713B2539DC2;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.Json.DataContractJsonSerializer
struct DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098;
// System.Runtime.Serialization.Json.DataContractJsonSerializerSettings
struct DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.XmlDictionaryString
struct XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t3F3A7CBAD43FC51A631E478D2027A2C979A74967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8FCB5BDD2F23D48DA1EBD3AFE3390785A89CC67C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t855E9721BBB68B864B59AB92296F2E67ADC9E88E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t9FB3183151047CE8512A5C5FC3C5A6847B45F95E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t026D7A8C4D989218772DB3E051A624F753A60859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6CF3451889FA5627B3C0839879F1F2E0983DC6;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral447390C73E6567871A6CB5B03FAB57D2E8279079;
IL2CPP_EXTERN_C String_t* _stringLiteral641002B75B9FA5A78DED9A5837FC84171F84EFB0;
IL2CPP_EXTERN_C String_t* _stringLiteral80A8C79BE81E835C065EECA59E1E3C852CC046E5;
IL2CPP_EXTERN_C String_t* _stringLiteral8C414E507995F222269428ECDA9D64D973A86AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral9A62370C80FEB14D20C05AB732F84E38A55E9285;
IL2CPP_EXTERN_C String_t* _stringLiteralA8DA53DDDECBB7B12FAED4F63FF21262EC2261E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E69F85C4F42BA999C4BCC72BB515B736EC69F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC87338707AF7118E25D59BE13249252A1BE9936F;
IL2CPP_EXTERN_C String_t* _stringLiteralD9DDD72B3FA446F199FD1A819322351260E4F596;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC76E9F0C0006E8F919E0C515C66DBBA3982F785;
IL2CPP_EXTERN_C String_t* _stringLiteralDED10CDED0C5637557BC6139F4C0C144968D0AA3;
IL2CPP_EXTERN_C String_t* _stringLiteralFC97A05BCEBC0B772CE70FEE233324E4A50EB801;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m10EC4DD8F19221E23FA2A65C1D766FF4AFE997BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1530F7CEF73C752C8EC99624161918B97222C8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD27F8CBF2E48C1DA21333C1A5FD525D2C035000E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD8FD61B2548D7AFDF1B68CD62693A178C69156DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m02123C0533F1433A912E9127E38288D99A947E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5AA098C95791D4D04768A419C978CCF2D6C50B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD856D1FDC27C5FEBF33F5CA33572B780555B3A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE0D5616D9DBCF4B3660A3D11673DF8175BD3AD55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBC0BB330D565CB110E2F1B287A0EDB44ED86D14D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m9F3F788EF06F3E37AC1EAA1B6ACAF961DCE20B68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m774FD96EBEB6F9308DA314CEB064BF167857B270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m35114EF43C240EBF37D72E10E3B64F7956287362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4CC0944B44714A69F8AE2DCB9A38009BF00C0017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9C04CA39E37DE12B1B69BE0816A699A0E8547FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF1E3D45A84F80A435302E1212777C0DFF90CB64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC900D5AA14C8DB2B29884BABD92106A7504EE19E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF9A40CC2094555D50FE4AD4BAF6FFB1C83641FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m99E376E27B906E23D4CC77DD87354766696672A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAADE052F2F2D16B51A7F4B30F15C0DC4E5565290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0035ED15A62BCDB607BB9DEA0372E1540A6C030A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m30D2E90DDB5306EE08A9D6BEC42FB5BB7B91F618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m89244AB36E08C3A7B446145300B40A6B87113A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m9B1C2D6517DBE1A4AC1943DE600534CDF7013912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC45B57C3443B3DC8F3BB87FE06B5F9409018DD29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m14EB0C46C93AA60CFB46FE91B6A436039C3DC3F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m1DCFD14CD7C1D9DF5E2BC5824AAC06C9A17517CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA54AC989707E5287F1F00DB85C4B04BFC2347116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBA962B312529AAD38D12E8A24FDBA917D15956AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC463AC73D793B22599596C008994F78C3AF0BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB8F183781871D16C1DC6628340B5F5F19603AB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC60C21898063A4934F92E05D90722EBEEEA23718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD477BFDA20CA277DDDE9A13F924161A8376739AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m23189E322CE0961BC9146B9C04090C64735B26AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m76C45253389C3F44F1FDD6632AAB332B2F87D70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m159C6E24B2483316B9DECFEBF3616701352EA2C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mAFC5D8B2CFAF98823E0077C86A52B0F92D8C90AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m5EBFF170FD8FB121C7C3327584A77246E4157FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t EngineConfigurationChannel_OnMessageReceived_mEC5675DACC975EDBE63727218D0D568354B9BD1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineConfigurationChannel__ctor_m3BC63E1ED5BAA897E426E1DE0996EC1C2E82D0EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FloatPropertiesChannel_GetPropertyWithDefault_m606232D53B66DA1397CF28C9D8A781588B6D159B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FloatPropertiesChannel_ListProperties_m6DA3F82B7C0FA1621276D813EB381D8C5A8F895C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FloatPropertiesChannel_OnMessageReceived_m8FC87F90E687F378F9EC675B8D6A0F16D7400CBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FloatPropertiesChannel_RegisterCallback_mAA1177E1C560D3EDF4F7D21D07E789AD0A265B3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FloatPropertiesChannel_SetProperty_mDF80A6F5DDF1B033A4794912E2077AD4D5CE83F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FloatPropertiesChannel__ctor_mF832877F81E34D7AF7A7ED8477C6E972FA24C22D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncomingMessage_ReadFloatList_mC8EAD4F46D37A689711F5C87CA32CF935AA71670_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncomingMessage__ctor_m6164147232CAEFBA86A93B32AB1D5DBC9A110AA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OutgoingMessage_WriteFloatList_mB64FD57594F45C4E4E6EDB86D1702739BA10C95E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OutgoingMessage__ctor_m9CD5F10440FC406D6B41ABF8BFE319C1CBA62D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawBytesChannel_GetAndClearReceivedMessages_m1E0A605DFA08BC7739A7BD452C861BF729DCFDA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawBytesChannel_GetReceivedMessages_m7506B119B41A47CE72EBE7E3E1F80EDB574350AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawBytesChannel_OnMessageReceived_m1D24466FC97827D804C6FF79286019469ABD9EE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawBytesChannel_SendRawBytes_m1C1B8B1C79683C0916DDC42480F28D100F44973F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawBytesChannel__ctor_mDEC4B7238CA39878D4C98EDE501F818E813451FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderTextureSensorComponent_CreateSensor_m4272771F4D0F019EC02804572BC217FC339B6082_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderTextureSensorComponent_GetObservationShape_m680BA201488C6F3EF76509BF6A3FCA3A272063DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderTextureSensorComponent__ctor_m854AE2A5E5C607EE720B115D340642E50F623F08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SensorExtensions_ObservationSize_mEA36DBDE2C8C22F4CD711B634CB2F60302E12DCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SensorShapeValidator_ValidateSensors_m4F78E8600A1BEEDBD34E40F0E884B6987EC59EFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SideChannel_QueueMessageToSend_mF010D33728EE37F16323B4D9ECAC19530B2ADF6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StackingSensor_Update_m0538CD6A8D677690403B33A6C5C384198BBE2A16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StackingSensor_Write_mF6E97B3088BCFF31F97A34DB3EC3D5EFC67678CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StackingSensor__ctor_m8ED48F872A083D66C4184051BCE1D662933F4F38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_Begin_mA8A00859375F136C170A583DB598C4438C04A811_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_DebugGetTimerString_m49CD4397EB0A96820F6262663961283C025DEDF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_End_m4B7B65D03E996548B6512C7097EAC8F0AB5A62FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_GetChild_m154B0197CE8AE7D4CEE260FB05D10544C8987474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode__cctor_mC620EDA9C02A84BE35535A42615651DEEE14FF28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode__ctor_m808910ACB4547A21A4BC43B0AC205422A2997A38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_get_CurrentTicks_mEF4A536BF8BAE774451BFDCE6B5BFCF3332D9B80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_get_SelfSeconds_mFB2FD9E996646AD11BE6180DCDC76DC7C8646EFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerNode_get_TotalSeconds_m88155A3BE60C7CF1962346397EF863B063D3D172_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_DebugGetTimerString_m55D719E2EB668D9D107CB7CF9CDA5296D525E6A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_Pop_m8DAE290FBBCA4EEC9786C48C141F98C3D1B521F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_Push_m4BCE0CFAD80D03754D1F6C8B3B51B15B059821E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_Reset_mFBC996329C5A195EA9FF556C611335C026C58C80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_SaveJsonTimers_mBF8018F16CF26E0007F60C2144CD5FBF78B9ACF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_SetGauge_mD390CE79F13E5FF561DE830CADFAE6A4A4386FA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack__cctor_mE2EB8A6F6112B4B002241135020A319700557E42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack__ctor_m7106A12136B16821EEADEDB9C75D4CA853390616_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerStack_get_Instance_m15239E3A93B178A10C787BC0F5DC5A18994DAC03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAgentsException__ctor_m2C489DB5456702F586E9B0042074C5C38619133E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAgentsException__ctor_mD89365145EB4C0D7A27B3008802469159F363925_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_CumSum_m4F4BE890548918644417764DC764887E7A79CDEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorSensor_AddObservation_mA6A3B5C4CAFCC40CA546129F4492F04AC0EB2904_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorSensor_Clear_m67A27876816FC71D85B623C1DB7DC777D458E74B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorSensor_Write_m63832E4E1AE5FB75056B5C6FEC5DA4F1A6A018B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorSensor__ctor_mF6ADEDF2A67FF887C524ADCC884DE07C16D36019_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WriteAdapter_AddRange_m9FE7672FBBC19AD345B802373DC6C42C67F48F21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WriteAdapter_set_Item_m3C5880032FE8988E4B842A5C15F3BEE38D1758C0_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// MLAgents.GaugeNode
struct  GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E  : public RuntimeObject
{
public:
	// System.Single MLAgents.GaugeNode::value
	float ___value_1;
	// System.Single MLAgents.GaugeNode::minValue
	float ___minValue_2;
	// System.Single MLAgents.GaugeNode::maxValue
	float ___maxValue_3;
	// System.Single MLAgents.GaugeNode::weightedAverage
	float ___weightedAverage_4;
	// System.UInt32 MLAgents.GaugeNode::count
	uint32_t ___count_5;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_minValue_2() { return static_cast<int32_t>(offsetof(GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E, ___minValue_2)); }
	inline float get_minValue_2() const { return ___minValue_2; }
	inline float* get_address_of_minValue_2() { return &___minValue_2; }
	inline void set_minValue_2(float value)
	{
		___minValue_2 = value;
	}

	inline static int32_t get_offset_of_maxValue_3() { return static_cast<int32_t>(offsetof(GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E, ___maxValue_3)); }
	inline float get_maxValue_3() const { return ___maxValue_3; }
	inline float* get_address_of_maxValue_3() { return &___maxValue_3; }
	inline void set_maxValue_3(float value)
	{
		___maxValue_3 = value;
	}

	inline static int32_t get_offset_of_weightedAverage_4() { return static_cast<int32_t>(offsetof(GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E, ___weightedAverage_4)); }
	inline float get_weightedAverage_4() const { return ___weightedAverage_4; }
	inline float* get_address_of_weightedAverage_4() { return &___weightedAverage_4; }
	inline void set_weightedAverage_4(float value)
	{
		___weightedAverage_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E, ___count_5)); }
	inline uint32_t get_count_5() const { return ___count_5; }
	inline uint32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint32_t value)
	{
		___count_5 = value;
	}
};


// MLAgents.Sensors.SensorExtensions
struct  SensorExtensions_t6D9077E334351C0CA114BB38D2FE1D3B5CD41CE9  : public RuntimeObject
{
public:

public:
};


// MLAgents.Sensors.SensorShapeValidator
struct  SensorShapeValidator_t4CF99FDEB5F10EAEDCD4B0F9259ABCA3823DDE0E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32[]> MLAgents.Sensors.SensorShapeValidator::m_SensorShapes
	List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * ___m_SensorShapes_0;

public:
	inline static int32_t get_offset_of_m_SensorShapes_0() { return static_cast<int32_t>(offsetof(SensorShapeValidator_t4CF99FDEB5F10EAEDCD4B0F9259ABCA3823DDE0E, ___m_SensorShapes_0)); }
	inline List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * get_m_SensorShapes_0() const { return ___m_SensorShapes_0; }
	inline List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC ** get_address_of_m_SensorShapes_0() { return &___m_SensorShapes_0; }
	inline void set_m_SensorShapes_0(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * value)
	{
		___m_SensorShapes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SensorShapes_0), (void*)value);
	}
};


// MLAgents.Sensors.StackingSensor
struct  StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F  : public RuntimeObject
{
public:
	// MLAgents.Sensors.ISensor MLAgents.Sensors.StackingSensor::m_WrappedSensor
	RuntimeObject* ___m_WrappedSensor_0;
	// System.Int32 MLAgents.Sensors.StackingSensor::m_NumStackedObservations
	int32_t ___m_NumStackedObservations_1;
	// System.Int32 MLAgents.Sensors.StackingSensor::m_UnstackedObservationSize
	int32_t ___m_UnstackedObservationSize_2;
	// System.String MLAgents.Sensors.StackingSensor::m_Name
	String_t* ___m_Name_3;
	// System.Int32[] MLAgents.Sensors.StackingSensor::m_Shape
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_Shape_4;
	// System.Single[][] MLAgents.Sensors.StackingSensor::m_StackedObservations
	SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* ___m_StackedObservations_5;
	// System.Int32 MLAgents.Sensors.StackingSensor::m_CurrentIndex
	int32_t ___m_CurrentIndex_6;
	// MLAgents.Sensors.WriteAdapter MLAgents.Sensors.StackingSensor::m_LocalAdapter
	WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * ___m_LocalAdapter_7;

public:
	inline static int32_t get_offset_of_m_WrappedSensor_0() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_WrappedSensor_0)); }
	inline RuntimeObject* get_m_WrappedSensor_0() const { return ___m_WrappedSensor_0; }
	inline RuntimeObject** get_address_of_m_WrappedSensor_0() { return &___m_WrappedSensor_0; }
	inline void set_m_WrappedSensor_0(RuntimeObject* value)
	{
		___m_WrappedSensor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WrappedSensor_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumStackedObservations_1() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_NumStackedObservations_1)); }
	inline int32_t get_m_NumStackedObservations_1() const { return ___m_NumStackedObservations_1; }
	inline int32_t* get_address_of_m_NumStackedObservations_1() { return &___m_NumStackedObservations_1; }
	inline void set_m_NumStackedObservations_1(int32_t value)
	{
		___m_NumStackedObservations_1 = value;
	}

	inline static int32_t get_offset_of_m_UnstackedObservationSize_2() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_UnstackedObservationSize_2)); }
	inline int32_t get_m_UnstackedObservationSize_2() const { return ___m_UnstackedObservationSize_2; }
	inline int32_t* get_address_of_m_UnstackedObservationSize_2() { return &___m_UnstackedObservationSize_2; }
	inline void set_m_UnstackedObservationSize_2(int32_t value)
	{
		___m_UnstackedObservationSize_2 = value;
	}

	inline static int32_t get_offset_of_m_Name_3() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_Name_3)); }
	inline String_t* get_m_Name_3() const { return ___m_Name_3; }
	inline String_t** get_address_of_m_Name_3() { return &___m_Name_3; }
	inline void set_m_Name_3(String_t* value)
	{
		___m_Name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Shape_4() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_Shape_4)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_Shape_4() const { return ___m_Shape_4; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_Shape_4() { return &___m_Shape_4; }
	inline void set_m_Shape_4(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_Shape_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shape_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_StackedObservations_5() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_StackedObservations_5)); }
	inline SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* get_m_StackedObservations_5() const { return ___m_StackedObservations_5; }
	inline SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839** get_address_of_m_StackedObservations_5() { return &___m_StackedObservations_5; }
	inline void set_m_StackedObservations_5(SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* value)
	{
		___m_StackedObservations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StackedObservations_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_6() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_CurrentIndex_6)); }
	inline int32_t get_m_CurrentIndex_6() const { return ___m_CurrentIndex_6; }
	inline int32_t* get_address_of_m_CurrentIndex_6() { return &___m_CurrentIndex_6; }
	inline void set_m_CurrentIndex_6(int32_t value)
	{
		___m_CurrentIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalAdapter_7() { return static_cast<int32_t>(offsetof(StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F, ___m_LocalAdapter_7)); }
	inline WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * get_m_LocalAdapter_7() const { return ___m_LocalAdapter_7; }
	inline WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C ** get_address_of_m_LocalAdapter_7() { return &___m_LocalAdapter_7; }
	inline void set_m_LocalAdapter_7(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * value)
	{
		___m_LocalAdapter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalAdapter_7), (void*)value);
	}
};


// MLAgents.Sensors.VectorSensor
struct  VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Single> MLAgents.Sensors.VectorSensor::m_Observations
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___m_Observations_0;
	// System.Int32[] MLAgents.Sensors.VectorSensor::m_Shape
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_Shape_1;
	// System.String MLAgents.Sensors.VectorSensor::m_Name
	String_t* ___m_Name_2;

public:
	inline static int32_t get_offset_of_m_Observations_0() { return static_cast<int32_t>(offsetof(VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499, ___m_Observations_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_m_Observations_0() const { return ___m_Observations_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_m_Observations_0() { return &___m_Observations_0; }
	inline void set_m_Observations_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___m_Observations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observations_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Shape_1() { return static_cast<int32_t>(offsetof(VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499, ___m_Shape_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_Shape_1() const { return ___m_Shape_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_Shape_1() { return &___m_Shape_1; }
	inline void set_m_Shape_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_Shape_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shape_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}
};


// MLAgents.SideChannels.IncomingMessage
struct  IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF  : public RuntimeObject
{
public:
	// System.Byte[] MLAgents.SideChannels.IncomingMessage::m_Data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_Data_0;
	// System.IO.Stream MLAgents.SideChannels.IncomingMessage::m_Stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_Stream_1;
	// System.IO.BinaryReader MLAgents.SideChannels.IncomingMessage::m_Reader
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___m_Reader_2;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF, ___m_Data_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_Data_0() const { return ___m_Data_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Stream_1() { return static_cast<int32_t>(offsetof(IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF, ___m_Stream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_Stream_1() const { return ___m_Stream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_Stream_1() { return &___m_Stream_1; }
	inline void set_m_Stream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_Stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reader_2() { return static_cast<int32_t>(offsetof(IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF, ___m_Reader_2)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_m_Reader_2() const { return ___m_Reader_2; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_m_Reader_2() { return &___m_Reader_2; }
	inline void set_m_Reader_2(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___m_Reader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Reader_2), (void*)value);
	}
};


// MLAgents.SideChannels.OutgoingMessage
struct  OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB  : public RuntimeObject
{
public:
	// System.IO.BinaryWriter MLAgents.SideChannels.OutgoingMessage::m_Writer
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___m_Writer_0;
	// System.IO.MemoryStream MLAgents.SideChannels.OutgoingMessage::m_Stream
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___m_Stream_1;

public:
	inline static int32_t get_offset_of_m_Writer_0() { return static_cast<int32_t>(offsetof(OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB, ___m_Writer_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_m_Writer_0() const { return ___m_Writer_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_m_Writer_0() { return &___m_Writer_0; }
	inline void set_m_Writer_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___m_Writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Writer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Stream_1() { return static_cast<int32_t>(offsetof(OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB, ___m_Stream_1)); }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * get_m_Stream_1() const { return ___m_Stream_1; }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C ** get_address_of_m_Stream_1() { return &___m_Stream_1; }
	inline void set_m_Stream_1(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * value)
	{
		___m_Stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stream_1), (void*)value);
	}
};


// MLAgents.TimerNode
struct  TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE  : public RuntimeObject
{
public:
	// System.String MLAgents.TimerNode::m_FullName
	String_t* ___m_FullName_2;
	// System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode> MLAgents.TimerNode::m_Children
	Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * ___m_Children_3;
	// System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode> MLAgents.TimerNode::m_Gauges
	Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * ___m_Gauges_4;
	// UnityEngine.Profiling.CustomSampler MLAgents.TimerNode::m_Sampler
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___m_Sampler_5;
	// System.Int64 MLAgents.TimerNode::m_TotalTicks
	int64_t ___m_TotalTicks_6;
	// System.Int64 MLAgents.TimerNode::m_TickStart
	int64_t ___m_TickStart_7;
	// System.Int32 MLAgents.TimerNode::m_NumCalls
	int32_t ___m_NumCalls_8;

public:
	inline static int32_t get_offset_of_m_FullName_2() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_FullName_2)); }
	inline String_t* get_m_FullName_2() const { return ___m_FullName_2; }
	inline String_t** get_address_of_m_FullName_2() { return &___m_FullName_2; }
	inline void set_m_FullName_2(String_t* value)
	{
		___m_FullName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FullName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_3() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_Children_3)); }
	inline Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * get_m_Children_3() const { return ___m_Children_3; }
	inline Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 ** get_address_of_m_Children_3() { return &___m_Children_3; }
	inline void set_m_Children_3(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * value)
	{
		___m_Children_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gauges_4() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_Gauges_4)); }
	inline Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * get_m_Gauges_4() const { return ___m_Gauges_4; }
	inline Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 ** get_address_of_m_Gauges_4() { return &___m_Gauges_4; }
	inline void set_m_Gauges_4(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * value)
	{
		___m_Gauges_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gauges_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Sampler_5() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_Sampler_5)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_m_Sampler_5() const { return ___m_Sampler_5; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_m_Sampler_5() { return &___m_Sampler_5; }
	inline void set_m_Sampler_5(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___m_Sampler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sampler_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_TotalTicks_6() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_TotalTicks_6)); }
	inline int64_t get_m_TotalTicks_6() const { return ___m_TotalTicks_6; }
	inline int64_t* get_address_of_m_TotalTicks_6() { return &___m_TotalTicks_6; }
	inline void set_m_TotalTicks_6(int64_t value)
	{
		___m_TotalTicks_6 = value;
	}

	inline static int32_t get_offset_of_m_TickStart_7() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_TickStart_7)); }
	inline int64_t get_m_TickStart_7() const { return ___m_TickStart_7; }
	inline int64_t* get_address_of_m_TickStart_7() { return &___m_TickStart_7; }
	inline void set_m_TickStart_7(int64_t value)
	{
		___m_TickStart_7 = value;
	}

	inline static int32_t get_offset_of_m_NumCalls_8() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE, ___m_NumCalls_8)); }
	inline int32_t get_m_NumCalls_8() const { return ___m_NumCalls_8; }
	inline int32_t* get_address_of_m_NumCalls_8() { return &___m_NumCalls_8; }
	inline void set_m_NumCalls_8(int32_t value)
	{
		___m_NumCalls_8 = value;
	}
};

struct TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields
{
public:
	// System.String MLAgents.TimerNode::s_Separator
	String_t* ___s_Separator_0;
	// System.Double MLAgents.TimerNode::s_TicksToSeconds
	double ___s_TicksToSeconds_1;

public:
	inline static int32_t get_offset_of_s_Separator_0() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields, ___s_Separator_0)); }
	inline String_t* get_s_Separator_0() const { return ___s_Separator_0; }
	inline String_t** get_address_of_s_Separator_0() { return &___s_Separator_0; }
	inline void set_s_Separator_0(String_t* value)
	{
		___s_Separator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Separator_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_TicksToSeconds_1() { return static_cast<int32_t>(offsetof(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields, ___s_TicksToSeconds_1)); }
	inline double get_s_TicksToSeconds_1() const { return ___s_TicksToSeconds_1; }
	inline double* get_address_of_s_TicksToSeconds_1() { return &___s_TicksToSeconds_1; }
	inline void set_s_TicksToSeconds_1(double value)
	{
		___s_TicksToSeconds_1 = value;
	}
};


// MLAgents.TimerStack
struct  TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<MLAgents.TimerNode> MLAgents.TimerStack::m_Stack
	Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * ___m_Stack_1;
	// MLAgents.TimerNode MLAgents.TimerStack::m_RootNode
	TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * ___m_RootNode_2;

public:
	inline static int32_t get_offset_of_m_Stack_1() { return static_cast<int32_t>(offsetof(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F, ___m_Stack_1)); }
	inline Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * get_m_Stack_1() const { return ___m_Stack_1; }
	inline Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 ** get_address_of_m_Stack_1() { return &___m_Stack_1; }
	inline void set_m_Stack_1(Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * value)
	{
		___m_Stack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RootNode_2() { return static_cast<int32_t>(offsetof(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F, ___m_RootNode_2)); }
	inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * get_m_RootNode_2() const { return ___m_RootNode_2; }
	inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE ** get_address_of_m_RootNode_2() { return &___m_RootNode_2; }
	inline void set_m_RootNode_2(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * value)
	{
		___m_RootNode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootNode_2), (void*)value);
	}
};

struct TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_StaticFields
{
public:
	// MLAgents.TimerStack MLAgents.TimerStack::k_Instance
	TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * ___k_Instance_0;

public:
	inline static int32_t get_offset_of_k_Instance_0() { return static_cast<int32_t>(offsetof(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_StaticFields, ___k_Instance_0)); }
	inline TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * get_k_Instance_0() const { return ___k_Instance_0; }
	inline TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F ** get_address_of_k_Instance_0() { return &___k_Instance_0; }
	inline void set_k_Instance_0(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * value)
	{
		___k_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Instance_0), (void*)value);
	}
};


// MLAgents.Utilities
struct  Utilities_tC016B9DD5E7D86F4FF4892A9D7DCD8B40F63A786  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_KeyCollection<System.String,System.Single>
struct  KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED, ___dictionary_0)); }
	inline Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.String,MLAgents.TimerNode>
struct  ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8, ___dictionary_0)); }
	inline Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode>
struct  Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEF06D2876DCD2AF9F18B164FEE359337F9188EEE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BF9C4D651DDA906FD91F9DD69234F56B397E223 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tAB1BD82DE7452D5C642D0B976EE8F3FF2CC749FE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___entries_1)); }
	inline EntryU5BU5D_tEF06D2876DCD2AF9F18B164FEE359337F9188EEE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEF06D2876DCD2AF9F18B164FEE359337F9188EEE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEF06D2876DCD2AF9F18B164FEE359337F9188EEE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___keys_7)); }
	inline KeyCollection_t9BF9C4D651DDA906FD91F9DD69234F56B397E223 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BF9C4D651DDA906FD91F9DD69234F56B397E223 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BF9C4D651DDA906FD91F9DD69234F56B397E223 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ___values_8)); }
	inline ValueCollection_tAB1BD82DE7452D5C642D0B976EE8F3FF2CC749FE * get_values_8() const { return ___values_8; }
	inline ValueCollection_tAB1BD82DE7452D5C642D0B976EE8F3FF2CC749FE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tAB1BD82DE7452D5C642D0B976EE8F3FF2CC749FE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>
struct  Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8F20763B4E2E31CB3F405F4D56C479A0E2EBF56D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t723DD13D588F9411A7F2DEEF48A40C3803D516B3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___entries_1)); }
	inline EntryU5BU5D_t8F20763B4E2E31CB3F405F4D56C479A0E2EBF56D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8F20763B4E2E31CB3F405F4D56C479A0E2EBF56D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8F20763B4E2E31CB3F405F4D56C479A0E2EBF56D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___keys_7)); }
	inline KeyCollection_t723DD13D588F9411A7F2DEEF48A40C3803D516B3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t723DD13D588F9411A7F2DEEF48A40C3803D516B3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t723DD13D588F9411A7F2DEEF48A40C3803D516B3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ___values_8)); }
	inline ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Single>>
struct  Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBEF21AC82FA5BC1A279B5D4B18C8B63D045850B4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8AEDBCB40C3C740CE479A4D40AC7B5CA495DEE12 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t246752580B16D95DC0B28769D915FDFAFD833318 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___entries_1)); }
	inline EntryU5BU5D_tBEF21AC82FA5BC1A279B5D4B18C8B63D045850B4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBEF21AC82FA5BC1A279B5D4B18C8B63D045850B4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBEF21AC82FA5BC1A279B5D4B18C8B63D045850B4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___keys_7)); }
	inline KeyCollection_t8AEDBCB40C3C740CE479A4D40AC7B5CA495DEE12 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8AEDBCB40C3C740CE479A4D40AC7B5CA495DEE12 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8AEDBCB40C3C740CE479A4D40AC7B5CA495DEE12 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ___values_8)); }
	inline ValueCollection_t246752580B16D95DC0B28769D915FDFAFD833318 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t246752580B16D95DC0B28769D915FDFAFD833318 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t246752580B16D95DC0B28769D915FDFAFD833318 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct  Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t06C60C942E5E5396F3966753FE4A0B9DBABA3DE8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6EEF1E80D56DE41F8CD5DDAE896FF3FB64E0D745 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___entries_1)); }
	inline EntryU5BU5D_t06C60C942E5E5396F3966753FE4A0B9DBABA3DE8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t06C60C942E5E5396F3966753FE4A0B9DBABA3DE8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t06C60C942E5E5396F3966753FE4A0B9DBABA3DE8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___keys_7)); }
	inline KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ___values_8)); }
	inline ValueCollection_t6EEF1E80D56DE41F8CD5DDAE896FF3FB64E0D745 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6EEF1E80D56DE41F8CD5DDAE896FF3FB64E0D745 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6EEF1E80D56DE41F8CD5DDAE896FF3FB64E0D745 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<MLAgents.Sensors.ISensor>
struct  List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60, ____items_1)); }
	inline ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056* get__items_1() const { return ____items_1; }
	inline ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60_StaticFields, ____emptyArray_5)); }
	inline ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISensorU5BU5D_t9454C29D100426E767613C09D2B28920993B9056* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____items_1)); }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32[]>
struct  List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____items_1)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get__items_1() const { return ____items_1; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t026D7A8C4D989218772DB3E051A624F753A60859  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<MLAgents.TimerNode>
struct  Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TimerNodeU5BU5D_t351E8AAA8A1CFCA15C37D10D21ABCCA4D15D185F* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520, ____array_0)); }
	inline TimerNodeU5BU5D_t351E8AAA8A1CFCA15C37D10D21ABCCA4D15D185F* get__array_0() const { return ____array_0; }
	inline TimerNodeU5BU5D_t351E8AAA8A1CFCA15C37D10D21ABCCA4D15D185F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TimerNodeU5BU5D_t351E8AAA8A1CFCA15C37D10D21ABCCA4D15D185F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_6)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.Runtime.Serialization.XmlObjectSerializer
struct  XmlObjectSerializer_tE7B7764541E2D8512375BC3DC0526F4475875C33  : public RuntimeObject
{
public:

public:
};

struct XmlObjectSerializer_tE7B7764541E2D8512375BC3DC0526F4475875C33_StaticFields
{
public:
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.XmlObjectSerializer::formatterConverter
	RuntimeObject* ___formatterConverter_0;

public:
	inline static int32_t get_offset_of_formatterConverter_0() { return static_cast<int32_t>(offsetof(XmlObjectSerializer_tE7B7764541E2D8512375BC3DC0526F4475875C33_StaticFields, ___formatterConverter_0)); }
	inline RuntimeObject* get_formatterConverter_0() const { return ___formatterConverter_0; }
	inline RuntimeObject** get_address_of_formatterConverter_0() { return &___formatterConverter_0; }
	inline void set_formatterConverter_0(RuntimeObject* value)
	{
		___formatterConverter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatterConverter_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Barracuda.TensorShape
struct  TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE 
{
public:
	// System.Int32 Barracuda.TensorShape::batch
	int32_t ___batch_0;
	// System.Int32 Barracuda.TensorShape::height
	int32_t ___height_1;
	// System.Int32 Barracuda.TensorShape::width
	int32_t ___width_2;
	// System.Int32 Barracuda.TensorShape::channels
	int32_t ___channels_3;

public:
	inline static int32_t get_offset_of_batch_0() { return static_cast<int32_t>(offsetof(TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE, ___batch_0)); }
	inline int32_t get_batch_0() const { return ___batch_0; }
	inline int32_t* get_address_of_batch_0() { return &___batch_0; }
	inline void set_batch_0(int32_t value)
	{
		___batch_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_channels_3() { return static_cast<int32_t>(offsetof(TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE, ___channels_3)); }
	inline int32_t get_channels_3() const { return ___channels_3; }
	inline int32_t* get_address_of_channels_3() { return &___channels_3; }
	inline void set_channels_3(int32_t value)
	{
		___channels_3 = value;
	}
};


// MLAgents.UnityRLInitParameters
struct  UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475 
{
public:
	// System.Int32 MLAgents.UnityRLInitParameters::seed
	int32_t ___seed_0;
	// System.String MLAgents.UnityRLInitParameters::pythonLibraryVersion
	String_t* ___pythonLibraryVersion_1;
	// System.String MLAgents.UnityRLInitParameters::pythonCommunicationVersion
	String_t* ___pythonCommunicationVersion_2;

public:
	inline static int32_t get_offset_of_seed_0() { return static_cast<int32_t>(offsetof(UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475, ___seed_0)); }
	inline int32_t get_seed_0() const { return ___seed_0; }
	inline int32_t* get_address_of_seed_0() { return &___seed_0; }
	inline void set_seed_0(int32_t value)
	{
		___seed_0 = value;
	}

	inline static int32_t get_offset_of_pythonLibraryVersion_1() { return static_cast<int32_t>(offsetof(UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475, ___pythonLibraryVersion_1)); }
	inline String_t* get_pythonLibraryVersion_1() const { return ___pythonLibraryVersion_1; }
	inline String_t** get_address_of_pythonLibraryVersion_1() { return &___pythonLibraryVersion_1; }
	inline void set_pythonLibraryVersion_1(String_t* value)
	{
		___pythonLibraryVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pythonLibraryVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_pythonCommunicationVersion_2() { return static_cast<int32_t>(offsetof(UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475, ___pythonCommunicationVersion_2)); }
	inline String_t* get_pythonCommunicationVersion_2() const { return ___pythonCommunicationVersion_2; }
	inline String_t** get_address_of_pythonCommunicationVersion_2() { return &___pythonCommunicationVersion_2; }
	inline void set_pythonCommunicationVersion_2(String_t* value)
	{
		___pythonCommunicationVersion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pythonCommunicationVersion_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of MLAgents.UnityRLInitParameters
struct UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_pinvoke
{
	int32_t ___seed_0;
	char* ___pythonLibraryVersion_1;
	char* ___pythonCommunicationVersion_2;
};
// Native definition for COM marshalling of MLAgents.UnityRLInitParameters
struct UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_com
{
	int32_t ___seed_0;
	Il2CppChar* ___pythonLibraryVersion_1;
	Il2CppChar* ___pythonCommunicationVersion_2;
};

// MLAgents.UnityRLInputParameters
struct  UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F 
{
public:
	// System.Boolean MLAgents.UnityRLInputParameters::isTraining
	bool ___isTraining_0;

public:
	inline static int32_t get_offset_of_isTraining_0() { return static_cast<int32_t>(offsetof(UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F, ___isTraining_0)); }
	inline bool get_isTraining_0() const { return ___isTraining_0; }
	inline bool* get_address_of_isTraining_0() { return &___isTraining_0; }
	inline void set_isTraining_0(bool value)
	{
		___isTraining_0 = value;
	}
};

// Native definition for P/Invoke marshalling of MLAgents.UnityRLInputParameters
struct UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_pinvoke
{
	int32_t ___isTraining_0;
};
// Native definition for COM marshalling of MLAgents.UnityRLInputParameters
struct UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_com
{
	int32_t ___isTraining_0;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.Object,System.Object>
struct  Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.String,MLAgents.TimerNode>
struct  Enumerator_t6B652C2015073042D685DC96B824F75531C757BB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::dictionary
	Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::currentValue
	TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t6B652C2015073042D685DC96B824F75531C757BB, ___dictionary_0)); }
	inline Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6B652C2015073042D685DC96B824F75531C757BB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6B652C2015073042D685DC96B824F75531C757BB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t6B652C2015073042D685DC96B824F75531C757BB, ___currentValue_3)); }
	inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * get_currentValue_3() const { return ___currentValue_3; }
	inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<MLAgents.Sensors.ISensor>
struct  Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4, ___list_0)); }
	inline List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * get_list_0() const { return ___list_0; }
	inline List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Barracuda.Tensor
struct  Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437  : public RuntimeObject
{
public:
	// Barracuda.ITensorData Barracuda.Tensor::m_TensorOnDevice
	RuntimeObject* ___m_TensorOnDevice_0;
	// Barracuda.ITensorAllocator Barracuda.Tensor::m_TensorAllocator
	RuntimeObject* ___m_TensorAllocator_1;
	// System.Single[] Barracuda.Tensor::m_Cache
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Cache_2;
	// System.Boolean Barracuda.Tensor::m_CacheIsDirty
	bool ___m_CacheIsDirty_3;
	// System.String Barracuda.Tensor::name
	String_t* ___name_4;
	// Barracuda.TensorShape Barracuda.Tensor::shape
	TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  ___shape_5;
	// System.Boolean Barracuda.Tensor::m_Disposing
	bool ___m_Disposing_6;

public:
	inline static int32_t get_offset_of_m_TensorOnDevice_0() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___m_TensorOnDevice_0)); }
	inline RuntimeObject* get_m_TensorOnDevice_0() const { return ___m_TensorOnDevice_0; }
	inline RuntimeObject** get_address_of_m_TensorOnDevice_0() { return &___m_TensorOnDevice_0; }
	inline void set_m_TensorOnDevice_0(RuntimeObject* value)
	{
		___m_TensorOnDevice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TensorOnDevice_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TensorAllocator_1() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___m_TensorAllocator_1)); }
	inline RuntimeObject* get_m_TensorAllocator_1() const { return ___m_TensorAllocator_1; }
	inline RuntimeObject** get_address_of_m_TensorAllocator_1() { return &___m_TensorAllocator_1; }
	inline void set_m_TensorAllocator_1(RuntimeObject* value)
	{
		___m_TensorAllocator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TensorAllocator_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_2() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___m_Cache_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Cache_2() const { return ___m_Cache_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Cache_2() { return &___m_Cache_2; }
	inline void set_m_Cache_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Cache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheIsDirty_3() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___m_CacheIsDirty_3)); }
	inline bool get_m_CacheIsDirty_3() const { return ___m_CacheIsDirty_3; }
	inline bool* get_address_of_m_CacheIsDirty_3() { return &___m_CacheIsDirty_3; }
	inline void set_m_CacheIsDirty_3(bool value)
	{
		___m_CacheIsDirty_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_shape_5() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___shape_5)); }
	inline TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  get_shape_5() const { return ___shape_5; }
	inline TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * get_address_of_shape_5() { return &___shape_5; }
	inline void set_shape_5(TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  value)
	{
		___shape_5 = value;
	}

	inline static int32_t get_offset_of_m_Disposing_6() { return static_cast<int32_t>(offsetof(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437, ___m_Disposing_6)); }
	inline bool get_m_Disposing_6() const { return ___m_Disposing_6; }
	inline bool* get_address_of_m_Disposing_6() { return &___m_Disposing_6; }
	inline void set_m_Disposing_6(bool value)
	{
		___m_Disposing_6 = value;
	}
};


// MLAgents.Inference.TensorProxy_TensorType
struct  TensorType_tA1B074DFDD368807F37F770DA179E8B50C76F7AD 
{
public:
	// System.Int32 MLAgents.Inference.TensorProxy_TensorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TensorType_tA1B074DFDD368807F37F770DA179E8B50C76F7AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAgents.Sensors.SensorCompressionType
struct  SensorCompressionType_t9A1608C6F34157B554246467A78BD5C71BF2924B 
{
public:
	// System.Int32 MLAgents.Sensors.SensorCompressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SensorCompressionType_t9A1608C6F34157B554246467A78BD5C71BF2924B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAgents.Sensors.WriteAdapter
struct  WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Single> MLAgents.Sensors.WriteAdapter::m_Data
	RuntimeObject* ___m_Data_0;
	// System.Int32 MLAgents.Sensors.WriteAdapter::m_Offset
	int32_t ___m_Offset_1;
	// MLAgents.Inference.TensorProxy MLAgents.Sensors.WriteAdapter::m_Proxy
	TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * ___m_Proxy_2;
	// System.Int32 MLAgents.Sensors.WriteAdapter::m_Batch
	int32_t ___m_Batch_3;
	// Barracuda.TensorShape MLAgents.Sensors.WriteAdapter::m_TensorShape
	TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  ___m_TensorShape_4;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C, ___m_Data_0)); }
	inline RuntimeObject* get_m_Data_0() const { return ___m_Data_0; }
	inline RuntimeObject** get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(RuntimeObject* value)
	{
		___m_Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_1() { return static_cast<int32_t>(offsetof(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C, ___m_Offset_1)); }
	inline int32_t get_m_Offset_1() const { return ___m_Offset_1; }
	inline int32_t* get_address_of_m_Offset_1() { return &___m_Offset_1; }
	inline void set_m_Offset_1(int32_t value)
	{
		___m_Offset_1 = value;
	}

	inline static int32_t get_offset_of_m_Proxy_2() { return static_cast<int32_t>(offsetof(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C, ___m_Proxy_2)); }
	inline TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * get_m_Proxy_2() const { return ___m_Proxy_2; }
	inline TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 ** get_address_of_m_Proxy_2() { return &___m_Proxy_2; }
	inline void set_m_Proxy_2(TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * value)
	{
		___m_Proxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Proxy_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Batch_3() { return static_cast<int32_t>(offsetof(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C, ___m_Batch_3)); }
	inline int32_t get_m_Batch_3() const { return ___m_Batch_3; }
	inline int32_t* get_address_of_m_Batch_3() { return &___m_Batch_3; }
	inline void set_m_Batch_3(int32_t value)
	{
		___m_Batch_3 = value;
	}

	inline static int32_t get_offset_of_m_TensorShape_4() { return static_cast<int32_t>(offsetof(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C, ___m_TensorShape_4)); }
	inline TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  get_m_TensorShape_4() const { return ___m_TensorShape_4; }
	inline TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * get_address_of_m_TensorShape_4() { return &___m_TensorShape_4; }
	inline void set_m_TensorShape_4(TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  value)
	{
		___m_TensorShape_4 = value;
	}
};


// MLAgents.SideChannels.SideChannel
struct  SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> MLAgents.SideChannels.SideChannel::MessageQueue
	List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * ___MessageQueue_0;
	// System.Guid MLAgents.SideChannels.SideChannel::<ChannelId>k__BackingField
	Guid_t  ___U3CChannelIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_MessageQueue_0() { return static_cast<int32_t>(offsetof(SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F, ___MessageQueue_0)); }
	inline List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * get_MessageQueue_0() const { return ___MessageQueue_0; }
	inline List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC ** get_address_of_MessageQueue_0() { return &___MessageQueue_0; }
	inline void set_MessageQueue_0(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * value)
	{
		___MessageQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageQueue_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline Guid_t  get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline Guid_t * get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(Guid_t  value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.EmitTypeInformation
struct  EmitTypeInformation_tC4250E784B4901EF2B7DE2DCDC070B96F2502441 
{
public:
	// System.Int32 System.Runtime.Serialization.EmitTypeInformation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EmitTypeInformation_tC4250E784B4901EF2B7DE2DCDC070B96F2502441, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Profiling.Sampler
struct  Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Profiling.Sampler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4_StaticFields
{
public:
	// UnityEngine.Profiling.Sampler UnityEngine.Profiling.Sampler::s_InvalidSampler
	Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4 * ___s_InvalidSampler_1;

public:
	inline static int32_t get_offset_of_s_InvalidSampler_1() { return static_cast<int32_t>(offsetof(Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4_StaticFields, ___s_InvalidSampler_1)); }
	inline Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4 * get_s_InvalidSampler_1() const { return ___s_InvalidSampler_1; }
	inline Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4 ** get_address_of_s_InvalidSampler_1() { return &___s_InvalidSampler_1; }
	inline void set_s_InvalidSampler_1(Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4 * value)
	{
		___s_InvalidSampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidSampler_1), (void*)value);
	}
};


// MLAgents.Inference.TensorProxy
struct  TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1  : public RuntimeObject
{
public:
	// System.String MLAgents.Inference.TensorProxy::name
	String_t* ___name_1;
	// MLAgents.Inference.TensorProxy_TensorType MLAgents.Inference.TensorProxy::valueType
	int32_t ___valueType_2;
	// System.Int64[] MLAgents.Inference.TensorProxy::shape
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape_3;
	// Barracuda.Tensor MLAgents.Inference.TensorProxy::data
	Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * ___data_4;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueType_2() { return static_cast<int32_t>(offsetof(TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1, ___valueType_2)); }
	inline int32_t get_valueType_2() const { return ___valueType_2; }
	inline int32_t* get_address_of_valueType_2() { return &___valueType_2; }
	inline void set_valueType_2(int32_t value)
	{
		___valueType_2 = value;
	}

	inline static int32_t get_offset_of_shape_3() { return static_cast<int32_t>(offsetof(TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1, ___shape_3)); }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* get_shape_3() const { return ___shape_3; }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F** get_address_of_shape_3() { return &___shape_3; }
	inline void set_shape_3(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* value)
	{
		___shape_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape_3), (void*)value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1, ___data_4)); }
	inline Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * get_data_4() const { return ___data_4; }
	inline Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};

struct TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<MLAgents.Inference.TensorProxy_TensorType,System.Type> MLAgents.Inference.TensorProxy::k_TypeMap
	Dictionary_2_t7720BF870270A1BB333953CCDD12937148951294 * ___k_TypeMap_0;

public:
	inline static int32_t get_offset_of_k_TypeMap_0() { return static_cast<int32_t>(offsetof(TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1_StaticFields, ___k_TypeMap_0)); }
	inline Dictionary_2_t7720BF870270A1BB333953CCDD12937148951294 * get_k_TypeMap_0() const { return ___k_TypeMap_0; }
	inline Dictionary_2_t7720BF870270A1BB333953CCDD12937148951294 ** get_address_of_k_TypeMap_0() { return &___k_TypeMap_0; }
	inline void set_k_TypeMap_0(Dictionary_2_t7720BF870270A1BB333953CCDD12937148951294 * value)
	{
		___k_TypeMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_TypeMap_0), (void*)value);
	}
};


// MLAgents.Sensors.RenderTextureSensor
struct  RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A  : public RuntimeObject
{
public:
	// UnityEngine.RenderTexture MLAgents.Sensors.RenderTextureSensor::m_RenderTexture
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___m_RenderTexture_0;
	// System.Boolean MLAgents.Sensors.RenderTextureSensor::m_Grayscale
	bool ___m_Grayscale_1;
	// System.String MLAgents.Sensors.RenderTextureSensor::m_Name
	String_t* ___m_Name_2;
	// System.Int32[] MLAgents.Sensors.RenderTextureSensor::m_Shape
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_Shape_3;
	// MLAgents.Sensors.SensorCompressionType MLAgents.Sensors.RenderTextureSensor::m_CompressionType
	int32_t ___m_CompressionType_4;

public:
	inline static int32_t get_offset_of_m_RenderTexture_0() { return static_cast<int32_t>(offsetof(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A, ___m_RenderTexture_0)); }
	inline RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * get_m_RenderTexture_0() const { return ___m_RenderTexture_0; }
	inline RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 ** get_address_of_m_RenderTexture_0() { return &___m_RenderTexture_0; }
	inline void set_m_RenderTexture_0(RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * value)
	{
		___m_RenderTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Grayscale_1() { return static_cast<int32_t>(offsetof(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A, ___m_Grayscale_1)); }
	inline bool get_m_Grayscale_1() const { return ___m_Grayscale_1; }
	inline bool* get_address_of_m_Grayscale_1() { return &___m_Grayscale_1; }
	inline void set_m_Grayscale_1(bool value)
	{
		___m_Grayscale_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Shape_3() { return static_cast<int32_t>(offsetof(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A, ___m_Shape_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_Shape_3() const { return ___m_Shape_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_Shape_3() { return &___m_Shape_3; }
	inline void set_m_Shape_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_Shape_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shape_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_CompressionType_4() { return static_cast<int32_t>(offsetof(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A, ___m_CompressionType_4)); }
	inline int32_t get_m_CompressionType_4() const { return ___m_CompressionType_4; }
	inline int32_t* get_address_of_m_CompressionType_4() { return &___m_CompressionType_4; }
	inline void set_m_CompressionType_4(int32_t value)
	{
		___m_CompressionType_4 = value;
	}
};


// MLAgents.SideChannels.EngineConfigurationChannel
struct  EngineConfigurationChannel_t3DE3175CA8308F40586A4B62CE99D3E1776E6E3C  : public SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F
{
public:

public:
};


// MLAgents.SideChannels.FloatPropertiesChannel
struct  FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234  : public SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> MLAgents.SideChannels.FloatPropertiesChannel::m_FloatProperties
	Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * ___m_FloatProperties_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Single>> MLAgents.SideChannels.FloatPropertiesChannel::m_RegisteredActions
	Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * ___m_RegisteredActions_3;

public:
	inline static int32_t get_offset_of_m_FloatProperties_2() { return static_cast<int32_t>(offsetof(FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234, ___m_FloatProperties_2)); }
	inline Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * get_m_FloatProperties_2() const { return ___m_FloatProperties_2; }
	inline Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A ** get_address_of_m_FloatProperties_2() { return &___m_FloatProperties_2; }
	inline void set_m_FloatProperties_2(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * value)
	{
		___m_FloatProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FloatProperties_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredActions_3() { return static_cast<int32_t>(offsetof(FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234, ___m_RegisteredActions_3)); }
	inline Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * get_m_RegisteredActions_3() const { return ___m_RegisteredActions_3; }
	inline Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 ** get_address_of_m_RegisteredActions_3() { return &___m_RegisteredActions_3; }
	inline void set_m_RegisteredActions_3(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * value)
	{
		___m_RegisteredActions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredActions_3), (void*)value);
	}
};


// MLAgents.SideChannels.RawBytesChannel
struct  RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960  : public SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> MLAgents.SideChannels.RawBytesChannel::m_MessagesReceived
	List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * ___m_MessagesReceived_2;

public:
	inline static int32_t get_offset_of_m_MessagesReceived_2() { return static_cast<int32_t>(offsetof(RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960, ___m_MessagesReceived_2)); }
	inline List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * get_m_MessagesReceived_2() const { return ___m_MessagesReceived_2; }
	inline List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC ** get_address_of_m_MessagesReceived_2() { return &___m_MessagesReceived_2; }
	inline void set_m_MessagesReceived_2(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * value)
	{
		___m_MessagesReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessagesReceived_2), (void*)value);
	}
};


// MLAgents.UnityAgentsException
struct  UnityAgentsException_t5376D7577819EFFC7457A7DCE829311EBA93FD5A  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Runtime.Serialization.Json.DataContractJsonSerializer
struct  DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098  : public XmlObjectSerializer_tE7B7764541E2D8512375BC3DC0526F4475875C33
{
public:
	// System.Collections.Generic.IList`1<System.Type> System.Runtime.Serialization.Json.DataContractJsonSerializer::knownTypeList
	RuntimeObject* ___knownTypeList_1;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Runtime.Serialization.DataContract> System.Runtime.Serialization.Json.DataContractJsonSerializer::knownDataContracts
	Dictionary_2_t80E95B5C8E47413831CB9DDFF26B196F98EDE222 * ___knownDataContracts_2;
	// System.Runtime.Serialization.EmitTypeInformation System.Runtime.Serialization.Json.DataContractJsonSerializer::emitTypeInformation
	int32_t ___emitTypeInformation_3;
	// System.Runtime.Serialization.IDataContractSurrogate System.Runtime.Serialization.Json.DataContractJsonSerializer::dataContractSurrogate
	RuntimeObject* ___dataContractSurrogate_4;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializer::ignoreExtensionDataObject
	bool ___ignoreExtensionDataObject_5;
	// System.Int32 System.Runtime.Serialization.Json.DataContractJsonSerializer::maxItemsInObjectGraph
	int32_t ___maxItemsInObjectGraph_6;
	// System.Runtime.Serialization.DataContract System.Runtime.Serialization.Json.DataContractJsonSerializer::rootContract
	DataContract_tE893992323EF025452146F4B23FC66D9DAA63E4A * ___rootContract_7;
	// System.Xml.XmlDictionaryString System.Runtime.Serialization.Json.DataContractJsonSerializer::rootName
	XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * ___rootName_8;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializer::rootNameRequiresMapping
	bool ___rootNameRequiresMapping_9;
	// System.Type System.Runtime.Serialization.Json.DataContractJsonSerializer::rootType
	Type_t * ___rootType_10;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializer::serializeReadOnlyTypes
	bool ___serializeReadOnlyTypes_11;
	// System.Runtime.Serialization.DateTimeFormat System.Runtime.Serialization.Json.DataContractJsonSerializer::dateTimeFormat
	DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 * ___dateTimeFormat_12;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializer::useSimpleDictionaryFormat
	bool ___useSimpleDictionaryFormat_13;

public:
	inline static int32_t get_offset_of_knownTypeList_1() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___knownTypeList_1)); }
	inline RuntimeObject* get_knownTypeList_1() const { return ___knownTypeList_1; }
	inline RuntimeObject** get_address_of_knownTypeList_1() { return &___knownTypeList_1; }
	inline void set_knownTypeList_1(RuntimeObject* value)
	{
		___knownTypeList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___knownTypeList_1), (void*)value);
	}

	inline static int32_t get_offset_of_knownDataContracts_2() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___knownDataContracts_2)); }
	inline Dictionary_2_t80E95B5C8E47413831CB9DDFF26B196F98EDE222 * get_knownDataContracts_2() const { return ___knownDataContracts_2; }
	inline Dictionary_2_t80E95B5C8E47413831CB9DDFF26B196F98EDE222 ** get_address_of_knownDataContracts_2() { return &___knownDataContracts_2; }
	inline void set_knownDataContracts_2(Dictionary_2_t80E95B5C8E47413831CB9DDFF26B196F98EDE222 * value)
	{
		___knownDataContracts_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___knownDataContracts_2), (void*)value);
	}

	inline static int32_t get_offset_of_emitTypeInformation_3() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___emitTypeInformation_3)); }
	inline int32_t get_emitTypeInformation_3() const { return ___emitTypeInformation_3; }
	inline int32_t* get_address_of_emitTypeInformation_3() { return &___emitTypeInformation_3; }
	inline void set_emitTypeInformation_3(int32_t value)
	{
		___emitTypeInformation_3 = value;
	}

	inline static int32_t get_offset_of_dataContractSurrogate_4() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___dataContractSurrogate_4)); }
	inline RuntimeObject* get_dataContractSurrogate_4() const { return ___dataContractSurrogate_4; }
	inline RuntimeObject** get_address_of_dataContractSurrogate_4() { return &___dataContractSurrogate_4; }
	inline void set_dataContractSurrogate_4(RuntimeObject* value)
	{
		___dataContractSurrogate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataContractSurrogate_4), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreExtensionDataObject_5() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___ignoreExtensionDataObject_5)); }
	inline bool get_ignoreExtensionDataObject_5() const { return ___ignoreExtensionDataObject_5; }
	inline bool* get_address_of_ignoreExtensionDataObject_5() { return &___ignoreExtensionDataObject_5; }
	inline void set_ignoreExtensionDataObject_5(bool value)
	{
		___ignoreExtensionDataObject_5 = value;
	}

	inline static int32_t get_offset_of_maxItemsInObjectGraph_6() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___maxItemsInObjectGraph_6)); }
	inline int32_t get_maxItemsInObjectGraph_6() const { return ___maxItemsInObjectGraph_6; }
	inline int32_t* get_address_of_maxItemsInObjectGraph_6() { return &___maxItemsInObjectGraph_6; }
	inline void set_maxItemsInObjectGraph_6(int32_t value)
	{
		___maxItemsInObjectGraph_6 = value;
	}

	inline static int32_t get_offset_of_rootContract_7() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___rootContract_7)); }
	inline DataContract_tE893992323EF025452146F4B23FC66D9DAA63E4A * get_rootContract_7() const { return ___rootContract_7; }
	inline DataContract_tE893992323EF025452146F4B23FC66D9DAA63E4A ** get_address_of_rootContract_7() { return &___rootContract_7; }
	inline void set_rootContract_7(DataContract_tE893992323EF025452146F4B23FC66D9DAA63E4A * value)
	{
		___rootContract_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootContract_7), (void*)value);
	}

	inline static int32_t get_offset_of_rootName_8() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___rootName_8)); }
	inline XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * get_rootName_8() const { return ___rootName_8; }
	inline XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 ** get_address_of_rootName_8() { return &___rootName_8; }
	inline void set_rootName_8(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * value)
	{
		___rootName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootName_8), (void*)value);
	}

	inline static int32_t get_offset_of_rootNameRequiresMapping_9() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___rootNameRequiresMapping_9)); }
	inline bool get_rootNameRequiresMapping_9() const { return ___rootNameRequiresMapping_9; }
	inline bool* get_address_of_rootNameRequiresMapping_9() { return &___rootNameRequiresMapping_9; }
	inline void set_rootNameRequiresMapping_9(bool value)
	{
		___rootNameRequiresMapping_9 = value;
	}

	inline static int32_t get_offset_of_rootType_10() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___rootType_10)); }
	inline Type_t * get_rootType_10() const { return ___rootType_10; }
	inline Type_t ** get_address_of_rootType_10() { return &___rootType_10; }
	inline void set_rootType_10(Type_t * value)
	{
		___rootType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootType_10), (void*)value);
	}

	inline static int32_t get_offset_of_serializeReadOnlyTypes_11() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___serializeReadOnlyTypes_11)); }
	inline bool get_serializeReadOnlyTypes_11() const { return ___serializeReadOnlyTypes_11; }
	inline bool* get_address_of_serializeReadOnlyTypes_11() { return &___serializeReadOnlyTypes_11; }
	inline void set_serializeReadOnlyTypes_11(bool value)
	{
		___serializeReadOnlyTypes_11 = value;
	}

	inline static int32_t get_offset_of_dateTimeFormat_12() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___dateTimeFormat_12)); }
	inline DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 * get_dateTimeFormat_12() const { return ___dateTimeFormat_12; }
	inline DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 ** get_address_of_dateTimeFormat_12() { return &___dateTimeFormat_12; }
	inline void set_dateTimeFormat_12(DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 * value)
	{
		___dateTimeFormat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeFormat_12), (void*)value);
	}

	inline static int32_t get_offset_of_useSimpleDictionaryFormat_13() { return static_cast<int32_t>(offsetof(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098, ___useSimpleDictionaryFormat_13)); }
	inline bool get_useSimpleDictionaryFormat_13() const { return ___useSimpleDictionaryFormat_13; }
	inline bool* get_address_of_useSimpleDictionaryFormat_13() { return &___useSimpleDictionaryFormat_13; }
	inline void set_useSimpleDictionaryFormat_13(bool value)
	{
		___useSimpleDictionaryFormat_13 = value;
	}
};


// System.Runtime.Serialization.Json.DataContractJsonSerializerSettings
struct  DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::maxItemsInObjectGraph
	int32_t ___maxItemsInObjectGraph_0;
	// System.String System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<RootName>k__BackingField
	String_t* ___U3CRootNameU3Ek__BackingField_1;
	// System.Collections.Generic.IEnumerable`1<System.Type> System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<KnownTypes>k__BackingField
	RuntimeObject* ___U3CKnownTypesU3Ek__BackingField_2;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<IgnoreExtensionDataObject>k__BackingField
	bool ___U3CIgnoreExtensionDataObjectU3Ek__BackingField_3;
	// System.Runtime.Serialization.IDataContractSurrogate System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<DataContractSurrogate>k__BackingField
	RuntimeObject* ___U3CDataContractSurrogateU3Ek__BackingField_4;
	// System.Runtime.Serialization.EmitTypeInformation System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<EmitTypeInformation>k__BackingField
	int32_t ___U3CEmitTypeInformationU3Ek__BackingField_5;
	// System.Runtime.Serialization.DateTimeFormat System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<DateTimeFormat>k__BackingField
	DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 * ___U3CDateTimeFormatU3Ek__BackingField_6;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<SerializeReadOnlyTypes>k__BackingField
	bool ___U3CSerializeReadOnlyTypesU3Ek__BackingField_7;
	// System.Boolean System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::<UseSimpleDictionaryFormat>k__BackingField
	bool ___U3CUseSimpleDictionaryFormatU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_maxItemsInObjectGraph_0() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___maxItemsInObjectGraph_0)); }
	inline int32_t get_maxItemsInObjectGraph_0() const { return ___maxItemsInObjectGraph_0; }
	inline int32_t* get_address_of_maxItemsInObjectGraph_0() { return &___maxItemsInObjectGraph_0; }
	inline void set_maxItemsInObjectGraph_0(int32_t value)
	{
		___maxItemsInObjectGraph_0 = value;
	}

	inline static int32_t get_offset_of_U3CRootNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CRootNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CRootNameU3Ek__BackingField_1() const { return ___U3CRootNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRootNameU3Ek__BackingField_1() { return &___U3CRootNameU3Ek__BackingField_1; }
	inline void set_U3CRootNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CRootNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRootNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKnownTypesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CKnownTypesU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKnownTypesU3Ek__BackingField_2() const { return ___U3CKnownTypesU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKnownTypesU3Ek__BackingField_2() { return &___U3CKnownTypesU3Ek__BackingField_2; }
	inline void set_U3CKnownTypesU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKnownTypesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKnownTypesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoreExtensionDataObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CIgnoreExtensionDataObjectU3Ek__BackingField_3)); }
	inline bool get_U3CIgnoreExtensionDataObjectU3Ek__BackingField_3() const { return ___U3CIgnoreExtensionDataObjectU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIgnoreExtensionDataObjectU3Ek__BackingField_3() { return &___U3CIgnoreExtensionDataObjectU3Ek__BackingField_3; }
	inline void set_U3CIgnoreExtensionDataObjectU3Ek__BackingField_3(bool value)
	{
		___U3CIgnoreExtensionDataObjectU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDataContractSurrogateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CDataContractSurrogateU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CDataContractSurrogateU3Ek__BackingField_4() const { return ___U3CDataContractSurrogateU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CDataContractSurrogateU3Ek__BackingField_4() { return &___U3CDataContractSurrogateU3Ek__BackingField_4; }
	inline void set_U3CDataContractSurrogateU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CDataContractSurrogateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataContractSurrogateU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEmitTypeInformationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CEmitTypeInformationU3Ek__BackingField_5)); }
	inline int32_t get_U3CEmitTypeInformationU3Ek__BackingField_5() const { return ___U3CEmitTypeInformationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CEmitTypeInformationU3Ek__BackingField_5() { return &___U3CEmitTypeInformationU3Ek__BackingField_5; }
	inline void set_U3CEmitTypeInformationU3Ek__BackingField_5(int32_t value)
	{
		___U3CEmitTypeInformationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDateTimeFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CDateTimeFormatU3Ek__BackingField_6)); }
	inline DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 * get_U3CDateTimeFormatU3Ek__BackingField_6() const { return ___U3CDateTimeFormatU3Ek__BackingField_6; }
	inline DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 ** get_address_of_U3CDateTimeFormatU3Ek__BackingField_6() { return &___U3CDateTimeFormatU3Ek__BackingField_6; }
	inline void set_U3CDateTimeFormatU3Ek__BackingField_6(DateTimeFormat_t7C991C9118B82B4F2AEC936F1958B4855E4472D3 * value)
	{
		___U3CDateTimeFormatU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDateTimeFormatU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializeReadOnlyTypesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CSerializeReadOnlyTypesU3Ek__BackingField_7)); }
	inline bool get_U3CSerializeReadOnlyTypesU3Ek__BackingField_7() const { return ___U3CSerializeReadOnlyTypesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CSerializeReadOnlyTypesU3Ek__BackingField_7() { return &___U3CSerializeReadOnlyTypesU3Ek__BackingField_7; }
	inline void set_U3CSerializeReadOnlyTypesU3Ek__BackingField_7(bool value)
	{
		___U3CSerializeReadOnlyTypesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUseSimpleDictionaryFormatU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85, ___U3CUseSimpleDictionaryFormatU3Ek__BackingField_8)); }
	inline bool get_U3CUseSimpleDictionaryFormatU3Ek__BackingField_8() const { return ___U3CUseSimpleDictionaryFormatU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CUseSimpleDictionaryFormatU3Ek__BackingField_8() { return &___U3CUseSimpleDictionaryFormatU3Ek__BackingField_8; }
	inline void set_U3CUseSimpleDictionaryFormatU3Ek__BackingField_8(bool value)
	{
		___U3CUseSimpleDictionaryFormatU3Ek__BackingField_8 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Profiling.CustomSampler
struct  CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8  : public Sampler_t6BFBE2B578BC0C28F4A78C6EA545AB8A4C50C6A4
{
public:

public:
};

struct CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8_StaticFields
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::s_InvalidCustomSampler
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___s_InvalidCustomSampler_2;

public:
	inline static int32_t get_offset_of_s_InvalidCustomSampler_2() { return static_cast<int32_t>(offsetof(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8_StaticFields, ___s_InvalidCustomSampler_2)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_s_InvalidCustomSampler_2() const { return ___s_InvalidCustomSampler_2; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_s_InvalidCustomSampler_2() { return &___s_InvalidCustomSampler_2; }
	inline void set_s_InvalidCustomSampler_2(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___s_InvalidCustomSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidCustomSampler_2), (void*)value);
	}
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<System.Single>
struct  Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// MLAgents.Sensors.SensorComponent
struct  SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// MLAgents.Sensors.RenderTextureSensorComponent
struct  RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387  : public SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3
{
public:
	// MLAgents.Sensors.RenderTextureSensor MLAgents.Sensors.RenderTextureSensorComponent::m_Sensor
	RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * ___m_Sensor_4;
	// UnityEngine.RenderTexture MLAgents.Sensors.RenderTextureSensorComponent::m_RenderTexture
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___m_RenderTexture_5;
	// System.String MLAgents.Sensors.RenderTextureSensorComponent::m_SensorName
	String_t* ___m_SensorName_6;
	// System.Boolean MLAgents.Sensors.RenderTextureSensorComponent::m_Grayscale
	bool ___m_Grayscale_7;
	// MLAgents.Sensors.SensorCompressionType MLAgents.Sensors.RenderTextureSensorComponent::m_Compression
	int32_t ___m_Compression_8;

public:
	inline static int32_t get_offset_of_m_Sensor_4() { return static_cast<int32_t>(offsetof(RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387, ___m_Sensor_4)); }
	inline RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * get_m_Sensor_4() const { return ___m_Sensor_4; }
	inline RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A ** get_address_of_m_Sensor_4() { return &___m_Sensor_4; }
	inline void set_m_Sensor_4(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * value)
	{
		___m_Sensor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sensor_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderTexture_5() { return static_cast<int32_t>(offsetof(RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387, ___m_RenderTexture_5)); }
	inline RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * get_m_RenderTexture_5() const { return ___m_RenderTexture_5; }
	inline RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 ** get_address_of_m_RenderTexture_5() { return &___m_RenderTexture_5; }
	inline void set_m_RenderTexture_5(RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * value)
	{
		___m_RenderTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SensorName_6() { return static_cast<int32_t>(offsetof(RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387, ___m_SensorName_6)); }
	inline String_t* get_m_SensorName_6() const { return ___m_SensorName_6; }
	inline String_t** get_address_of_m_SensorName_6() { return &___m_SensorName_6; }
	inline void set_m_SensorName_6(String_t* value)
	{
		___m_SensorName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SensorName_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Grayscale_7() { return static_cast<int32_t>(offsetof(RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387, ___m_Grayscale_7)); }
	inline bool get_m_Grayscale_7() const { return ___m_Grayscale_7; }
	inline bool* get_address_of_m_Grayscale_7() { return &___m_Grayscale_7; }
	inline void set_m_Grayscale_7(bool value)
	{
		___m_Grayscale_7 = value;
	}

	inline static int32_t get_offset_of_m_Compression_8() { return static_cast<int32_t>(offsetof(RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387, ___m_Compression_8)); }
	inline int32_t get_m_Compression_8() const { return ___m_Compression_8; }
	inline int32_t* get_address_of_m_Compression_8() { return &___m_Compression_8; }
	inline void set_m_Compression_8(int32_t value)
	{
		___m_Compression_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Single[][]
struct SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* m_Items[1];

public:
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA54AC989707E5287F1F00DB85C4B04BFC2347116_gshared (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_gshared_inline (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1DCFD14CD7C1D9DF5E2BC5824AAC06C9A17517CD_gshared (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3_gshared (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, float ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m9B1C2D6517DBE1A4AC1943DE600534CDF7013912_gshared (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB107519A19171860F08F90294871306120E5443A_gshared (Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m465893427E54249F46D9B8EF774D1D6F9AD6E1DD_gshared (Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C * __this, RuntimeObject * ___key0, float ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_gshared (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * __this, float ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1C0F7BC15E9B1EACBFAA7779CC99AC6C81D8DBD_gshared (Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C * __this, RuntimeObject * ___key0, float* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t4456A03D539BE6A8E226E9456370974BD9251CF6 * Dictionary_2_get_Keys_m704B52FC4B5A65CC3B6DE151103F031A7D95A994_gshared (Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6  ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0_gshared (ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_gshared_inline (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93_gshared (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0_gshared (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mB892D933D8982A0702F4E09E2F0D7B0C33E2A4E1_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_mC61EBA30FB5C38A2AA2DBCBA68BED91953C8EE57_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);

// System.Void MLAgents.Sensors.RenderTextureSensorComponent::UpdateSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent_UpdateSensor_m3B2D046061BD3B1A24062AF7A0BD270F9592F948 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture MLAgents.Sensors.RenderTextureSensorComponent::get_renderTexture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method);
// System.Boolean MLAgents.Sensors.RenderTextureSensorComponent::get_grayscale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RenderTextureSensorComponent_get_grayscale_mF065C256918315D375BF0FF79E53F5750A6E3843_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method);
// System.String MLAgents.Sensors.RenderTextureSensorComponent::get_sensorName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RenderTextureSensorComponent_get_sensorName_m3516D07295722E44D8AEA563086A67FDA00634EB_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method);
// MLAgents.Sensors.SensorCompressionType MLAgents.Sensors.RenderTextureSensorComponent::get_compression()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RenderTextureSensorComponent_get_compression_mDBFD61A9859CCD332851D4F9916CE2FE982B5732_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.RenderTextureSensor::.ctor(UnityEngine.RenderTexture,System.Boolean,System.String,MLAgents.Sensors.SensorCompressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensor__ctor_mBC95B282AB1C2B606FFAF728FFAEB977E9E3E90C (RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___renderTexture0, bool ___grayscale1, String_t* ___name2, int32_t ___compressionType3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.RenderTextureSensor::set_compressionType(MLAgents.Sensors.SensorCompressionType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RenderTextureSensor_set_compressionType_mFC36826D60A05B1BCD3E025BEA440B49ECDEB99A_inline (RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.SensorComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorComponent__ctor_mC1C69AADFED5BAF9D9F28C42CE5955562F045454 (SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<MLAgents.Sensors.ISensor>::get_Count()
inline int32_t List_1_get_Count_mB8F183781871D16C1DC6628340B5F5F19603AB5C_inline (List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32[]>::.ctor(System.Int32)
inline void List_1__ctor_mBA962B312529AAD38D12E8A24FDBA917D15956AF (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<MLAgents.Sensors.ISensor>::GetEnumerator()
inline Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4  List_1_GetEnumerator_m14EB0C46C93AA60CFB46FE91B6A436039C3DC3F9 (List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4  (*) (List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<MLAgents.Sensors.ISensor>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m30D2E90DDB5306EE08A9D6BEC42FB5BB7B91F618_inline (Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32[]>::Add(!0)
inline void List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<MLAgents.Sensors.ISensor>::MoveNext()
inline bool Enumerator_MoveNext_m99E376E27B906E23D4CC77DD87354766696672A2 (Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MLAgents.Sensors.ISensor>::Dispose()
inline void Enumerator_Dispose_mC900D5AA14C8DB2B29884BABD92106A7504EE19E (Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32[]>::get_Item(System.Int32)
inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_get_Item_mD477BFDA20CA277DDDE9A13F924161A8376739AE_inline (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<MLAgents.Sensors.ISensor>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mC60C21898063A4934F92E05D90722EBEEEA23718_inline (List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32[]>::get_Count()
inline int32_t List_1_get_Count_mAC463AC73D793B22599596C008994F78C3AF0BE9_inline (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.WriteAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter__ctor_m5DD36BFD0A7A709ED23DF96CCB0E90B6F35751EF (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Int32 MLAgents.Sensors.SensorExtensions::ObservationSize(MLAgents.Sensors.ISensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SensorExtensions_ObservationSize_mEA36DBDE2C8C22F4CD711B634CB2F60302E12DCF (RuntimeObject* ___sensor0, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.WriteAdapter::SetTarget(System.Collections.Generic.IList`1<System.Single>,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_SetTarget_m7561CBEA778996136DC99B317F92D6DDBF239EC6 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, RuntimeObject* ___data0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___shape1, int32_t ___offset2, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.WriteAdapter::AddRange(System.Collections.Generic.IEnumerable`1<System.Single>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_AddRange_m9FE7672FBBC19AD345B802373DC6C42C67F48F21 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, RuntimeObject* ___data0, int32_t ___writeOffset1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
inline void List_1__ctor_mA54AC989707E5287F1F00DB85C4B04BFC2347116 (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))List_1__ctor_mA54AC989707E5287F1F00DB85C4B04BFC2347116_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m1DCFD14CD7C1D9DF5E2BC5824AAC06C9A17517CD (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m1DCFD14CD7C1D9DF5E2BC5824AAC06C9A17517CD_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3 (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3_gshared)(__this, ___item0, method);
}
// System.Void MLAgents.Sensors.VectorSensor::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_Clear_m67A27876816FC71D85B623C1DB7DC777D458E74B (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m9B1C2D6517DBE1A4AC1943DE600534CDF7013912 (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))List_1_Clear_m9B1C2D6517DBE1A4AC1943DE600534CDF7013912_gshared)(__this, method);
}
// System.Void MLAgents.Sensors.VectorSensor::AddFloatObs(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, float ___obs0, const RuntimeMethod* method);
// System.Void Barracuda.TensorShape::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorShape__ctor_mCDBE4779F2D3EEA1F36E617A929121D617E8BB8E (TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * __this, int32_t ___b0, int32_t ___ch1, const RuntimeMethod* method);
// System.Void Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorShape__ctor_m9A0A809EBCED630D63544A50E85597927A1CB6BE (TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * __this, int32_t ___b0, int32_t ___h1, int32_t ___w2, int32_t ___ch3, const RuntimeMethod* method);
// System.Void Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tensor_set_Item_mB751EDBF5045491ED99A5B64DD428E989C31BEE4 (Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * __this, int32_t ___b0, int32_t ___ch1, float ___value2, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TensorShape_Index_m0838E2E9F156D3019058D05546A34EEECC3AA025 (TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * __this, int32_t ___b0, int32_t ___h1, int32_t ___w2, int32_t ___ch3, const RuntimeMethod* method);
// System.Void Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tensor_set_Item_m7C15EB3E3D68D12406BB0BA74DFBEF2CC6B6F056 (Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * __this, int32_t ___b0, int32_t ___h1, int32_t ___w2, int32_t ___ch3, float ___value4, const RuntimeMethod* method);
// System.Void MLAgents.SideChannels.SideChannel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752 (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.Void MLAgents.SideChannels.SideChannel::set_ChannelId(System.Guid)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967_inline (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, Guid_t  ___value0, const RuntimeMethod* method);
// System.Int32 MLAgents.SideChannels.IncomingMessage::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method);
// System.Single MLAgents.SideChannels.IncomingMessage::ReadFloat32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IncomingMessage_ReadFloat32_m839312FE1C4A7111F74FED51EA8BAD26F0B77673 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_mF2BE6F9BE1C07F7468D1770EC6E15694D256AF26 (int32_t ___width0, int32_t ___height1, bool ___fullscreen2, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551 (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_captureFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_captureFramerate_m9CE06049994A234AC1E129D650BBE70E8471B013 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_mD856D1FDC27C5FEBF33F5CA33572B780555B3A71 (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A *, const RuntimeMethod*))Dictionary_2__ctor_mB107519A19171860F08F90294871306120E5443A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Single>>::.ctor()
inline void Dictionary_2__ctor_m5AA098C95791D4D04768A419C978CCF2D6C50B9A (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52 (Guid_t  ___a0, Guid_t  ___b1, const RuntimeMethod* method);
// System.String MLAgents.SideChannels.IncomingMessage::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IncomingMessage_ReadString_m286DC037CA31A6C3AE04C6F17C971CDF2B4A3824 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m9C04CA39E37DE12B1B69BE0816A699A0E8547FD5 (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A *, String_t*, float, const RuntimeMethod*))Dictionary_2_set_Item_m465893427E54249F46D9B8EF774D1D6F9AD6E1DD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Single>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD8FD61B2548D7AFDF1B68CD62693A178C69156DA (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * __this, String_t* ___key0, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 *, String_t*, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<System.Single>::Invoke(!0)
inline void Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55 (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB *, float, const RuntimeMethod*))Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_gshared)(__this, ___obj0, method);
}
// System.Void MLAgents.SideChannels.OutgoingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage__ctor_m9CD5F10440FC406D6B41ABF8BFE319C1CBA62D8B (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, const RuntimeMethod* method);
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteString_m6B3F0FD699ACB30F2B546D9F691058EDFD0D72FD (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteFloat32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteFloat32_m1B4B69EC27D61494C92DF3539C7DE861D25EF628 (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, float ___f0, const RuntimeMethod* method);
// System.Void MLAgents.SideChannels.SideChannel::QueueMessageToSend(MLAgents.SideChannels.OutgoingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SideChannel_QueueMessageToSend_mF010D33728EE37F16323B4D9ECAC19530B2ADF6F (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * ___msg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1530F7CEF73C752C8EC99624161918B97222C8AF (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * __this, String_t* ___key0, float* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A *, String_t*, float*, const RuntimeMethod*))Dictionary_2_TryGetValue_mE1C0F7BC15E9B1EACBFAA7779CC99AC6C81D8DBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Single>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m35114EF43C240EBF37D72E10E3B64F7956287362 (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * __this, String_t* ___key0, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 *, String_t*, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
inline KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED * Dictionary_2_get_Keys_m9F3F788EF06F3E37AC1EAA1B6ACAF961DCE20B68 (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED * (*) (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A *, const RuntimeMethod*))Dictionary_2_get_Keys_m704B52FC4B5A65CC3B6DE151103F031A7D95A994_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared)(__this, ___collection0, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader_Dispose_m2047D05935E76EBB1E910D491671B339E320203C (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output0, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter_Dispose_m113A91A7BE5F7C89738C8C6C1D0E588B1A63C0FC (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, const RuntimeMethod* method);
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteInt32_mCCFBAFFD9DF2BCD5A62B4E43AC59423B3D436E59 (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547 (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Byte[] MLAgents.SideChannels.IncomingMessage::GetRawBytes()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* IncomingMessage_GetRawBytes_m94854FF75D37810387EF866C63DCEDCCB78DEC90_inline (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void MLAgents.SideChannels.OutgoingMessage::SetRawBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_SetRawBytes_mCD776C1A88C8685D2D5666ADC8C178279C90A01E (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m89244AB36E08C3A7B446145300B40A6B87113A9C (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_mC45B57C3443B3DC8F3BB87FE06B5F9409018DD29 (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Byte[] MLAgents.SideChannels.OutgoingMessage::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* OutgoingMessage_ToByteArray_m7E40D94739B29EFE9BA7622184C0903949044E2B (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Int64 MLAgents.TimerNode::get_CurrentTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimerNode_get_CurrentTicks_mEF4A536BF8BAE774451BFDCE6B5BFCF3332D9B80 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>::get_Values()
inline ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * Dictionary_2_get_Values_m774FD96EBEB6F9308DA314CEB064BF167857B270 (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * (*) (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 *, const RuntimeMethod*))Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,MLAgents.TimerNode>::GetEnumerator()
inline Enumerator_t6B652C2015073042D685DC96B824F75531C757BB  ValueCollection_GetEnumerator_m5EBFF170FD8FB121C7C3327584A77246E4157FD9 (ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6B652C2015073042D685DC96B824F75531C757BB  (*) (ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,MLAgents.TimerNode>::get_Current()
inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * Enumerator_get_Current_m0035ED15A62BCDB607BB9DEA0372E1540A6C030A_inline (Enumerator_t6B652C2015073042D685DC96B824F75531C757BB * __this, const RuntimeMethod* method)
{
	return ((  TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * (*) (Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *, const RuntimeMethod*))Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,MLAgents.TimerNode>::MoveNext()
inline bool Enumerator_MoveNext_mAADE052F2F2D16B51A7F4B30F15C0DC4E5565290 (Enumerator_t6B652C2015073042D685DC96B824F75531C757BB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *, const RuntimeMethod*))Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,MLAgents.TimerNode>::Dispose()
inline void Enumerator_Dispose_mF9A40CC2094555D50FE4AD4BAF6FFB1C83641FB2 (Enumerator_t6B652C2015073042D685DC96B824F75531C757BB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *, const RuntimeMethod*))Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode>::.ctor()
inline void Dictionary_2__ctor_m02123C0533F1433A912E9127E38288D99A947E14 (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * CustomSampler_Create_m454B8B69BB1085AAC8AFC39B1EB311474080C0BA (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>::.ctor()
inline void Dictionary_2__ctor_mE0D5616D9DBCF4B3660A3D11673DF8175BD3AD55 (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m10EC4DD8F19221E23FA2A65C1D766FF4AFE997BA (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void MLAgents.TimerNode::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode__ctor_m808910ACB4547A21A4BC43B0AC205422A2997A38 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, String_t* ___name0, bool ___isRoot1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF1E3D45A84F80A435302E1212777C0DFF90CB64A (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * __this, String_t* ___key0, TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 *, String_t*, TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,MLAgents.TimerNode>::get_Item(!0)
inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * Dictionary_2_get_Item_mBC0BB330D565CB110E2F1B287A0EDB44ED86D14D (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * (*) (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Double MLAgents.TimerNode::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimerNode_get_TotalSeconds_m88155A3BE60C7CF1962346397EF863B063D3D172 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String MLAgents.TimerNode::DebugGetTimerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerNode_DebugGetTimerString_m49CD4397EB0A96820F6262663961283C025DEDF3 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, String_t* ___parentName0, int32_t ___level1, const RuntimeMethod* method);
// System.Void MLAgents.TimerStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack__ctor_m7106A12136B16821EEADEDB9C75D4CA853390616 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method);
// System.Void MLAgents.TimerStack::Reset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Reset_mFBC996329C5A195EA9FF556C611335C026C58C80 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<MLAgents.TimerNode>::.ctor()
inline void Stack_1__ctor_mAFC5D8B2CFAF98823E0077C86A52B0F92D8C90AE (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 *, const RuntimeMethod*))Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<MLAgents.TimerNode>::Push(!0)
inline void Stack_1_Push_m159C6E24B2483316B9DECFEBF3616701352EA2C7 (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * __this, TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 *, TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE *, const RuntimeMethod*))Stack_1_Push_mB892D933D8982A0702F4E09E2F0D7B0C33E2A4E1_gshared)(__this, ___item0, method);
}
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB (float ___f0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode> MLAgents.TimerNode::get_Gauges()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * TimerNode_get_Gauges_m6294638153DBB9D45698B6EFAAA46AEFA0AE8678_inline (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD27F8CBF2E48C1DA21333C1A5FD525D2C035000E (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * __this, String_t* ___key0, GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 *, String_t*, GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void MLAgents.GaugeNode::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaugeNode_Update_m2EA3815C24EF2748855E6C7D2DA90075381EF81C (GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E * __this, float ___newValue0, const RuntimeMethod* method);
// System.Void MLAgents.GaugeNode::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaugeNode__ctor_m0119590985806700D8CBDA5D8551390BA856C682 (GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4CC0944B44714A69F8AE2DCB9A38009BF00C0017 (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * __this, String_t* ___key0, GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 *, String_t*, GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.Stack`1<MLAgents.TimerNode>::Peek()
inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * Stack_1_Peek_m23189E322CE0961BC9146B9C04090C64735B26AB (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * __this, const RuntimeMethod* method)
{
	return ((  TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * (*) (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 *, const RuntimeMethod*))Stack_1_Peek_mC61EBA30FB5C38A2AA2DBCBA68BED91953C8EE57_gshared)(__this, method);
}
// MLAgents.TimerNode MLAgents.TimerNode::GetChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * TimerNode_GetChild_m154B0197CE8AE7D4CEE260FB05D10544C8987474 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void MLAgents.TimerNode::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_Begin_mA8A00859375F136C170A583DB598C4438C04A811 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<MLAgents.TimerNode>::Pop()
inline TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * Stack_1_Pop_m76C45253389C3F44F1FDD6632AAB332B2F87D70D (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * __this, const RuntimeMethod* method)
{
	return ((  TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * (*) (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 *, const RuntimeMethod*))Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_gshared)(__this, method);
}
// System.Void MLAgents.TimerNode::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_End_m4B7B65D03E996548B6512C7097EAC8F0AB5A62FA (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method);
// System.Void MLAgents.TimerStack::Push(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Push_m4BCE0CFAD80D03754D1F6C8B3B51B15B059821E6 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void MLAgents.TimerStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Pop_m8DAE290FBBCA4EEC9786C48C141F98C3D1B521F5 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataContractJsonSerializerSettings__ctor_m526C449065A0F997BEF36138BD3E21DE2A2C5B1E (DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Json.DataContractJsonSerializerSettings::set_UseSimpleDictionaryFormat(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DataContractJsonSerializerSettings_set_UseSimpleDictionaryFormat_m1047ED1D4F66DFFEB5294B745A7EA281CC2020F1_inline (DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * __this, bool ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Json.DataContractJsonSerializer::.ctor(System.Type,System.Runtime.Serialization.Json.DataContractJsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataContractJsonSerializer__ctor_mE75BC688D06BC36A31A110B1C89EA0F4E0510043 (DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098 * __this, Type_t * ___type0, DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * ___settings1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void MLAgents.Sensors.WriteAdapter::set_Item(System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, int32_t ___h0, int32_t ___w1, int32_t ___ch2, float ___value3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.RenderTexture MLAgents.Sensors.RenderTextureSensorComponent::get_renderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_RenderTexture;  }
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_0 = __this->get_m_RenderTexture_5();
		return L_0;
	}
}
// System.Void MLAgents.Sensors.RenderTextureSensorComponent::set_renderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent_set_renderTexture_mD953330CFE7BC4A550125EA3789AD4316AD45EF4 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_RenderTexture = value;  }
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_0 = ___value0;
		__this->set_m_RenderTexture_5(L_0);
		// set { m_RenderTexture = value;  }
		return;
	}
}
// System.String MLAgents.Sensors.RenderTextureSensorComponent::get_sensorName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTextureSensorComponent_get_sensorName_m3516D07295722E44D8AEA563086A67FDA00634EB (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SensorName;  }
		String_t* L_0 = __this->get_m_SensorName_6();
		return L_0;
	}
}
// System.Void MLAgents.Sensors.RenderTextureSensorComponent::set_sensorName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent_set_sensorName_m3003943556F5872A077C05A3D7C76BF2E60811BB (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SensorName = value; }
		String_t* L_0 = ___value0;
		__this->set_m_SensorName_6(L_0);
		// set { m_SensorName = value; }
		return;
	}
}
// System.Boolean MLAgents.Sensors.RenderTextureSensorComponent::get_grayscale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTextureSensorComponent_get_grayscale_mF065C256918315D375BF0FF79E53F5750A6E3843 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Grayscale;  }
		bool L_0 = __this->get_m_Grayscale_7();
		return L_0;
	}
}
// System.Void MLAgents.Sensors.RenderTextureSensorComponent::set_grayscale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent_set_grayscale_m04A7DB374D397BF2F28D54AD36E7319BD0A5F140 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Grayscale = value; }
		bool L_0 = ___value0;
		__this->set_m_Grayscale_7(L_0);
		// set { m_Grayscale = value; }
		return;
	}
}
// MLAgents.Sensors.SensorCompressionType MLAgents.Sensors.RenderTextureSensorComponent::get_compression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTextureSensorComponent_get_compression_mDBFD61A9859CCD332851D4F9916CE2FE982B5732 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Compression;  }
		int32_t L_0 = __this->get_m_Compression_8();
		return L_0;
	}
}
// System.Void MLAgents.Sensors.RenderTextureSensorComponent::set_compression(MLAgents.Sensors.SensorCompressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent_set_compression_m510930B14B4FF6C0F00D7AB356123DFDCD69D865 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Compression = value; UpdateSensor(); }
		int32_t L_0 = ___value0;
		__this->set_m_Compression_8(L_0);
		// set { m_Compression = value; UpdateSensor(); }
		RenderTextureSensorComponent_UpdateSensor_m3B2D046061BD3B1A24062AF7A0BD270F9592F948(__this, /*hidden argument*/NULL);
		// set { m_Compression = value; UpdateSensor(); }
		return;
	}
}
// MLAgents.Sensors.ISensor MLAgents.Sensors.RenderTextureSensorComponent::CreateSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RenderTextureSensorComponent_CreateSensor_m4272771F4D0F019EC02804572BC217FC339B6082 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureSensorComponent_CreateSensor_m4272771F4D0F019EC02804572BC217FC339B6082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Sensor = new RenderTextureSensor(renderTexture, grayscale, sensorName, compression);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_0 = RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline(__this, /*hidden argument*/NULL);
		bool L_1 = RenderTextureSensorComponent_get_grayscale_mF065C256918315D375BF0FF79E53F5750A6E3843_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = RenderTextureSensorComponent_get_sensorName_m3516D07295722E44D8AEA563086A67FDA00634EB_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = RenderTextureSensorComponent_get_compression_mDBFD61A9859CCD332851D4F9916CE2FE982B5732_inline(__this, /*hidden argument*/NULL);
		RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * L_4 = (RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A *)il2cpp_codegen_object_new(RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A_il2cpp_TypeInfo_var);
		RenderTextureSensor__ctor_mBC95B282AB1C2B606FFAF728FFAEB977E9E3E90C(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_m_Sensor_4(L_4);
		// return m_Sensor;
		RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * L_5 = __this->get_m_Sensor_4();
		return L_5;
	}
}
// System.Int32[] MLAgents.Sensors.RenderTextureSensorComponent::GetObservationShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* RenderTextureSensorComponent_GetObservationShape_m680BA201488C6F3EF76509BF6A3FCA3A272063DD (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureSensorComponent_GetObservationShape_m680BA201488C6F3EF76509BF6A3FCA3A272063DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B8_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B7_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B9_2 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B9_3 = NULL;
	{
		// var width = renderTexture != null ? renderTexture.width : 0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_0 = RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_2 = RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		// var height = renderTexture != null ? renderTexture.height : 0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_4 = RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0039;
	}

IL_002e:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_6 = RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		G_B6_0 = L_7;
	}

IL_0039:
	{
		V_1 = G_B6_0;
		// return new[] { height, width, grayscale ? 1 : 3 };
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = L_8;
		int32_t L_10 = V_1;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_10);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = L_9;
		int32_t L_12 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_12);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = L_11;
		bool L_14 = RenderTextureSensorComponent_get_grayscale_mF065C256918315D375BF0FF79E53F5750A6E3843_inline(__this, /*hidden argument*/NULL);
		G_B7_0 = 2;
		G_B7_1 = L_13;
		G_B7_2 = L_13;
		if (L_14)
		{
			G_B8_0 = 2;
			G_B8_1 = L_13;
			G_B8_2 = L_13;
			goto IL_0055;
		}
	}
	{
		G_B9_0 = 3;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0056;
	}

IL_0055:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0056:
	{
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (int32_t)G_B9_0);
		return G_B9_3;
	}
}
// System.Void MLAgents.Sensors.RenderTextureSensorComponent::UpdateSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent_UpdateSensor_m3B2D046061BD3B1A24062AF7A0BD270F9592F948 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Sensor != null)
		RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * L_0 = __this->get_m_Sensor_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_Sensor.compressionType = m_Compression;
		RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * L_1 = __this->get_m_Sensor_4();
		int32_t L_2 = __this->get_m_Compression_8();
		RenderTextureSensor_set_compressionType_mFC36826D60A05B1BCD3E025BEA440B49ECDEB99A_inline(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.RenderTextureSensorComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureSensorComponent__ctor_m854AE2A5E5C607EE720B115D340642E50F623F08 (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureSensorComponent__ctor_m854AE2A5E5C607EE720B115D340642E50F623F08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string m_SensorName = "RenderTextureSensor";
		__this->set_m_SensorName_6(_stringLiteralA8DA53DDDECBB7B12FAED4F63FF21262EC2261E9);
		// SensorCompressionType m_Compression = SensorCompressionType.PNG;
		__this->set_m_Compression_8(1);
		SensorComponent__ctor_mC1C69AADFED5BAF9D9F28C42CE5955562F045454(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean MLAgents.Sensors.SensorComponent::IsVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SensorComponent_IsVisual_m7024CB70CD59FCE4C575744131355E2DBEA294AF (SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3 * __this, const RuntimeMethod* method)
{
	{
		// var shape = GetObservationShape();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = VirtFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(5 /* System.Int32[] MLAgents.Sensors.SensorComponent::GetObservationShape() */, __this);
		// return shape.Length == 3;
		return (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean MLAgents.Sensors.SensorComponent::IsVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SensorComponent_IsVector_m9309FF9B7EAF823151C0D1091BA86B0723E1A60A (SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3 * __this, const RuntimeMethod* method)
{
	{
		// var shape = GetObservationShape();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = VirtFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(5 /* System.Int32[] MLAgents.Sensors.SensorComponent::GetObservationShape() */, __this);
		// return shape.Length == 1;
		return (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void MLAgents.Sensors.SensorComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorComponent__ctor_mC1C69AADFED5BAF9D9F28C42CE5955562F045454 (SensorComponent_t32D487673E0D2012E6BEF399CBFB74FB82F99AC3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 MLAgents.Sensors.SensorExtensions::ObservationSize(MLAgents.Sensors.ISensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SensorExtensions_ObservationSize_mEA36DBDE2C8C22F4CD711B634CB2F60302E12DCF (RuntimeObject* ___sensor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SensorExtensions_ObservationSize_mEA36DBDE2C8C22F4CD711B634CB2F60302E12DCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var shape = sensor.GetObservationShape();
		RuntimeObject* L_0 = ___sensor0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = InterfaceFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(0 /* System.Int32[] MLAgents.Sensors.ISensor::GetObservationShape() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_0);
		// var count = 1;
		V_0 = 1;
		// foreach (var dim in shape)
		V_1 = L_1;
		V_2 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// foreach (var dim in shape)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// count *= dim;
		int32_t L_6 = V_0;
		int32_t L_7 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0019:
	{
		// foreach (var dim in shape)
		int32_t L_9 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// return count;
		int32_t L_11 = V_0;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.Sensors.SensorShapeValidator::ValidateSensors(System.Collections.Generic.List`1<MLAgents.Sensors.ISensor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorShapeValidator_ValidateSensors_m4F78E8600A1BEEDBD34E40F0E884B6987EC59EFC (SensorShapeValidator_t4CF99FDEB5F10EAEDCD4B0F9259ABCA3823DDE0E * __this, List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * ___sensors0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SensorShapeValidator_ValidateSensors_m4F78E8600A1BEEDBD34E40F0E884B6987EC59EFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_3 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_SensorShapes == null)
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_0 = __this->get_m_SensorShapes_0();
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		// m_SensorShapes = new List<int[]>(sensors.Count);
		List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * L_1 = ___sensors0;
		int32_t L_2 = List_1_get_Count_mB8F183781871D16C1DC6628340B5F5F19603AB5C_inline(L_1, /*hidden argument*/List_1_get_Count_mB8F183781871D16C1DC6628340B5F5F19603AB5C_RuntimeMethod_var);
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_3 = (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *)il2cpp_codegen_object_new(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_il2cpp_TypeInfo_var);
		List_1__ctor_mBA962B312529AAD38D12E8A24FDBA917D15956AF(L_3, L_2, /*hidden argument*/List_1__ctor_mBA962B312529AAD38D12E8A24FDBA917D15956AF_RuntimeMethod_var);
		__this->set_m_SensorShapes_0(L_3);
		// foreach (var sensor in sensors)
		List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * L_4 = ___sensors0;
		Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4  L_5 = List_1_GetEnumerator_m14EB0C46C93AA60CFB46FE91B6A436039C3DC3F9(L_4, /*hidden argument*/List_1_GetEnumerator_m14EB0C46C93AA60CFB46FE91B6A436039C3DC3F9_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0022:
		{
			// foreach (var sensor in sensors)
			RuntimeObject* L_6 = Enumerator_get_Current_m30D2E90DDB5306EE08A9D6BEC42FB5BB7B91F618_inline((Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m30D2E90DDB5306EE08A9D6BEC42FB5BB7B91F618_RuntimeMethod_var);
			V_1 = L_6;
			// m_SensorShapes.Add(sensor.GetObservationShape());
			List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_7 = __this->get_m_SensorShapes_0();
			RuntimeObject* L_8 = V_1;
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = InterfaceFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(0 /* System.Int32[] MLAgents.Sensors.ISensor::GetObservationShape() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_8);
			List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D(L_7, L_9, /*hidden argument*/List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D_RuntimeMethod_var);
		}

IL_003b:
		{
			// foreach (var sensor in sensors)
			bool L_10 = Enumerator_MoveNext_m99E376E27B906E23D4CC77DD87354766696672A2((Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m99E376E27B906E23D4CC77DD87354766696672A2_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0022;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC900D5AA14C8DB2B29884BABD92106A7504EE19E((Enumerator_tB0D15032F4293BA379D17C092BF8973EEF5339C4 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC900D5AA14C8DB2B29884BABD92106A7504EE19E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0054:
	{
		// for (var i = 0; i < Mathf.Min(m_SensorShapes.Count, sensors.Count); i++)
		V_2 = 0;
		goto IL_0092;
	}

IL_0058:
	{
		// var cachedShape = m_SensorShapes[i];
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_11 = __this->get_m_SensorShapes_0();
		int32_t L_12 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = List_1_get_Item_mD477BFDA20CA277DDDE9A13F924161A8376739AE_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mD477BFDA20CA277DDDE9A13F924161A8376739AE_RuntimeMethod_var);
		V_3 = L_13;
		// var sensorShape = sensors[i].GetObservationShape();
		List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * L_14 = ___sensors0;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = List_1_get_Item_mC60C21898063A4934F92E05D90722EBEEEA23718_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mC60C21898063A4934F92E05D90722EBEEEA23718_RuntimeMethod_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = InterfaceFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(0 /* System.Int32[] MLAgents.Sensors.ISensor::GetObservationShape() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_16);
		V_4 = L_17;
		// for (var j = 0; j < Mathf.Min(cachedShape.Length, sensorShape.Length); j++)
		V_5 = 0;
		goto IL_007e;
	}

IL_0078:
	{
		// for (var j = 0; j < Mathf.Min(cachedShape.Length, sensorShape.Length); j++)
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007e:
	{
		// for (var j = 0; j < Mathf.Min(cachedShape.Length, sensorShape.Length); j++)
		int32_t L_19 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_22 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))), /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_22)))
		{
			goto IL_0078;
		}
	}
	{
		// for (var i = 0; i < Mathf.Min(m_SensorShapes.Count, sensors.Count); i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0092:
	{
		// for (var i = 0; i < Mathf.Min(m_SensorShapes.Count, sensors.Count); i++)
		int32_t L_24 = V_2;
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_25 = __this->get_m_SensorShapes_0();
		int32_t L_26 = List_1_get_Count_mAC463AC73D793B22599596C008994F78C3AF0BE9_inline(L_25, /*hidden argument*/List_1_get_Count_mAC463AC73D793B22599596C008994F78C3AF0BE9_RuntimeMethod_var);
		List_1_t753414DB78AB13034D32A64E8BB0720B5544EC60 * L_27 = ___sensors0;
		int32_t L_28 = List_1_get_Count_mB8F183781871D16C1DC6628340B5F5F19603AB5C_inline(L_27, /*hidden argument*/List_1_get_Count_mB8F183781871D16C1DC6628340B5F5F19603AB5C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_29 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_26, L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_29)))
		{
			goto IL_0058;
		}
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.SensorShapeValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorShapeValidator__ctor_mE74E04EBB3489227F1C9ED33E3437C220191F00A (SensorShapeValidator_t4CF99FDEB5F10EAEDCD4B0F9259ABCA3823DDE0E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.Sensors.StackingSensor::.ctor(MLAgents.Sensors.ISensor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackingSensor__ctor_m8ED48F872A083D66C4184051BCE1D662933F4F38 (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, RuntimeObject* ___wrapped0, int32_t ___numStackedObservations1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackingSensor__ctor_m8ED48F872A083D66C4184051BCE1D662933F4F38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// WriteAdapter m_LocalAdapter = new WriteAdapter();
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_0 = (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C *)il2cpp_codegen_object_new(WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C_il2cpp_TypeInfo_var);
		WriteAdapter__ctor_m5DD36BFD0A7A709ED23DF96CCB0E90B6F35751EF(L_0, /*hidden argument*/NULL);
		__this->set_m_LocalAdapter_7(L_0);
		// public StackingSensor(ISensor wrapped, int numStackedObservations)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_WrappedSensor = wrapped;
		RuntimeObject* L_1 = ___wrapped0;
		__this->set_m_WrappedSensor_0(L_1);
		// m_NumStackedObservations = numStackedObservations;
		int32_t L_2 = ___numStackedObservations1;
		__this->set_m_NumStackedObservations_1(L_2);
		// m_Name = $"StackingSensor_size{numStackedObservations}_{wrapped.GetName()}";
		int32_t L_3 = ___numStackedObservations1;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		RuntimeObject* L_6 = ___wrapped0;
		String_t* L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String MLAgents.Sensors.ISensor::GetName() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_6);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral447390C73E6567871A6CB5B03FAB57D2E8279079, L_5, L_7, /*hidden argument*/NULL);
		__this->set_m_Name_3(L_8);
		// var shape = wrapped.GetObservationShape();
		RuntimeObject* L_9 = ___wrapped0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = InterfaceFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(0 /* System.Int32[] MLAgents.Sensors.ISensor::GetObservationShape() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_9);
		V_0 = L_10;
		// m_Shape = new int[shape.Length];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		__this->set_m_Shape_4(L_12);
		// m_UnstackedObservationSize = wrapped.ObservationSize();
		RuntimeObject* L_13 = ___wrapped0;
		int32_t L_14 = SensorExtensions_ObservationSize_mEA36DBDE2C8C22F4CD711B634CB2F60302E12DCF(L_13, /*hidden argument*/NULL);
		__this->set_m_UnstackedObservationSize_2(L_14);
		// for (int d = 0; d < shape.Length; d++)
		V_1 = 0;
		goto IL_006f;
	}

IL_0060:
	{
		// m_Shape[d] = shape[d];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = __this->get_m_Shape_4();
		int32_t L_16 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_20);
		// for (int d = 0; d < shape.Length; d++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006f:
	{
		// for (int d = 0; d < shape.Length; d++)
		int32_t L_22 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_0060;
		}
	}
	{
		// m_Shape[0] *= numStackedObservations;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = __this->get_m_Shape_4();
		int32_t* L_25 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = ___numStackedObservations1;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_27));
		// m_StackedObservations = new float[numStackedObservations][];
		int32_t L_28 = ___numStackedObservations1;
		SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* L_29 = (SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839*)(SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839*)SZArrayNew(SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839_il2cpp_TypeInfo_var, (uint32_t)L_28);
		__this->set_m_StackedObservations_5(L_29);
		// for (var i = 0; i < numStackedObservations; i++)
		V_2 = 0;
		goto IL_00ad;
	}

IL_0096:
	{
		// m_StackedObservations[i] = new float[m_UnstackedObservationSize];
		SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* L_30 = __this->get_m_StackedObservations_5();
		int32_t L_31 = V_2;
		int32_t L_32 = __this->get_m_UnstackedObservationSize_2();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_33 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_32);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_33);
		// for (var i = 0; i < numStackedObservations; i++)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00ad:
	{
		// for (var i = 0; i < numStackedObservations; i++)
		int32_t L_35 = V_2;
		int32_t L_36 = ___numStackedObservations1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0096;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 MLAgents.Sensors.StackingSensor::Write(MLAgents.Sensors.WriteAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackingSensor_Write_mF6E97B3088BCFF31F97A34DB3EC3D5EFC67678CE (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * ___adapter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackingSensor_Write_mF6E97B3088BCFF31F97A34DB3EC3D5EFC67678CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var wrappedShape = m_WrappedSensor.GetObservationShape();
		RuntimeObject* L_0 = __this->get_m_WrappedSensor_0();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = InterfaceFuncInvoker0< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(0 /* System.Int32[] MLAgents.Sensors.ISensor::GetObservationShape() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// m_LocalAdapter.SetTarget(m_StackedObservations[m_CurrentIndex], wrappedShape, 0);
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_2 = __this->get_m_LocalAdapter_7();
		SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* L_3 = __this->get_m_StackedObservations_5();
		int32_t L_4 = __this->get_m_CurrentIndex_6();
		int32_t L_5 = L_4;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_0;
		WriteAdapter_SetTarget_m7561CBEA778996136DC99B317F92D6DDBF239EC6(L_2, (RuntimeObject*)(RuntimeObject*)L_6, L_7, 0, /*hidden argument*/NULL);
		// m_WrappedSensor.Write(m_LocalAdapter);
		RuntimeObject* L_8 = __this->get_m_WrappedSensor_0();
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_9 = __this->get_m_LocalAdapter_7();
		InterfaceFuncInvoker1< int32_t, WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * >::Invoke(1 /* System.Int32 MLAgents.Sensors.ISensor::Write(MLAgents.Sensors.WriteAdapter) */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_8, L_9);
		// var numWritten = 0;
		V_1 = 0;
		// for (var i = 0; i < m_NumStackedObservations; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_003e:
	{
		// var obsIndex = (m_CurrentIndex + 1 + i) % m_NumStackedObservations;
		int32_t L_10 = __this->get_m_CurrentIndex_6();
		int32_t L_11 = V_2;
		int32_t L_12 = __this->get_m_NumStackedObservations_1();
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), (int32_t)L_11))%(int32_t)L_12));
		// adapter.AddRange(m_StackedObservations[obsIndex], numWritten);
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_13 = ___adapter0;
		SingleU5BU5DU5BU5D_tDE1FB3BBC65F7A632E44302B85B7F7193EF48839* L_14 = __this->get_m_StackedObservations_5();
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_17 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_1;
		WriteAdapter_AddRange_m9FE7672FBBC19AD345B802373DC6C42C67F48F21(L_13, (RuntimeObject*)(RuntimeObject*)L_17, L_18, /*hidden argument*/NULL);
		// numWritten += m_UnstackedObservationSize;
		int32_t L_19 = V_1;
		int32_t L_20 = __this->get_m_UnstackedObservationSize_2();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
		// for (var i = 0; i < m_NumStackedObservations; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006c:
	{
		// for (var i = 0; i < m_NumStackedObservations; i++)
		int32_t L_22 = V_2;
		int32_t L_23 = __this->get_m_NumStackedObservations_1();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}
	{
		// return numWritten;
		int32_t L_24 = V_1;
		return L_24;
	}
}
// System.Void MLAgents.Sensors.StackingSensor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackingSensor_Update_m0538CD6A8D677690403B33A6C5C384198BBE2A16 (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackingSensor_Update_m0538CD6A8D677690403B33A6C5C384198BBE2A16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WrappedSensor.Update();
		RuntimeObject* L_0 = __this->get_m_WrappedSensor_0();
		InterfaceActionInvoker0::Invoke(3 /* System.Void MLAgents.Sensors.ISensor::Update() */, ISensor_t2C68BD104595B86EB31CA53A5732C0BC5E462CC4_il2cpp_TypeInfo_var, L_0);
		// m_CurrentIndex = (m_CurrentIndex + 1) % m_NumStackedObservations;
		int32_t L_1 = __this->get_m_CurrentIndex_6();
		int32_t L_2 = __this->get_m_NumStackedObservations_1();
		__this->set_m_CurrentIndex_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))%(int32_t)L_2)));
		// }
		return;
	}
}
// System.Int32[] MLAgents.Sensors.StackingSensor::GetObservationShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* StackingSensor_GetObservationShape_m9650E6685F2BF3AA37E4C506E367069C30332029 (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, const RuntimeMethod* method)
{
	{
		// return m_Shape;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_m_Shape_4();
		return L_0;
	}
}
// System.String MLAgents.Sensors.StackingSensor::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackingSensor_GetName_m03CC8EA8021351B1239ADDF81466BE38E4B61754 (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, const RuntimeMethod* method)
{
	{
		// return m_Name;
		String_t* L_0 = __this->get_m_Name_3();
		return L_0;
	}
}
// System.Byte[] MLAgents.Sensors.StackingSensor::GetCompressedObservation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* StackingSensor_GetCompressedObservation_mD7DB9135BAE6AAD8A8DA6E28231EFE6BFDA3BEF8 (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}
}
// MLAgents.Sensors.SensorCompressionType MLAgents.Sensors.StackingSensor::GetCompressionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackingSensor_GetCompressionType_mB941E9E37D3CCAED5C4643138F1C1ED04B7C4985 (StackingSensor_tD2C50E88D76250C8C0858E4D400106C069DD395F * __this, const RuntimeMethod* method)
{
	{
		// return SensorCompressionType.None;
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.Sensors.VectorSensor::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor__ctor_mF6ADEDF2A67FF887C524ADCC884DE07C16D36019 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, int32_t ___observationSize0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorSensor__ctor_mF6ADEDF2A67FF887C524ADCC884DE07C16D36019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VectorSensor(int observationSize, string name = null)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (name == null)
		String_t* L_0 = ___name1;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// name = $"VectorSensor_size{observationSize}";
		int32_t L_1 = ___observationSize0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralFC97A05BCEBC0B772CE70FEE233324E4A50EB801, L_3, /*hidden argument*/NULL);
		___name1 = L_4;
	}

IL_001b:
	{
		// m_Observations = new List<float>(observationSize);
		int32_t L_5 = ___observationSize0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_6 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)il2cpp_codegen_object_new(List_1_t026D7A8C4D989218772DB3E051A624F753A60859_il2cpp_TypeInfo_var);
		List_1__ctor_mA54AC989707E5287F1F00DB85C4B04BFC2347116(L_6, L_5, /*hidden argument*/List_1__ctor_mA54AC989707E5287F1F00DB85C4B04BFC2347116_RuntimeMethod_var);
		__this->set_m_Observations_0(L_6);
		// m_Name = name;
		String_t* L_7 = ___name1;
		__this->set_m_Name_2(L_7);
		// m_Shape = new[] { observationSize };
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = L_8;
		int32_t L_10 = ___observationSize0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_10);
		__this->set_m_Shape_1(L_9);
		// }
		return;
	}
}
// System.Int32 MLAgents.Sensors.VectorSensor::Write(MLAgents.Sensors.WriteAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VectorSensor_Write_m63832E4E1AE5FB75056B5C6FEC5DA4F1A6A018B9 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * ___adapter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorSensor_Write_m63832E4E1AE5FB75056B5C6FEC5DA4F1A6A018B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var expectedObservations = m_Shape[0];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_m_Shape_1();
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// if (m_Observations.Count > expectedObservations)
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_3 = __this->get_m_Observations_0();
		int32_t L_4 = List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline(L_3, /*hidden argument*/List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogWarningFormat(
		//     "More observations ({0}) made than vector observation size ({1}). The observations will be truncated.",
		//     m_Observations.Count, expectedObservations
		// );
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_8 = __this->get_m_Observations_0();
		int32_t L_9 = List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline(L_8, /*hidden argument*/List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_7;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteralC87338707AF7118E25D59BE13249252A1BE9936F, L_12, /*hidden argument*/NULL);
		// m_Observations.RemoveRange(expectedObservations, m_Observations.Count - expectedObservations);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_16 = __this->get_m_Observations_0();
		int32_t L_17 = V_0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_18 = __this->get_m_Observations_0();
		int32_t L_19 = List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline(L_18, /*hidden argument*/List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var);
		int32_t L_20 = V_0;
		List_1_RemoveRange_m1DCFD14CD7C1D9DF5E2BC5824AAC06C9A17517CD(L_16, L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), /*hidden argument*/List_1_RemoveRange_m1DCFD14CD7C1D9DF5E2BC5824AAC06C9A17517CD_RuntimeMethod_var);
		// }
		goto IL_00be;
	}

IL_005e:
	{
		// else if (m_Observations.Count < expectedObservations)
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_21 = __this->get_m_Observations_0();
		int32_t L_22 = List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline(L_21, /*hidden argument*/List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var);
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00be;
		}
	}
	{
		// Debug.LogWarningFormat(
		//     "Fewer observations ({0}) made than vector observation size ({1}). The observations will be padded.",
		//     m_Observations.Count, expectedObservations
		// );
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_24;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_26 = __this->get_m_Observations_0();
		int32_t L_27 = List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline(L_26, /*hidden argument*/List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var);
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_28);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = L_25;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_32);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteralD9DDD72B3FA446F199FD1A819322351260E4F596, L_30, /*hidden argument*/NULL);
		// for (int i = m_Observations.Count; i < expectedObservations; i++)
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_34 = __this->get_m_Observations_0();
		int32_t L_35 = List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_inline(L_34, /*hidden argument*/List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_RuntimeMethod_var);
		V_1 = L_35;
		goto IL_00ba;
	}

IL_00a6:
	{
		// m_Observations.Add(0);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_36 = __this->get_m_Observations_0();
		List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3(L_36, (0.0f), /*hidden argument*/List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3_RuntimeMethod_var);
		// for (int i = m_Observations.Count; i < expectedObservations; i++)
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00ba:
	{
		// for (int i = m_Observations.Count; i < expectedObservations; i++)
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a6;
		}
	}

IL_00be:
	{
		// adapter.AddRange(m_Observations);
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_40 = ___adapter0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_41 = __this->get_m_Observations_0();
		WriteAdapter_AddRange_m9FE7672FBBC19AD345B802373DC6C42C67F48F21(L_40, L_41, 0, /*hidden argument*/NULL);
		// return expectedObservations;
		int32_t L_42 = V_0;
		return L_42;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_Update_mE57265A7041A255633B800A67F21D8A82583BEBB (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method)
{
	{
		// Clear();
		VectorSensor_Clear_m67A27876816FC71D85B623C1DB7DC777D458E74B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32[] MLAgents.Sensors.VectorSensor::GetObservationShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* VectorSensor_GetObservationShape_m56E187441C967132BDF2B1B5A2725F96760B3601 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method)
{
	{
		// return m_Shape;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_m_Shape_1();
		return L_0;
	}
}
// System.String MLAgents.Sensors.VectorSensor::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VectorSensor_GetName_m200CD272B98CC29977D14E70749337F388C2A7D4 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method)
{
	{
		// return m_Name;
		String_t* L_0 = __this->get_m_Name_2();
		return L_0;
	}
}
// System.Byte[] MLAgents.Sensors.VectorSensor::GetCompressedObservation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* VectorSensor_GetCompressedObservation_m4ACD27E121E7CA547A939854EEAB84D4158BB1F4 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}
}
// MLAgents.Sensors.SensorCompressionType MLAgents.Sensors.VectorSensor::GetCompressionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VectorSensor_GetCompressionType_m3B88E7EDE8915A58216A0088305AE800A5CBB125 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method)
{
	{
		// return SensorCompressionType.None;
		return (int32_t)(0);
	}
}
// System.Void MLAgents.Sensors.VectorSensor::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_Clear_m67A27876816FC71D85B623C1DB7DC777D458E74B (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorSensor_Clear_m67A27876816FC71D85B623C1DB7DC777D458E74B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Observations.Clear();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = __this->get_m_Observations_0();
		List_1_Clear_m9B1C2D6517DBE1A4AC1943DE600534CDF7013912(L_0, /*hidden argument*/List_1_Clear_m9B1C2D6517DBE1A4AC1943DE600534CDF7013912_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddFloatObs(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, float ___obs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Observations.Add(obs);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = __this->get_m_Observations_0();
		float L_1 = ___obs0;
		List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3(L_0, L_1, /*hidden argument*/List_1_Add_mA57D25369B82E3B6A1A12D0872C1A80A8CA0B4D3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_m9DBA71A8B07278F5ECFD7E3BBEAD711C58729750 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, float ___observation0, const RuntimeMethod* method)
{
	{
		// AddFloatObs(observation);
		float L_0 = ___observation0;
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_mC53420C7AC11071A5ECFEB5580E8DB28D7065D76 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, int32_t ___observation0, const RuntimeMethod* method)
{
	{
		// AddFloatObs(observation);
		int32_t L_0 = ___observation0;
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, (((float)((float)L_0))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_mED0A3CFDB4050188E545272824ADE936390048F1 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___observation0, const RuntimeMethod* method)
{
	{
		// AddFloatObs(observation.x);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___observation0;
		float L_1 = L_0.get_x_2();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_1, /*hidden argument*/NULL);
		// AddFloatObs(observation.y);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___observation0;
		float L_3 = L_2.get_y_3();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_3, /*hidden argument*/NULL);
		// AddFloatObs(observation.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___observation0;
		float L_5 = L_4.get_z_4();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_m2C2408ECDAF402FA66A18081289E58B708B26550 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___observation0, const RuntimeMethod* method)
{
	{
		// AddFloatObs(observation.x);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___observation0;
		float L_1 = L_0.get_x_0();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_1, /*hidden argument*/NULL);
		// AddFloatObs(observation.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___observation0;
		float L_3 = L_2.get_y_1();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_mA6A3B5C4CAFCC40CA546129F4492F04AC0EB2904 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, RuntimeObject* ___observation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorSensor_AddObservation_mA6A3B5C4CAFCC40CA546129F4492F04AC0EB2904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	float V_1 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var f in observation)
		RuntimeObject* L_0 = ___observation0;
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t8FCB5BDD2F23D48DA1EBD3AFE3390785A89CC67C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			// foreach (var f in observation)
			RuntimeObject* L_2 = V_0;
			float L_3 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t855E9721BBB68B864B59AB92296F2E67ADC9E88E_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// AddFloatObs(f);
			float L_4 = V_1;
			VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_4, /*hidden argument*/NULL);
		}

IL_0017:
		{
			// foreach (var f in observation)
			RuntimeObject* L_5 = V_0;
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			RuntimeObject* L_8 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_m7ABA9744AD0E6956EBA3B34F5C338B3B21F7C078 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___observation0, const RuntimeMethod* method)
{
	{
		// AddFloatObs(observation.x);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___observation0;
		float L_1 = L_0.get_x_0();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_1, /*hidden argument*/NULL);
		// AddFloatObs(observation.y);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___observation0;
		float L_3 = L_2.get_y_1();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_3, /*hidden argument*/NULL);
		// AddFloatObs(observation.z);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___observation0;
		float L_5 = L_4.get_z_2();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_5, /*hidden argument*/NULL);
		// AddFloatObs(observation.w);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = ___observation0;
		float L_7 = L_6.get_w_3();
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddObservation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_m9998310C5A7FEEC4918BCE15164065D18778039C (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, bool ___observation0, const RuntimeMethod* method)
{
	VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * G_B2_0 = NULL;
	VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * G_B3_1 = NULL;
	{
		// AddFloatObs(observation ? 1f : 0f);
		bool L_0 = ___observation0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.VectorSensor::AddOneHotObservation(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddOneHotObservation_m220EB37F6AA5B683006347CEB2605A7AFD74A255 (VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * __this, int32_t ___observation0, int32_t ___range1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * G_B3_0 = NULL;
	VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	VectorSensor_tFD4ED337D6E76FAB96530BB83CDE26EBB7FBF499 * G_B4_1 = NULL;
	{
		// for (var i = 0; i < range; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// AddFloatObs(i == observation ? 1.0f : 0.0f);
		int32_t L_0 = V_0;
		int32_t L_1 = ___observation0;
		G_B2_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			G_B3_0 = __this;
			goto IL_0010;
		}
	}
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B2_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
	}

IL_0015:
	{
		VectorSensor_AddFloatObs_m0276CBD312E39CC6B5DBF72CC64142E359CD2C01(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		// for (var i = 0; i < range; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001e:
	{
		// for (var i = 0; i < range; i++)
		int32_t L_3 = V_0;
		int32_t L_4 = ___range1;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.Sensors.WriteAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter__ctor_m5DD36BFD0A7A709ED23DF96CCB0E90B6F35751EF (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, const RuntimeMethod* method)
{
	{
		// internal WriteAdapter() { }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// internal WriteAdapter() { }
		return;
	}
}
// System.Void MLAgents.Sensors.WriteAdapter::SetTarget(System.Collections.Generic.IList`1<System.Single>,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_SetTarget_m7561CBEA778996136DC99B317F92D6DDBF239EC6 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, RuntimeObject* ___data0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___shape1, int32_t ___offset2, const RuntimeMethod* method)
{
	{
		// m_Data = data;
		RuntimeObject* L_0 = ___data0;
		__this->set_m_Data_0(L_0);
		// m_Offset = offset;
		int32_t L_1 = ___offset2;
		__this->set_m_Offset_1(L_1);
		// m_Proxy = null;
		__this->set_m_Proxy_2((TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 *)NULL);
		// m_Batch = 0;
		__this->set_m_Batch_3(0);
		// if (shape.Length == 1)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___shape1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// m_TensorShape = new TensorShape(m_Batch, shape[0]);
		int32_t L_3 = __this->get_m_Batch_3();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___shape1;
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  L_7;
		memset((&L_7), 0, sizeof(L_7));
		TensorShape__ctor_mCDBE4779F2D3EEA1F36E617A929121D617E8BB8E((&L_7), L_3, L_6, /*hidden argument*/NULL);
		__this->set_m_TensorShape_4(L_7);
		// }
		return;
	}

IL_0037:
	{
		// m_TensorShape = new TensorShape(m_Batch, shape[0], shape[1], shape[2]);
		int32_t L_8 = __this->get_m_Batch_3();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = ___shape1;
		int32_t L_10 = 0;
		int32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = ___shape1;
		int32_t L_13 = 1;
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = ___shape1;
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  L_18;
		memset((&L_18), 0, sizeof(L_18));
		TensorShape__ctor_m9A0A809EBCED630D63544A50E85597927A1CB6BE((&L_18), L_8, L_11, L_14, L_17, /*hidden argument*/NULL);
		__this->set_m_TensorShape_4(L_18);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.WriteAdapter::SetTarget(MLAgents.Inference.TensorProxy,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_SetTarget_m86C9B022F272E05E69E455FCCB1670EF9E8C3791 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * ___tensorProxy0, int32_t ___batchIndex1, int32_t ___channelOffset2, const RuntimeMethod* method)
{
	{
		// m_Proxy = tensorProxy;
		TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * L_0 = ___tensorProxy0;
		__this->set_m_Proxy_2(L_0);
		// m_Batch = batchIndex;
		int32_t L_1 = ___batchIndex1;
		__this->set_m_Batch_3(L_1);
		// m_Offset = channelOffset;
		int32_t L_2 = ___channelOffset2;
		__this->set_m_Offset_1(L_2);
		// m_Data = null;
		__this->set_m_Data_0((RuntimeObject*)NULL);
		// m_TensorShape = m_Proxy.data.shape;
		TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * L_3 = __this->get_m_Proxy_2();
		Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * L_4 = L_3->get_data_4();
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE  L_5 = L_4->get_shape_5();
		__this->set_m_TensorShape_4(L_5);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.WriteAdapter::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_set_Item_m3C5880032FE8988E4B842A5C15F3BEE38D1758C0 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WriteAdapter_set_Item_m3C5880032FE8988E4B842A5C15F3BEE38D1758C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Data != null)
		RuntimeObject* L_0 = __this->get_m_Data_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// m_Data[index + m_Offset] = value;
		RuntimeObject* L_1 = __this->get_m_Data_0();
		int32_t L_2 = ___index0;
		int32_t L_3 = __this->get_m_Offset_1();
		float L_4 = ___value1;
		InterfaceActionInvoker2< int32_t, float >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,!0) */, IList_1_t9FB3183151047CE8512A5C5FC3C5A6847B45F95E_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), L_4);
		// }
		return;
	}

IL_001d:
	{
		// m_Proxy.data[m_Batch, index + m_Offset] = value;
		TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * L_5 = __this->get_m_Proxy_2();
		Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * L_6 = L_5->get_data_4();
		int32_t L_7 = __this->get_m_Batch_3();
		int32_t L_8 = ___index0;
		int32_t L_9 = __this->get_m_Offset_1();
		float L_10 = ___value1;
		Tensor_set_Item_mB751EDBF5045491ED99A5B64DD428E989C31BEE4(L_6, L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.WriteAdapter::set_Item(System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, int32_t ___h0, int32_t ___w1, int32_t ___ch2, float ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_Data != null)
		RuntimeObject* L_0 = __this->get_m_Data_0();
		if (!L_0)
		{
			goto IL_00e4;
		}
	}
	{
		// if (h < 0 || h >= m_TensorShape.height)
		int32_t L_1 = ___h0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___h0;
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_3 = __this->get_address_of_m_TensorShape_4();
		int32_t L_4 = L_3->get_height_1();
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0045;
		}
	}

IL_001d:
	{
		// throw new IndexOutOfRangeException($"height value {h} must be in range [0, {m_TensorShape.height - 1}]");
		int32_t L_5 = ___h0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_8 = __this->get_address_of_m_TensorShape_4();
		int32_t L_9 = L_8->get_height_1();
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralC5E69F85C4F42BA999C4BCC72BB515B736EC69F8, L_7, L_11, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_13 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06_RuntimeMethod_var);
	}

IL_0045:
	{
		// if (w < 0 || w >= m_TensorShape.width)
		int32_t L_14 = ___w1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_15 = ___w1;
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_16 = __this->get_address_of_m_TensorShape_4();
		int32_t L_17 = L_16->get_width_2();
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_007f;
		}
	}

IL_0057:
	{
		// throw new IndexOutOfRangeException($"width value {w} must be in range [0, {m_TensorShape.width - 1}]");
		int32_t L_18 = ___w1;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_21 = __this->get_address_of_m_TensorShape_4();
		int32_t L_22 = L_21->get_width_2();
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8C414E507995F222269428ECDA9D64D973A86AAD, L_20, L_24, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_26 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06_RuntimeMethod_var);
	}

IL_007f:
	{
		// if (ch < 0 || ch >= m_TensorShape.channels)
		int32_t L_27 = ___ch2;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_28 = ___ch2;
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_29 = __this->get_address_of_m_TensorShape_4();
		int32_t L_30 = L_29->get_channels_3();
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_00b9;
		}
	}

IL_0091:
	{
		// throw new IndexOutOfRangeException($"channel value {ch} must be in range [0, {m_TensorShape.channels - 1}]");
		int32_t L_31 = ___ch2;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_32);
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_34 = __this->get_address_of_m_TensorShape_4();
		int32_t L_35 = L_34->get_channels_3();
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
		RuntimeObject * L_37 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral80A8C79BE81E835C065EECA59E1E3C852CC046E5, L_33, L_37, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_39 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_39, L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06_RuntimeMethod_var);
	}

IL_00b9:
	{
		// var index = m_TensorShape.Index(m_Batch, h, w, ch + m_Offset);
		TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE * L_40 = __this->get_address_of_m_TensorShape_4();
		int32_t L_41 = __this->get_m_Batch_3();
		int32_t L_42 = ___h0;
		int32_t L_43 = ___w1;
		int32_t L_44 = ___ch2;
		int32_t L_45 = __this->get_m_Offset_1();
		int32_t L_46 = TensorShape_Index_m0838E2E9F156D3019058D05546A34EEECC3AA025((TensorShape_t04EC0F69B79C6C7931E07E2F74226BB70FF1C5DE *)L_40, L_41, L_42, L_43, ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45)), /*hidden argument*/NULL);
		V_0 = L_46;
		// m_Data[index] = value;
		RuntimeObject* L_47 = __this->get_m_Data_0();
		int32_t L_48 = V_0;
		float L_49 = ___value3;
		InterfaceActionInvoker2< int32_t, float >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,!0) */, IList_1_t9FB3183151047CE8512A5C5FC3C5A6847B45F95E_il2cpp_TypeInfo_var, L_47, L_48, L_49);
		// }
		return;
	}

IL_00e4:
	{
		// m_Proxy.data[m_Batch, h, w, ch + m_Offset] = value;
		TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * L_50 = __this->get_m_Proxy_2();
		Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * L_51 = L_50->get_data_4();
		int32_t L_52 = __this->get_m_Batch_3();
		int32_t L_53 = ___h0;
		int32_t L_54 = ___w1;
		int32_t L_55 = ___ch2;
		int32_t L_56 = __this->get_m_Offset_1();
		float L_57 = ___value3;
		Tensor_set_Item_m7C15EB3E3D68D12406BB0BA74DFBEF2CC6B6F056(L_51, L_52, L_53, L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)), L_57, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.Sensors.WriteAdapter::AddRange(System.Collections.Generic.IEnumerable`1<System.Single>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAdapter_AddRange_m9FE7672FBBC19AD345B802373DC6C42C67F48F21 (WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * __this, RuntimeObject* ___data0, int32_t ___writeOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WriteAdapter_AddRange_m9FE7672FBBC19AD345B802373DC6C42C67F48F21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_Data != null)
		RuntimeObject* L_0 = __this->get_m_Data_0();
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// int index = 0;
		V_0 = 0;
		// foreach (var val in data)
		RuntimeObject* L_1 = ___data0;
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t8FCB5BDD2F23D48DA1EBD3AFE3390785A89CC67C_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0013:
		{
			// foreach (var val in data)
			RuntimeObject* L_3 = V_1;
			float L_4 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t855E9721BBB68B864B59AB92296F2E67ADC9E88E_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			// m_Data[index + m_Offset + writeOffset] = val;
			RuntimeObject* L_5 = __this->get_m_Data_0();
			int32_t L_6 = V_0;
			int32_t L_7 = __this->get_m_Offset_1();
			int32_t L_8 = ___writeOffset1;
			float L_9 = V_2;
			InterfaceActionInvoker2< int32_t, float >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,!0) */, IList_1_t9FB3183151047CE8512A5C5FC3C5A6847B45F95E_il2cpp_TypeInfo_var, L_5, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), L_9);
			// index++;
			int32_t L_10 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_0034:
		{
			// foreach (var val in data)
			RuntimeObject* L_11 = V_1;
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0013;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x95, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_1;
			if (!L_13)
			{
				goto IL_0047;
			}
		}

IL_0041:
		{
			RuntimeObject* L_14 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_14);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(62)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		// int index = 0;
		V_3 = 0;
		// foreach (var val in data)
		RuntimeObject* L_15 = ___data0;
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t8FCB5BDD2F23D48DA1EBD3AFE3390785A89CC67C_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0053:
		{
			// foreach (var val in data)
			RuntimeObject* L_17 = V_1;
			float L_18 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t855E9721BBB68B864B59AB92296F2E67ADC9E88E_il2cpp_TypeInfo_var, L_17);
			V_4 = L_18;
			// m_Proxy.data[m_Batch, index + m_Offset + writeOffset] = val;
			TensorProxy_t1A4BF5B0C183C58D4AE5C9C6BF6E6F48949CD8D1 * L_19 = __this->get_m_Proxy_2();
			Tensor_t76CFF0711FCB6997D062C93DFD7C3603A5086437 * L_20 = L_19->get_data_4();
			int32_t L_21 = __this->get_m_Batch_3();
			int32_t L_22 = V_3;
			int32_t L_23 = __this->get_m_Offset_1();
			int32_t L_24 = ___writeOffset1;
			float L_25 = V_4;
			Tensor_set_Item_mB751EDBF5045491ED99A5B64DD428E989C31BEE4(L_20, L_21, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23)), (int32_t)L_24)), L_25, /*hidden argument*/NULL);
			// index++;
			int32_t L_26 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		}

IL_0081:
		{
			// foreach (var val in data)
			RuntimeObject* L_27 = V_1;
			bool L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0053;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x95, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_29 = V_1;
			if (!L_29)
			{
				goto IL_0094;
			}
		}

IL_008e:
		{
			RuntimeObject* L_30 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_30);
		}

IL_0094:
		{
			IL2CPP_END_FINALLY(139)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0095:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.SideChannels.EngineConfigurationChannel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineConfigurationChannel__ctor_m3BC63E1ED5BAA897E426E1DE0996EC1C2E82D0EB (EngineConfigurationChannel_t3DE3175CA8308F40586A4B62CE99D3E1776E6E3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineConfigurationChannel__ctor_m3BC63E1ED5BAA897E426E1DE0996EC1C2E82D0EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EngineConfigurationChannel()
		SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752(__this, /*hidden argument*/NULL);
		// ChannelId = new Guid(k_EngineConfigId);
		Guid_t  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079((&L_0), _stringLiteral0C6CF3451889FA5627B3C0839879F1F2E0983DC6, /*hidden argument*/NULL);
		SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.EngineConfigurationChannel::OnMessageReceived(MLAgents.SideChannels.IncomingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineConfigurationChannel_OnMessageReceived_mEC5675DACC975EDBE63727218D0D568354B9BD1B (EngineConfigurationChannel_t3DE3175CA8308F40586A4B62CE99D3E1776E6E3C * __this, IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineConfigurationChannel_OnMessageReceived_mEC5675DACC975EDBE63727218D0D568354B9BD1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var width = msg.ReadInt32();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_0 = ___msg0;
		int32_t L_1 = IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var height = msg.ReadInt32();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_2 = ___msg0;
		int32_t L_3 = IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var qualityLevel = msg.ReadInt32();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_4 = ___msg0;
		int32_t L_5 = IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// var timeScale = msg.ReadFloat32();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_6 = ___msg0;
		float L_7 = IncomingMessage_ReadFloat32_m839312FE1C4A7111F74FED51EA8BAD26F0B77673(L_6, /*hidden argument*/NULL);
		// var targetFrameRate = msg.ReadInt32();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_8 = ___msg0;
		int32_t L_9 = IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// timeScale = Mathf.Clamp(timeScale, 1, 100);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_7, (1.0f), (100.0f), /*hidden argument*/NULL);
		// Screen.SetResolution(width, height, false);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		Screen_SetResolution_mF2BE6F9BE1C07F7468D1770EC6E15694D256AF26(L_11, L_12, (bool)0, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(qualityLevel, true);
		int32_t L_13 = V_2;
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_13, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = timeScale;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF(L_10, /*hidden argument*/NULL);
		// Time.captureFramerate = 60;
		Time_set_captureFramerate_m9CE06049994A234AC1E129D650BBE70E8471B013(((int32_t)60), /*hidden argument*/NULL);
		// Application.targetFrameRate = targetFrameRate;
		int32_t L_14 = V_3;
		Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.SideChannels.FloatPropertiesChannel::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertiesChannel__ctor_mF832877F81E34D7AF7A7ED8477C6E972FA24C22D (FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234 * __this, Guid_t  ___channelId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatPropertiesChannel__ctor_mF832877F81E34D7AF7A7ED8477C6E972FA24C22D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Dictionary<string, float> m_FloatProperties = new Dictionary<string, float>();
		Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * L_0 = (Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A *)il2cpp_codegen_object_new(Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD856D1FDC27C5FEBF33F5CA33572B780555B3A71(L_0, /*hidden argument*/Dictionary_2__ctor_mD856D1FDC27C5FEBF33F5CA33572B780555B3A71_RuntimeMethod_var);
		__this->set_m_FloatProperties_2(L_0);
		// Dictionary<string, Action<float>> m_RegisteredActions = new Dictionary<string, Action<float>>();
		Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * L_1 = (Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 *)il2cpp_codegen_object_new(Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5AA098C95791D4D04768A419C978CCF2D6C50B9A(L_1, /*hidden argument*/Dictionary_2__ctor_m5AA098C95791D4D04768A419C978CCF2D6C50B9A_RuntimeMethod_var);
		__this->set_m_RegisteredActions_3(L_1);
		// public FloatPropertiesChannel(Guid channelId = default(Guid))
		SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752(__this, /*hidden argument*/NULL);
		// if (channelId == default(Guid))
		Guid_t  L_2 = ___channelId0;
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t ));
		Guid_t  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_4 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// ChannelId = new Guid(k_FloatPropertiesDefaultId);
		Guid_t  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079((&L_5), _stringLiteral641002B75B9FA5A78DED9A5837FC84171F84EFB0, /*hidden argument*/NULL);
		SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003e:
	{
		// ChannelId = channelId;
		Guid_t  L_6 = ___channelId0;
		SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967_inline(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.FloatPropertiesChannel::OnMessageReceived(MLAgents.SideChannels.IncomingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertiesChannel_OnMessageReceived_m8FC87F90E687F378F9EC675B8D6A0F16D7400CBB (FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234 * __this, IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatPropertiesChannel_OnMessageReceived_m8FC87F90E687F378F9EC675B8D6A0F16D7400CBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * V_2 = NULL;
	{
		// var key = msg.ReadString();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_0 = ___msg0;
		String_t* L_1 = IncomingMessage_ReadString_m286DC037CA31A6C3AE04C6F17C971CDF2B4A3824(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var value = msg.ReadFloat32();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_2 = ___msg0;
		float L_3 = IncomingMessage_ReadFloat32_m839312FE1C4A7111F74FED51EA8BAD26F0B77673(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// m_FloatProperties[key] = value;
		Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * L_4 = __this->get_m_FloatProperties_2();
		String_t* L_5 = V_0;
		float L_6 = V_1;
		Dictionary_2_set_Item_m9C04CA39E37DE12B1B69BE0816A699A0E8547FD5(L_4, L_5, L_6, /*hidden argument*/Dictionary_2_set_Item_m9C04CA39E37DE12B1B69BE0816A699A0E8547FD5_RuntimeMethod_var);
		// m_RegisteredActions.TryGetValue(key, out action);
		Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * L_7 = __this->get_m_RegisteredActions_3();
		String_t* L_8 = V_0;
		Dictionary_2_TryGetValue_mD8FD61B2548D7AFDF1B68CD62693A178C69156DA(L_7, L_8, (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mD8FD61B2548D7AFDF1B68CD62693A178C69156DA_RuntimeMethod_var);
		// action?.Invoke(value);
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_9 = V_2;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_10 = V_2;
		float L_11 = V_1;
		Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55(L_10, L_11, /*hidden argument*/Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_RuntimeMethod_var);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.FloatPropertiesChannel::SetProperty(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertiesChannel_SetProperty_mDF80A6F5DDF1B033A4794912E2077AD4D5CE83F3 (FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234 * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatPropertiesChannel_SetProperty_mDF80A6F5DDF1B033A4794912E2077AD4D5CE83F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * V_0 = NULL;
	OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// m_FloatProperties[key] = value;
		Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * L_0 = __this->get_m_FloatProperties_2();
		String_t* L_1 = ___key0;
		float L_2 = ___value1;
		Dictionary_2_set_Item_m9C04CA39E37DE12B1B69BE0816A699A0E8547FD5(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m9C04CA39E37DE12B1B69BE0816A699A0E8547FD5_RuntimeMethod_var);
		// using (var msgOut = new OutgoingMessage())
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_3 = (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB *)il2cpp_codegen_object_new(OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB_il2cpp_TypeInfo_var);
		OutgoingMessage__ctor_m9CD5F10440FC406D6B41ABF8BFE319C1CBA62D8B(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		// msgOut.WriteString(key);
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_4 = V_1;
		String_t* L_5 = ___key0;
		OutgoingMessage_WriteString_m6B3F0FD699ACB30F2B546D9F691058EDFD0D72FD(L_4, L_5, /*hidden argument*/NULL);
		// msgOut.WriteFloat32(value);
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_6 = V_1;
		float L_7 = ___value1;
		OutgoingMessage_WriteFloat32_m1B4B69EC27D61494C92DF3539C7DE861D25EF628(L_6, L_7, /*hidden argument*/NULL);
		// QueueMessageToSend(msgOut);
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_8 = V_1;
		SideChannel_QueueMessageToSend_mF010D33728EE37F16323B4D9ECAC19530B2ADF6F(__this, L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x34, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_9 = V_1;
			if (!L_9)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_10 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		// m_RegisteredActions.TryGetValue(key, out action);
		Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * L_11 = __this->get_m_RegisteredActions_3();
		String_t* L_12 = ___key0;
		Dictionary_2_TryGetValue_mD8FD61B2548D7AFDF1B68CD62693A178C69156DA(L_11, L_12, (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mD8FD61B2548D7AFDF1B68CD62693A178C69156DA_RuntimeMethod_var);
		// action?.Invoke(value);
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_13 = V_0;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_14 = V_0;
		float L_15 = ___value1;
		Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55(L_14, L_15, /*hidden argument*/Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_RuntimeMethod_var);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Single MLAgents.SideChannels.FloatPropertiesChannel::GetPropertyWithDefault(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatPropertiesChannel_GetPropertyWithDefault_m606232D53B66DA1397CF28C9D8A781588B6D159B (FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234 * __this, String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatPropertiesChannel_GetPropertyWithDefault_m606232D53B66DA1397CF28C9D8A781588B6D159B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// bool hasKey = m_FloatProperties.TryGetValue(key, out valueOut);
		Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * L_0 = __this->get_m_FloatProperties_2();
		String_t* L_1 = ___key0;
		bool L_2 = Dictionary_2_TryGetValue_m1530F7CEF73C752C8EC99624161918B97222C8AF(L_0, L_1, (float*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1530F7CEF73C752C8EC99624161918B97222C8AF_RuntimeMethod_var);
		// return hasKey ? valueOut : defaultValue;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		float L_3 = ___defaultValue1;
		return L_3;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void MLAgents.SideChannels.FloatPropertiesChannel::RegisterCallback(System.String,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatPropertiesChannel_RegisterCallback_mAA1177E1C560D3EDF4F7D21D07E789AD0A265B3F (FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234 * __this, String_t* ___key0, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatPropertiesChannel_RegisterCallback_mAA1177E1C560D3EDF4F7D21D07E789AD0A265B3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RegisteredActions[key] = action;
		Dictionary_2_t57D63CBFD677F8BDF5A7B204D63205BDCD6A4683 * L_0 = __this->get_m_RegisteredActions_3();
		String_t* L_1 = ___key0;
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_2 = ___action1;
		Dictionary_2_set_Item_m35114EF43C240EBF37D72E10E3B64F7956287362(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m35114EF43C240EBF37D72E10E3B64F7956287362_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IList`1<System.String> MLAgents.SideChannels.FloatPropertiesChannel::ListProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FloatPropertiesChannel_ListProperties_m6DA3F82B7C0FA1621276D813EB381D8C5A8F895C (FloatPropertiesChannel_t793ADFD4AAACB6F924F3B68480CE1081C233A234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FloatPropertiesChannel_ListProperties_m6DA3F82B7C0FA1621276D813EB381D8C5A8F895C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<string>(m_FloatProperties.Keys);
		Dictionary_2_t89F484A77FD6673A172CE80BD0A37031FBD1FD6A * L_0 = __this->get_m_FloatProperties_2();
		KeyCollection_tC5E8EF2C2B945EBBADDE49DE4A8C215AA7B490ED * L_1 = Dictionary_2_get_Keys_m9F3F788EF06F3E37AC1EAA1B6ACAF961DCE20B68(L_0, /*hidden argument*/Dictionary_2_get_Keys_m9F3F788EF06F3E37AC1EAA1B6ACAF961DCE20B68_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599(L_2, L_1, /*hidden argument*/List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.SideChannels.IncomingMessage::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncomingMessage__ctor_m6164147232CAEFBA86A93B32AB1D5DBC9A110AA6 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncomingMessage__ctor_m6164147232CAEFBA86A93B32AB1D5DBC9A110AA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IncomingMessage(byte[] data)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_Data = data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		__this->set_m_Data_0(L_0);
		// m_Stream = new MemoryStream(data);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_2, L_1, /*hidden argument*/NULL);
		__this->set_m_Stream_1(L_2);
		// m_Reader = new BinaryReader(m_Stream);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = __this->get_m_Stream_1();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_Reader_2(L_4);
		// }
		return;
	}
}
// System.Boolean MLAgents.SideChannels.IncomingMessage::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IncomingMessage_ReadBoolean_m58DB820AA172C15BB9F8A0A07B7BBD7AAB525A59 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	{
		// return m_Reader.ReadBoolean();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = __this->get_m_Reader_2();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_0);
		return L_1;
	}
}
// System.Int32 MLAgents.SideChannels.IncomingMessage::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	{
		// return m_Reader.ReadInt32();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = __this->get_m_Reader_2();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		return L_1;
	}
}
// System.Single MLAgents.SideChannels.IncomingMessage::ReadFloat32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IncomingMessage_ReadFloat32_m839312FE1C4A7111F74FED51EA8BAD26F0B77673 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	{
		// return m_Reader.ReadSingle();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = __this->get_m_Reader_2();
		float L_1 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		return L_1;
	}
}
// System.String MLAgents.SideChannels.IncomingMessage::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IncomingMessage_ReadString_m286DC037CA31A6C3AE04C6F17C971CDF2B4A3824 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var strLength = ReadInt32();
		int32_t L_0 = IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// var str = Encoding.ASCII.GetString(m_Reader.ReadBytes(strLength));
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = __this->get_m_Reader_2();
		int32_t L_3 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_2, L_3);
		String_t* L_5 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_1, L_4);
		// return str;
		return L_5;
	}
}
// System.Collections.Generic.IList`1<System.Single> MLAgents.SideChannels.IncomingMessage::ReadFloatList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IncomingMessage_ReadFloatList_mC8EAD4F46D37A689711F5C87CA32CF935AA71670 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncomingMessage_ReadFloatList_mC8EAD4F46D37A689711F5C87CA32CF935AA71670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var len = ReadInt32();
		int32_t L_0 = IncomingMessage_ReadInt32_m949A3CB40991B05FA611F62FFB14B536D03DC53A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// var output = new float[len];
		int32_t L_1 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// for (var i = 0; i < len; i++)
		V_2 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		// output[i] = ReadFloat32();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = V_1;
		int32_t L_4 = V_2;
		float L_5 = IncomingMessage_ReadFloat32_m839312FE1C4A7111F74FED51EA8BAD26F0B77673(__this, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (float)L_5);
		// for (var i = 0; i < len; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001f:
	{
		// for (var i = 0; i < len; i++)
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		// return output;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = V_1;
		return (RuntimeObject*)L_9;
	}
}
// System.Byte[] MLAgents.SideChannels.IncomingMessage::GetRawBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* IncomingMessage_GetRawBytes_m94854FF75D37810387EF866C63DCEDCCB78DEC90 (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	{
		// return m_Data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_m_Data_0();
		return L_0;
	}
}
// System.Void MLAgents.SideChannels.IncomingMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncomingMessage_Dispose_m1195AE0FCDBB47077943E6B1D7C2FF9F460F250D (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * G_B2_0 = NULL;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * G_B1_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B5_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B4_0 = NULL;
	{
		// m_Reader?.Dispose();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = __this->get_m_Reader_2();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		BinaryReader_Dispose_m2047D05935E76EBB1E910D491671B339E320203C(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// m_Stream?.Dispose();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = __this->get_m_Stream_1();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.SideChannels.OutgoingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage__ctor_m9CD5F10440FC406D6B41ABF8BFE319C1CBA62D8B (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutgoingMessage__ctor_m9CD5F10440FC406D6B41ABF8BFE319C1CBA62D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OutgoingMessage()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_Stream = new MemoryStream();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		__this->set_m_Stream_1(L_0);
		// m_Writer = new BinaryWriter(m_Stream);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = __this->get_m_Stream_1();
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_2, L_1, /*hidden argument*/NULL);
		__this->set_m_Writer_0(L_2);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_Dispose_mAE591356D85B4E39E9A0A4639BC0013F20672F7C (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, const RuntimeMethod* method)
{
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * G_B2_0 = NULL;
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * G_B1_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B5_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B4_0 = NULL;
	{
		// m_Writer?.Dispose();
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_m_Writer_0();
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		BinaryWriter_Dispose_m113A91A7BE5F7C89738C8C6C1D0E588B1A63C0FC(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// m_Stream?.Dispose();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = __this->get_m_Stream_1();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteBoolean_mAA5D00133E415062B93769063A87CBB57F7E68B2 (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, bool ___b0, const RuntimeMethod* method)
{
	{
		// m_Writer.Write(b);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_m_Writer_0();
		bool L_1 = ___b0;
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteInt32_mCCFBAFFD9DF2BCD5A62B4E43AC59423B3D436E59 (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// m_Writer.Write(i);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_m_Writer_0();
		int32_t L_1 = ___i0;
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteFloat32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteFloat32_m1B4B69EC27D61494C92DF3539C7DE861D25EF628 (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// m_Writer.Write(f);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get_m_Writer_0();
		float L_1 = ___f0;
		VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteString_m6B3F0FD699ACB30F2B546D9F691058EDFD0D72FD (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, String_t* ___s0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// var stringEncoded = Encoding.ASCII.GetBytes(s);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_Writer.Write(stringEncoded.Length);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_3 = __this->get_m_Writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// m_Writer.Write(stringEncoded);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = __this->get_m_Writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::WriteFloatList(System.Collections.Generic.IList`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_WriteFloatList_mB64FD57594F45C4E4E6EDB86D1702739BA10C95E (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, RuntimeObject* ___floatList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutgoingMessage_WriteFloatList_mB64FD57594F45C4E4E6EDB86D1702739BA10C95E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	float V_1 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// WriteInt32(floatList.Count);
		RuntimeObject* L_0 = ___floatList0;
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, ICollection_1_t3F3A7CBAD43FC51A631E478D2027A2C979A74967_il2cpp_TypeInfo_var, L_0);
		OutgoingMessage_WriteInt32_mCCFBAFFD9DF2BCD5A62B4E43AC59423B3D436E59(__this, L_1, /*hidden argument*/NULL);
		// foreach (var f in floatList)
		RuntimeObject* L_2 = ___floatList0;
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t8FCB5BDD2F23D48DA1EBD3AFE3390785A89CC67C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0015:
		{
			// foreach (var f in floatList)
			RuntimeObject* L_4 = V_0;
			float L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t855E9721BBB68B864B59AB92296F2E67ADC9E88E_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			// WriteFloat32(f);
			float L_6 = V_1;
			OutgoingMessage_WriteFloat32_m1B4B69EC27D61494C92DF3539C7DE861D25EF628(__this, L_6, /*hidden argument*/NULL);
		}

IL_0023:
		{
			// foreach (var f in floatList)
			RuntimeObject* L_7 = V_0;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0015;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			if (!L_9)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			RuntimeObject* L_10 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.OutgoingMessage::SetRawBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessage_SetRawBytes_mCD776C1A88C8685D2D5666ADC8C178279C90A01E (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B2_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B3_1 = NULL;
	{
		// m_Stream.Seek(0, SeekOrigin.Begin);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = __this->get_m_Stream_1();
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, (((int64_t)((int64_t)0))), 0);
		// m_Stream.SetLength(0);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = __this->get_m_Stream_1();
		VirtActionInvoker1< int64_t >::Invoke(26 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_1, (((int64_t)((int64_t)0))));
		// m_Stream.Capacity = (m_Stream.Capacity < data.Length) ? data.Length : m_Stream.Capacity;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = __this->get_m_Stream_1();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_3 = __this->get_m_Stream_1();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(32 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___data0;
		G_B1_0 = L_2;
		if ((((int32_t)L_4) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))))
		{
			G_B2_0 = L_2;
			goto IL_003f;
		}
	}
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_6 = __this->get_m_Stream_1();
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(32 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_6);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_003f:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___data0;
		G_B3_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))));
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.IO.MemoryStream::set_Capacity(System.Int32) */, G_B3_1, G_B3_0);
		// m_Stream.Write(data, 0, data.Length);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_9 = __this->get_m_Stream_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___data0;
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		// }
		return;
	}
}
// System.Byte[] MLAgents.SideChannels.OutgoingMessage::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* OutgoingMessage_ToByteArray_m7E40D94739B29EFE9BA7622184C0903949044E2B (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * __this, const RuntimeMethod* method)
{
	{
		// return m_Stream.ToArray();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = __this->get_m_Stream_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.SideChannels.RawBytesChannel::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawBytesChannel__ctor_mDEC4B7238CA39878D4C98EDE501F818E813451FD (RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960 * __this, Guid_t  ___channelId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawBytesChannel__ctor_mDEC4B7238CA39878D4C98EDE501F818E813451FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<byte[]> m_MessagesReceived = new List<byte[]>();
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *)il2cpp_codegen_object_new(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var);
		List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547(L_0, /*hidden argument*/List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var);
		__this->set_m_MessagesReceived_2(L_0);
		// public RawBytesChannel(Guid channelId)
		SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752(__this, /*hidden argument*/NULL);
		// ChannelId = channelId;
		Guid_t  L_1 = ___channelId0;
		SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.RawBytesChannel::OnMessageReceived(MLAgents.SideChannels.IncomingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawBytesChannel_OnMessageReceived_m1D24466FC97827D804C6FF79286019469ABD9EE8 (RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960 * __this, IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawBytesChannel_OnMessageReceived_m1D24466FC97827D804C6FF79286019469ABD9EE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MessagesReceived.Add(msg.GetRawBytes());
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = __this->get_m_MessagesReceived_2();
		IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * L_1 = ___msg0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = IncomingMessage_GetRawBytes_m94854FF75D37810387EF866C63DCEDCCB78DEC90_inline(L_1, /*hidden argument*/NULL);
		List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA(L_0, L_2, /*hidden argument*/List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.RawBytesChannel::SendRawBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawBytesChannel_SendRawBytes_m1C1B8B1C79683C0916DDC42480F28D100F44973F (RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawBytesChannel_SendRawBytes_m1C1B8B1C79683C0916DDC42480F28D100F44973F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var msg = new OutgoingMessage())
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_0 = (OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB *)il2cpp_codegen_object_new(OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB_il2cpp_TypeInfo_var);
		OutgoingMessage__ctor_m9CD5F10440FC406D6B41ABF8BFE319C1CBA62D8B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// msg.SetRawBytes(data);
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_1 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data0;
		OutgoingMessage_SetRawBytes_mCD776C1A88C8685D2D5666ADC8C178279C90A01E(L_1, L_2, /*hidden argument*/NULL);
		// QueueMessageToSend(msg);
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_3 = V_0;
		SideChannel_QueueMessageToSend_mF010D33728EE37F16323B4D9ECAC19530B2ADF6F(__this, L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x20, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		{
			OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_5 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(22)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IList`1<System.Byte[]> MLAgents.SideChannels.RawBytesChannel::GetAndClearReceivedMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RawBytesChannel_GetAndClearReceivedMessages_m1E0A605DFA08BC7739A7BD452C861BF729DCFDA1 (RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawBytesChannel_GetAndClearReceivedMessages_m1E0A605DFA08BC7739A7BD452C861BF729DCFDA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var result = new List<byte[]>();
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *)il2cpp_codegen_object_new(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var);
		List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547(L_0, /*hidden argument*/List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var);
		// result.AddRange(m_MessagesReceived);
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_1 = L_0;
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_2 = __this->get_m_MessagesReceived_2();
		List_1_AddRange_m89244AB36E08C3A7B446145300B40A6B87113A9C(L_1, L_2, /*hidden argument*/List_1_AddRange_m89244AB36E08C3A7B446145300B40A6B87113A9C_RuntimeMethod_var);
		// m_MessagesReceived.Clear();
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_3 = __this->get_m_MessagesReceived_2();
		List_1_Clear_mC45B57C3443B3DC8F3BB87FE06B5F9409018DD29(L_3, /*hidden argument*/List_1_Clear_mC45B57C3443B3DC8F3BB87FE06B5F9409018DD29_RuntimeMethod_var);
		// return result;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<System.Byte[]> MLAgents.SideChannels.RawBytesChannel::GetReceivedMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RawBytesChannel_GetReceivedMessages_m7506B119B41A47CE72EBE7E3E1F80EDB574350AB (RawBytesChannel_t88992AAC0EE66BF8FE27FEFCC10D8BC8FAF3B960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawBytesChannel_GetReceivedMessages_m7506B119B41A47CE72EBE7E3E1F80EDB574350AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var result = new List<byte[]>();
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *)il2cpp_codegen_object_new(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var);
		List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547(L_0, /*hidden argument*/List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var);
		// result.AddRange(m_MessagesReceived);
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_1 = L_0;
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_2 = __this->get_m_MessagesReceived_2();
		List_1_AddRange_m89244AB36E08C3A7B446145300B40A6B87113A9C(L_1, L_2, /*hidden argument*/List_1_AddRange_m89244AB36E08C3A7B446145300B40A6B87113A9C_RuntimeMethod_var);
		// return result;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Guid MLAgents.SideChannels.SideChannel::get_ChannelId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  SideChannel_get_ChannelId_mAD550551FF62E07F7A6148C4869EC6EB0E2DB4B7 (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, const RuntimeMethod* method)
{
	{
		// get;
		Guid_t  L_0 = __this->get_U3CChannelIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void MLAgents.SideChannels.SideChannel::set_ChannelId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967 (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		// protected set;
		Guid_t  L_0 = ___value0;
		__this->set_U3CChannelIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void MLAgents.SideChannels.SideChannel::QueueMessageToSend(MLAgents.SideChannels.OutgoingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SideChannel_QueueMessageToSend_mF010D33728EE37F16323B4D9ECAC19530B2ADF6F (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SideChannel_QueueMessageToSend_mF010D33728EE37F16323B4D9ECAC19530B2ADF6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageQueue.Add(msg.ToByteArray());
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = __this->get_MessageQueue_0();
		OutgoingMessage_t3BC0FD095F3CD29DD5EE9F954E05749B051621BB * L_1 = ___msg0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = OutgoingMessage_ToByteArray_m7E40D94739B29EFE9BA7622184C0903949044E2B(L_1, /*hidden argument*/NULL);
		List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA(L_0, L_2, /*hidden argument*/List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MLAgents.SideChannels.SideChannel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752 (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SideChannel__ctor_m93BD71DBAD041C560AA262B538E120BA11279752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal List<byte[]> MessageQueue = new List<byte[]>();
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *)il2cpp_codegen_object_new(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var);
		List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547(L_0, /*hidden argument*/List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var);
		__this->set_MessageQueue_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 MLAgents.TimerNode::get_CurrentTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimerNode_get_CurrentTicks_mEF4A536BF8BAE774451BFDCE6B5BFCF3332D9B80 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_get_CurrentTicks_mEF4A536BF8BAE774451BFDCE6B5BFCF3332D9B80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var currentTicks = m_TotalTicks;
		int64_t L_0 = __this->get_m_TotalTicks_6();
		V_0 = L_0;
		// if (m_TickStart != 0)
		int64_t L_1 = __this->get_m_TickStart_7();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// currentTicks += (DateTime.Now.Ticks - m_TickStart);
		int64_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_3;
		int64_t L_4 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		int64_t L_5 = __this->get_m_TickStart_7();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)L_5))));
	}

IL_0026:
	{
		// return currentTicks;
		int64_t L_6 = V_0;
		return L_6;
	}
}
// System.Double MLAgents.TimerNode::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimerNode_get_TotalSeconds_m88155A3BE60C7CF1962346397EF863B063D3D172 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_get_TotalSeconds_m88155A3BE60C7CF1962346397EF863B063D3D172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CurrentTicks * s_TicksToSeconds; }
		int64_t L_0 = TimerNode_get_CurrentTicks_mEF4A536BF8BAE774451BFDCE6B5BFCF3332D9B80(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var);
		double L_1 = ((TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields*)il2cpp_codegen_static_fields_for(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var))->get_s_TicksToSeconds_1();
		return ((double)il2cpp_codegen_multiply((double)(((double)((double)L_0))), (double)L_1));
	}
}
// System.Void MLAgents.TimerNode::set_TotalSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_set_TotalSeconds_mACBF80377ACF93C8FDF56AD971691870F8FF8244 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set {}  // Serialization needs this, but unused.
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,MLAgents.GaugeNode> MLAgents.TimerNode::get_Gauges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * TimerNode_get_Gauges_m6294638153DBB9D45698B6EFAAA46AEFA0AE8678 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Gauges; }
		Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * L_0 = __this->get_m_Gauges_4();
		return L_0;
	}
}
// System.Double MLAgents.TimerNode::get_SelfSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimerNode_get_SelfSeconds_mFB2FD9E996646AD11BE6180DCDC76DC7C8646EFD (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_get_SelfSeconds_mFB2FD9E996646AD11BE6180DCDC76DC7C8646EFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Enumerator_t6B652C2015073042D685DC96B824F75531C757BB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// long totalChildTicks = 0;
		V_0 = (((int64_t)((int64_t)0)));
		// if (m_Children != null)
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_0 = __this->get_m_Children_3();
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// foreach (var child in m_Children.Values)
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_1 = __this->get_m_Children_3();
		ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * L_2 = Dictionary_2_get_Values_m774FD96EBEB6F9308DA314CEB064BF167857B270(L_1, /*hidden argument*/Dictionary_2_get_Values_m774FD96EBEB6F9308DA314CEB064BF167857B270_RuntimeMethod_var);
		Enumerator_t6B652C2015073042D685DC96B824F75531C757BB  L_3 = ValueCollection_GetEnumerator_m5EBFF170FD8FB121C7C3327584A77246E4157FD9(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m5EBFF170FD8FB121C7C3327584A77246E4157FD9_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_001e:
		{
			// foreach (var child in m_Children.Values)
			TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_4 = Enumerator_get_Current_m0035ED15A62BCDB607BB9DEA0372E1540A6C030A_inline((Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0035ED15A62BCDB607BB9DEA0372E1540A6C030A_RuntimeMethod_var);
			V_2 = L_4;
			// totalChildTicks += child.m_TotalTicks;
			int64_t L_5 = V_0;
			TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_6 = V_2;
			int64_t L_7 = L_6->get_m_TotalTicks_6();
			V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)L_7));
		}

IL_002f:
		{
			// foreach (var child in m_Children.Values)
			bool L_8 = Enumerator_MoveNext_mAADE052F2F2D16B51A7F4B30F15C0DC4E5565290((Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mAADE052F2F2D16B51A7F4B30F15C0DC4E5565290_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001e;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF9A40CC2094555D50FE4AD4BAF6FFB1C83641FB2((Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF9A40CC2094555D50FE4AD4BAF6FFB1C83641FB2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		// var selfTicks = Mathf.Max(0, CurrentTicks - totalChildTicks);
		int64_t L_9 = TimerNode_get_CurrentTicks_mEF4A536BF8BAE774451BFDCE6B5BFCF3332D9B80(__this, /*hidden argument*/NULL);
		int64_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65((0.0f), (((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)L_9, (int64_t)L_10))))), /*hidden argument*/NULL);
		// return selfTicks * s_TicksToSeconds;
		IL2CPP_RUNTIME_CLASS_INIT(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var);
		double L_12 = ((TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields*)il2cpp_codegen_static_fields_for(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var))->get_s_TicksToSeconds_1();
		return ((double)il2cpp_codegen_multiply((double)(((double)((double)L_11))), (double)L_12));
	}
}
// System.Void MLAgents.TimerNode::set_SelfSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_set_SelfSeconds_mF361B152C16D20D4CBA6E94A8E11628501908D69 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set {}  // Serialization needs this, but unused.
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,MLAgents.TimerNode> MLAgents.TimerNode::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimerNode_get_Children_mD74A8257B188B0F8B0E816C297A1F7E3D960F15D (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Children; }
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_0 = __this->get_m_Children_3();
		return L_0;
	}
}
// System.Int32 MLAgents.TimerNode::get_NumCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimerNode_get_NumCalls_m3A41175408609DE46DF37B74A7E791521AA539EA (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_NumCalls; }
		int32_t L_0 = __this->get_m_NumCalls_8();
		return L_0;
	}
}
// System.Void MLAgents.TimerNode::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode__ctor_m808910ACB4547A21A4BC43B0AC205422A2997A38 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, String_t* ___name0, bool ___isRoot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode__ctor_m808910ACB4547A21A4BC43B0AC205422A2997A38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public TimerNode(string name, bool isRoot = false)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_FullName = name;
		String_t* L_0 = ___name0;
		__this->set_m_FullName_2(L_0);
		// if (isRoot)
		bool L_1 = ___isRoot1;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// m_NumCalls = 1;
		__this->set_m_NumCalls_8(1);
		// m_TickStart = DateTime.Now.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_2;
		int64_t L_3 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_TickStart_7(L_3);
		// m_Gauges = new Dictionary<string, GaugeNode>();
		Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * L_4 = (Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 *)il2cpp_codegen_object_new(Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m02123C0533F1433A912E9127E38288D99A947E14(L_4, /*hidden argument*/Dictionary_2__ctor_m02123C0533F1433A912E9127E38288D99A947E14_RuntimeMethod_var);
		__this->set_m_Gauges_4(L_4);
		// }
		return;
	}

IL_0036:
	{
		// m_Sampler = CustomSampler.Create(m_FullName);
		String_t* L_5 = __this->get_m_FullName_2();
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8_il2cpp_TypeInfo_var);
		CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * L_6 = CustomSampler_Create_m454B8B69BB1085AAC8AFC39B1EB311474080C0BA(L_5, /*hidden argument*/NULL);
		__this->set_m_Sampler_5(L_6);
		// }
		return;
	}
}
// System.Void MLAgents.TimerNode::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_Begin_mA8A00859375F136C170A583DB598C4438C04A811 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_Begin_mA8A00859375F136C170A583DB598C4438C04A811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_TickStart = DateTime.Now.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_TickStart_7(L_1);
		// }
		return;
	}
}
// System.Void MLAgents.TimerNode::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode_End_m4B7B65D03E996548B6512C7097EAC8F0AB5A62FA (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_End_m4B7B65D03E996548B6512C7097EAC8F0AB5A62FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var elapsed = DateTime.Now.Ticks - m_TickStart;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_0;
		int64_t L_1 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		int64_t L_2 = __this->get_m_TickStart_7();
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_2));
		// m_TotalTicks += elapsed;
		int64_t L_3 = __this->get_m_TotalTicks_6();
		int64_t L_4 = V_0;
		__this->set_m_TotalTicks_6(((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)L_4)));
		// m_TickStart = 0;
		__this->set_m_TickStart_7((((int64_t)((int64_t)0))));
		// m_NumCalls++;
		int32_t L_5 = __this->get_m_NumCalls_8();
		__this->set_m_NumCalls_8(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// MLAgents.TimerNode MLAgents.TimerNode::GetChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * TimerNode_GetChild_m154B0197CE8AE7D4CEE260FB05D10544C8987474 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_GetChild_m154B0197CE8AE7D4CEE260FB05D10544C8987474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * V_0 = NULL;
	{
		// if (m_Children == null)
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_0 = __this->get_m_Children_3();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Children = new Dictionary<string, TimerNode>();
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_1 = (Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 *)il2cpp_codegen_object_new(Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE0D5616D9DBCF4B3660A3D11673DF8175BD3AD55(L_1, /*hidden argument*/Dictionary_2__ctor_mE0D5616D9DBCF4B3660A3D11673DF8175BD3AD55_RuntimeMethod_var);
		__this->set_m_Children_3(L_1);
	}

IL_0013:
	{
		// if (!m_Children.ContainsKey(name))
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_2 = __this->get_m_Children_3();
		String_t* L_3 = ___name0;
		bool L_4 = Dictionary_2_ContainsKey_m10EC4DD8F19221E23FA2A65C1D766FF4AFE997BA(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m10EC4DD8F19221E23FA2A65C1D766FF4AFE997BA_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		// var childFullName = m_FullName + s_Separator + name;
		String_t* L_5 = __this->get_m_FullName_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var);
		String_t* L_6 = ((TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields*)il2cpp_codegen_static_fields_for(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var))->get_s_Separator_0();
		String_t* L_7 = ___name0;
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_5, L_6, L_7, /*hidden argument*/NULL);
		// var newChild = new TimerNode(childFullName);
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_9 = (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE *)il2cpp_codegen_object_new(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var);
		TimerNode__ctor_m808910ACB4547A21A4BC43B0AC205422A2997A38(L_9, L_8, (bool)0, /*hidden argument*/NULL);
		V_0 = L_9;
		// m_Children[name] = newChild;
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_10 = __this->get_m_Children_3();
		String_t* L_11 = ___name0;
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_12 = V_0;
		Dictionary_2_set_Item_mF1E3D45A84F80A435302E1212777C0DFF90CB64A(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_mF1E3D45A84F80A435302E1212777C0DFF90CB64A_RuntimeMethod_var);
		// return newChild;
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_13 = V_0;
		return L_13;
	}

IL_0048:
	{
		// return m_Children[name];
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_14 = __this->get_m_Children_3();
		String_t* L_15 = ___name0;
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_16 = Dictionary_2_get_Item_mBC0BB330D565CB110E2F1B287A0EDB44ED86D14D(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mBC0BB330D565CB110E2F1B287A0EDB44ED86D14D_RuntimeMethod_var);
		return L_16;
	}
}
// System.String MLAgents.TimerNode::DebugGetTimerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerNode_DebugGetTimerString_m49CD4397EB0A96820F6262663961283C025DEDF3 (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, String_t* ___parentName0, int32_t ___level1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode_DebugGetTimerString_m49CD4397EB0A96820F6262663961283C025DEDF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Enumerator_t6B652C2015073042D685DC96B824F75531C757BB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B3_0 = NULL;
	{
		// var indent = new string(' ', 2 * level); // TODO generalize
		int32_t L_0 = ___level1;
		String_t* L_1 = String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93(NULL, ((int32_t)32), ((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		// var shortName = (level == 0) ? m_FullName : m_FullName.Replace(parentName + s_Separator, "");
		int32_t L_2 = ___level1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = __this->get_m_FullName_2();
		String_t* L_4 = ___parentName0;
		IL2CPP_RUNTIME_CLASS_INIT(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields*)il2cpp_codegen_static_fields_for(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var))->get_s_Separator_0();
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_3, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0031;
	}

IL_002b:
	{
		String_t* L_8 = __this->get_m_FullName_2();
		G_B3_0 = L_8;
	}

IL_0031:
	{
		V_1 = G_B3_0;
		// if (level == 0)
		int32_t L_9 = ___level1;
		if (L_9)
		{
			goto IL_0043;
		}
	}
	{
		// timerString = $"{shortName}(root)\n";
		String_t* L_10 = V_1;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_10, _stringLiteralDED10CDED0C5637557BC6139F4C0C144968D0AA3, /*hidden argument*/NULL);
		V_2 = L_11;
		// }
		goto IL_0078;
	}

IL_0043:
	{
		// timerString = $"{indent}{shortName}\t\traw={TotalSeconds}  rawCount={m_NumCalls}\n";
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = V_0;
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		String_t* L_16 = V_1;
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_15;
		double L_18 = TimerNode_get_TotalSeconds_m88155A3BE60C7CF1962346397EF863B063D3D172(__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_17;
		int32_t L_22 = __this->get_m_NumCalls_8();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_24);
		String_t* L_25 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9A62370C80FEB14D20C05AB732F84E38A55E9285, L_21, /*hidden argument*/NULL);
		V_2 = L_25;
	}

IL_0078:
	{
		// if (m_Children != null)
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_26 = __this->get_m_Children_3();
		if (!L_26)
		{
			goto IL_00cc;
		}
	}
	{
		// foreach (var c in m_Children.Values)
		Dictionary_2_t8DC8CD59473608BA01F52219286675AED5094D03 * L_27 = __this->get_m_Children_3();
		ValueCollection_tCCD5941B369CD0C0C23088B494AB327A374965B8 * L_28 = Dictionary_2_get_Values_m774FD96EBEB6F9308DA314CEB064BF167857B270(L_27, /*hidden argument*/Dictionary_2_get_Values_m774FD96EBEB6F9308DA314CEB064BF167857B270_RuntimeMethod_var);
		Enumerator_t6B652C2015073042D685DC96B824F75531C757BB  L_29 = ValueCollection_GetEnumerator_m5EBFF170FD8FB121C7C3327584A77246E4157FD9(L_28, /*hidden argument*/ValueCollection_GetEnumerator_m5EBFF170FD8FB121C7C3327584A77246E4157FD9_RuntimeMethod_var);
		V_3 = L_29;
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b3;
		}

IL_0093:
		{
			// foreach (var c in m_Children.Values)
			TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_30 = Enumerator_get_Current_m0035ED15A62BCDB607BB9DEA0372E1540A6C030A_inline((Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *)(&V_3), /*hidden argument*/Enumerator_get_Current_m0035ED15A62BCDB607BB9DEA0372E1540A6C030A_RuntimeMethod_var);
			V_4 = L_30;
			// timerString += c.DebugGetTimerString(m_FullName, level + 1);
			String_t* L_31 = V_2;
			TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_32 = V_4;
			String_t* L_33 = __this->get_m_FullName_2();
			int32_t L_34 = ___level1;
			String_t* L_35 = TimerNode_DebugGetTimerString_m49CD4397EB0A96820F6262663961283C025DEDF3(L_32, L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
			String_t* L_36 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_31, L_35, /*hidden argument*/NULL);
			V_2 = L_36;
		}

IL_00b3:
		{
			// foreach (var c in m_Children.Values)
			bool L_37 = Enumerator_MoveNext_mAADE052F2F2D16B51A7F4B30F15C0DC4E5565290((Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mAADE052F2F2D16B51A7F4B30F15C0DC4E5565290_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_0093;
			}
		}

IL_00bc:
		{
			IL2CPP_LEAVE(0xCC, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF9A40CC2094555D50FE4AD4BAF6FFB1C83641FB2((Enumerator_t6B652C2015073042D685DC96B824F75531C757BB *)(&V_3), /*hidden argument*/Enumerator_Dispose_mF9A40CC2094555D50FE4AD4BAF6FFB1C83641FB2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(190)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xCC, IL_00cc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cc:
	{
		// return timerString;
		String_t* L_38 = V_2;
		return L_38;
	}
}
// System.Void MLAgents.TimerNode::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerNode__cctor_mC620EDA9C02A84BE35535A42615651DEEE14FF28 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerNode__cctor_mC620EDA9C02A84BE35535A42615651DEEE14FF28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static string s_Separator = ".";
		((TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields*)il2cpp_codegen_static_fields_for(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var))->set_s_Separator_0(_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		// static double s_TicksToSeconds = 1e-7; // 100 ns per tick
		((TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_StaticFields*)il2cpp_codegen_static_fields_for(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var))->set_s_TicksToSeconds_1((1.0E-07));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.TimerStack::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack__cctor_mE2EB8A6F6112B4B002241135020A319700557E42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack__cctor_mE2EB8A6F6112B4B002241135020A319700557E42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly TimerStack k_Instance = new TimerStack();
		TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * L_0 = (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F *)il2cpp_codegen_object_new(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_il2cpp_TypeInfo_var);
		TimerStack__ctor_m7106A12136B16821EEADEDB9C75D4CA853390616(L_0, /*hidden argument*/NULL);
		((TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_StaticFields*)il2cpp_codegen_static_fields_for(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_il2cpp_TypeInfo_var))->set_k_Instance_0(L_0);
		// }
		return;
	}
}
// System.Void MLAgents.TimerStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack__ctor_m7106A12136B16821EEADEDB9C75D4CA853390616 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack__ctor_m7106A12136B16821EEADEDB9C75D4CA853390616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TimerStack()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Reset();
		TimerStack_Reset_mFBC996329C5A195EA9FF556C611335C026C58C80(__this, _stringLiteralDC76E9F0C0006E8F919E0C515C66DBBA3982F785, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.TimerStack::Reset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Reset_mFBC996329C5A195EA9FF556C611335C026C58C80 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_Reset_mFBC996329C5A195EA9FF556C611335C026C58C80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Stack = new Stack<TimerNode>();
		Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * L_0 = (Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 *)il2cpp_codegen_object_new(Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520_il2cpp_TypeInfo_var);
		Stack_1__ctor_mAFC5D8B2CFAF98823E0077C86A52B0F92D8C90AE(L_0, /*hidden argument*/Stack_1__ctor_mAFC5D8B2CFAF98823E0077C86A52B0F92D8C90AE_RuntimeMethod_var);
		__this->set_m_Stack_1(L_0);
		// m_RootNode = new TimerNode(name, true);
		String_t* L_1 = ___name0;
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_2 = (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE *)il2cpp_codegen_object_new(TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_il2cpp_TypeInfo_var);
		TimerNode__ctor_m808910ACB4547A21A4BC43B0AC205422A2997A38(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		__this->set_m_RootNode_2(L_2);
		// m_Stack.Push(m_RootNode);
		Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * L_3 = __this->get_m_Stack_1();
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_4 = __this->get_m_RootNode_2();
		Stack_1_Push_m159C6E24B2483316B9DECFEBF3616701352EA2C7(L_3, L_4, /*hidden argument*/Stack_1_Push_m159C6E24B2483316B9DECFEBF3616701352EA2C7_RuntimeMethod_var);
		// }
		return;
	}
}
// MLAgents.TimerStack MLAgents.TimerStack::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * TimerStack_get_Instance_m15239E3A93B178A10C787BC0F5DC5A18994DAC03 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_get_Instance_m15239E3A93B178A10C787BC0F5DC5A18994DAC03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return k_Instance; }
		IL2CPP_RUNTIME_CLASS_INIT(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_il2cpp_TypeInfo_var);
		TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * L_0 = ((TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_StaticFields*)il2cpp_codegen_static_fields_for(TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F_il2cpp_TypeInfo_var))->get_k_Instance_0();
		return L_0;
	}
}
// MLAgents.TimerNode MLAgents.TimerStack::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * TimerStack_get_RootNode_m88262F66F6ACA1777F2F58CBC03D0F6620214589 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_RootNode; }
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_0 = __this->get_m_RootNode_2();
		return L_0;
	}
}
// System.Void MLAgents.TimerStack::SetGauge(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_SetGauge_mD390CE79F13E5FF561DE830CADFAE6A4A4386FA3 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_SetGauge_mD390CE79F13E5FF561DE830CADFAE6A4A4386FA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E * V_0 = NULL;
	{
		// if (!float.IsNaN(value))
		float L_0 = ___value1;
		bool L_1 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		// if (m_RootNode.Gauges.TryGetValue(name, out gauge))
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_2 = __this->get_m_RootNode_2();
		Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * L_3 = TimerNode_get_Gauges_m6294638153DBB9D45698B6EFAAA46AEFA0AE8678_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		bool L_5 = Dictionary_2_TryGetValue_mD27F8CBF2E48C1DA21333C1A5FD525D2C035000E(L_3, L_4, (GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mD27F8CBF2E48C1DA21333C1A5FD525D2C035000E_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// gauge.Update(value);
		GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E * L_6 = V_0;
		float L_7 = ___value1;
		GaugeNode_Update_m2EA3815C24EF2748855E6C7D2DA90075381EF81C(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// m_RootNode.Gauges[name] = new GaugeNode(value);
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_8 = __this->get_m_RootNode_2();
		Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * L_9 = TimerNode_get_Gauges_m6294638153DBB9D45698B6EFAAA46AEFA0AE8678_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___name0;
		float L_11 = ___value1;
		GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E * L_12 = (GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E *)il2cpp_codegen_object_new(GaugeNode_t45EA6B36CFCA61576A6873EB3EFBD9FFC492367E_il2cpp_TypeInfo_var);
		GaugeNode__ctor_m0119590985806700D8CBDA5D8551390BA856C682(L_12, L_11, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m4CC0944B44714A69F8AE2DCB9A38009BF00C0017(L_9, L_10, L_12, /*hidden argument*/Dictionary_2_set_Item_m4CC0944B44714A69F8AE2DCB9A38009BF00C0017_RuntimeMethod_var);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void MLAgents.TimerStack::Push(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Push_m4BCE0CFAD80D03754D1F6C8B3B51B15B059821E6 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_Push_m4BCE0CFAD80D03754D1F6C8B3B51B15B059821E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * V_0 = NULL;
	{
		// var current = m_Stack.Peek();
		Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * L_0 = __this->get_m_Stack_1();
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_1 = Stack_1_Peek_m23189E322CE0961BC9146B9C04090C64735B26AB(L_0, /*hidden argument*/Stack_1_Peek_m23189E322CE0961BC9146B9C04090C64735B26AB_RuntimeMethod_var);
		// var next = current.GetChild(name);
		String_t* L_2 = ___name0;
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_3 = TimerNode_GetChild_m154B0197CE8AE7D4CEE260FB05D10544C8987474(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// m_Stack.Push(next);
		Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * L_4 = __this->get_m_Stack_1();
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_5 = V_0;
		Stack_1_Push_m159C6E24B2483316B9DECFEBF3616701352EA2C7(L_4, L_5, /*hidden argument*/Stack_1_Push_m159C6E24B2483316B9DECFEBF3616701352EA2C7_RuntimeMethod_var);
		// next.Begin();
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_6 = V_0;
		TimerNode_Begin_mA8A00859375F136C170A583DB598C4438C04A811(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.TimerStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Pop_m8DAE290FBBCA4EEC9786C48C141F98C3D1B521F5 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_Pop_m8DAE290FBBCA4EEC9786C48C141F98C3D1B521F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var node = m_Stack.Pop();
		Stack_1_tB051006908D2C56EEDD657483F238FD40E7E1520 * L_0 = __this->get_m_Stack_1();
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_1 = Stack_1_Pop_m76C45253389C3F44F1FDD6632AAB332B2F87D70D(L_0, /*hidden argument*/Stack_1_Pop_m76C45253389C3F44F1FDD6632AAB332B2F87D70D_RuntimeMethod_var);
		// node.End();
		TimerNode_End_m4B7B65D03E996548B6512C7097EAC8F0AB5A62FA(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// MLAgents.TimerStack MLAgents.TimerStack::Scoped(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * TimerStack_Scoped_m1BCA8DD78E5861681F2F9BB1612FED644C653B9F (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// Push(name);
		String_t* L_0 = ___name0;
		TimerStack_Push_m4BCE0CFAD80D03754D1F6C8B3B51B15B059821E6(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// System.Void MLAgents.TimerStack::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_Dispose_mADBF02606D6510F1C84E0ADDD8420EB99A06A7D7 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method)
{
	{
		// Pop();
		TimerStack_Pop_m8DAE290FBBCA4EEC9786C48C141F98C3D1B521F5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String MLAgents.TimerStack::DebugGetTimerString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerStack_DebugGetTimerString_m55D719E2EB668D9D107CB7CF9CDA5296D525E6A7 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_DebugGetTimerString_m55D719E2EB668D9D107CB7CF9CDA5296D525E6A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_RootNode.DebugGetTimerString();
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_0 = __this->get_m_RootNode_2();
		String_t* L_1 = TimerNode_DebugGetTimerString_m49CD4397EB0A96820F6262663961283C025DEDF3(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MLAgents.TimerStack::SaveJsonTimers(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_SaveJsonTimers_mD26AC9C776E9C81CB7481491305436216B3790CF (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MLAgents.TimerStack::SaveJsonTimers(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerStack_SaveJsonTimers_mBF8018F16CF26E0007F60C2144CD5FBF78B9ACF9 (TimerStack_t7BDD836A7855E5371FD47CA85691B2E455213A9F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerStack_SaveJsonTimers_mBF8018F16CF26E0007F60C2144CD5FBF78B9ACF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * V_0 = NULL;
	{
		// var jsonSettings = new DataContractJsonSerializerSettings();
		DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * L_0 = (DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 *)il2cpp_codegen_object_new(DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85_il2cpp_TypeInfo_var);
		DataContractJsonSerializerSettings__ctor_m526C449065A0F997BEF36138BD3E21DE2A2C5B1E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// jsonSettings.UseSimpleDictionaryFormat = true;
		DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * L_1 = V_0;
		DataContractJsonSerializerSettings_set_UseSimpleDictionaryFormat_m1047ED1D4F66DFFEB5294B745A7EA281CC2020F1_inline(L_1, (bool)1, /*hidden argument*/NULL);
		// var ser = new DataContractJsonSerializer(typeof(TimerNode), jsonSettings);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * L_4 = V_0;
		DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098 * L_5 = (DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098 *)il2cpp_codegen_object_new(DataContractJsonSerializer_t73936690F252D05E6FFD4E3D37E37AC3D297B098_il2cpp_TypeInfo_var);
		DataContractJsonSerializer__ctor_mE75BC688D06BC36A31A110B1C89EA0F4E0510043(L_5, L_3, L_4, /*hidden argument*/NULL);
		// ser.WriteObject(stream, m_RootNode);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___stream0;
		TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * L_7 = __this->get_m_RootNode_2();
		VirtActionInvoker2< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, RuntimeObject * >::Invoke(7 /* System.Void System.Runtime.Serialization.XmlObjectSerializer::WriteObject(System.IO.Stream,System.Object) */, L_5, L_6, L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAgents.UnityAgentsException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAgentsException__ctor_m2C489DB5456702F586E9B0042074C5C38619133E (UnityAgentsException_t5376D7577819EFFC7457A7DCE829311EBA93FD5A * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAgentsException__ctor_m2C489DB5456702F586E9B0042074C5C38619133E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityAgentsException(string message) : base(message)
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAgents.UnityAgentsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAgentsException__ctor_mD89365145EB4C0D7A27B3008802469159F363925 (UnityAgentsException_t5376D7577819EFFC7457A7DCE829311EBA93FD5A * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAgentsException__ctor_mD89365145EB4C0D7A27B3008802469159F363925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected UnityAgentsException(
		//     System.Runtime.Serialization.SerializationInfo info,
		//     System.Runtime.Serialization.StreamingContext context)
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: MLAgents.UnityRLInitParameters
IL2CPP_EXTERN_C void UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshal_pinvoke(const UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475& unmarshaled, UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_pinvoke& marshaled)
{
	marshaled.___seed_0 = unmarshaled.get_seed_0();
	marshaled.___pythonLibraryVersion_1 = il2cpp_codegen_marshal_string(unmarshaled.get_pythonLibraryVersion_1());
	marshaled.___pythonCommunicationVersion_2 = il2cpp_codegen_marshal_string(unmarshaled.get_pythonCommunicationVersion_2());
}
IL2CPP_EXTERN_C void UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshal_pinvoke_back(const UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_pinvoke& marshaled, UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475& unmarshaled)
{
	int32_t unmarshaled_seed_temp_0 = 0;
	unmarshaled_seed_temp_0 = marshaled.___seed_0;
	unmarshaled.set_seed_0(unmarshaled_seed_temp_0);
	unmarshaled.set_pythonLibraryVersion_1(il2cpp_codegen_marshal_string_result(marshaled.___pythonLibraryVersion_1));
	unmarshaled.set_pythonCommunicationVersion_2(il2cpp_codegen_marshal_string_result(marshaled.___pythonCommunicationVersion_2));
}
// Conversion method for clean up from marshalling of: MLAgents.UnityRLInitParameters
IL2CPP_EXTERN_C void UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshal_pinvoke_cleanup(UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___pythonLibraryVersion_1);
	marshaled.___pythonLibraryVersion_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___pythonCommunicationVersion_2);
	marshaled.___pythonCommunicationVersion_2 = NULL;
}
// Conversion methods for marshalling of: MLAgents.UnityRLInitParameters
IL2CPP_EXTERN_C void UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshal_com(const UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475& unmarshaled, UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_com& marshaled)
{
	marshaled.___seed_0 = unmarshaled.get_seed_0();
	marshaled.___pythonLibraryVersion_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_pythonLibraryVersion_1());
	marshaled.___pythonCommunicationVersion_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_pythonCommunicationVersion_2());
}
IL2CPP_EXTERN_C void UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshal_com_back(const UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_com& marshaled, UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475& unmarshaled)
{
	int32_t unmarshaled_seed_temp_0 = 0;
	unmarshaled_seed_temp_0 = marshaled.___seed_0;
	unmarshaled.set_seed_0(unmarshaled_seed_temp_0);
	unmarshaled.set_pythonLibraryVersion_1(il2cpp_codegen_marshal_bstring_result(marshaled.___pythonLibraryVersion_1));
	unmarshaled.set_pythonCommunicationVersion_2(il2cpp_codegen_marshal_bstring_result(marshaled.___pythonCommunicationVersion_2));
}
// Conversion method for clean up from marshalling of: MLAgents.UnityRLInitParameters
IL2CPP_EXTERN_C void UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshal_com_cleanup(UnityRLInitParameters_tFAB8D42FD6341242836FE4AC34050F7AD413A475_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___pythonLibraryVersion_1);
	marshaled.___pythonLibraryVersion_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___pythonCommunicationVersion_2);
	marshaled.___pythonCommunicationVersion_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: MLAgents.UnityRLInputParameters
IL2CPP_EXTERN_C void UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshal_pinvoke(const UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F& unmarshaled, UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_pinvoke& marshaled)
{
	marshaled.___isTraining_0 = static_cast<int32_t>(unmarshaled.get_isTraining_0());
}
IL2CPP_EXTERN_C void UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshal_pinvoke_back(const UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_pinvoke& marshaled, UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F& unmarshaled)
{
	bool unmarshaled_isTraining_temp_0 = false;
	unmarshaled_isTraining_temp_0 = static_cast<bool>(marshaled.___isTraining_0);
	unmarshaled.set_isTraining_0(unmarshaled_isTraining_temp_0);
}
// Conversion method for clean up from marshalling of: MLAgents.UnityRLInputParameters
IL2CPP_EXTERN_C void UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshal_pinvoke_cleanup(UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MLAgents.UnityRLInputParameters
IL2CPP_EXTERN_C void UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshal_com(const UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F& unmarshaled, UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_com& marshaled)
{
	marshaled.___isTraining_0 = static_cast<int32_t>(unmarshaled.get_isTraining_0());
}
IL2CPP_EXTERN_C void UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshal_com_back(const UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_com& marshaled, UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F& unmarshaled)
{
	bool unmarshaled_isTraining_temp_0 = false;
	unmarshaled_isTraining_temp_0 = static_cast<bool>(marshaled.___isTraining_0);
	unmarshaled.set_isTraining_0(unmarshaled_isTraining_temp_0);
}
// Conversion method for clean up from marshalling of: MLAgents.UnityRLInputParameters
IL2CPP_EXTERN_C void UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshal_com_cleanup(UnityRLInputParameters_t7854609BE4E067A0388E3D1C8B90DDA6AA1E4F6F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 MLAgents.Utilities::TextureToTensorProxy(UnityEngine.Texture2D,MLAgents.Sensors.WriteAdapter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_TextureToTensorProxy_mDE53B827B74A80E003CD29CFB13B233F2CA577C3 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * ___adapter1, bool ___grayScale2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	{
		// var width = texture.width;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___texture0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		// var height = texture.height;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ___texture0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		// var texturePixels = texture.GetPixels32();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = ___texture0;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_5 = Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// for (var h = height - 1; h >= 0; h--)
		int32_t L_6 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		goto IL_00c5;
	}

IL_001e:
	{
		// for (var w = 0; w < width; w++)
		V_4 = 0;
		goto IL_00b9;
	}

IL_0026:
	{
		// var currentPixel = texturePixels[(height - h - 1) * width + w];
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_7 = V_2;
		int32_t L_8 = V_1;
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		int32_t L_11 = V_4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), (int32_t)L_10)), (int32_t)L_11));
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_13 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// if (grayScale)
		bool L_14 = ___grayScale2;
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		// adapter[h, w, 0] =
		//     (currentPixel.r + currentPixel.g + currentPixel.b) / 3f / 255.0f;
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_15 = ___adapter1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_4;
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_18 = V_5;
		uint8_t L_19 = L_18.get_r_1();
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_20 = V_5;
		uint8_t L_21 = L_20.get_g_2();
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_22 = V_5;
		uint8_t L_23 = L_22.get_b_3();
		WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06(L_15, L_16, L_17, 0, ((float)((float)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_21)), (int32_t)L_23)))))/(float)(3.0f)))/(float)(255.0f))), /*hidden argument*/NULL);
		// }
		goto IL_00b3;
	}

IL_006b:
	{
		// adapter[h, w, 0] = currentPixel.r / 255.0f;
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_24 = ___adapter1;
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_27 = V_5;
		uint8_t L_28 = L_27.get_r_1();
		WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06(L_24, L_25, L_26, 0, ((float)((float)(((float)((float)L_28)))/(float)(255.0f))), /*hidden argument*/NULL);
		// adapter[h, w, 1] = currentPixel.g / 255.0f;
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_29 = ___adapter1;
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_32 = V_5;
		uint8_t L_33 = L_32.get_g_2();
		WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06(L_29, L_30, L_31, 1, ((float)((float)(((float)((float)L_33)))/(float)(255.0f))), /*hidden argument*/NULL);
		// adapter[h, w, 2] = currentPixel.b / 255.0f;
		WriteAdapter_tE86592C8563B745E2B4922A0A8C30EF3BD2FA18C * L_34 = ___adapter1;
		int32_t L_35 = V_3;
		int32_t L_36 = V_4;
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_37 = V_5;
		uint8_t L_38 = L_37.get_b_3();
		WriteAdapter_set_Item_m343533AF13DF84EC811320AF3283EE7872454C06(L_34, L_35, L_36, 2, ((float)((float)(((float)((float)L_38)))/(float)(255.0f))), /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// for (var w = 0; w < width; w++)
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b9:
	{
		// for (var w = 0; w < width; w++)
		int32_t L_40 = V_4;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0026;
		}
	}
	{
		// for (var h = height - 1; h >= 0; h--)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
	}

IL_00c5:
	{
		// for (var h = height - 1; h >= 0; h--)
		int32_t L_43 = V_3;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// return height * width * (grayScale ? 1 : 3);
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		bool L_46 = ___grayScale2;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_44, (int32_t)L_45));
		if (L_46)
		{
			G_B11_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_44, (int32_t)L_45));
			goto IL_00d5;
		}
	}
	{
		G_B12_0 = 3;
		G_B12_1 = G_B10_0;
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_00d6:
	{
		return ((int32_t)il2cpp_codegen_multiply((int32_t)G_B12_1, (int32_t)G_B12_0));
	}
}
// System.Int32[] MLAgents.Utilities::CumSum(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Utilities_CumSum_m4F4BE890548918644417764DC764887E7A79CDEA (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_CumSum_m4F4BE890548918644417764DC764887E7A79CDEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var runningSum = 0;
		V_0 = 0;
		// var result = new int[input.Length + 1];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___input0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_1 = L_1;
		// for (var actionIndex = 0; actionIndex < input.Length; actionIndex++)
		V_2 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		// runningSum += input[actionIndex];
		int32_t L_2 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = ___input0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_6));
		// result[actionIndex + 1] = runningSum;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1))), (int32_t)L_9);
		// for (var actionIndex = 0; actionIndex < input.Length; actionIndex++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0021:
	{
		// for (var actionIndex = 0; actionIndex < input.Length; actionIndex++)
		int32_t L_11 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = ___input0;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = V_1;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTextureSensorComponent_get_renderTexture_m00114A0C571A896100424C678F1B03E0F84F167F_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_RenderTexture;  }
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_0 = __this->get_m_RenderTexture_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RenderTextureSensorComponent_get_grayscale_mF065C256918315D375BF0FF79E53F5750A6E3843_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Grayscale;  }
		bool L_0 = __this->get_m_Grayscale_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RenderTextureSensorComponent_get_sensorName_m3516D07295722E44D8AEA563086A67FDA00634EB_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SensorName;  }
		String_t* L_0 = __this->get_m_SensorName_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RenderTextureSensorComponent_get_compression_mDBFD61A9859CCD332851D4F9916CE2FE982B5732_inline (RenderTextureSensorComponent_t8F7FE1050809D1368F42339B2D6E8B3463EE2387 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Compression;  }
		int32_t L_0 = __this->get_m_Compression_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RenderTextureSensor_set_compressionType_mFC36826D60A05B1BCD3E025BEA440B49ECDEB99A_inline (RenderTextureSensor_tF9EF404F1E3A7425456BCEAF19BE85EF2EA5019A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_CompressionType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_CompressionType_4(L_0);
		// set { m_CompressionType = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SideChannel_set_ChannelId_m5E22104E570663453046A8F6176502AEBF34E967_inline (SideChannel_t95DC195AE542B20D564F16D45ED932BC8BE41D9F * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		// protected set;
		Guid_t  L_0 = ___value0;
		__this->set_U3CChannelIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* IncomingMessage_GetRawBytes_m94854FF75D37810387EF866C63DCEDCCB78DEC90_inline (IncomingMessage_tBFC837C69E58D5A15FEE854711E9749900E156AF * __this, const RuntimeMethod* method)
{
	{
		// return m_Data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_m_Data_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * TimerNode_get_Gauges_m6294638153DBB9D45698B6EFAAA46AEFA0AE8678_inline (TimerNode_tC05887FDE18B4936C4B6B6C017DFD71D33D51BAE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Gauges; }
		Dictionary_2_t1CBD65280FD2D80CC5F8580729615FA1C231D261 * L_0 = __this->get_m_Gauges_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DataContractJsonSerializerSettings_set_UseSimpleDictionaryFormat_m1047ED1D4F66DFFEB5294B745A7EA281CC2020F1_inline (DataContractJsonSerializerSettings_tA448573DE97755E9E9FEEE8C8BCF854EE5F2FC85 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUseSimpleDictionaryFormatU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDAB34C54D65756F28FBAEBC5592934DCBE4DD49F_gshared_inline (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_gshared_inline (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return L_0;
	}
}
