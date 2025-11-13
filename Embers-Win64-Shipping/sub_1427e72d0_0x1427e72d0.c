// 函数: sub_1427e72d0
// 地址: 0x1427e72d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg5

if (rbp == 0 || arg4 == 0)
    return 

int32_t rsi_1 = 0

if (*rbp != 0)
    void* rbx_1 = rbp
    
    do
        if ((*(rbx_1 + 8) & arg4) == *(rbx_1 + 8))
            if (arg2[3].d != 0)
                (**arg2)(arg2, &data_1434cf414, 1)
            
            char* rdx = *rbx_1
            
            if (rdx != 0 && *rdx != 0)
                int64_t r8 = -1
                
                do
                    r8 += 1
                while (rdx[r8] != 0)
                
                (**arg2)(arg2)
        
        rsi_1 += 1
        rbx_1 = &rbp[zx.q(rsi_1) * 2]
    while (*rbx_1 != 0)

arg5.b = 0
(**arg2)(arg2, &arg5, 1)
(*(*arg1 + 0x10))(arg1, arg3, arg2[4])
arg2[3] = 0
