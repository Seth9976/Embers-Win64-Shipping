// 函数: sub_142809fb0
// 地址: 0x142809fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

char r9 = 0
int32_t rsi_1 = 0

if (*arg3 == 0)
    return 

int64_t* rbx_1 = arg3

do
    if ((rbx_1[1].d & arg2) != 0)
        if (r9 != 0)
            (**arg1)(arg1, &data_1434cf414, 1)
        
        char* rdx = *rbx_1
        
        if (rdx != 0 && *rdx != 0)
            int64_t r8 = -1
            
            do
                r8 += 1
            while (rdx[r8] != 0)
            
            (**arg1)(arg1)
        
        r9 = 1
    
    rsi_1 += 1
    rbx_1 = &arg3[zx.q(rsi_1) * 2]
while (*rbx_1 != 0)
