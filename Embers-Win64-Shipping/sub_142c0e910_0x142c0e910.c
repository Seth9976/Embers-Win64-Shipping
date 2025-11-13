// 函数: sub_142c0e910
// 地址: 0x142c0e910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x24)
uint64_t result

if (rax == 0)
    *(arg1 + 0x20) = 1
    result = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)
else
    uint64_t rax_1 = zx.q(rax - 1)
    *(arg1 + 0x24) = rax_1.d
    
    if (rax_1.d u>= *(arg1 + 0x28))
        result = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    else
        result = (rax_1 << 5) + *(arg1 + 0x30)

int32_t rsi = int.d(fconvert.t(*result))
int32_t rsi_1 = rsi + *arg2

if (rsi + *arg2 s< 0)
    *(arg1 + 0x38) = 1
else
    char* rdx = *(arg2 + 8)
    
    if (rdx == 0)
        *(arg1 + 0x38) = 1
    else
        result = zx.q(rdx[3])
        
        if (rsi_1 u>= (((((zx.d(*rdx) << 8) + zx.d(rdx[1])) << 8) + zx.d(rdx[2])) << 8) + result.d
                || *(arg1 + 0x7c) u>= 0xa)
            *(arg1 + 0x38) = 1
        else
            *(arg1 + 0x48) = *(arg1 + 8)
            *(arg1 + 0x50) = *(arg1 + 0x10)
            *(arg1 + 0x58) = *(arg1 + 0x18)
            *(arg1 + 0x5c) = *(arg1 + 0x1c)
            sub_142c0d100(arg1 + 0x78, arg1 + 0x40)
            char* rcx_8 = *(arg2 + 8)
            int32_t rax_14
            int64_t rcx_9
            
            if (rcx_8 == 0 || rsi_1 u>= (zx.d(rcx_8[1]) << 0x10) + (zx.d(rcx_8[2]) << 8)
                    + (zx.d(*rcx_8) << 0x18) + zx.d(rcx_8[3]))
                rcx_9 = 0
                rax_14 = 0
            else
                void var_28
                sub_142bfcc80(rcx_8, &var_28, rsi_1)
                int32_t var_18
                rax_14 = var_18
                int64_t var_20
                rcx_9 = var_20
            
            *(arg1 + 0x48) = rcx_9
            *(arg1 + 0x50) = rax_14
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
