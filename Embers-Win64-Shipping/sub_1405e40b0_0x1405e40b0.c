// 函数: sub_1405e40b0
// 地址: 0x1405e40b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xc)
int64_t rdx = sx.q(arg1[1].d)
int32_t r9_1 = r8 - rdx.d
int64_t result = sx.q(r9_1) << 5

if (result u>= 0x4000)
label_1405e40e1:
    
    if (r9_1 s> 0x40)
        if (rdx.d s> 0)
            result = sub_140a846a0(rdx << 5, 0)
            r8 = *(arg1 + 0xc)
            rdx = result u>> 5
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    result = zx.q(r8 * 2)
    
    if ((rdx * 3).d s< result.d)
        goto label_1405e40e1
    
    rdx = zx.q(r8)

if (rdx.d == r8)
    return result

*(arg1 + 0xc) = rdx.d
return sub_140a30eb0(arg1, zx.q(arg1[1].d), rdx.d, 0x20, 0)
