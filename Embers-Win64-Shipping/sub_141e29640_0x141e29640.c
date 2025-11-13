// 函数: sub_141e29640
// 地址: 0x141e29640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** rdi = arg2
int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    (**rcx)(rcx, rdi)
    return 

if (*arg1 != 0xffffffff)
    void* rax_1 = *arg2
    int64_t* rcx_1
    
    if (rax_1 == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(rax_1 + 0xa8)
    
    int64_t* rax = (*(*rcx_1 + 0x20))(rcx_1)
    int64_t rcx_2 = sx.q(*arg1)
    
    if (rcx_2.d s< 0 || rcx_2.d s>= rax[1].d)
        rcx = *(arg1 + 8)
    else
        rcx = (*rdi)[0x14] + sx.q(*(*(*rax + (rcx_2 << 3)) + 0x4c))
        *(arg1 + 8) = rcx

if (rcx != 0)
    (**rcx)(rcx, rdi)
