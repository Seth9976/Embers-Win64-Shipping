// 函数: sub_1420b6b60
// 地址: 0x1420b6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = arg1[1]
void* rbx

if (rax[1].d != 0)
    void* rcx_1 = *rax
    
    if ((not.b(*(arg1 + 0x14)) & 1) == 0 && (rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + rax
    
    rbx = sx.q(arg1[2].d * arg2) + rcx_1
else
    rbx = nullptr

int64_t result = *arg1

if (test_bit(zx.q(*(result + 0x40)), 9))
    return memset(rbx, 0, sx.q(arg1[2].d * arg3)) __tailcall

if (arg3 s> 0)
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        int64_t rcx_5 = *arg1
        
        if (not(test_bit(zx.q(*(rcx_5 + 0x40)), 9)))
            (*(*rcx_5 + 0xf0))(rcx_5, rbx)
        else
            memset(rbx, 0, sx.q(*(rcx_5 + 0x3c) * *(rcx_5 + 0x38)))
        
        result = sx.q(arg1[2].d)
        rbx += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
