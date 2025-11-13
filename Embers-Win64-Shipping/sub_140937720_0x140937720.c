// 函数: sub_140937720
// 地址: 0x140937720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int128_t __saved_zmm6 = arg5
arg5 = *arg4
int128_t __saved_zmm7 = arg6
arg6 = *arg3
*(arg1 + 0x94) += 1
int32_t rax = *(arg1 + 0x88)
int32_t rcx = *(arg1 + 0x94)
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *(arg1 + 0x80)
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else
                int64_t rax_3 = *rcx_1
                int128_t var_48 = arg5
                int128_t var_38 = arg6
                
                if ((*(rax_3 + 0x50))(rcx_1, zx.q(arg2), &var_38, &var_48, var_48, var_38, 
                        __saved_zmm7, __saved_zmm6) == 0)
                    rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x94)

*(arg1 + 0x94) = rcx - 1

if (rbp.b == 0)
    return rcx - 1

return sub_140599630(arg1 + 0x80, 0) __tailcall
