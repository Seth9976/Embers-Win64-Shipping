// 函数: sub_141ec9410
// 地址: 0x141ec9410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount = arg2
void* rbx = arg1
int64_t* rcx = *arg2
int64_t performanceCount_1 = arg2
int64_t result = (*(*rcx + 0x10))(rcx)
int64_t r8 = sx.q(*(rbx + 0xba8))

if (r8.d != 0)
    result = *performanceCount_1
    int32_t r13_1 = 0
    int32_t r14_1 = 0
    int64_t r12
    r12.b = **(rbx + 0xba0) != result
    int64_t rsi_1 = 0
    
    do
        int64_t r9_1 = sx.q(r14_1)
        rsi_1 += 1
        r14_1 += 1
        
        if (rsi_1 s< r8)
            int64_t* rcx_4 = (rsi_1 << 4) + *(rbx + 0xba0)
            
            do
                result.b = *rcx_4 != *performanceCount_1
                
                if (zx.d(r12.b) != result.d)
                    break
                
                r14_1 += 1
                rsi_1 += 1
                rcx_4 = &rcx_4[2]
            while (rsi_1 s< r8)
        
        int32_t i_1 = r14_1 - r9_1.d
        
        if (r12.b == 0)
            if (i_1 != 0)
                int64_t* rdi_3 = (r9_1 << 4) + 8 + *(rbx + 0xba0)
                int32_t i
                
                do
                    int64_t* rbx_1 = *rdi_3
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            result = (**rbx_1)(rbx_1)
                            int32_t temp4_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rdi_3 = &rdi_3[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rbx = arg1
            
            performanceCount_1 = performanceCount
        else
            if (r13_1 != r9_1.d)
                int64_t rax_1 = *(rbx + 0xba0)
                result = memmove((sx.q(r13_1) << 4) + rax_1, (r9_1 << 4) + rax_1, i_1 << 4)
            
            r13_1 += i_1
        
        r12.b ^= 1
    while (rsi_1 s< r8)
    
    *(rbx + 0xba8) = r13_1

if (*(rbx + 0xba8) == 0)
    result = QueryPerformanceCounter(&performanceCount)
    data_143f3a810:8 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

int64_t* rbx_2 = *(performanceCount_1 + 8)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_2 + 8))

return result
