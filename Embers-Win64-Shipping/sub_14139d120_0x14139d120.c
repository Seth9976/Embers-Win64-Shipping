// 函数: sub_14139d120
// 地址: 0x14139d120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rdi = arg4.d
int64_t* rdx = arg1 + 0x100
int32_t rbx = -1
int32_t rax_2 = 0
void* result

while (true)
    void* rcx = *rdx
    
    if (rcx == 0)
        rbx = rax_2
    else
        void* rcx_1 = *(rcx + 8)
        
        if (*(rcx_1 + 0x60) == arg3 && *(rcx_1 + 0x64) == rdi)
            result = rcx + 8
            break
    
    rax_2 += 1
    rdx = &rdx[1]
    
    if (rax_2 u>= 4)
        if (rbx == 0xffffffff)
            sub_140af98a0("Unknown", 0xa12, 
                Exceeded storage space for OptionalShadowDepthColorSurface. Increase array size.", arg4)
            sub_140afbb40()
        
        int32_t var_78_1 = data_143f02318
        char var_90_1 = 0
        int32_t var_68_1 = 1
        int16_t var_60_1 = 1
        int32_t var_54_1 = 1
        wchar16 const* const var_48_1 = u"UnknownTexture2D"
        char var_98_1 = 1
        int64_t rbx_1 = sx.q(rbx)
        char var_a0_1 = 1
        wchar16 const* const var_a8_1 = u"OptionalShadowDepthColor"
        int16_t var_50_1 = 0
        int128_t var_88 = data_143f02308
        int32_t var_74_1 = arg3
        int32_t var_70_1 = rdi
        int32_t var_6c_1 = 0
        int32_t var_64_1 = 0x10000
        int64_t var_5c_1 = 2
        int16_t var_40_1 = 1
        char var_3e_1 = 0
        sub_1419a0ce0(&data_1439c9260, arg2, &var_88, arg1 + 0x100 + (rbx_1 << 3), var_a8_1, 
            var_a0_1, var_98_1, var_90_1)
        result = *(arg1 + (rbx_1 << 3) + 0x100) + 8
        break

__security_check_cookie(rax_1 ^ &var_c8)
return result
