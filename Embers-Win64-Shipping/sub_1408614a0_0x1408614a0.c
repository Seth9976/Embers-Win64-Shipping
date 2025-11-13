// 函数: sub_1408614a0
// 地址: 0x1408614a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 s>= 0 && rbx.d s< *(arg1 + 0x10))
    int32_t rdx = *(arg1 + 0x10)
    int32_t rax_3 = rdx - rbx.d - 1
    
    if (rax_3 s>= 1)
        rax_3 = 1
    
    if (rax_3 != 0)
        int64_t rcx = *(arg1 + 8)
        memcpy(rcx + (rbx << 3), rcx + (sx.q(rdx - rax_3) << 3), rax_3 << 3)
        rdx = *(arg1 + 0x10)
    
    *(arg1 + 0x10) = rdx - 1
    sub_1405c53d0(arg1 + 8)
    int32_t rax_6 = *(arg1 + 0x20)
    int32_t rcx_5 = rax_6 - rbx.d - 1
    
    if (rcx_5 s>= 1)
        rcx_5 = 1
    
    if (rcx_5 != 0)
        int64_t r9_1 = *(arg1 + 0x18)
        memcpy(r9_1 + (rbx << 3), r9_1 + (sx.q(rax_6 - rcx_5) << 3), rcx_5 << 3)
        rax_6 = *(arg1 + 0x20)
    
    *(arg1 + 0x20) = rax_6 - 1
    sub_1405c53d0(arg1 + 0x18)

if (rbx.d s< 0 || rbx.d s>= *(arg1 + 0x10))
    return 

void* rdx_4 = *(*(arg1 + 8) + (rbx << 3))

if (rdx_4 != 0)
    *(rdx_4 + 0x5b0) = rbx.d
