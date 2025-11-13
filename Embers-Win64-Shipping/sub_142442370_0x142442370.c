// 函数: sub_142442370
// 地址: 0x142442370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5426 != 0)
    return 

int64_t arg_10
sub_140d3a3a0(&arg_10, arg1)
int32_t* rsi_1 = data_143f5e928
int32_t* rbx_1 = rsi_1
void* rdi_1 = &rsi_1[sx.q(data_143f5e930) * 2]

if (rsi_1 != rdi_1)
    while (sub_14077a170(rbx_1, &arg_10).b == 0)
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == rdi_1)
            goto label_1424423e8

if (rsi_1 != rdi_1 && ((rbx_1 - rsi_1) s>> 3).d != 0xffffffff)
    return 

label_1424423e8:
int64_t rbx_4 = sx.q(data_143f5e930)
int32_t rax_2 = (rbx_4 + 1).d
bool cond:0_1 = rax_2 s<= data_143f5e934
data_143f5e930 = rax_2

if (not(cond:0_1))
    sub_1405a4d70(&data_143f5e928)

*(data_143f5e928 + (rbx_4 << 3)) = arg_10
