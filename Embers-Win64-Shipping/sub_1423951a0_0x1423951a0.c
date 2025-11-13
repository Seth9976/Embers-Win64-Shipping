// 函数: sub_1423951a0
// 地址: 0x1423951a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_2 = rbx << 6
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_2 + r9_1 + 0x3c))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_2 + r9_1 + 0x38)
            break
        
        rdx_1 = r9_1 + 0x38 + (sx.q(i) << 6)

void* rdi_2 = (rbx << 6) + *arg1
int64_t rcx_4 = *(rdi_2 + 0x20)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(rdi_2 + 8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_1405c37b0(arg1, rbx.d, 1) __tailcall
