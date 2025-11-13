// 函数: sub_1406e7740
// 地址: 0x1406e7740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg1[0x1c] == 0)
    int64_t rax_1 = *arg1
    arg1[0x1c] = (*(rax_1 + 0x30))(rax_1)

void* i = arg1[0xd]

for (int64_t rdi_2 = arg1[0xe]; i != rdi_2; i += 0x48)
    int64_t* rcx_1 = *(i + 0x40)
    int64_t arg_8 = arg2
    
    if (rcx_1 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx_1 + 0x10))(rcx_1, &arg_8)
