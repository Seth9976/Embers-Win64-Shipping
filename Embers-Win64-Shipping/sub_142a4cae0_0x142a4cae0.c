// 函数: sub_142a4cae0
// 地址: 0x142a4cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char* rbx = arg1
uint64_t result

if (*arg1 != 0)
    do
        char rcx = *rbx
        
        if (rcx - 0x2d u> 0x32 || not(test_bit(0x4000000000005, sx.q(rcx - 0x2d))))
            if (sub_142a86230(rcx).b != 0)
                rdi += 1
            else
                result.b = *rbx - 0x30
                
                if (result.b u> 9)
                    result.b = 0
                    return result
                
                rdi += 1
        else
            if (rdi == 0)
                result.b = 0
                return result
            
            rdi = 0
        
        rbx = &rbx[1]
    while (*rbx != 0)

result.b = rdi != 0
return result
