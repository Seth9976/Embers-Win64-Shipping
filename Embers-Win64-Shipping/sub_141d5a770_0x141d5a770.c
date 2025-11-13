// 函数: sub_141d5a770
// 地址: 0x141d5a770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t arg_8 = 0
int32_t r12 = *(*(arg1 + 0xc8) + 0x30)
int32_t r12_1

if (r12 != 0)
    char rax = sub_141d4ee50(*(arg1 + 0x110))
    *(arg1 + 0x130) |= rax
    sub_141d5a8d0(arg1)
    r12_1 = r12 - 1

int64_t result

if (r12 == 0 || r12 - 1 s< 0)
label_141d5a8a4:
    result.b = 0
else
    while (true)
        void* rbx_1 = *(arg1 + 0xc8)
        int64_t rbx_2
        
        if ((*(arg1 + 0xc4) & 1) == 0)
            int32_t rcx_3 = *(rbx_1 + 0x30)
            
            if (rcx_3 s<= 0)
                *(arg1 + 0xd0) = 0xffffffff
                rbx_2 = 0
            else
                int32_t rax_1 = *(arg1 + 0xd0)
                
                if (rax_1 s< 0)
                    rcx_3 = 0
                else if (rax_1 s< rcx_3)
                    rcx_3 = rax_1
                
                *(arg1 + 0xd0) = rcx_3 - 1
                int32_t rax_3 = *(rbx_1 + 0x30) + rcx_3 - 1
                *(arg1 + 0xd0) = rax_3
                int32_t temp1_1 = mods.dp.d(sx.q(rax_3), *(rbx_1 + 0x30))
                *(arg1 + 0xd0) = temp1_1
                rbx_2 = *(*(rbx_1 + 0x28) + (sx.q(temp1_1) << 3))
        else
            rbx_2 = sub_141d58760(rbx_1, arg1 + 0xd0)
        
        int64_t var_38
        
        if (rbx_2 == 0)
            rbx_2.b = 0
        else if ((*(*rbx_2 + 0x268))(rbx_2).b == 0)
            rbx_2.b = 0
        else
            rbp |= 1
            
            if (sub_141d4ef40(*(arg1 + 0x110), (*(*rbx_2 + 0x260))(rbx_2, &var_38), rbx_2 + 0x28, 
                    nullptr).b == 0)
                rbx_2.b = 0
            else
                rbx_2.b = 1
        
        if ((rbp.b & 1) != 0)
            int64_t rcx_8 = var_38
            rbp &= 0xfffffffe
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        if (rbx_2.b != 0)
            result.b = 1
            break
        
        int32_t temp9_1 = r12_1
        r12_1 -= 1
        
        if (temp9_1 - 1 s< 0)
            goto label_141d5a8a4

return result
