// 函数: sub_141fc39c0
// 地址: 0x141fc39c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_1 = rbx * 0xc8
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + r9_1 + 0xc4))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_1 + r9_1 + 0xc0)
            break
        
        rdx_1 = r9_1 + 0xc0 + sx.q(i) * 0xc8

int64_t* rdi_1 = rbx * 0xc8 + *arg1
sub_141fa6730(&rdi_1[2])
int64_t rcx_4 = *rdi_1

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return sub_141fc3f20(arg1, rbx.d, 1) __tailcall
