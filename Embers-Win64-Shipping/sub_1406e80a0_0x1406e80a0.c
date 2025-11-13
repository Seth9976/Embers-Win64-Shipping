// 函数: sub_1406e80a0
// 地址: 0x1406e80a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg1[0x25] == 0)
    int64_t rax_1 = *arg1
    arg1[0x25] = (*(rax_1 + 0x38))(rax_1)

void* i = arg1[0x1e]

for (int64_t rdi_2 = arg1[0x1f]; i != rdi_2; i += 0x48)
    int64_t* rcx_1 = *(i + 0x40)
    
    if (rcx_1 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx_1 + 0x10))(rcx_1)
