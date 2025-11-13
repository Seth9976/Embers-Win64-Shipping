// 函数: sub_141a51970
// 地址: 0x141a51970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* rax_1 = (*(*arg1 + 0x2e0))()
int64_t r8 = 0
int64_t* rcx = *rax_1
uint64_t r9_1 = sx.q(rax_1[1].d) << 3 u>> 3

if (rcx u> &rcx[rax_1[1]])
    r9_1 = 0

if (r9_1 != 0)
    do
        void* rax_4 = *rcx
        
        if (rax_4 != 0)
            int32_t rdx_1 = *(rax_4 + 0xa8)
            
            if (rbx s>= rdx_1)
                rdx_1 = rbx
            
            rbx = rdx_1
        
        rcx = &rcx[1]
        r8 += 1
    while (r8 != r9_1)

return zx.q(rbx)
