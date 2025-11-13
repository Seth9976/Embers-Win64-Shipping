// 函数: sub_1426136c0
// 地址: 0x1426136c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0xc))
int64_t* rdx = *arg1
int32_t i = 0
uint64_t r8 = 1
int32_t rcx = (rax - 1).d
int64_t result = *rdx
*(arg1 + 0xc) = rcx
void* rdi = rdx[rax - 1]

if (rcx s> 1)
    void* rdx_1 = 1
    void* rbx_1 = nullptr
    int32_t rax_4
    
    do
        int32_t r9 = (r8 + 1).d
        
        if (r9 s< rcx)
            int64_t rax_1 = *arg1
            
            if (not(*(*(rax_1 + (rdx_1 << 3) + 8) + 0x10) f>= *(*(rax_1 + (rdx_1 << 3)) + 0x10)))
                r8 = zx.q(r9)
                rdx_1 += 1
        
        int64_t rcx_2 = *arg1
        i = r8.d
        *(rcx_2 + (rbx_1 << 3)) = *(rcx_2 + (rdx_1 << 3))
        rax_4 = ((r8 << 1) + 1).d
        rcx = *(arg1 + 0xc)
        rbx_1 = rdx_1
        rdx_1 = (rdx_1 << 1) + 1
        r8 = zx.q(rax_4)
    while (rax_4 s< rcx)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(i - 1)
int32_t i_2 = (temp1 - temp0) s>> 1

if (i s> 0)
    int32_t zmm0 = *(rdi + 0x10)
    
    do
        int64_t rdx_3 = *arg1
        void* r8_1 = *(rdx_3 + (sx.q(i_2) << 3))
        
        if (zmm0 f>= *(r8_1 + 0x10))
            break
        
        int64_t i_1 = sx.q(i)
        i = i_2
        *(rdx_3 + (i_1 << 3)) = r8_1
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i_2 - 1)
        i_2 = (temp3_1 - temp2_1) s>> 1
    while (i s> 0)

*(*arg1 + (sx.q(i) << 3)) = rdi
return result
