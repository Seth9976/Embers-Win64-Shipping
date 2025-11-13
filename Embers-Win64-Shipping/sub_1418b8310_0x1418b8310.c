// 函数: sub_1418b8310
// 地址: 0x1418b8310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
void* r14 = arg2
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void* result = arg5
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
void* arg_38
void* rbp = arg_38
int32_t i = 0
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
float zmm6[0x4] = _mm_cvtpd_ps(zmm0)

if (*(result + 0x10) s> 0)
    void* rbx_1 = nullptr
    int64_t* rsi_1 = arg6
    
    do
        int64_t rdi_1 = *(result + 8)
        uint32_t rcx_1 = zx.d(*(rbx_1 + rdi_1 + 6))
        
        if (rcx_1 == 5)
            int64_t* r14_1 = *(*(rbp + 0x28) + (zx.q(*(rbx_1 + rdi_1)) << 3))
            
            if (r14_1 == 0)
                r14 = arg2
            else
                void* rax_9 = (*(*r14_1 + 0x48))(r14_1)
                void* rsi_2 = rax_9
                
                if (rax_9 == 0)
                    int64_t* rcx_17 = *(data_143f10e68 + 0x10)
                    rsi_2 = (*(*rcx_17 + 0x48))(rcx_17)
                
                void* const rcx_19
                
                if ((*(rsi_2 + 0x78) & 6) == 0 || (*(*(arg1 + 0x140) + 0x1af0) & 2) == 0)
                    sub_140865c40(arg1 + 0x2e8, &performanceCount, *(rsi_2 + 0x18))
                    int64_t rax_16 = sx.q(performanceCount.d)
                    
                    if (rax_16.d == 0xffffffff)
                        rcx_19 = nullptr
                    else
                        rcx_19 = *(arg1 + 0x2e8) + rax_16 * 0x18
                else
                    sub_140865c40(arg1 + 0x2e8, &arg_38, *(rsi_2 + 0x18))
                    int64_t rax_14 = sx.q(arg_38.d)
                    
                    if (rax_14.d == 0xffffffff)
                        rcx_19 = nullptr
                    else
                        rcx_19 = *(arg1 + 0x2e8) + rax_14 * 0x18
                
                uint64_t rcx_21 = zx.q(*(rbx_1 + rdi_1 + 4))
                int64_t rax_19 = *arg6
                sub_1418c63e0(*(arg2 + 0x48), *(rax_19 + (rcx_21 << 2)), 
                    zx.d(*(rax_19 + (rcx_21 << 2) + 2)), rsi_2, *(rcx_19 + 8))
                int64_t* rax_20 = r14_1[9]
                zmm0 = zx.o(0)
                rsi_1 = arg6
                r14 = arg2
                r15 = arg4
                zmm0[0] = fconvert.d(zmm6[0])
                
                if (not(zmm0[0] f== *rax_20))
                    *rax_20 = zmm0.q
        else if (rcx_1 == 6)
            void* r9_2 = *(*(rbp + 0x28) + (zx.q(*(rbx_1 + rdi_1)) << 3))
            
            if (r9_2 != 0)
                uint64_t rcx_13 = zx.q(*(rbx_1 + rdi_1 + 4))
                int64_t rax_6 = *rsi_1
                zmm6 = sub_1418eddc0(r14, *(rax_6 + (rcx_13 << 2)), 
                    zx.d(*(rax_6 + (rcx_13 << 2) + 2)), r9_2)
        else if (rcx_1 == 7)
            void* r9_1 = *(*(rbp + 0x28) + (zx.q(*(rbx_1 + rdi_1)) << 3))
            
            if (r9_1 != 0)
                uint64_t rcx_10 = zx.q(*(rbx_1 + rdi_1 + 4))
                int64_t rax_4 = *rsi_1
                zmm6 = sub_1418ee280(r14, *(rax_4 + (rcx_10 << 2)), 
                    zx.d(*(rax_4 + (rcx_10 << 2) + 2)), r9_1)
        else if (rcx_1 == 8)
            uint64_t rdx = zx.q(*(rbx_1 + rdi_1 + 4))
            int16_t r8 = *(*r15 + rdx * 0x18 + 2)
            void* r9 = *(*(rbp + 0x28) + (zx.q(*(rbx_1 + rdi_1)) << 3))
            
            if (r9 != 0 && *(r9 + 0x18) != 0)
                int64_t rax_2 = *rsi_1
                
                if (r8 != 0xffff)
                    rdx.w = r8
                
                uint64_t rcx_7 = zx.q(rdx.w)
                sub_1418c6180(*(r14 + 0x48), *(rax_2 + (rcx_7 << 2)), 
                    zx.d(*(rax_2 + (rcx_7 << 2) + 2)), r9)
        
        result = arg5
        i += 1
        rbx_1 += 0x18
    while (i s< *(result + 0x10))

return result
