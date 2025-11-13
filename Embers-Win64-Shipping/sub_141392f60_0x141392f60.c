// 函数: sub_141392f60
// 地址: 0x141392f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result
char temp0 = data_1439c7a69

if (temp0 != 0)
    uint64_t rflags_1
    char temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(arg3)
    int32_t rcx
    
    if (temp0 == 0)
        rcx = 0x20
    else
        rcx = 0x1f - temp0_1
    
    int32_t rcx_2 = rcx << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(arg3 - 1)
    
    if (rcx_2 == 0)
        result = 0x20
    else
        result = zx.q(0x1f - temp0_2)
    
    int64_t* rcx_4 = *(arg1 + 0x120)
    int32_t rbx_3 = ((0x20 - result.d) & not.d(rcx_2)) + 1
    
    if (rcx_4 != 0)
        result = rcx_4[1]
        
        if (*(result + 0x34) != rbx_3)
            *(arg1 + 0x120) = 0
            
            if (rcx_4 != 0)
                result = (*(*rcx_4 + 0x38))()
            
            int64_t* rcx_5 = *(arg1 + 0x128)
            *(arg1 + 0x128) = 0
            
            if (rcx_5 != 0)
                result = (*(*rcx_5 + 0x38))(rcx_5)
    
    int64_t temp1_1 = *(arg1 + 0x120)
    
    if (temp1_1 == 0)
        uint128_t zmm1 = data_142f6e370
        uint128_t var_b4_1 = zmm1
        char var_c0_1 = 0
        int32_t var_84_1 = arg3
        int32_t var_80_1 = arg3
        wchar16 const* const var_58_1 = u"UnknownTextureCube"
        zmm1 = _mm_bsrli_si128(zmm1, 0xc)
        char var_c8_1 = 0
        char var_d0_1 = 1
        int16_t var_60_1 = 0
        int128_t var_98 = 1.o
        int16_t var_4f_1 = 0
        int32_t var_88_1 = zmm1.d
        int32_t var_7c_1 = 0
        int32_t var_78_1 = 1
        int16_t var_74_1 = 0x100
        int16_t var_72_1 = rbx_3.w
        int16_t var_70_1 = 1
        int32_t var_6c_1 = 0xa
        int32_t var_68_1 = 0x800000
        int32_t var_64_1 = 1
        char var_50_1 = 1
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x120, 
            ReflectionColorScratchCubemap0", var_d0_1, var_c8_1, var_c0_1)
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x128, 
            ReflectionColorScratchCubemap1", 1, 0, 0)
        int32_t rdx_3 = data_1439b6b9c
        uint64_t rflags_3
        char temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rdx_3)
        int32_t rcx_6
        
        if (temp1_1 == 0)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_4
        
        int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
        uint64_t rflags_4
        char temp0_5
        temp0_5, rflags_4 = _bit_scan_reverse(rdx_3 - 1)
        int16_t rdi_1
        
        if (rcx_8 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_5.w
        
        uint128_t zmm1_1 = data_142f6e370
        rcx_8.w = not.w(rcx_8.w)
        wchar16 const* const var_58_2 = u"UnknownTextureCube"
        uint128_t var_b4_2 = zmm1_1
        zmm1_1 = _mm_bsrli_si128(zmm1_1, 0xc)
        char var_c0_3 = 0
        int32_t var_84_2 = rdx_3
        int32_t var_80_2 = rdx_3
        char var_c8_3 = 0
        char var_d0_3 = 1
        int16_t var_60_2 = 0
        var_98 = 1.o
        int16_t var_4f_2 = 0
        int32_t var_88_2 = zmm1_1.d
        int32_t var_7c_2 = 0
        int32_t var_78_2 = 1
        int16_t var_74_2 = 0x100
        int16_t var_72_2 = ((0x20 - rdi_1) & rcx_8.w) + 1
        int16_t var_70_2 = 1
        int32_t var_6c_2 = 0xa
        int32_t var_68_2 = 0x800000
        int32_t var_64_2 = 1
        char var_50_2 = 1
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x130, 
            DiffuseIrradianceScratchCubemap0", var_d0_3, var_c8_3, var_c0_3)
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x138, 
            DiffuseIrradianceScratchCubemap1", 1, 0, 0)
        uint128_t zmm1_2 = data_142f6e370
        uint128_t var_b4_3 = zmm1_2
        char var_c0_5 = 0
        wchar16 const* const var_58_3 = u"UnknownTexture2D"
        zmm1_2 = _mm_bsrli_si128(zmm1_2, 0xc)
        char var_c8_5 = 0
        char var_d0_5 = 1
        int16_t var_60_3 = 0
        var_98 = 1.o
        int32_t var_88_3 = zmm1_2.d
        int32_t var_84_3 = 9
        var_80_2.q = 1
        int32_t var_78_3 = 1
        var_74_2.d = 0x10000
        int16_t var_70_3 = 1
        var_6c_2.q = 0xa
        int32_t var_64_3 = 1
        var_50_2.w = 1
        var_4f_2:1.b = 0
        result = sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x140, SkySHIrradianceMap", 
            var_d0_5, var_c8_5, var_c0_5)

__security_check_cookie(result_1 ^ &var_f8)
return result
