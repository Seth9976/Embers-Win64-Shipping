// 函数: sub_1406e7db0
// 地址: 0x1406e7db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg1[0x46] == 0)
    int64_t rax_1 = *arg1
    arg1[0x46] = (*(rax_1 + 0x40))(rax_1)

void* i = arg1[0x43]

for (int64_t r12_1 = arg1[0x44]; i != r12_1; i += 0x48)
    int64_t* rcx_1 = *(i + 0x40)
    int32_t var_48 = arg6
    int64_t var_40 = arg5
    char arg_8 = arg4
    int64_t var_38 = arg3
    int64_t var_30 = arg2
    
    if (rcx_1 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx_1 + 0x10))(rcx_1, &var_30, &var_38, &arg_8, &var_40, &var_48)
