// 函数: sub_142a93860
// 地址: 0x142a93860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
char* rdi = arg1

if (*arg1 != 0)
    do
        char rcx = *rdi
        int32_t rax_1
        
        if (rcx != 0x2d)
            if (sub_142a86230(rcx).b == 0)
                rax_1.b = 0
                return rax_1
            
            rbx += 1
        else
            if (rbx - 3 u> 5)
                rax_1.b = 0
                return rax_1
            
            rbx = 0
        rdi = &rdi[1]
    while (*rdi != 0)
    
    if (rbx - 3 u<= 5)
        int32_t rax_2
        rax_2.b = 1
        return rax_2

return 0
