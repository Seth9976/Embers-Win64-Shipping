// 函数: sub_141a13680
// 地址: 0x141a13680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_1 = rbx * 0x68
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + r9_1 + 0x64))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_1 + r9_1 + 0x60)
            break
        
        rdx_1 = r9_1 + 0x60 + sx.q(i) * 0x68

int64_t rcx_5 = *(rbx * 0x68 + *arg1 + 0x38)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_1408fa9b0(arg1, rbx.d, 1) __tailcall
