// 函数: sub_142822464
// 地址: 0x142822464
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14281f460(arg1, "|\n", 2)
wchar16 arg_8

while (arg1[6] u< arg3)
    arg_8.b = 0x20
    sub_14281f460(arg1, &arg_8, 1)

int64_t* rcx_1 = arg2

if (arg2[3] u>= 0x10)
    rcx_1 = *arg2

int64_t arg_18 = sub_14058e700(rcx_1)

while (true)
    int64_t* rcx_2 = arg2
    
    if (arg2[3] u>= 0x10)
        rcx_2 = *arg2
    
    int32_t arg_10
    
    if (sub_142820414(&arg_10, &arg_18, sub_14058e700(rcx_2) + arg2[2]) == 0)
        break
    
    int32_t rdx_2 = arg_10
    int64_t* rcx_4 = arg1
    
    if (rdx_2 != 0xa)
        sub_1428220d8(rcx_4, rdx_2)
    else
        wchar16* rdx_3 = &data_14370209c
        
        while (true)
            sub_14281f460(rcx_4, rdx_3, 1)
            
            if (arg1[6] u>= arg3)
                break
            
            arg_8.b = 0x20
            rdx_3 = &arg_8
            rcx_4 = arg1

return 1
