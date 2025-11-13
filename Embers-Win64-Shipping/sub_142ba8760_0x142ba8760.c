// 函数: sub_142ba8760
// 地址: 0x142ba8760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2
int16_t arg_8
int16_t arg_20

if ((arg4 & 0x10) == 0)
    if (((*(arg1 + 4) & 0x7fff0000) == 0 && (*(arg1 + 8) & 0x8000) == 0)
            || (*(arg1 + 0x418) & 2) != 0)
        int32_t rdi_1 = 0
        
        if (arg3 != 0)
            uint32_t* rsi_2 = arg5
            
            do
                (*(*(arg1 + 0x2d0) + 0x118))(arg1, 0, zx.q(rdi_1 + r14), &arg_8, &arg_20)
                rdi_1 += 1
                *rsi_2 = zx.d(arg_20)
                rsi_2 = &rsi_2[1]
            while (rdi_1 u< arg3)
        
        return 0
else if (((*(arg1 + 4) & 0x7fff0000) == 0 && (*(arg1 + 8) & 0x8000) == 0)
        || (*(arg1 + 0x418) & 0x10) != 0)
    int32_t rdi = 0
    
    if (arg3 == 0)
        return 0
    
    uint32_t* rsi_1 = arg5
    
    do
        if (*(arg1 + 0x190) == 0)
            int32_t r8_1
            
            if (*(arg1 + 0x208) == 0xffff)
                r8_1 = sx.d(*(arg1 + 0x13c))
                arg2 = sx.d(*(arg1 + 0x13e))
                arg_8 = r8_1.w
                
                if (r8_1 - arg2 s>= 0)
                    r8_1.w -= arg2.w
                    arg2 = zx.d(r8_1.w)
                else
                    arg2.w -= r8_1.w
            else
                r8_1 = sx.d(*(arg1 + 0x24e))
                arg2 = sx.d(*(arg1 + 0x250))
                arg_8 = r8_1.w
                
                if (r8_1 - arg2 s>= 0)
                    r8_1.w -= arg2.w
                    arg2 = zx.d(r8_1.w)
                else
                    arg2.w -= r8_1.w
            arg_20 = arg2.w
        else
            arg2.b = 1
            (*(*(arg1 + 0x2d0) + 0x118))(arg1, arg2, zx.q(rdi + r14), &arg_8, &arg_20)
            arg2 = zx.d(arg_20)
        
        rdi += 1
        *rsi_1 = zx.d(arg2.w)
        rsi_1 = &rsi_1[1]
    while (rdi u< arg3)
    
    return 0
return 7
