// 函数: opus_decoder_ctl
// 地址: 0x14037fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int32_t* arg_18 = arg3
int64_t r9
int64_t arg_20 = r9
void* rsi_1 = sx.q(arg1[1]) + arg1
void* r9_2 = sx.q(*arg1) + arg1

if (arg2 - 0xfa9 u<= 0x24)
    switch (arg2)
        case 0xfa9
            int32_t* rcx_2 = arg_18
            
            if (rcx_2 == 0)
                return 0xffffffff
            
            *rcx_2 = arg1[0xc]
            return 0
        case 0xfbc
            __builtin_memset(&arg1[0xb], 0, 0x28)
            sub_1403f6e90(r9_2, 0xfbc, &arg_18)
            sub_1403dde80(rsi_1)
            arg1[0xb] = arg1[2]
            int32_t temp0
            int32_t temp1
            temp0:temp1 = muls.dp.d(0x51eb851f, arg1[3])
            int32_t rdx_2 = temp0 s>> 7
            arg1[0xf] = rdx_2 + (rdx_2 u>> 0x1f)
            return 0
        case 0xfbd
            int32_t* rcx_6 = arg_18
            
            if (rcx_6 == 0)
                return 0xffffffff
            
            *rcx_6 = arg1[3]
            return 0
        case 0xfbf
            int32_t* rcx_3 = arg_18
            
            if (rcx_3 == 0)
                return 0xffffffff
            
            *rcx_3 = arg1[0x14]
            return 0
        case 0xfc1
            int32_t* rcx_7 = arg_18
            
            if (rcx_7 == 0)
                return 0xffffffff
            
            if (arg1[0xe] != 0x3ea)
                *rcx_7 = arg1[9]
                return 0
            
            sub_1403f6e90(r9_2, 0xfc1, rcx_7)
            return 0
        case 0xfc2
            int32_t rcx_10 = arg_18.d
            
            if (rcx_10 + 0x8000 u> 0xffff)
                return 0xffffffff
            
            arg1[0xa] = rcx_10
            return 0
        case 0xfc7
            int32_t* rcx_11 = arg_18
            
            if (rcx_11 == 0)
                return 0xffffffff
            
            *rcx_11 = arg1[0x11]
            return 0
        case 0xfcd
            int32_t* rcx_9 = arg_18
            
            if (rcx_9 == 0)
                return 0xffffffff
            
            *rcx_9 = arg1[0xa]
            return 0

return 0xfffffffb
