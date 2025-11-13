// 函数: sub_141e8d2c0
// 地址: 0x141e8d2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = data_143f39ea8
int32_t rcx = *result
bool rdx = rcx != 0

if (data_143f39ba4 != rdx)
    bool cond:0_1 = data_143db7aa0 == 0
    data_143f39ba4 = rdx
    
    if (not(cond:0_1))
        if (rcx != 0)
            return sub_141e89520() __tailcall
        
        if (data_143f39be2 != 0 && *result == 0)
            data_143de547c = data_143f39bf0
            data_143f39bf0 = 0
            data_143f39be2 = 0
            data_143f39be1 = 1
            return sub_141e7b230(&data_143a2d4e8) __tailcall
        
        if (data_143f39be1 != 0)
            return sub_141e7b230(&data_143a2d4e8) __tailcall

return result
