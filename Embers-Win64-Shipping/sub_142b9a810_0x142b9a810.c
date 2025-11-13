// 函数: sub_142b9a810
// 地址: 0x142b9a810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142b9a790(arg1, arg3)
int32_t rbx = 0
void* rcx = *rax

if (rcx != 0)
    *(rcx + 8) = arg2
else
    int64_t* rax_1 = (*(arg4 + 8))(arg4, 0x10)
    
    if (rax_1 != 0)
        *rax_1 = 0
        rax_1[1] = 0
    else
        rbx = (&rax_1[8]).d
    
    if (rbx == 0)
        *rax = rax_1
        *rax_1 = arg1
        rax_1[1] = arg2
        
        if (arg3[2] u>= *arg3)
            int32_t rax_4 = sub_142b9a8f0(arg3, arg4)
            rbx = rax_4
            
            if (rax_4 != 0)
                return rax_4
        
        arg3[2] += 1

return rbx
