// 函数: sub_141c990b0
// 地址: 0x141c990b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg3
arg2.q f- 0.0
uint128_t zmm7
uint128_t var_58 = zmm7
int64_t r13
r13.b = arg2.q f< 0.0
BOOL i = arg3[4] - rbx

if (i s> 0)
    zmm7 = 0x4170000000000000
    void* rdi_1 = arg1 + 0x448
    
    do
        int64_t r15_1 = *(arg3 + 8)
        *arg3 = rbx + 1
        int32_t rax_2 = *(arg1 + 0x38)
        int64_t r14_1 = sx.q(rbx)
        int64_t* rbx_2 = **(r15_1 + (r14_1 << 3))
        int64_t* arg_10 = rbx_2
        int64_t* rdx_5
        
        if (rax_2 == *(arg1 + 0x64))
        labelid_26:
            rdx_5 = nullptr
        else
            int32_t rax_4 = sub_140b5ead0(rbx_2.d) + arg_10:4.d
            void* r8 = arg1 + 0x68
            void* rcx_1 = *(r8 + 8)
            
            if (rcx_1 != 0)
                r8 = rcx_1
            
            int32_t rax_6 = *(r8 + (((sx.q(*(arg1 + 0x78)) - 1) & sx.q(rax_4)) << 2))
            
            if (rax_6 == 0xffffffff)
            label_141c9918b:
                rdx_5 = nullptr
            else
                int64_t r8_1 = *(arg1 + 0x30)
                int64_t rcx_2
                
                while (true)
                    rcx_2 = sx.q(rax_6)
                    int64_t rdx_4 = rcx_2 * 3
                    
                    if (*(r8_1 + (rdx_4 << 3)) == rbx_2)
                        break
                    
                    rax_6 = *(r8_1 + (rdx_4 << 3) + 0x10)
                    
                    if (rax_6 == 0xffffffff)
                        goto label_141c9918b_2
                
                if (rax_6 == 0xffffffff)
                label_141c9918b_1:
                    rdx_5 = nullptr
                else
                    void* rdx_7 = r8_1 + rcx_2 * 0x18
                    
                    if (rdx_7 == 0)
                    label_141c9918b_2:
                        rdx_5 = nullptr
                    else
                        rdx_5 = *(rdx_7 + 8)
        
        int64_t* rax_7 = *(r15_1 + (r14_1 << 3))
        int64_t* rbx_3 = rax_7[2]
        
        if (rdx_5 == 0)
            zmm7 = sub_141c97ed0(arg1, rax_7)
        else if (rdx_5 != rax_7)
            zmm7 = sub_141cb68d0(arg1, rdx_5, rax_7)
            void* rsi_1 = *(r15_1 + (r14_1 << 3))
            
            if (rsi_1 != 0)
                int64_t rcx_4 = *(rsi_1 + 0x38)
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                int64_t* rdi_2 = *(rsi_1 + 0x30)
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp2_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                j_sub_140a74f90(rsi_1)
                rdi_1 = arg1 + 0x448
            
            *(r15_1 + (r14_1 << 3)) = 0
        
        arg_10 = rbx_3
        char rax_11
        double zmm6_1
        rax_11, zmm6_1 = sub_141c99350(rdi_1, rbx_3)
        
        if (rax_11 != 0)
            int64_t var_68
            int64_t* rax_12
            rax_12, zmm6_1 = sub_140b63b70(&arg_10, &var_68)
            sub_140920c10(arg1 + 0x560, rax_12)
            int64_t rcx_12 = var_68
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        if (r13.b == 0)
            int64_t performanceCount
            i = QueryPerformanceCounter(&performanceCount)
            double zmm1 = float.d(performanceCount)
            float zmm0_1[0x2] = _mm_cvtps_pd(*(arg1 + 0x558)).q
            
            if (zmm1 f* data_143d796f8 f+ zmm7.q - zmm6_1 f> zmm0_1)
                return i
        
        rbx = *arg3
        i = arg3[4] - rbx
    while (i s> 0)

if (rbx s> 0)
    int32_t rax_14 = arg3[4]
    
    if (rax_14 != rbx)
        int64_t rcx_14 = *(arg3 + 8)
        memmove(rcx_14, rcx_14 + (sx.q(rbx) << 3), (rax_14 - rbx) << 3)
        rax_14 = arg3[4]
    
    arg3[4] = rax_14 - rbx
    i = sub_1405c53d0(&arg3[2])
    *arg3 = 0

return i
