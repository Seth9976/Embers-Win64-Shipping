// 函数: sub_142b4dcd0
// 地址: 0x142b4dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (*arg5 s> 0 || *(arg1 + 0x38) != 0)
    return 

int32_t i = 0
*(arg1 + 0x38) = 1

do
    int64_t rbp_1 = *rbx
    
    if (rbp_1 != 0)
        void* rax = sub_142a7dd00(0x18)
        int32_t* rsi_1 = rax
        
        if (rax == 0)
            *arg5 = 7
            break
        
        *(rax + 0x10) = arg2
        *(rax + 8) = arg3
        *rsi_1 = sub_142b4f4d0(i)
        sub_142b50890(arg4, rbp_1, rsi_1, arg5)
        
        if (*arg5 s> 0)
            break
    
    i += 1
    rbx += 8
while (i s< 7)
