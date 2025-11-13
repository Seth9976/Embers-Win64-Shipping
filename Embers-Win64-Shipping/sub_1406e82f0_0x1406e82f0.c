// 函数: sub_1406e82f0
// 地址: 0x1406e82f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* i = *(arg1 + 8)

for (int64_t rbp_1 = *(arg1 + 0x10); i != rbp_1; i += 0x48)
    int64_t* rcx = *(i + 0x40)
    int64_t arg_20 = arg3
    int32_t arg_8 = arg2
    
    if (rcx == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx + 0x10))(rcx, &arg_8, &arg_20)
