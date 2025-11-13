// 函数: sub_141477f50
// 地址: 0x141477f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
float zmm7_1
result, zmm7_1 = sub_1414767a0(*arg1, arg2, arg3)
int64_t* rbx_1
int64_t* rsi_1
void* rdi_1

if (result.b != 0)
    rsi_1 = arg1[1]
    int64_t* rax = *rsi_1
    rbx_1 = *rax
    rdi_1 = &rbx_1[sx.q(rax[1].d)]

if (result.b == 0 || rbx_1 == rdi_1)
label_141478016:
    result.b = 0
else
    while (true)
        int32_t* rdx_1 = *(*rbx_1 + 8) + 0xc0
        float zmm1_1 = *rsi_1[3]
        rdx_1[6]
        float* rax_3 = rsi_1[2]
        float var_30_1 = zmm1_1 * rax_3[2] f+ rdx_1[2]
        float var_34_1 = zmm1_1 * rax_3[1] f+ rdx_1[1]
        float var_38 = zmm1_1 * *rax_3 f+ *rdx_1
        float zmm0_1
        float zmm6_1
        zmm0_1, result, zmm6_1 = sub_140addc20(arg2, rdx_1, &var_38)
        
        if (zmm0_1 < zmm6_1 * zmm6_1)
            result.b = 1
            break
        
        rbx_1 = &rbx_1[1]
        
        if (rbx_1 == rdi_1)
            goto label_141478016

return result
