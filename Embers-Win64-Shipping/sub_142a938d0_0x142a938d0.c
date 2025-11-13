// 函数: sub_142a938d0
// 地址: 0x142a938d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char* rbx = arg1

if (*arg1 != 0)
    do
        if (rdi s< 2)
            if (sub_142a86230(*rbx) == 0)
                return false
        else if (((*rbx - 0x5a) & 0xdf) != 0)
            return false
        
        rbx = &rbx[1]
        rdi += 1
    while (*rbx != 0)

return rdi == 6
