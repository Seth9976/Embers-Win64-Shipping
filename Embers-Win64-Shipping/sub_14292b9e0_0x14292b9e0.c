// 函数: sub_14292b9e0
// 地址: 0x14292b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0
char* r14 = arg1
int32_t rbp = 0

if (arg1 != 0)
    char i = *arg1
    
    if (i != 0)
        int32_t rbx_1 = -1
        
        if (arg2 s> 0)
            rbx_1 = arg2
        
        do
            int32_t rax_1 = rbx_1
            rbx_1 -= 1
            
            if (rax_1 == 0)
                break
            
            uint32_t i_1 = zx.d(i)
            r14 = &r14[1]
            int32_t rax_2 = sub_1428e4710(i_1, 0x800)
            i = *r14
            
            if (rax_2 == 0)
                rsi = 1
            
            if ((i_1 & 0xffffff80) != 0)
                rbp = 1
        while (i != 0)
        
        if (rbp != 0)
            return 0x14
        
        if (rsi != 0)
            return 0x16

return 0x13
