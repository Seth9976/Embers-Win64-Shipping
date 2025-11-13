// 函数: sub_1429d0130
// 地址: 0x1429d0130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* result = nullptr
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0x7fffffffffffffff)
        std::_Xlength_error("vector<T> too long")
        noreturn
    
    void* rax = sub_1429caf70(arg1, arg2)
    *arg1 = rax
    arg1[1] = rax
    int16_t* rax_1 = *arg1
    arg1[2] = &rax_1[arg2]
    char var_28_1 = arg1.b
    sub_1429cfe20(rax_1, arg2, arg3)
    result = &rax_1[arg2]
    arg1[1] = result

return result
