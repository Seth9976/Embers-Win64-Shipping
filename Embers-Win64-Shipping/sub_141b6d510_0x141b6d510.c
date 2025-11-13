// 函数: sub_141b6d510
// 地址: 0x141b6d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t* rdx = *arg1
int64_t* r9 = rdx
void* rax = &rdx[rdi * 3]

if (rdx != rax)
    do
        if (*r9 == *arg2)
            int32_t rdx_5 = ((r9 - rdx) s/ 0x18).d
            
            if (rdx_5 != 0xffffffff)
                return zx.q(rdx_5)
            
            break
        
        r9 = &r9[3]
    while (r9 != rax)

int32_t rax_1 = (rdi + 1).d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1405a4df0(arg1)

int64_t* rdx_2 = *arg1
rdx_2[rdi * 3] = *arg2
rdx_2[rdi * 3 + 1] = arg2[1]
void* rcx_3 = arg2[2]
rdx_2[rdi * 3 + 2] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

return zx.q(rdi.d)
