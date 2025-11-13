// 函数: sub_1421864e0
// 地址: 0x1421864e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *arg2
uint64_t result = &rdi[arg2[1]]
uint64_t r15_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t i = *rdi
        
        if (i != 0)
            int64_t* rax_1 = arg1[0x18]
            int64_t* rdx = arg1
            int64_t rcx = sx.q(arg1[0x19].d)
            
            if (rax_1 != 0)
                rdx = rax_1
            
            int64_t r14_2 = rcx * 2
            void* rax_2 = &rdx[r14_2]
            
            if (rdx == rax_2)
            label_142186572:
                int32_t rax_3 = (rcx + 1).d
                arg1[0x19].d = rax_3
                
                if (rax_3 s> *(arg1 + 0xcc))
                    sub_1421999e0(arg1, rcx.d)
                
                int64_t* rax_4 = arg1[0x18]
                int64_t* rcx_2 = arg1
                
                if (rax_4 != 0)
                    rcx_2 = rax_4
                
                result = &rcx_2[r14_2]
                
                if (result != 0)
                    *(result + 8) = arg3.d
                    *result = i
            else
                while (*rdx != i)
                    rdx = &rdx[2]
                    
                    if (rdx == rax_2)
                        goto label_142186572
                
                result = zx.q(int.d(fconvert.t(rdx[1].d)))
                int32_t rcx_3 = int.d(arg3.d)
                
                if (result.d s>= rcx_3)
                    rcx_3 = result.d
                
                rdx[1].d = _mm_cvtepi32_ps(zx.o(rcx_3)).d
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r15_1)

return result
