// 函数: sub_1428e83f0
// 地址: 0x1428e83f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = -1
char* r10 = arg1 - arg2
int64_t i

do
    char rax_1 = *(r10 + arg2)
    char r8_1 = *arg2
    
    if (rax_1 != r8_1)
        if (rax_1 - 0x41 u<= 0x19)
            rax_1 += 0x20
        
        if (r8_1 - 0x41 u<= 0x19)
            r8_1 += 0x20
        
        if (rax_1 != r8_1)
            if (rax_1 u< r8_1)
                return 0xffffffff
            
            return 1
    else if (rax_1 == 0)
        break
    
    arg2 = &arg2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return 0
