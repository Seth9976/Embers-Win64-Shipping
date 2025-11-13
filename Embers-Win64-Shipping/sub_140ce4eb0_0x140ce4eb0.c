// 函数: sub_140ce4eb0
// 地址: 0x140ce4eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = *(arg1 + 0xc)
int64_t rdi = sx.q(arg2)
int64_t result_1 = sx.q(arg1[1].d)
int32_t r9_1 = result_2 - result_1.d
uint64_t result = sx.q(r9_1) * rdi

if (result u>= 0x4000)
label_140ce4ee8:
    
    if (r9_1 s> 0x40)
        if (result_1.d s> 0)
            int64_t rax_1 = sub_140a846a0(result_1 * rdi, 0)
            result_2 = *(arg1 + 0xc)
            result = divu.dp.q(0:rax_1, rdi)
            result_1 = result
    else if (result_1.d != 0)
        result_1 = zx.q(result_2)
else
    result = zx.q(result_2 * 2)
    
    if ((result_1 * 3).d s< result.d)
        goto label_140ce4ee8
    
    result_1 = zx.q(result_2)

if (result_1.d != result_2)
    int64_t rcx_3 = *arg1
    *(arg1 + 0xc) = result_1.d
    
    if (rcx_3 != 0 || result_1.d != 0)
        result = sub_140a84c80(rcx_3, sx.q(result_1.d) * rdi, 0)
        *arg1 = result

return result
