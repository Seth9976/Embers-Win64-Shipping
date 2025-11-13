// 函数: sub_141dcf310
// 地址: 0x141dcf310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int128_t* rbx = nullptr

if (arg3 != 0)
    rbx = arg4

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
    if (rbx != 0)
        memset(&var_98, 0, 0x88)
        int32_t var_90_2 = 0x3f800000
        *rbx = var_98
        rbx[1] = var_88
        rbx[2] = var_78
        rbx[3] = var_68
        rbx[4] = var_58
        rbx[5] = var_48
        rbx[6] = var_38
        rbx[7] = var_28
        rbx[8].q = var_18
    
    uint64_t rax
    rax.b = 0
    return rax

int32_t arg_18 = 0x7f800000

if (zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(*arg2, data_142d3f760), 
        data_142d3f760, 0))) == 0)
    arg_18 = 0x7f800000
    
    if (zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(arg2[1], data_142d3f760), data_142d3f760, 0))) == 0)
        arg_18 = 0x7f800000
        
        if (zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(arg2[2], data_142d3f760), data_142d3f760, 0))) == 0)
            sub_141f4a580(rcx, arg2, arg3, rbx, arg5)
            int64_t rax_3
            rax_3.b = 1
            return rax_3

if (rbx != 0)
    memset(&var_98, 0, 0x88)
    int32_t var_90_1 = 0x3f800000
    *rbx = var_98
    rbx[1] = var_88
    rbx[2] = var_78
    rbx[3] = var_68
    rbx[4] = var_58
    rbx[5] = var_48
    rbx[6] = var_38
    rbx[7] = var_28
    rbx[8].q = var_18

uint64_t rax_1
rax_1.b = 1
return rax_1
