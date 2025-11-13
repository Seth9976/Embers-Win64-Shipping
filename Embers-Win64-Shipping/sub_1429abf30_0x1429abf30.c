// 函数: sub_1429abf30
// 地址: 0x1429abf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
void* rax = nullptr
__builtin_memset(arg1, 0, 0x18)
int64_t rcx_2 = (arg2[1] - *arg2) s>> 3

if (rcx_2 != 0)
    if (rcx_2 u> 0x1fffffffffffffff)
        sub_1427c7670()
        noreturn
    
    int64_t rbx_1 = rcx_2 << 3
    
    if (rbx_1 u>= 0x1000)
        int64_t rcx_3 = rbx_1 + 0x27
        
        if (rcx_3 u<= rbx_1)
            rcx_3 = -1
        
        int64_t rax_1 = j_sub_140a82f30(rcx_3)
        
        if (rax_1 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax = (rax_1 + 0x27) & 0xffffffffffffffe0
        *(rax - 8) = rax_1
    else if (rbx_1 != 0)
        rax = j_sub_140a82f30(rbx_1)
    
    *arg1 = rax
    arg1[1] = rax
    int64_t rax_3 = *arg1
    arg1[2] = rbx_1 + rax_3
    int64_t rdx = *arg2
    int64_t rbx_3 = arg2[1] - rdx
    memmove(rax_3, rdx, rbx_3.d)
    arg1[1] = rbx_3 + rax_3

return arg1
