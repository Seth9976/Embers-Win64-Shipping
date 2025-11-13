// 函数: sub_140f808e0
// 地址: 0x140f808e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t var_198 = data_143e1e020
int64_t var_190 = data_143e1e028
void* rax_4 = data_143e1e030
void* var_188 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

if (sub_140f4a520(arg4, &var_198) == 0)
    sub_140f7a3e0(*(arg1 + 0x2b0), arg2, arg3, arg4, arg5)
else
    uint32_t zmm6[0x4] = *(arg4 + 0x2c)
    zmm6[0] = zmm6[0] f/ arg3[2]
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
    temp0_1[0] = temp0_1[0] f+ *(arg1 + 0x418)
    *(arg1 + 0x418) = temp0_1[0]
    
    if (sub_140e66040(data_143e29f28) f> *(arg1 + 0x418))
        sub_140f7a3e0(*(arg1 + 0x2b0), arg2, arg3, arg4, arg5)
    else
        void* rcx_2 = *(arg1 + 0x3c0)
        
        if (rcx_2 == 0)
            sub_140f7a3e0(*(arg1 + 0x2b0), arg2, arg3, arg4, arg5)
        else if (sub_140f4a5f0(rcx_2) == 0)
            sub_140f7a3e0(*(arg1 + 0x2b0), arg2, arg3, arg4, arg5)
        else
            void* rsi_1 = *(arg1 + 0x2b0)
            int128_t zmm11 = *(rsi_1 + 0x76c)
            int128_t zmm7 = *(rsi_1 + 0x768)
            int128_t zmm12
            zmm12.d = zmm11.d f- zmm6[0]
            sub_140f030e0(*(rsi_1 + 0x48), &var_198)
            int128_t zmm10 = zx.o(0)
            int32_t zmm0_2
            
            if (zmm7.d f>= 0f)
                zmm0_2 = _mm_min_ss(var_198.d f- *arg3, zmm7.d)
            else
                zmm0_2 = (zx.o(0)).d
            
            *(rsi_1 + 0x768) = zmm0_2
            
            if (zmm12.d f>= 0f)
                zmm0_2 = _mm_min_ss(var_198:4.d f- arg3[1], zmm12.d)
            else
                zmm0_2 = (zx.o(0)).d
            
            *(rsi_1 + 0x76c) = zmm0_2
            
            if (*(arg1 + 0x41c) == 0)
                zmm6 = arg3[8]
                float zmm3 = arg3[9]
                zmm7 = *(arg4 + 0x18)
                int32_t zmm5_1 = *(arg4 + 0x1c)
                int128_t zmm8 = arg3[0xa]
                int128_t zmm9 = arg3[7]
                zmm0_2 = zmm7.d f- arg3[0xb]
                zmm7.d = zmm7.d f- arg3[0xb]
                float zmm4_1 = 1f / (zmm9.d f* zmm8.d f- zmm6[0] f* zmm3)
                zmm8.d = zmm8.d f* zmm4_1
                zmm9.d = zmm9.d f* zmm4_1
                zmm8.d = zmm8.d f* zmm0_2
                zmm0_2 = zmm5_1 f- arg3[0xc]
                zmm5_1 = zmm5_1 f- arg3[0xc]
                *(arg1 + 0x41c) = 1
                zmm6[0] = zmm6[0] f* zmm4_1
                zmm9.d = zmm9.d f* zmm5_1
                zmm6[0] = zmm6[0] f* zmm7.d
                zmm8.d = zmm8.d f- zmm3 * zmm4_1 f* zmm0_2
                zmm9.d = zmm9.d f- zmm6[0]
                *(arg1 + 0x420) = zmm8.d
                *(arg1 + 0x424) = zmm9.d
            
            if (not(zmm11.d f== zmm12.d))
                sub_140f030e0(*(*(arg1 + 0x2b0) + 0x48), &var_198)
                float zmm0_3 = var_198:4.d - arg3[1]
                
                if (not(zmm0_3 == 0f))
                    zmm10.d = zmm12.d f/ zmm0_3
                
                sub_140f44620(arg1 + 0x3e0, zmm10.d)
                zmm11.d = zmm11.d f- zmm12.d
                zmm11.d = zmm11.d f+ *(arg1 + 0x424)
                *(arg1 + 0x424) = zmm11.d
            
            void* const rcx_7 = *(arg1 + 0x10)
            int64_t rdx_3 = 0
            
            if (rcx_7 != 0)
                int32_t rax_7 = *(rcx_7 + 8)
                
                if (rax_7 != 0)
                    *(rcx_7 + 8) = rax_7 + 1
                    rax_7.b = 1
                
                if (rax_7.b == 0)
                    rcx_7 = nullptr
                
                if (rcx_7 != 0)
                    rdx_3 = *(arg1 + 8)
            
            int32_t var_c4
            int32_t var_c4_1 = var_c4 & 0xffffff00
            var_198 = rdx_3
            void* const var_190_1 = rcx_7
            char var_178 = 1
            int64_t var_170_1 = 0
            int64_t var_168_1 = 0
            char var_158_1 = 0
            int64_t var_150
            __builtin_memset(&var_150, 0, 0x88)
            int32_t var_c8_1 = 0x20702
            sub_140596b00(arg2, sub_140f63c00(&var_178, &var_198))
            sub_140597700(&var_178)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
