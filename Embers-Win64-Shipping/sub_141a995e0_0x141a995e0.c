// 函数: sub_141a995e0
// 地址: 0x141a995e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0x7f800000

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(*arg1, data_142d3f760), 
        data_142d3f760, 0)) == 0)
    arg_8 = 0x7f800000
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(arg1[1], data_142d3f760), 
            data_142d3f760, 0)) == 0)
        uint32_t temp0_8 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(arg1[2], data_142d3f760), data_142d3f760, 0))
        arg_8 = 0x7f800000
        
        if (temp0_8 == 0)
            return temp0_8

uint32_t rax
rax.b = 1
return rax
