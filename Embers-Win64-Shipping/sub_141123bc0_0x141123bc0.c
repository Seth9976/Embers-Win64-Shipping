// 函数: sub_141123bc0
// 地址: 0x141123bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
char* rbx = arg1 + 0x50

do
    if (i != sx.q(arg2) && *rbx != 0)
        *rbx = 0
        *(rbx - 8) = 0
        
        if (*(rbx - 4) != 0)
            sub_140775b80(&rbx[-0x50], 0)
        
        *(arg1 + 0x160) -= 1
    
    i += 1
    rbx = &rbx[0x58]
while (i s< 4)
