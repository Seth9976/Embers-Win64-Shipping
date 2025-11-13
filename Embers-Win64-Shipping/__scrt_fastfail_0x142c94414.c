// 函数: __scrt_fastfail
// 地址: 0x142c94414
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

sub_142c9440c()
CONTEXT ContextRecord
memset(&ContextRecord, 0, 0x4d0)
RtlCaptureContext(&ContextRecord)
uint64_t Rip = ContextRecord.Rip
uint64_t ImageBase
IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr)
uint64_t EstablisherFrame
void HandlerData

if (FunctionEntry != 0)
    RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, &ContextRecord, 
        &HandlerData, &EstablisherFrame, nullptr)
ContextRecord.Rip = __return_addr
int64_t __saved_rbx
ContextRecord.Rsp = &__saved_rbx
int32_t var_578
memset(&var_578, 0, 0x98)
void* const __return_addr_1 = __return_addr
var_578 = 0x40000015
int32_t var_574 = 1
bool cond:0 = IsDebuggerPresent() == 1
EXCEPTION_POINTERS ExceptionInfo
ExceptionInfo.ExceptionRecord = &var_578
Rip.b = cond:0
ExceptionInfo.ContextRecord = &ContextRecord
SetUnhandledExceptionFilter(nullptr)
int32_t result = UnhandledExceptionFilter(&ExceptionInfo)

if (result == 0 && Rip.b == 0)
    sub_142c9440c()

return result
