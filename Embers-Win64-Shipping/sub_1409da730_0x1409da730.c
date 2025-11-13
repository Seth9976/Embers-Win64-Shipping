// 函数: sub_1409da730
// 地址: 0x1409da730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x130))
int32_t r8 = *(arg1 + 0x134)

if (rdx.d u> 6)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) * 0x30 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax_1 = sub_140a846a0(rdx * 0x30, 0)
            r8 = *(arg1 + 0x134)
            rdx = rax_1 u/ 0x30
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 6

if (rdx.d == r8)
    return 

*(arg1 + 0x134) = rdx.d
return sub_1409d9e30(arg1, *(arg1 + 0x130), rdx.d, 0x30) __tailcall
