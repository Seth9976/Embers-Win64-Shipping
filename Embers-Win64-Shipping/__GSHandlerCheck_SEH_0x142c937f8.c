// 函数: __GSHandlerCheck_SEH
// 地址: 0x142c937f8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* HandlerData = arg4->HandlerData
void* rbx_2 = &HandlerData[zx.q(*HandlerData) * 4]
int32_t rdx_1 = __GSHandlerCheckCommon(arg2, arg4, rbx_2 + 4)

if ((*(rbx_2 + 4) & (neg.d(sbb.d(rdx_1, rdx_1, ((arg1->ExceptionFlags).b & 0x66) != 0)) + 1)) == 0)
    return 1

return __C_specific_handler(arg1, arg2, arg3, arg4)
