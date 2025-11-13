// 函数: sub_142be77b0
// 地址: 0x142be77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t r15 = arg2[6]
uint32_t rdi = zx.d(sub_142b96f00(arg2, &arg_18))
int32_t rax_1 = arg_18

if (rax_1 == 0)
    if (rdi s> zx.d(*(arg1 + 0x174)) || rdi - 1 u> 0x101)
        return 3
    
    int32_t rbx_1 = 0
    char* rax_4
    int512_t zmm0_1
    rax_4, zmm0_1 = sub_142b99a90(r15, 1, 0, rdi, 0, &arg_18)
    
    if (arg_18 != 0)
        sub_142b99980(r15, rax_4)
        return arg_18
    
    int32_t rax_5 = sub_142b96990(arg2, rax_4, rdi, zmm0_1)
    arg_18 = rax_5
    
    if (rax_5 != 0)
        sub_142b99980(r15, rax_4)
        return arg_18
    
    if (rdi s> 0)
        char* rcx_3 = rax_4
        
        while (true)
            int32_t rax_6 = sx.d(*rcx_3)
            
            if (rax_6 + rbx_1 s< 0 || rax_6 + rbx_1 s> rdi)
                arg_18 = 3
                break
            
            rbx_1 += 1
            rcx_3 = &rcx_3[1]
            
            if (rbx_1 s>= rdi)
                goto label_142be786c
            
            continue
        
        sub_142b99980(r15, rax_4)
        return arg_18
    
label_142be786c:
    *(arg1 + 0x358) = rdi.w
    rax_1 = 0
    *(arg1 + 0x360) = rax_4

return rax_1
