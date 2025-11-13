// 函数: sub_1423d1e00
// 地址: 0x1423d1e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* rcx_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* r8

if (rax == rcx_1)
label_1423d1e55:
    r8 = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        r8 = *rax
        
        if (*(r8 + 0x278) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1423d1e55

int64_t rsi = sx.q(*(r8 + 0x208))
int32_t result = (rsi + 1).d
*(r8 + 0x208) = result

if (result s> *(r8 + 0x20c))
    result = sub_1405a4f90(&r8[0x200])

int64_t rdx_2 = rsi << 4
int64_t* rdx_3 = rdx_2 + *(r8 + 0x200)

if (rdx_2 != neg.q(*(r8 + 0x200)))
    rdx_3[1].d &= 0xfffffffe
    int32_t rcx_6 = (zx.d(arg4) | rdx_3[1].d) & 0xfffffffd
    *rdx_3 = arg3
    result = arg6
    rdx_3[1].d = rcx_6 | (zx.d(arg5) * 2)
    *(rdx_3 + 0xc) = result

return result
