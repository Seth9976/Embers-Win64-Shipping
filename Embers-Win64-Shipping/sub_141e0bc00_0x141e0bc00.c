// 函数: sub_141e0bc00
// 地址: 0x141e0bc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]

if (rcx != 0)
label_141e0bc4a:
    (**rcx)(rcx, 1)
label_141e0bc4c:
    int64_t* rcx_2 = arg1[1]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    __builtin_memset(arg1, 0, 0x18)
else
    if (arg1[1] != rcx)
        if (rcx == 0)
            goto label_141e0bc4c
        
        goto label_141e0bc4a
    
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0 || arg3 != 0)
        *arg1 = sub_140a84c80(rcx_1, sx.q(arg3) * arg4, 0)
