// 函数: sub_1413a7ef0
// 地址: 0x1413a7ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t r12 = *(arg1 + 0x3d0)
uint64_t var_168 = arg2
int32_t r14 = *(data_143ec4ba8 + 4)
int32_t r8

if (r12 s<= 1)
    r8 = 2

if (r12 s> 1 || *(data_143ec4bc0 + 4) s<= 0)
    r8 = 1

int64_t rcx = *(arg1 + 0x37c)
int32_t temp0 = divs.dp.d(sx.q((rcx - 1).d + r8), r8)
int32_t r13 = divs.dp.d(sx.q((rcx u>> 0x20).d - 1 + r8), r8)
int64_t result

if (r14 == 1)
    if (arg3 != 0 || r14 == 3)
        goto label_1413a7f83
    
    result = 0
else if (r14 == 2 || r14 == 3)
label_1413a7f83:
    int64_t* rcx_2 = *(arg1 + 0xe0)
    int32_t* rax_11
    
    if (rcx_2 != 0)
        rax_11 = (*(*rcx_2 + 0x10))(rcx_2) + 0x14
    
    int64_t r15
    
    if (rcx_2 == 0 || temp0 != *rax_11 || r13 != rax_11[1] || data_143ed3440 != 0)
        r15.b = 0
    else
        r15.b = 1
    
    void* rsi_1
    
    if (r12 s> 1)
        rsi_1 = arg1 + 0xf8
        rax_11.b = *rsi_1 != 0
    else
        int64_t* rcx_3 = *(arg1 + 0xf0)
        
        if (rcx_3 == 0)
            rax_11.b = 0
            rsi_1 = arg1 + 0xf8
        else
            rax_11 = (*(*rcx_3 + 0x10))(rcx_3) + 0x14
            
            if (temp0 != *rax_11 || r13 != rax_11[1])
                rax_11.b = 0
                rsi_1 = arg1 + 0xf8
            else
                int64_t* rcx_4 = *(arg1 + 0xf0)
                rax_11.b = r14 == 3
                
                if (rax_11.d != (not.d(*((*(*rcx_4 + 0x10))(rcx_4) + 0x34) u>> 0xb) & 1))
                    rax_11.b = 0
                    rsi_1 = arg1 + 0xf8
                else
                    rax_11.b = 1
                    rsi_1 = arg1 + 0xf8
    
    if (r15.b == 0 || rax_11.b == 0)
        uint64_t rdx_2 = var_168
        int32_t var_128_1 = data_1439c7b78
        int32_t var_118_1 = 1
        int16_t var_110_1 = 1
        char var_170_1 = 0
        int32_t rcx_9 = 0xc
        char var_178_1 = 0
        char var_180_1 = 1
        wchar16 const* const var_f8_1 = u"UnknownTexture2D"
        int16_t var_100_1 = 0
        int32_t var_108_1 = data_143ed341c | 0x2000000
        int128_t var_138 = data_1439c7b68
        
        if (r12 s<= 1)
            rcx_9 = 0x80c
        
        int32_t var_124_1 = temp0
        int32_t var_104_1 = rcx_9
        int32_t var_120_1 = r13
        int32_t var_11c_1 = 0
        int32_t var_114_1 = 0x10000
        int32_t var_10c_1 = 0xb
        int16_t var_f0_1 = 1
        char var_ee_1 = 0
        sub_1419a0ce0(&data_1439c9260, rdx_2, &var_138, arg1 + 0xe0, CustomDepth", var_180_1, 
            var_178_1, var_170_1)
        int16_t var_158
        
        if (r12 s> 1)
            int64_t* rcx_11 = data_143f0f180
            void* r9_4 = *(arg1 + 0xe0)
            var_158 = 0x2c
            int64_t var_154_1 = 0
            int32_t var_14c_1 = 0
            char var_156_1 = 1
            (*(*rcx_11 + 0x5d0))(rcx_11, &var_168, &data_143f02b98, *(r9_4 + 8), &var_158)
            sub_1405d1600(rsi_1, &var_168)
            sub_1405ec8a0(&var_168)
        else
            uint128_t zmm1_1 = data_142f6e3a0
            uint64_t rdx_3 = var_168
            char var_170_2 = 0
            var_158.d = 1
            int32_t var_c8_1 = 1
            int16_t var_c0_1 = 1
            int64_t var_154
            var_154.o = zmm1_1
            wchar16 const* const var_a8_1 = u"UnknownTexture2D"
            int128_t zmm0_1 = var_158.o
            char var_178_2 = 1
            zmm1_1 = _mm_bsrli_si128(zmm1_1, 0xc)
            char var_180_2 = 1
            wchar16 const* const var_188_2 = u"MobileCustomDepth"
            int16_t var_b0_1 = 0
            int128_t var_e8 = zmm0_1
            int32_t var_d8_1 = zmm1_1.d
            int32_t var_d4_1 = temp0
            int32_t var_d0_1 = r13
            int32_t var_cc_1 = 0
            int32_t var_c4_1 = 0x10000
            int64_t var_bc_1 = 0x15
            int32_t var_b4_1 = 9
            int16_t var_a0_1 = 1
            char var_9e_1 = 0
            sub_1419a0ce0(&data_1439c9260, rdx_3, &var_e8, arg1 + 0xe8, var_188_2, var_180_2, 
                var_178_2, var_170_2)
            uint64_t rdx_4 = var_168
            int32_t var_88_1 = data_1439c7b30
            char var_170_3 = 0
            int32_t var_7c_1 = 0
            char var_178_3 = 1
            int32_t rax_22 = 0x809
            
            if (r14 == 3)
                rax_22 = 9
            
            char var_180_3 = 1
            int32_t var_64_1 = rax_22
            wchar16 const* const var_58_1 = u"UnknownTexture2D"
            int32_t var_78_1 = 1
            int16_t var_70_1 = 1
            int16_t var_50_1 = 1
            wchar16 const* const var_188_3 = u"MobileCustomStencil"
            int16_t var_60_1 = 0
            int128_t var_98 = data_1439c7b20
            int32_t var_84_1 = temp0
            int32_t var_80_1 = r13
            int32_t var_74_1 = 0x10000
            int64_t var_6c_1 = 3
            char var_4e_1 = 0
            sub_1419a0ce0(&data_1439c9260, rdx_4, &var_98, arg1 + 0xf0, var_188_3, var_180_3, 
                var_178_3, var_170_3)
            sub_1405d16e0(arg1 + 0xf8, nullptr)
    
    result = *(arg1 + 0xe0)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return result
