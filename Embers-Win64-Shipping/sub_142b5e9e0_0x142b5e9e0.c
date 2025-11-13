// 函数: sub_142b5e9e0
// 地址: 0x142b5e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rbx = arg3

if (arg2 s>= 0)
    int32_t r11_1 = 0
    int32_t r9_1 = 0
    int32_t* r10_1 = *(arg1 + 0x280)
    
    while (true)
        int32_t rdi_1 = r9_1
        
        if (r9_1 != 0)
            int64_t rax_2 = sx.q(r9_1) * 2
            
            if (r10_1[rax_2 * 2 + 3] s>= r9_1)
                rdi_1 = r10_1[rax_2 * 2 + 3]
        
        int32_t rdi_2 = rdi_1 + 1
        int64_t rax = sx.q(rdi_2) << 4
        int32_t i = *(r10_1 + rax)
        
        if (i != 5)
            while (i != 1)
                rdi_2 += 1
                rax += 0x10
                i = *(rax + r10_1)
                
                if (i == 5)
                    goto label_142b5ea58
            
            break
        
    label_142b5ea58:
        r9_1 = rdi_2
        
        if (rdi_2 s< 0)
            break
        
        if (arg2 == r11_1)
            int32_t arg_10 = 0
            rbx = nullptr
            int64_t arg_18 = 0
            sub_142b61e30(arg1, rdi_2, arg3, &arg_10)
            
            if (*(arg1 + 0x2e8) == 0)
                *(arg1 + 0x2e8) = sub_142a86f30(sub_142007a80, sub_142a86b90, 0, &arg_10)
            
            sub_142a86e40(*(arg1 + 0x2e8), rdi_2, 1, &arg_10)
            break
        
        r11_1 += 1

if (rbx != 0)
    (**rbx)(rbx, 1)
