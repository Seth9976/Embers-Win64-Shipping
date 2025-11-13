// 函数: sub_142a616f0
// 地址: 0x142a616f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0xa8))
char* rbx = arg2

if (*(arg1 + 0x20) == 0)
    *(arg1 + 0x20) = arg1 + 0x68
    *(arg1 + 0x68) = 0
    *(arg1 + 0xa8) = 0

*(arg1 + 0xa8) += arg3
int32_t rax_3 = *(arg1 + 0xa8) + 1

if (rax_3 s< 0x40)
    goto label_142a617a7

void* rdi_1 = arg1 + 0x68
int64_t rcx = *(arg1 + 0x20)
char* result

if (rcx != rdi_1)
    result = sub_142a7dd30(rcx, sx.q(rax_3))
    
    if (result == 0)
        *arg4 = 7
    else
        *(arg1 + 0x20) = result
    label_142a617a7:
        char* rcx_3 = rbp + *(arg1 + 0x20)
        
        do
            result = zx.q(*rbx)
            rbx = &rbx[1]
            *rcx_3 = result.b
            rcx_3 = &rcx_3[1]
        while (result.b != 0)
else
    result = sub_142a7dd00(sx.q(rax_3))
    *(arg1 + 0x20) = result
    char* result_1 = result
    
    if (result != 0)
        char i
        
        do
            i = *rdi_1
            rdi_1 += 1
            *result_1 = i
            result_1 = &result_1[1]
        while (i != 0)
        goto label_142a617a7
    
    *arg4 = 7

return result
