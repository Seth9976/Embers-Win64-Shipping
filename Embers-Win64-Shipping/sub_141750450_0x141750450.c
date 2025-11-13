// 函数: sub_141750450
// 地址: 0x141750450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xc)
int64_t r8 = sx.q(arg1[1].d)
int32_t result_1 = r9 - r8.d
int64_t result = sx.q(result_1)

if (result * 0x98 u>= 0x4000)
label_141750486:
    
    if (result_1 s> 0x40)
        if (r8.d s> 0)
            int64_t rax = sub_140a846a0(r8 * 0x98, 0)
            r9 = *(arg1 + 0xc)
            int64_t rdx_1
            rdx_1:result = mulu.dp.q(-0x286bca1af286bca1, rax)
            r8 = rax u/ 0x98
    else if (r8.d != 0)
        r8 = zx.q(r9)
else
    result = zx.q(r9 * 2)
    
    if ((r8 * 3).d s< result.d)
        goto label_141750486
    
    r8 = zx.q(r9)

if (r8.d != r9)
    *(arg1 + 0xc) = r8.d
    int64_t rcx_3 = *arg1
    
    if (rcx_3 != 0 || r8.d != 0)
        result = sub_140a84c80(rcx_3, sx.q(r8.d) * 0x98, 0)
        *arg1 = result

return result
