// 函数: sub_141dd7250
// 地址: 0x141dd7250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int128_t var_98
uint32_t var_88[0x4]
int128_t var_78
uint32_t var_68[0x4]
int128_t var_58
uint32_t var_48[0x4]
int128_t var_38
int128_t var_28
uint64_t var_18

if (rcx == 0)
    if (arg4 != 0)
        memset(&var_98, 0, 0x88)
        int32_t var_90_2 = 0x3f800000
        *arg4 = var_98
        arg4[1] = var_88
        arg4[2] = var_78
        arg4[3] = var_68
        arg4[4] = var_58
        arg4[5] = var_48
        arg4[6] = var_38
        arg4[7] = var_28
        arg4[8].q = var_18
    
    uint64_t rax
    rax.b = 0
    return rax

int32_t arg_8 = 0x7f800000

if (zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(*arg2, data_142d3f760), 
        data_142d3f760, 0))) == 0)
    arg_8 = 0x7f800000
    
    if (zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(arg2[1], data_142d3f760), data_142d3f760, 0))) == 0)
        arg_8 = 0x7f800000
        
        if (zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(arg2[2], data_142d3f760), data_142d3f760, 0))) == 0)
            sub_141f4a580(rcx, arg2, arg3, arg4, arg5)
            int64_t rax_3
            rax_3.b = 1
            return rax_3

if (arg4 != 0)
    memset(&var_98, 0, 0x88)
    int32_t var_90_1 = 0x3f800000
    *arg4 = var_98
    arg4[1] = var_88
    arg4[2] = var_78
    arg4[3] = var_68
    arg4[4] = var_58
    arg4[5] = var_48
    arg4[6] = var_38
    arg4[7] = var_28
    arg4[8].q = var_18

uint64_t rax_1
rax_1.b = 1
return rax_1
