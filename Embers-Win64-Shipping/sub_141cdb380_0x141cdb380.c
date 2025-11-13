// 函数: sub_141cdb380
// 地址: 0x141cdb380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8
int32_t temp0_1
int32_t temp1_1

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x30))
    void* rax = *(arg1 + 0x48)
    r8 = arg1 + 0x38
    
    if (rax != 0)
        r8 = rax
    
    temp0_1:temp1_1 = sx.q(arg3)

char result

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x30)
        || (*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg3.b & 0x1f)) == 0)
    result = 0
else
    result = 1

if (result != 0)
    void* r8_2
    int32_t temp2_1
    int32_t temp3_1
    
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x68))
        r8_2 = arg1 + 0x70
        void* rax_6 = *(r8_2 + 0x10)
        
        if (rax_6 != 0)
            r8_2 = rax_6
        
        temp2_1:temp3_1 = sx.q(arg2)
    
    if (arg2 s< 0 || arg2 s>= *(arg1 + 0x68)
            || (*(r8_2 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg2.b & 0x1f))
            == 0)
        result = 0
    else
        result = 1
    
    if (result == 0)
        int32_t rsi_1 = data_143a1c6b4
        int32_t var_18[0x4]
        int32_t* rdx_7 = *(sub_1409ca9d0(arg1 + 0x60, &var_18, arg2) + 8)
        
        if (rdx_7 != 0)
            *rdx_7 = rsi_1
            *(rdx_7 + 8) = 0
            *(rdx_7 + 0x10) = 0
        
        return sub_141cdb490(arg1 + 0x28, arg2, arg3)

return result
