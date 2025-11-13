// 函数: sub_1417815a0
// 地址: 0x1417815a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x20)
void* rbp = *(arg1 + 0x18)
int64_t rdi = sx.q(arg2)

if (*(arg1 + 0x78) == 0)
    void* i = *(arg1 + 0x38)
    
    for (void* rdx_1 = i + (sx.q(*(arg1 + 0x40)) << 3); i != rdx_1; i += 8)
        *(i + 4) = 0
    
    *(*(arg1 + 0x48) + rdi * 0x18 + 4) = 0
else
    sub_141770990(arg1 + 0x28, rdi.d, rbp, rsi)

return MRE::CheckSrcTarg(arg1 + 0x28, rdi.d, rbp, rsi) __tailcall
