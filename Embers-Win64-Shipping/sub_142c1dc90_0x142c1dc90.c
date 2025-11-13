// 函数: sub_142c1dc90
// 地址: 0x142c1dc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg1[1])
uint32_t rsi_1 = zx.d(*arg1) << 8
int32_t rdi = 0

if (rsi_1 == neg.d(result))
label_142c1dd43:
    result.b = 1
else
    void* rbx_1 = &arg1[4]
    
    while (true)
        uint64_t r8 = zx.q(*(rbx_1 - 1))
        uint64_t rdx = zx.q(*(rbx_1 - 2))
        uint64_t r9_1 = zx.q(*rbx_1)
        uint64_t r10_1 = zx.q(*(rbx_1 + 1))
        void* rcx_5
        
        if ((rdx.d << 0x18) + (r8.d << 0x10) + (r9_1.d << 8) != neg.d(r10_1.d))
            rcx_5 = &arg1[((((r8 + (rdx << 8)) << 8) + r9_1) << 8) + r10_1]
        else
            rcx_5 = &data_14369a5d0
        
        if (sub_142c1dbf0(rcx_5, arg2, arg3).b == 0)
            result.b = 0
            break
        
        rdi += 1
        rbx_1 += 4
        
        if (rdi u>= rsi_1 + result)
            goto label_142c1dd43

return result
