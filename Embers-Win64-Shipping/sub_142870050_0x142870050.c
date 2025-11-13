// 函数: sub_142870050
// 地址: 0x142870050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*(*(arg1 + 0xb0) + 0x128) != 0)
    int32_t rax_2 = sub_142899cf0(sub_14284fce0(arg1), 0x31, 0, 0)
    void* rdx_1 = *(arg1 + 0xb0)
    *(rdx_1 + 0x130) = *(rdx_1 + 0x128) - zx.q(rax_2)
    *(*(arg1 + 0xb0) + 0x128) = 0

int64_t rcx_4 = 0x100 - zx.q(sub_142899cf0(sub_14284fce0(arg1), 0x31, 0, 0))

if (*(*(arg1 + 0xb0) + 0x130) u< rcx_4)
    if (test_bit(sub_14284fc20(arg1), 0xc))
        return 0
    
    *(*(arg1 + 0xb0) + 0x130) = sx.q(sub_142899cf0(sub_14284fce0(arg1), 0x28, 0, 0))
    int64_t rcx_11 = 0x100 - zx.q(sub_142899cf0(sub_14284fce0(arg1), 0x31, 0, 0))
    
    if (*(*(arg1 + 0xb0) + 0x130) u< rcx_11)
        *(*(arg1 + 0xb0) + 0x130) = 0x100 - zx.q(sub_142899cf0(sub_14284fce0(arg1), 0x31, 0, 0))
        sub_142899cf0(sub_14284fce0(arg1), 0x2a, *(*(arg1 + 0xb0) + 0x130), 0)

return 1
