// 函数: sub_142c67110
// 地址: 0x142c67110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
void* rax = arg1[2]

if (rax != 0)
    arg1[2] = *(rax + 0x10)

if (arg1[2] == 0)
    int64_t rdx_1 = sx.q(arg1[1].d)
    int64_t rax_2 = sx.q(rcx[4].d)
    
    if (rdx_1.d s< rax_2.d)
        int64_t r10_1 = *rcx
        int64_t rcx_1 = rdx_1
        int64_t* rax_5 = (rdx_1 << 5) + r10_1
        
        do
            if (*rax_5 != 0)
                arg1[2] = *((sx.q(rdx_1.d) << 5) + r10_1)
                arg1[1].d = (rdx_1 + 1).d
                break
            
            rdx_1 = zx.q(rdx_1.d + 1)
            rcx_1 += 1
            rax_5 = &rax_5[4]
        while (rcx_1 s< rax_2)

int64_t* rax_10 = arg1[2]

if (rax_10 != 0)
    return *rax_10

arg1[2] = 0
return 0
