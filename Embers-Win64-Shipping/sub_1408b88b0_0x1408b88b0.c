// 函数: sub_1408b88b0
// 地址: 0x1408b88b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t* rdx = *arg1
int64_t r14_1 = rdi * 2
int64_t* rax = rdx
void* r8 = &rdx[r14_1]

if (rdx != r8)
    do
        if (*rax == *arg2)
            int32_t result = ((rax - rdx) s>> 4).d
            
            if (result != 0xffffffff)
                return result
            
            break
        
        rax = &rax[2]
    while (rax != r8)

int32_t rax_2 = (rdi + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_140610660(arg1)

int64_t rdx_2 = *arg1
*(rdx_2 + (r14_1 << 3)) = *arg2
void* rcx_3 = arg2[1]
*(rdx_2 + (r14_1 << 3) + 8) = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

return rdi.d
