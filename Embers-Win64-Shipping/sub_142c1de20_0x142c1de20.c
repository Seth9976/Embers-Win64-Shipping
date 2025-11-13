// 函数: sub_142c1de20
// 地址: 0x142c1de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
uint32_t rsi_3 =
    (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint32_t result = zx.d(*(arg1 + 7))
uint32_t rsi_4 = rsi_3 + result

if (rsi_3 == neg.d(result))
label_142c1dee3:
    *arg4 = 0xffffffff
    result.b = 0
else
    void* rbx_1 = arg1 + 0xa
    
    while (true)
        uint64_t r8 = zx.q(*(rbx_1 - 1))
        uint64_t rdx = zx.q(*(rbx_1 - 2))
        uint64_t r9 = zx.q(*rbx_1)
        uint64_t r10_1 = zx.q(*(rbx_1 + 1))
        char* rcx_5
        
        if ((rdx.d << 0x18) + (r8.d << 0x10) + (r9.d << 8) != neg.d(r10_1.d))
            rcx_5 = ((((r8 + (rdx << 8)) << 8) + r9) << 8) + arg1 + r10_1
        else
            rcx_5 = &data_14369a5d0
        
        if (sub_142c1dc90(rcx_5, arg2, arg3).b != 0)
            *arg4 = rdi
            result.b = 1
            break
        
        rdi += 1
        rbx_1 += 8
        
        if (rdi u>= rsi_4)
            goto label_142c1dee3

return result
