// 函数: sub_14068c320
// 地址: 0x14068c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0xf
*(arg1 + 0x10) = 0
int64_t* result = arg1
*(arg1 + 0x18) = 0
char* rbx = arg1
int64_t rbp = arg5 + arg7

if (rbp u> 0xf)
    int64_t rax_2 = rbp | 0xf
    rdi = 0x7fffffffffffffff
    int64_t rax_3
    
    if (rax_2 u<= 0x7fffffffffffffff)
        rdi = rax_2
        
        if (rax_2 u< 0x16)
            rdi = 0x16
        
        if (rdi + 1 u>= 0x1000)
            rax_3 = rdi + 0x28
            
            if (rax_3 u> rdi + 1)
                goto label_14068c38b
            
            stdext::threads::_Throw_lock_error()
            noreturn
        
        if (rdi == -1)
            rbx = nullptr
        else
            rbx = j_sub_140a82f30(rdi + 1)
    else
        rax_3 = -0x7fffffffffffffd9
    label_14068c38b:
        int64_t rax_4 = j_sub_140a82f30(rax_3)
        
        if (rax_4 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx = (rax_4 + 0x27) & 0xffffffffffffffe0
        *(rbx - 8) = rax_4
    *result = rbx

result[2] = rbp
result[3] = rdi
memcpy(rbx, arg4, arg5.d)
memcpy(&rbx[arg5], arg6, arg7.d)
rbx[rbp] = 0
return result
