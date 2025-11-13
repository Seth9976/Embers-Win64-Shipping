// 函数: sub_141b643e0
// 地址: 0x141b643e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_2 = rbx << 5
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_2 + r9_1 + 0x1c))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_2 + r9_1 + 0x18)
            break
        
        rdx_1 = r9_1 + 0x18 + (sx.q(i) << 5)

int64_t* rdi = *((rbx << 5) + *arg1 + 0x10)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return sub_1405c36f0(arg1, rbx.d, 1) __tailcall
