// 函数: sub_141390d40
// 地址: 0x141390d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result

if (*(arg1 + 0x70) == 0)
    int32_t rdi_1 = (*U"1111")[sx.q(*(arg1 + 0x3d0))]
    char rax_2 = sub_1410a09e0(rdi_1)
    char rax_3
    
    if (rax_2 == 0)
        rax_3 = sub_1419a4830(rdi_1)
    
    int128_t var_98
    int32_t var_68
    
    if (rax_2 != 0 || rax_3 != 0)
        result = sub_1419a4830(rdi_1)
    else
        int32_t rax_4 = *(arg1 + 0x3a8)
        int32_t rdi_2 = 2
        int32_t rdx = 0x12
        
        if (rax_4 s>= 5)
            rdx = 0xa
        
        if (rax_4 == 0)
            rdx = 2
        else if (rax_4 == 3)
            rdx = 0xa
        
        int64_t rax_5 = *(arg1 + 0x37c)
        int32_t var_84_1 = rax_5.d
        int32_t var_80_1 = rax_5:4.d
        wchar16 const* const var_58_1 = u"UnknownTexture2D"
        char var_c0_1 = 0
        int32_t var_68_1 = data_143ed3360
        int32_t var_88_1 = data_1439c7b30
        int32_t var_6c_1 = rdx
        char var_c8_1 = 1
        char var_d0_1 = 1
        wchar16 const* const var_d8_1 = u"GBufferA"
        int16_t var_60_1 = 0
        var_98 = data_1439c7b20
        int32_t var_7c_1 = 0
        int32_t var_78_1 = 1
        int32_t var_74_1 = 0x10000
        int16_t var_70_1 = 1
        int32_t var_64_1 = 9
        int16_t var_50_1 = 1
        char var_4e_1 = 0
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x70, var_d8_1, var_d0_1, var_c8_1, 
            var_c0_1)
        int64_t rax_8 = *(arg1 + 0x37c)
        int32_t var_84_2 = rax_8.d
        int32_t var_80_2 = rax_8:4.d
        int32_t rax_10 = 2
        
        if (*(arg1 + 0x3a8) s>= 5)
            rax_10 = 0xa
        
        char var_c0_2 = 0
        int32_t var_6c_2 = rax_10
        int32_t var_68_2 = data_143ed3364
        int32_t var_88_2 = data_1439c7b30
        char var_c8_2 = 1
        char var_d0_2 = 1
        wchar16 const* const var_d8_2 = u"GBufferB"
        int16_t var_60_2 = 0
        var_98 = data_1439c7b20
        int32_t var_7c_2 = 0
        int32_t var_78_2 = 1
        int32_t var_74_2 = 0x10000
        int16_t var_70_2 = 1
        int32_t var_64_2 = 9
        wchar16 const* const var_58_2 = u"UnknownTexture2D"
        int16_t var_50_2 = 1
        char var_4e_2 = 0
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x78, var_d8_2, var_d0_2, var_c8_2, 
            var_c0_2)
        int64_t rax_12 = *(arg1 + 0x37c)
        int32_t rcx_4 = data_1439c7b30
        int32_t var_84_3 = rax_12.d
        var_98 = data_1439c7b20
        int32_t var_80_3 = rax_12:4.d
        int16_t var_60_3 = 0
        int32_t var_88_3 = rcx_4
        int32_t var_7c_3 = 0
        int32_t var_78_3 = 1
        int32_t var_74_3 = 0x10000
        int32_t rax_14 = 2
        
        if (*(arg1 + 0x3a8) s>= 5)
            rax_14 = 0xa
        
        int32_t var_6c_3 = rax_14
        int16_t var_70_3 = 1
        int32_t var_68_3 = data_143ed3368 | 0x10
        int32_t var_64_3 = 9
        wchar16 const* const var_58_3 = u"UnknownTexture2D"
        int16_t var_50_3 = 1
        char var_4e_3 = 0
        sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x80, u"GBufferC", 1, 1, 0)
        int64_t rax_17 = *(arg1 + 0x37c)
        int32_t var_84_4 = rax_17.d
        int32_t var_80_4 = rax_17:4.d
        char var_c0_4 = 0
        var_68 = data_143ed336c
        int32_t var_88_4 = data_1439c7b30
        char var_c8_4 = 1
        char var_d0_4 = 1
        wchar16 const* const var_d8_4 = u"GBufferD"
        int16_t var_60_4 = 0
        var_98 = data_1439c7b20
        int32_t var_7c_4 = 0
        int32_t var_78_4 = 1
        int32_t var_74_4 = 0x10000
        int16_t var_70_4 = 1
        int32_t var_6c_4 = 2
        int32_t var_64_4 = 9
        wchar16 const* const var_58_4 = u"UnknownTexture2D"
        int16_t var_50_4 = 1
        char var_4e_4 = 0
        result = sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x88, var_d8_4, var_d0_4, 
            var_c8_4, var_c0_4)
        
        if (*(arg1 + 0x3b4) != 0)
            int64_t rax_20 = *(arg1 + 0x37c)
            int32_t var_84_5 = rax_20.d
            int32_t var_80_5 = rax_20:4.d
            char var_c0_5 = 0
            var_68 = data_143ed3370
            int32_t var_88_5 = data_1439c7b30
            char var_c8_5 = 1
            char var_d0_5 = 1
            wchar16 const* const var_d8_5 = u"GBufferE"
            int16_t var_60_5 = 0
            var_98 = data_1439c7b20
            int32_t var_7c_5 = 0
            int32_t var_78_5 = 1
            int32_t var_74_5 = 0x10000
            int16_t var_70_5 = 1
            int32_t var_6c_5 = 2
            int32_t var_64_5 = 9
            wchar16 const* const var_58_5 = u"UnknownTexture2D"
            int16_t var_50_5 = 1
            char var_4e_5 = 0
            result = sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x90, var_d8_5, var_d0_5, 
                var_c8_5, var_c0_5)
        
        if (*(arg1 + 0x423) != 0)
            int32_t rax_23 = *(arg1 + 0x3a8)
            int32_t rcx_7 = 2
            
            if (rax_23 s>= 5)
                rcx_7 = 0xa
            
            if (rax_23 != 0)
                rdi_2 = rcx_7
                
                if (rax_23 == 3)
                    rdi_2 = 0xa
            
            int64_t rax_24 = *(arg1 + 0x37c)
            int32_t var_84_6 = rax_24.d
            int32_t var_80_6 = rax_24:4.d
            char var_c0_6 = 0
            var_68 = data_143ed3374
            int32_t var_88_6 = data_142d3f640:0xc.d
            char var_c8_6 = 1
            char var_d0_6 = 1
            wchar16 const* const var_d8_6 = u"GBufferF"
            int16_t var_60_6 = 0
            var_98 = 1.o
            int32_t var_7c_6 = 0
            int32_t var_78_6 = 1
            int32_t var_74_6 = 0x10000
            int16_t var_70_6 = 1
            int32_t var_6c_6 = rdi_2
            int32_t var_64_6 = 9
            wchar16 const* const var_58_6 = u"UnknownTexture2D"
            int16_t var_50_6 = 1
            char var_4e_6 = 0
            result = sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x98, var_d8_6, var_d0_6, 
                var_c8_6, var_c0_6)
    
    if (*(arg1 + 0x3d9) != 0)
        sub_1414cb8c0(&var_98)
        int32_t var_68_4 = var_68 | data_143ed3378
        result =
            sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x50, GBufferVelocity", 1, 1, 0)
    
    *(arg1 + 0x350) = 1

__security_check_cookie(result_1 ^ &var_f8)
return result
