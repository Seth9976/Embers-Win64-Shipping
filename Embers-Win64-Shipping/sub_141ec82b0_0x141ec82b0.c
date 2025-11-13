// 函数: sub_141ec82b0
// 地址: 0x141ec82b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
sub_141fe0f10(sub_141fe0c50(0), &var_18)
int16_t* const rcx_1 = &data_142d40450
int16_t* rdx_1

if (*(arg1 + 0x188) == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *(arg1 + 0x180)

int32_t var_10

if (var_10 != 0)
    rcx_1 = var_18

int32_t result = sub_140a54510(rcx_1, rdx_1)

if (result != 0)
    result = 0x4325b398
    
    if (*(arg1 + 0x180) != u"Mixed")
        int32_t rdx_2 = 0
        bool cond:0_1 = *(arg1 + 0x18c) == 6
        *(arg1 + 0x188) = 0
        
        if (not(cond:0_1))
            sub_1405947f0(arg1 + 0x180, 6)
            rdx_2 = *(arg1 + 0x188)
        
        *(arg1 + 0x188) = rdx_2 + 6
        
        if (rdx_2 + 6 s> *(arg1 + 0x18c))
            sub_140594770(arg1 + 0x180)
        
        int16_t* rcx_4 = *(arg1 + 0x180)
        *rcx_4 = 0x6500780069004d
        result = 0x64
        *(rcx_4 + 8) = 0x64

int16_t* rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
