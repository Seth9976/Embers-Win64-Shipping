// 函数: sub_142b620f0
// 地址: 0x142b620f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int32_t* r10_1 = *(arg1 + 0x280)
int32_t r11_1 = 0
int32_t r9_1 = 0

while (true)
    int32_t rbx_1 = r9_1
    
    if (r9_1 != 0)
        int64_t rax_2 = sx.q(r9_1) * 2
        
        if (r10_1[rax_2 * 2 + 3] s>= r9_1)
            rbx_1 = r10_1[rax_2 * 2 + 3]
    
    int32_t rbx_2 = rbx_1 + 1
    int64_t rax = sx.q(rbx_2) << 4
    int32_t i = *(r10_1 + rax)
    
    while (i != 5)
        if (i == 1)
            return 
        
        i = *(rax + r10_1 + 0x10)
        rax += 0x10
        rbx_2 += 1
    
    r9_1 = rbx_2
    
    if (rbx_2 s< 0)
        break
    
    if (arg2 == r11_1)
        rax = (*(*arg3 + 0x18))(arg3)
        
        if (rax != 0)
            int32_t arg_10 = 0
            sub_142b61e30(arg1, rbx_2, rax, &arg_10)
            
            if (*(arg1 + 0x2e8) == 0)
                *(arg1 + 0x2e8) = sub_142a86f30(sub_142007a80, sub_142a86b90, 0, &arg_10)
            
            sub_142a86e40(*(arg1 + 0x2e8), rbx_2, 1, &arg_10)
        
        break
    
    r11_1 += 1
