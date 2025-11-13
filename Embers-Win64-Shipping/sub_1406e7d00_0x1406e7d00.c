// 函数: sub_1406e7d00
// 地址: 0x1406e7d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg1[0x46] == 0)
    int64_t rax_1 = *arg1
    arg1[0x46] = (*(rax_1 + 0x40))(rax_1)

void* i = arg1[0x3f]

for (int64_t rdi_2 = arg1[0x40]; i != rdi_2; i += 0x48)
    int64_t* rcx_1 = *(i + 0x40)
    char arg_8 = arg4
    int64_t var_28 = arg3
    int64_t var_20 = arg2
    
    if (rcx_1 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx_1 + 0x10))(rcx_1, &var_20, &var_28, &arg_8)
