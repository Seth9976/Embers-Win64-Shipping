// 函数: sub_140aa3ab0
// 地址: 0x140aa3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *arg2

if (r8 == 0x29)
    if (**arg1 == 0)
        return 2
    
    goto label_140aa3afb

if (r8 != 0x22)
    goto label_140aa3afb

int16_t* rdx = *arg1

if (0x22 != *rdx)
    *rdx = 0x22
label_140aa3afb:
    
    if (r8 == 0x5c)
        int32_t* rax_5 = arg1[1]
        *rax_5 += 1
        return 0
else if ((*arg1[1] & 1) == 0)
    *rdx = 0

*arg1[1] = 0
return 0
