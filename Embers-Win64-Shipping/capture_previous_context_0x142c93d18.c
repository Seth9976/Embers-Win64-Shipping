// 函数: capture_previous_context
// 地址: 0x142c93d18
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

RtlCaptureContext(arg1)
uint64_t Rip = arg1->Rip
IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry

for (int32_t i = 0; i s< 2; i += 1)
    uint64_t ImageBase
    FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr)
    
    if (FunctionEntry == 0)
        break
    
    uint64_t EstablisherFrame
    void HandlerData
    FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, 
        &HandlerData, &EstablisherFrame, nullptr)

return FunctionEntry
