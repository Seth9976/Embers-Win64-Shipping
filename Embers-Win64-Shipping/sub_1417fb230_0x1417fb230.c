// 函数: sub_1417fb230
// 地址: 0x1417fb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = 1
sub_140af2fd0(data_143ddb400, &data_142fe1150, bValidateRootCertificates", &arg_18, &data_143de5780)

if (arg_18 != 0)
    int32_t* rax_1 = sub_14289a060(arg2)
    int32_t rax_3 = sub_14289e5e0(sub_1406bc560(arg2))
    int32_t rax_4
    
    if (rax_3 s>= 0)
        rax_4 = sub_14289e5e0(rax_1)
    
    if (rax_3 s< 0 || rax_4 s> 0)
        return sub_1428a2c50(arg2)

int64_t** rbx_2 = *(arg1 + 8)
uint64_t rbp_1 = sx.q(*(arg1 + 0x10))
void* r14_1 = &rbx_2[rbp_1]

if (rbx_2 != r14_1)
    do
        if (sub_1428a3740(*rbx_2, arg2) == 0)
            return sub_1428a2c50(arg2)
        
        rbx_2 = &rbx_2[1]
    while (rbx_2 != r14_1)
    
    rbp_1 = zx.q(*(arg1 + 0x10))

int32_t rax_6 = (rbp_1 + 1).d
*(arg1 + 0x10) = rax_6

if (rax_6 s> *(arg1 + 0x14))
    sub_1405a4d70(arg1 + 8)

int64_t result = *(arg1 + 8)
*(result + (sx.q(rbp_1.d) << 3)) = arg2
return result
