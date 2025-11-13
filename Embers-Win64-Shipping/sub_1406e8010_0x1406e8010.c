// 函数: sub_1406e8010
// 地址: 0x1406e8010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg1[0x54] == 0)
    int64_t rax_1 = *arg1
    arg1[0x54] = (*(rax_1 + 0x50))(rax_1)

void* i = arg1[0x51]

for (int64_t rdi_2 = arg1[0x52]; i != rdi_2; i += 0x48)
    int64_t* rcx_1 = *(i + 0x40)
    char arg_8 = arg2
    
    if (rcx_1 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx_1 + 0x10))(rcx_1, &arg_8)
