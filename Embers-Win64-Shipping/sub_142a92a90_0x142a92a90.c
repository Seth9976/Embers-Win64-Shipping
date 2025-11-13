// 函数: sub_142a92a90
// 地址: 0x142a92a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[5]
void* result = nullptr
int32_t arg_8 = 0

if (rax == 0)
    *arg3 = 0x10
else
    char* rax_1 = rax(arg1, &arg_8)
    
    if (rax_1 != 0)
        void* result_1 = sub_142a928f0(arg1, ((zx.q(arg_8) << 1) + 2).d)
        result = result_1
        
        if (result_1 != 0)
            sub_142a8d750(rax_1, result_1, arg_8 + 1)
        else
            *arg3 = 7

if (arg2 != 0)
    *arg2 = arg_8

return result
