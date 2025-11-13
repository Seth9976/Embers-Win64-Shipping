// 函数: sub_14058e790
// 地址: 0x14058e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* r14_1 = arg3 - arg2
void* rdx_1 = arg1[2] - rbx

if (r14_1 u> rdx_1)
    void* rsi_1 = 0x7fffffffffffffff
    
    if (r14_1 u> 0x7fffffffffffffff)
        sub_14058ac50()
        noreturn
    
    uint64_t rcx_1 = rdx_1 u>> 1
    
    if (rdx_1 u<= 0x7fffffffffffffff - rcx_1)
        rsi_1 = rcx_1 + rdx_1
        
        if (rsi_1 u< r14_1)
            rsi_1 = r14_1
    
    if (rbx != 0)
        if (rdx_1 u>= 0x1000)
            void* rcx_2 = *(rbx - 8)
            
            if (rbx - rcx_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx = rcx_2
        
        j_sub_140a74f90(rbx)
        __builtin_memset(arg1, 0, 0x18)
    
    sub_14058e710(arg1, rsi_1)
    rbx = *arg1

memmove(rbx, arg2, r14_1.d)
void* result = r14_1 + rbx
arg1[1] = result
return result
