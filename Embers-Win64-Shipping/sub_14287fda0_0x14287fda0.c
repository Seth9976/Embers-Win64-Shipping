// 函数: sub_14287fda0
// 地址: 0x14287fda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdx = *(arg2 + 0x30)

if (rdx != 0)
label_14287fdee:
    *(arg2 + 0x20)
    int32_t var_18_1 = *(arg2 + 8)
    int32_t rax_3 = sub_1428a77d0(*(arg1 + 0x458), rdx.d)
    
    if (rax_3 s>= 0)
        *(arg2 + 8) = sx.q(rax_3)
        *(arg2 + 0x20) = *(arg2 + 0x30)
        return 1
else
    int64_t rax_1 = sub_1428a6730(0x4540)
    *(arg2 + 0x30) = rax_1
    rdx = rax_1
    
    if (rax_1 != 0)
        goto label_14287fdee

return 0
