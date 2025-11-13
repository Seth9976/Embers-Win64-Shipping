// 函数: sub_1429bfa30
// 地址: 0x1429bfa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13_2 = (arg2 - arg1) s>> 2
int64_t i = r13_2 s>> 1

if (i s<= 0)
    return 

int64_t r15_2 = (r13_2 - 1) s>> 1

do
    int64_t r14_1 = sx.q(*(arg1 + (i << 2) - 4))
    i -= 1
    int64_t i_2 = i
    int64_t i_1 = i
    int32_t zmm0
    int32_t zmm1
    
    if (i s< r15_2)
        do
            int64_t rax_1 = *arg3
            int64_t r10_1 = i_1 * 2
            int64_t rbx_1 = sx.q(*(arg1 + (r10_1 << 2) + 4))
            i_1 = r10_1 + 2
            int64_t rdi_1 = sx.q(*(arg1 + (r10_1 << 2) + 8))
            zmm1 = *(rax_1 + (rbx_1 << 2))
            zmm0 = *(rax_1 + (rdi_1 << 2))
            
            if (zmm1 f> zmm0)
                i_1 = r10_1 + 1
            else if (not(zmm0 f> zmm1))
                int64_t rax_2 = arg3[1]
                zmm0 = *(rax_2 + (rdi_1 << 2))
                zmm1 = *(rax_2 + (rbx_1 << 2))
                
                if (zmm1 f> zmm0)
                    i_1 = r10_1 + 1
                else if (not(zmm0 f> zmm1) && rdi_1.d s< rbx_1.d)
                    i_1 = r10_1 + 1
            
            *(arg1 + (i_2 << 2)) = *(arg1 + (i_1 << 2))
            i_2 = i_1
        while (i_1 s< r15_2)
    
    if (i_1 == r15_2 && (r13_2.b & 1) == 0)
        *(arg1 + (i_2 << 2)) = *(arg1 + (r13_2 << 2) - 4)
        i_2 = r13_2 - 1
    
    int64_t i_3 = (i_2 - 1) s>> 1
    
    while (i s< i_2)
        uint64_t rax = *arg3
        int64_t r10_2 = sx.q(*(arg1 + (i_3 << 2)))
        zmm1 = *(rax + (r14_1 << 2))
        zmm0 = *(rax + (r10_2 << 2))
        
        if (not(zmm1 f> zmm0))
            if (zmm0 f> zmm1)
                break
            
            rax = arg3[1]
            zmm0 = *(rax + (r10_2 << 2))
            zmm1 = *(rax + (r14_1 << 2))
            
            if (not(zmm1 f> zmm0))
                if (zmm0 f> zmm1)
                    break
                
                if (r10_2.d s>= r14_1.d)
                    break
        
        *(arg1 + (i_2 << 2)) = r10_2.d
        i_2 = i_3
        i_3 = (i_3 - 1) s>> 1
    
    *(arg1 + (i_2 << 2)) = r14_1.d
while (i s> 0)
