// 函数: sub_142995aa0
// 地址: 0x142995aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
void* rax = nullptr
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0x1fffffffffffffff)
        sub_1427c7670()
        noreturn
    
    int64_t count = arg2 << 3
    
    if (count u>= 0x1000)
        int64_t rcx = count + 0x27
        
        if (rcx u<= count)
            rcx = -1
        
        int64_t rax_1 = j_sub_140a82f30(rcx)
        
        if (rax_1 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax = (rax_1 + 0x27) & 0xffffffffffffffe0
        *(rax - 8) = rax_1
    else if (count != 0)
        rax = j_sub_140a82f30(count)
    
    *arg1 = rax
    arg1[1] = rax
    int64_t rax_3 = *arg1
    arg1[2] = count + rax_3
    memset(rax_3, 0, count)
    arg1[1] = count + rax_3

return arg1
