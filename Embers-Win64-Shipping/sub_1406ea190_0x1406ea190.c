// 函数: sub_1406ea190
// 地址: 0x1406ea190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 8)

for (int64_t rbp = *(arg1 + 0x10); i != rbp; i += 0x48)
    int64_t* rcx = *(i + 0x40)
    int64_t arg_8 = arg3
    int64_t arg_20 = arg2
    
    if (rcx == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx + 0x10))(rcx, &arg_20, &arg_8)
