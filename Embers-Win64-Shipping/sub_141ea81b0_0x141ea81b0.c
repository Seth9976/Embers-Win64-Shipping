// 函数: sub_141ea81b0
// 地址: 0x141ea81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x280)
void* const rdi

if (rcx == 0)
    rdi = nullptr
else
    rdi = sub_141f3b9f0(rcx)

if (arg2 != 0 && rdi != 0)
    int128_t result
    int32_t zmm6_1
    result, zmm6_1 = sub_141e07230(rdi, arg2, arg3, 0, 0, 1)
    
    if (not(result.d f<= zmm6_1))
        int32_t rcx_2
        rcx_2.b = sub_140b5b8a0(arg4.d, 0) == 0
        rcx_2.b |= arg4:4.d != 0
        
        if (rcx_2.b != 0)
            sub_141e06f30(rdi, arg4, arg2)
        
        return result

return zx.o(0)
