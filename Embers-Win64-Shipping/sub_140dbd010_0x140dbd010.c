// 函数: sub_140dbd010
// 地址: 0x140dbd010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x648))
int32_t r8 = *(arg1 + 0x64c)

if (rdx.d u> 0x32)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 5 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 5, 0)
            r8 = *(arg1 + 0x64c)
            rdx = rax u>> 5
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 0x32

if (rdx.d == r8)
    return 

*(arg1 + 0x64c) = rdx.d
return sub_140dbc110(arg1, *(arg1 + 0x648), rdx.d, 0x20) __tailcall
