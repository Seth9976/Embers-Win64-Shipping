// 函数: sub_140818080
// 地址: 0x140818080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg7
uint64_t rdx = zx.q(*(arg1 + 0xac))
arg7 = nullptr
int64_t* rcx = *(r14 + 0x20)
int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &arg7)
int64_t r8_1 = *rax_1
int16_t* result = (*(r8_1 + 0x1d8))(rax_1, arg5, r8_1)
int16_t* result_2 = *arg2

if (result.d u<= 1 || *(r14 + 0x80) == 0)
    int32_t i_2 = *(r14 + 0x30)
    int16_t result_1 = 0
    int16_t* rdi_1 = *(r14 + 0x28)
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int32_t r8_3 = 0
            
            if (arg3 s> 0)
                int16_t r11_2 = *rdi_1 * arg3.w
                
                do
                    int16_t result_3 = (r8_3.w + r11_2) * 2
                    *result_2 = result_3
                    result_2[1] = result_3 + 1
                    int16_t rcx_5 = result_3 + 2
                    result_2[2] = rcx_5
                    result_2[3] = result_3 + 1
                    int16_t rax_8 = result_3 + 3
                    result_3 += 4
                    result_2[4] = rax_8
                    result_2[5] = rcx_5
                    result_2 = &result_2[6]
                    
                    if (result_1 u>= result_3)
                        result_3 = result_1
                    
                    r8_3 += 1
                    result_1 = result_3
                while (r8_3 s< arg3)
            
            rdi_1 = &rdi_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = zx.q(result_1)
    arg2[4].d = result.d
else
    int32_t* rdi = *(r14 + 0x78)
    void* rbp_3 = &rdi[sx.q(*(r14 + 0x80)) * 8]
    
    if (rdi != rbp_3)
        void* rsi_1 = &rdi[5]
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        
        do
            zmm8.d = (*(rsi_1 - 0x10)).d f- arg6[1]
            arg5 = (*(rsi_1 - 0xc) - arg6[2]) * arg4[2]
            zmm8.d = zmm8.d f* arg4[1]
            zmm9.d = (*(rsi_1 - 4)).d f- arg6[1]
            zmm8.d = zmm8.d f+ (*rdi - *arg6) * *arg4
            int32_t var_70_1 = *(rsi_1 + 8)
            float zmm0 = *(rsi_1 - 8) - *arg6
            zmm9.d = zmm9.d f* arg4[1]
            int64_t var_78 = *(r14 + 0x28) + (sx.q(*(rsi_1 + 4)) << 2)
            zmm8.d = zmm8.d f+ arg5
            char rax_5 = *(arg1 + 0x219)
            zmm9.d = zmm9.d f+ zmm0 * *arg4
            zmm9.d = zmm9.d f+ (*rsi_1 - arg6[2]) * arg4[2]
            
            if (zmm8.d f< zmm9.d)
                if (rax_5 != 0)
                    rax_5 = 0
                else
                    rax_5 = 1
            else if (rax_5 == 1 || (not(zmm8.d f>= zmm9.d) && rax_5 == 0))
                rax_5 = 1
            else
                rax_5 = 0
            
            result = sub_140812740(result_2, &arg2[4], &var_78, arg3, rax_5)
            rdi = &rdi[8]
            rsi_1 += 0x20
            result_2 = result
        while (rdi != rbp_3)

return result
