// 函数: sub_1421b7d40
// 地址: 0x1421b7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(*(arg1 + 0x28) + 0x98))

if (rdx.d s<= 0)
    return 0xffffffff

void* rbx = *(arg1 + 0x10)
int64_t r8 = *(*(**(rbx + 0x40) + 0x90) + (rdx << 3) - 8)

if (r8 != 0)
    int32_t arg_8
    sub_140865c40(rbx + 0x60, &arg_8, r8)
    int64_t rax_4 = sx.q(arg_8)
    void* const rcx_1
    
    if (rax_4.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(rbx + 0x60) + rax_4 * 0x18
    
    int32_t* rax_6 = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax_6 = nullptr
    
    if (rax_6 != 0)
        return zx.q(*rax_6)

return 0xffffffff
