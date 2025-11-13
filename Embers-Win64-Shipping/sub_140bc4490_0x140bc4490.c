// 函数: sub_140bc4490
// 地址: 0x140bc4490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x18)
int64_t* r8

if (((rdx u>> 0xb).b & 1) == 0)
    if (((rdx u>> 8).b & 1) == 0)
        sub_140596d10(arg2, arg3)
        return arg2
    
    if ((not.b(rdx.b) & 1) == 0)
        r8 = &data_143e1a868
        
        if (((rdx u>> 0xc).b & 1) == 0)
            r8 = &data_143e1a858
    else
        r8 = &data_143e1a848
else
    r8 = &data_143e1a878

sub_140b0f020(arg2, arg3, r8)
return arg2
