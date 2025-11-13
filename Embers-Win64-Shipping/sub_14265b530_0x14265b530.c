// 函数: sub_14265b530
// 地址: 0x14265b530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14243ade0((*(*arg1 + 0x150))()) == 0)
    return 2

int64_t r8 = 0
int64_t* rcx_1 = arg1[0x12]
char r9 = 0
uint64_t r10_1 = sx.q(arg1[0x13].d) << 3 u>> 3

if (rcx_1 u> &rcx_1[arg1[0x13]])
    r10_1 = 0

if (r10_1 != 0)
    do
        void* rax_5 = *rcx_1
        
        if (rax_5 != 0)
            char rdx_1 = *(rax_5 + 0x2ac)
            char rax_6 = r9
            
            if (rdx_1 u> r9)
                rax_6 = rdx_1
            
            r9 = rax_6
        
        rcx_1 = &rcx_1[1]
        r8 += 1
    while (r8 != r10_1)

return zx.q(r9)
