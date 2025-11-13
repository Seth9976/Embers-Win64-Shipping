// 函数: sub_141b6ae50
// 地址: 0x141b6ae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg2
int64_t* rdx = *(arg1 + 0x10)

if (rdx == 0)
    int64_t* rax_1 = j_sub_140a82f30(zx.q((&rdx[6]).d))
    rdx = rax_1
    
    if (rax_1 == 0)
        rdx = rax_1
    else
        *rdx = 0
        __builtin_memset(&rdx[2], 0, 0x20)
        rdx[1].d = 0x3f800000
        *(rdx + 0xc) = 0x3f800000
    
    *(arg1 + 0x10) = rdx

*(arg1 + 0x18) = arg4
float zmm1 = *arg3
int32_t rcx_1 = int.d(zmm1 + zmm1 + 0.5f)
zmm1 = arg3[1]
rdx[3].d = rcx_1 s>> 1
*(rdx + 0x1c) = int.d(zmm1 + zmm1 + 0.5f) s>> 1
*(*(arg1 + 0x10) + 0x10) = arg1
zmm1 = *arg3
*(arg1 + 0x20) = int.d(zmm1 + zmm1 + 0.5f) s>> 1
zmm1 = arg3[1]
int32_t result = int.d(zmm1 + zmm1 + 0.5f) s>> 1
*(arg1 + 0x24) = result
return result
