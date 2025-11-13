// 函数: sub_141d59710
// 地址: 0x141d59710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t arg_8 = 0
int32_t r15 = *(*(arg1 + 0xc8) + 0x30)

if (r15 != 0)
    char rax = sub_141d4ee50(*(arg1 + 0x110))
    *(arg1 + 0x130) |= rax
    sub_141d5a8d0(arg1)

uint64_t result

if (r15 == 0 || r15 s<= 0)
label_141d59858:
    result.b = 0
else
    while (true)
        void* rbx_1 = *(arg1 + 0xc8)
        r15 -= 1
        uint64_t rbx_2
        
        if ((*(arg1 + 0xc4) & 1) == 0)
            result = zx.q(*(rbx_1 + 0x30))
            
            if (result.d s<= 0)
                *(arg1 + 0xd0) = 0xffffffff
                rbx_2 = 0
            else
                int32_t rcx_3 = *(arg1 + 0xd0)
                int32_t rax_1 = result.d - 1
                
                if (rcx_3 s< 0xffffffff)
                    rax_1 = -1
                else if (rcx_3 s< rax_1)
                    rax_1 = rcx_3
                
                *(arg1 + 0xd0) = rax_1 + 1
                int32_t temp1_1 = mods.dp.d(sx.q(rax_1 + 1), *(rbx_1 + 0x30))
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
            int64_t rcx_7 = var_38
            rbp &= 0xfffffffe
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
        
        if (rbx_2.b != 0)
            result.b = 1
            break
        
        if (r15 s<= 0)
            goto label_141d59858

return result
