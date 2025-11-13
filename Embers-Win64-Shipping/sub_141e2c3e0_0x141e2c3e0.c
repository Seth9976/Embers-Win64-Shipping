// 函数: sub_141e2c3e0
// 地址: 0x141e2c3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = data_143de5458
int32_t result = (divu.dp.q(0:r8_2, 0xffffffff)).d + r8_2.d
void* r8 = arg1[0x34]
arg1[0x35].d = result

if (r8 != 0)
    int64_t rcx = data_143de5458
    result = (divu.dp.q(0:rcx, 0xffffffff)).d + rcx.d
    
    if (*(r8 + 0x1a8) == result)
        return sub_141e2c230(arg1) __tailcall

return result
