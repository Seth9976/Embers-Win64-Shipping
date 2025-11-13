// 函数: sub_1427a1740
// 地址: 0x1427a1740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) += 1
int32_t rcx = *(arg1 + 0x14)
int64_t rbp
rbp.b = 0
int32_t rax = arg1[1].d
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *arg1
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else
                int128_t zmm1 = arg3[1]
                int64_t rax_3 = *rcx_1
                int128_t var_48 = *arg3
                int128_t var_28_1 = arg3[2]
                int128_t var_38_1 = zmm1
                
                if ((*(rax_3 + 0x50))(rcx_1, arg2, &var_48) == 0)
                    rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x14)

*(arg1 + 0x14) = rcx - 1

if (rbp.b == 0)
    return rcx - 1

return sub_140599630(arg1, 0) __tailcall
