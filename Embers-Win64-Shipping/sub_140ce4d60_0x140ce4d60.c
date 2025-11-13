// 函数: sub_140ce4d60
// 地址: 0x140ce4d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xc)
int64_t r8 = sx.q(arg1[1].d)
int32_t result_1 = r9 - r8.d
int64_t result = sx.q(result_1)

if (result * 0x18 u>= 0x4000)
label_140ce4d97:
    
    if (result_1 s> 0x40)
        if (r8.d s> 0)
            int64_t rax = sub_140a846a0(r8 * 0x18, 0)
            r9 = *(arg1 + 0xc)
            int64_t rdx_2
            rdx_2:result = mulu.dp.q(-0x5555555555555555, rax)
            r8 = rax u/ 0x18
    else if (r8.d != 0)
        r8 = zx.q(r9)
else
    result = zx.q(r9 * 2)
    
    if ((r8 * 3).d s< result.d)
        goto label_140ce4d97
    
    r8 = zx.q(r9)

if (r8.d != r9)
    *(arg1 + 0xc) = r8.d
    int64_t rcx_4 = *arg1
    
    if (rcx_4 != 0 || r8.d != 0)
        result = sub_140a84c80(rcx_4, sx.q(r8.d) * 0x18, 0)
        *arg1 = result

return result
