// 函数: sub_1426ec7a0
// 地址: 0x1426ec7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("EnvQueryManager")
double zmm7[0x2] = *(arg1 + 0x104)
int64_t r12 = sx.q(*(arg1 + 0x20))
int128_t zmm9 = zx.o(0)
int32_t r14 = 0
int64_t performanceCount

if (not(zmm7[0].d f<= 0f))
    int64_t rsi_1 = 0
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm8
    int128_t var_58_1 = zmm8
    
    while (rsi_1 s< r12)
        if (*(arg1 + 0x28) + r14 s>= r12.d)
            break
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm8.q = float.d(performanceCount_1)
        int64_t* rax_3 = (rsi_1 << 4) + *(arg1 + 0x18)
        zmm6 = zmm9
        zmm8.q = zmm8.q f* data_143d796f8
        int64_t* rbx_1 = rax_3[1]
        int64_t* rdi_1 = *rax_3
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        double zmm0_1[0x2]
        
        if (rdi_1 == 0 || rdi_1[5].d != 0)
            rsi_1 += 1
        else
            int32_t zmm10_1
            zmm6, zmm7, zmm8, zmm9, zmm10_1 = sub_1426d5c40(rdi_1, zmm7)
            
            if (rdi_1[5].d != 0)
                if (not(zmm10_1 f>= rdi_1[0x29].d))
                    *(rdi_1 + 0x13e) |= 4
                
                int64_t performanceCount_2
                QueryPerformanceCounter(&performanceCount_2)
                zmm6.q = float.d(performanceCount_2)
                zmm6.q = zmm6.q f* data_143d796f8
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                if (rdi_1[0xd].d != 0)
                    int64_t* rcx_5 = rdi_1[0xc]
                    
                    if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                        int64_t* rcx_6
                        
                        if (rdi_1[0xd].d == 0)
                            rcx_6 = nullptr
                        else
                            rcx_6 = rdi_1[0xc]
                        
                        int64_t* var_88 = rdi_1
                        int64_t* var_80_1 = rbx_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        (*(*rcx_6 + 0x50))(rcx_6, &var_88)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp6_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                int64_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                zmm0_1 = zx.o(0)
                r14 += 1
                zmm0_1[0] = float.d(performanceCount_3)
                zmm0_1[0] = zmm0_1[0] f* data_143d796f8
                zmm0_1[0] = zmm0_1[0] f- zmm6.q
                zmm6 = _mm_cvtpd_ps(zmm0_1)
                rsi_1 += 1
            else if (*(arg1 + 0x108) != 0)
                rsi_1 += 1
            
            if (not(zmm10_1 f>= rdi_1[0x29].d))
                char rax_9 = *(rdi_1 + 0x13e)
                
                if ((rax_9 & 4) == 0)
                    *(rdi_1 + 0x13e) = rax_9 | 4
        
        if (*(arg1 + 0x108) != 0 && rsi_1 == r12)
            rsi_1 = 0
        
        QueryPerformanceCounter(&performanceCount)
        double zmm1_1[0x2] = zx.o(0)
        zmm0_1 = zx.o(0)
        zmm1_1[0] = float.d(performanceCount)
        zmm0_1[0] = fconvert.d(zmm6.d)
        zmm1_1[0] = zmm1_1[0] f* data_143d796f8
        zmm1_1[0] = zmm1_1[0] f- zmm8.q
        zmm1_1[0] = zmm1_1[0] - zmm0_1[0]
        zmm0_1 = _mm_cvtpd_ps(zmm1_1)
        zmm7[0].d = zmm7[0].d f- zmm0_1[0].d
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (not(zmm7[0].d f> zmm9.d))
            break

int32_t rax_12 = *(arg1 + 0x28)
int32_t i_1 = rax_12 + r14

if (i_1 s> 0)
    int32_t rbx_2 = *(arg1 + 0x20)
    
    if (i_1 == rbx_2 || (*(arg1 + 0x108) == 0 && rax_12 s<= 0))
        if (i_1 s> 0)
            uint64_t i_2 = zx.q(i_1)
            uint64_t i
            
            do
                QueryPerformanceCounter(&performanceCount)
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        sub_140dbae50(arg1 + 0x18, 0, i_1, 0)
    else
        int32_t rbx_3 = rbx_2 - 1
        
        if (rbx_2 - 1 s>= 0)
            int64_t rsi_3 = sx.q(rbx_3) << 4
            
            while (i_1 s> 0)
                void* rcx_13 = *(rsi_3 + *(arg1 + 0x18))
                
                if (rcx_13 == 0)
                    sub_140dbae50(arg1 + 0x18, rbx_3, (rcx_13 + 1).d, 0)
                else if (*(rcx_13 + 0x28) != 0)
                    QueryPerformanceCounter(&performanceCount)
                    sub_140dbae50(arg1 + 0x18, rbx_3, 1, 0)
                    i_1 -= 1
                
                rsi_3 -= 0x10
                int32_t temp2_1 = rbx_3
                rbx_3 -= 1
                
                if (temp2_1 - 1 s< 0)
                    break

*(arg1 + 0x28) = 0
return sub_140b37f60("EnvQueryManager") __tailcall
