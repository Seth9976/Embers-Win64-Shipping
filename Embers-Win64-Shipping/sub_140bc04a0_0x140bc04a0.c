// 函数: sub_140bc04a0
// 地址: 0x140bc04a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *arg1

if (rcx != 0)
    return sub_140a74f90(rcx) __tailcall

int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
label_140bc04d7:
    (**rcx_2)(rcx_2, 1)
label_140bc04d9:
    int64_t* rcx_3 = arg1[1]
    
    if (rcx_3 != 0)
        jump(**rcx_3)
else if (arg1[1] != rcx_2)
    if (rcx_2 == 0)
        goto label_140bc04d9
    
    goto label_140bc04d7
