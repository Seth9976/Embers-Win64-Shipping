// 函数: sub_142c0a800
// 地址: 0x142c0a800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x24)
uint64_t result

if (rax == 0)
    *(arg1 + 0x20) = 1
    data_144017550.q = 0
    result = &data_144017550
else
    *(arg1 + 0x24) = rax - 1
    
    if (rax - 1 u>= *(arg1 + 0x28))
        data_144017550.q = 0
        result = &data_144017550
    else
        result = *(arg1 + 0x30) + (zx.q(rax - 1) << 3)

int32_t rsi = int.d(fconvert.t(*result))
int32_t rsi_1 = rsi + *arg2

if (rsi + *arg2 s< 0)
    *(arg1 + 0x38) = 1
else
    result = *(arg2 + 8)
    
    if (result == 0)
        *(arg1 + 0x38) = 1
    else
        uint32_t rcx_1 = zx.d(*result)
        result = zx.q(*(result + 1))
        
        if (rsi_1 u>= (rcx_1 << 8) + result.d || *(arg1 + 0x7c) u>= 0xa)
            *(arg1 + 0x38) = 1
        else
            *(arg1 + 0x48) = *(arg1 + 8)
            *(arg1 + 0x50) = *(arg1 + 0x10)
            *(arg1 + 0x58) = *(arg1 + 0x18)
            *(arg1 + 0x5c) = *(arg1 + 0x1c)
            sub_142c0d100(arg1 + 0x78, arg1 + 0x40)
            char* rcx_5 = *(arg2 + 8)
            int32_t rax_8
            int64_t rcx_6
            
            if (rcx_5 == 0 || rsi_1 u>= (zx.d(*rcx_5) << 8) + zx.d(rcx_5[1]))
                rcx_6 = 0
                rax_8 = 0
            else
                void var_28
                sub_142bfcb90(rcx_5, &var_28, rsi_1)
                int32_t var_18
                rax_8 = var_18
                int64_t var_20
                rcx_6 = var_20
            
            *(arg1 + 0x48) = rcx_6
            *(arg1 + 0x50) = rax_8
            *(arg1 + 0x58) = 0
            *(arg1 + 0x5c) = 0
            *(arg1 + 0x60) = arg3
            *(arg1 + 0x64) = rsi_1
            *(arg1 + 8) = *(arg1 + 0x48)
            *(arg1 + 0x10) = *(arg1 + 0x50)
            *(arg1 + 0x18) = *(arg1 + 0x58)
            result = zx.q(*(arg1 + 0x5c))
            *(arg1 + 0x1c) = result.b

return result
