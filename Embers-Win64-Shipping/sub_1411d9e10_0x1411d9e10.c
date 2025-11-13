// 函数: sub_1411d9e10
// 地址: 0x1411d9e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
uint64_t result = __security_cookie ^ &var_178
uint64_t result_1 = result

if (data_1439b6100 != 0 && *(arg2 + 8) != 0 && data_143e5102c != 0)
    int32_t rbx_1 = *(arg2 + 0x1548)
    result = sub_1422e5a30(arg2)
    
    if (rbx_1 s>= 3 && result.d == 0)
        result = zx.q(*(arg1 + 0x30) - *(arg1 + 0x5c))
        
        if (result.d s> 0)
            result = *(arg4 + 0x20)
            
            if (*(result + 0x13c) == 0 && (*(result + 0x138) & 0x10) != 0)
                int128_t zmm1 = data_142d3f5a0
                int64_t rcx_2 = *(*(*(*(arg2 + 8) + 0xb10) + 0x28) + 8)
                int64_t var_158 = rcx_2
                int32_t var_80_1 = 0
                int32_t var_7c
                __builtin_memset(&var_7c, 0xff, 0x14)
                int128_t var_68_1 = zmm1
                int64_t var_58
                __builtin_memset(&var_58, 0, 0x19)
                int64_t var_150_1 = 0
                int32_t var_148_1 = 0xffffffff
                int16_t var_144_1 = 0x900
                int64_t var_98
                __builtin_memset(&var_98, 0, 0x11)
                int32_t var_84_1 = 0
                bool var_3f_1 = *(rcx_2 + 0x38) u> 1
                void var_140
                memset(&var_140, 0, 0xa8)
                int64_t rbx_4 = (*(arg3 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_4 = rbx_4 + 0x1e
                
                if (rax_4 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x20)
                    rbx_4 = (*(arg3 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_4 = rbx_4 + 0x1e
                
                wchar16 const* const rcx_5 = u"ClearShadowing"
                *(arg3 + 0x30) = rax_4
                wchar16 const i
                
                do
                    i = *rcx_5
                    *(rcx_5 + rbx_4 - u"ClearShadowing") = i
                    rcx_5 = &rcx_5[1]
                while (i != 0)
                void*** rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_5 = &rcx_8[0x27]
                
                if (rax_5 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x140)
                    rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_5 = &rcx_8[0x27]
                
                *(arg3 + 0x30) = rax_5
                void**** rax_6 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_6 = rcx_8
                *(arg3 + 8) = &rcx_8[1]
                sub_1405d11b0(rcx_8, &var_158, rbx_4)
                *(arg3 + 0x1c4) = 1
                sub_1405d19b0(arg3, &var_158)
                int64_t var_48
                *(arg3 + 0x178) = var_48:7.b
                *(arg3 + 0x179) = 0
                *(arg3 + 0x1c4) = 1
                sub_141096650(arg3)
                int64_t var_50
                result = sub_1405d1550(&var_50)

__security_check_cookie(result_1 ^ &var_178)
return result
