// 函数: capture_current_context
// 地址: 0x142c93ca8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

RtlCaptureContext(arg1)
uint64_t Rip = arg1->Rip
uint64_t ImageBase
IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr)

if (FunctionEntry == 0)
    return FunctionEntry

uint64_t EstablisherFrame
void HandlerData
return RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, &HandlerData, 
    &EstablisherFrame, nullptr)
