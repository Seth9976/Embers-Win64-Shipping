// 函数: sub_141ddf810
// 地址: 0x141ddf810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]

if (rcx != 0)
label_141ddf84d:
    (**rcx)(rcx, 1)
label_141ddf84f:
    int64_t* rcx_2 = arg1[1]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    __builtin_memset(arg1, 0, 0x18)
else
    if (arg1[1] != rcx)
        if (rcx == 0)
            goto label_141ddf84f
        
        goto label_141ddf84d
    
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
        *arg1 = 0
