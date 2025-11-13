// 函数: sub_141444420
// 地址: 0x141444420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int32_t rcx = *(rax + 0x15d0)
int64_t zmm0 = *(rax + 0x60c)
int32_t arg_18 = rcx
int128_t zmm10

if (data_143ed57bc == 0)
    zmm10 = data_1439b6dc8
else
    zmm10 = zx.o(0)

int32_t rax_2 = data_1439b6dd0
int32_t r10_1 = rax_2 * arg2
uint64_t result = zx.q(rax_2 + r10_1)
int32_t arg_10 = r10_1

if (r10_1 s< result.d)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9 = 0x7f7fffff
    int128_t zmm11 = *(rax + 0x614)
    int64_t r8_1 = sx.q(r10_1)
    int128_t zmm12 = zmm0:4.d
    int128_t zmm13 = zmm0.d
    result = r8_1 << 2
    int64_t r8_2 = r8_1 << 5
    int32_t rdx_1 = r10_1 << 5
    uint64_t result_1 = result
    int64_t var_e0_1 = r8_2
    int32_t arg_8 = rdx_1
    
    while (rdx_1 s< rcx)
        int32_t r13_1 = 0
        int32_t r14_1 = 0
        int64_t r15_1 = 0
        int32_t rbp_1 = 1
        int32_t rsi_1 = rdx_1
        
        while (rsi_1 s< rcx)
            void* rdx_2 = *(arg1 + 8)
            int64_t r12_1 = r15_1 + r8_2
            int64_t rcx_1 = r12_1 * 5
            int64_t rax_3 = *(rdx_2 + 0xde8)
            int128_t* rdi_1 = rax_3 + (rcx_1 << 3)
            float zmm1 = *(rax_3 + (rcx_1 << 3)) f- zmm13.d
            zmm7.d = (*(rdi_1 + 4)).d f- zmm12.d
            zmm6 = *(rdi_1 + 0x24)
            zmm0.d = (*(rdi_1 + 8)).d f- zmm11.d
            zmm7.d = zmm7.d f* zmm7.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm7.d = zmm7.d f+ zmm1 * zmm1
            zmm7.d = zmm7.d f+ zmm0.d
            
            if (zmm6.d f>= zmm9.d)
                zmm6 = zmm9
            else
                zmm6.d = zmm6.d f* *(arg1 + 0x18)
            
            result = *(arg1 + 0x10)
            zmm8 = *(rdi_1 + 0x1c)
            
            if ((*(*result + 0x2c) & 0x40000) != 0)
                int64_t* rcx_4 = *(*(*(rdx_2 + 0xdb8) + (r12_1 << 3)) + 8)
                result = (*(*rcx_4 + 0x108))(rcx_4)
                
                if (result.b == 0)
                    zmm6 = zmm9
            
            void* rdx_3 = *(arg1 + 0x20)
            
            if (rdx_3 != 0)
                void* r11_1 = *(rdx_3 + 0x50)
                void* r9_1 = rdx_3 + 0x40
                int32_t rax_6 = rsi_1
                int32_t r8_3 = 1 << (rsi_1.b & 0x1f)
                
                if (rsi_1 s< 0)
                    rax_6 = rsi_1 + 0x1f
                
                result = zx.q(rax_6 s>> 5)
                int64_t r10_2 = sx.q(result.d)
                
                if (r11_1 != 0)
                    r9_1 = r11_1
                
                if ((*(r9_1 + (r10_2 << 2)) & r8_3) == 0)
                    result = *(rdx_3 + 0x70)
                    uint64_t result_2 = rdx_3 + 0x60
                    
                    if (result != 0)
                        result_2 = result
                    
                    if ((*(result_2 + (r10_2 << 2)) & r8_3) != 0)
                        zmm6 = zx.o(0)
                else
                    zmm6 = zmm9
                    zmm8 = zx.o(0)
            
            zmm0.d = zmm6.q.d f+ zmm10.d
            zmm0.d = zmm0.d f* zmm0.d
            
            if (not(zmm7.d f> zmm0.d) && not(zmm7.d f< zmm8.d))
                result = sub_141f8daa0(*(arg1 + 0x10) + 0xbf0, rdi_1, rdi_1 + 0x18)
                
                if (result.b != 0)
                    result, zmm6, zmm7, zmm9, zmm10, zmm11, zmm12, zmm13 =
                        sub_141f8d780(*(arg1 + 0x10) + 0xbf0, rdi_1, rdi_1 + 0xc)
                    
                    if (result.b != 0)
                        zmm0.d = zmm6.q.d f* zmm6.d
                        
                        if (not(zmm7.d f> zmm0.d))
                            zmm6.d = zmm6.d f- zmm10.d
                            r13_1 |= rbp_1
                            zmm6.d = zmm6.d f* zmm6.d
                        
                        if (zmm7.d f> zmm0.d || not(zmm7.d f<= zmm6.d))
                            int64_t* rcx_12 = *(*(*(*(arg1 + 8) + 0xdb8) + (r12_1 << 3)) + 8)
                            result = (*(*rcx_12 + 0xd8))(rcx_12)
                            
                            if (result.b != 0)
                                r14_1 |= rbp_1
            
            rcx = arg_18
            rsi_1 += 1
            r8_2 = var_e0_1
            r15_1 += 1
            rbp_1 *= 2
            
            if (r15_1 s>= 0x20)
                break
        
        if (r14_1 != 0)
            uint64_t result_3 = *(arg1 + 0x10) + 0x15f8
            result = *(result_3 + 0x10)
            
            if (result != 0)
                result_3 = result
            
            *(result_3 + result_1) = r14_1
        
        if (r13_1 != 0)
            uint64_t result_4 = *(arg1 + 0x10) + 0x15b8
            result = *(result_4 + 0x10)
            
            if (result != 0)
                result_4 = result
            
            *(result_4 + result_1) = r13_1
        
        r8_2 += 0x20
        rdx_1 = arg_8 + 0x20
        bool cond:2_1 = arg_10 + 1 s< r10_1 + data_1439b6dd0
        arg_10 += 1
        rcx = arg_18
        arg_8 = rdx_1
        var_e0_1 = r8_2
        result_1 += 4
        
        if (not(cond:2_1))
            break

return result
