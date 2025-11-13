// 函数: sub_1410912b0
// 地址: 0x1410912b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b != 0 || *(arg1 + 0xf1) != 0)
    int128_t* rax_3 = sub_14139d290((*(*arg1 + 8))(arg1, 0))
    int128_t zmm3 = rax_3[1]
    int128_t var_38_1 = rax_3[2]
    var_38_1:8.w = 1
    int32_t rcx_3 = (rax_3[3]:4.d & 0xfffefffb) | 1
    int32_t rdx = 2
    int128_t var_28_1
    var_28_1:8.w = 0
    
    if (arg1[0x1d].d - 1 u<= 1)
        rcx_3 |= 0x10000
        rdx = 0xa
    
    *arg2 = *rax_3
    var_28_1:4.d = rcx_3
    arg2[1] = zmm3
    int32_t rax_6 = *(arg1 + 0xec)
    
    if (rax_6 != 0)
        rdx = rax_6
    
    var_38_1:0xc.d = rdx
    arg2[2] = var_38_1
    arg2[3] = var_28_1
    arg2[4] = u"AmbientOcclusion"
else
    int64_t var_50
    __builtin_memset(&var_50, 0, 0x18)
    *arg2 = 1.o
    int64_t var_48
    arg2[1] = var_48.o
    int128_t var_28
    var_28:4.d = 0
    arg2[2] = 1
    var_28:8.w = 0
    arg2[3] = var_28
    arg2[4] = u"AmbientOcclusionDirect"

return arg2
