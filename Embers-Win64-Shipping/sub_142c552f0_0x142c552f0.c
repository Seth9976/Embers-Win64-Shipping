// 函数: sub_142c552f0
// 地址: 0x142c552f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_20 = arg2

if (arg2 != -1)
    int64_t* rax_1 = sub_142c671a0(arg1, &arg_20, 8)
    
    if (rax_1 != 0)
        return rax_1

int64_t* rax_2 = data_143ccb8b8(1, 0x20)

if (rax_2 != 0)
    *rax_2 = arg3
    rax_2[2] = arg_10
    
    if (sub_142c66d00(arg1, &arg_10, 8, rax_2) != 0)
        return rax_2
    
    data_143ccb8a0(rax_2)

return 0
