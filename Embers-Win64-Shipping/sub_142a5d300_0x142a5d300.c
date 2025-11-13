// 函数: sub_142a5d300
// 地址: 0x142a5d300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
int64_t* rdx = *(arg1 + 0x170)

if (rdx != 0)
    rdx = *rdx
    
    if ((rdx[0x32].b & 1) == 0)
        sub_142a479b0(arg2, &rdx[0x31])
        return arg2

rdx.b = 1
sub_142a47a60(arg2, rdx.b, &data_14363d4e4, 0xffffffff)
return arg2
