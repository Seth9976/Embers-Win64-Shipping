// 函数: sub_1408d5090
// 地址: 0x1408d5090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool result = &__return_addr
int64_t* arg_20 = arg4
int64_t* arg_10 = arg2
int32_t i = 0

if (arg3[1].d s> 0)
    char* rbx_1 = nullptr
    
    do
        int64_t rax = *arg2
        int64_t r14_1 = *arg6
        int64_t rdx = data_143cebd60
        int64_t rdi_1 = *arg1
        int32_t* rsi_1 = rax + (rbx_1 << 2)
        bool result_1 = rbx_1[r14_1] != 0
        int32_t var_58 = *(rax + (rbx_1 << 2))
        int64_t var_50_1 = *(*arg3 + (rbx_1 << 3))
        char var_48_1 = rbx_1[*arg4]
        char var_47_1 = rbx_1[*arg5]
        (*(rdi_1 + 0x210))(arg1, sub_140d1fd30(arg1, rdx), &var_58)
        rbx_1 = &rbx_1[1]
        arg4 = arg_20
        i += 1
        arg2 = arg_10
        *rsi_1 = var_58
        result = result_1
        rbx_1[r14_1 - 1] = result
    while (i s< arg3[1].d)

return result
