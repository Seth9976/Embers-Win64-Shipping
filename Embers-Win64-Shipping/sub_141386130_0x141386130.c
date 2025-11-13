// 函数: sub_141386130
// 地址: 0x141386130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = *(arg2 + 0xa8)
arg1[2] = arg3
arg1[3].w = *(arg2 + 0x70)
*(arg1 + 0xe) = 0
arg1[4].b = *(arg2 + 0x9a)
*(arg1 + 0x11) ^= ((*(arg2 + 0x9c) u>> 0x15).b ^ *(arg1 + 0x11)) & 1
uint8_t rcx_1 = ((((*(arg2 + 0x9c) u>> 0x14).b * 2) ^ *(arg1 + 0x11)) & 2) ^ *(arg1 + 0x11)
*(arg1 + 0x11) = rcx_1
uint8_t rax_6 = (((*(arg2 + 0x9c) u>> 0x13).b << 2 ^ rcx_1) & 4) ^ rcx_1
*(arg1 + 0x11) = rax_6
uint8_t rcx_3 = (((*(arg2 + 0x9c) u>> 2).b << 3 ^ rax_6) & 8) ^ rax_6
*(arg1 + 0x11) = rcx_3
uint8_t rax_8 = (((*(arg2 + 0x9c) u>> 3).b << 4 ^ rcx_3) & 0x10) ^ rcx_3
*(arg1 + 0x11) = rax_8
uint8_t rdx_1 = (((*(arg2 + 0x9c) u>> 4).b << 5 ^ rax_8) & 0x20) ^ rax_8
char arg_28
char rax_9 = arg_28
*(arg1 + 0x11) = rdx_1
char rax_10 = (*(arg1 + 0x12) & 0xfe) | arg5
*(arg1 + 0x11) = (((*(arg2 + 0x9c) u>> 5).b & 1) | (rax_9 * 2)) << 6 | (rdx_1 & 0x3f)
*(arg1 + 0x12) = rax_10
uint8_t rcx_5

if (arg6 == 3)
    int64_t* rcx_6 = *(arg2 + 0x80)
    int64_t arg_8 = 0
    int64_t* rax_12 = (*(*rcx_6 + 0x40))(rcx_6, 3, &arg_8)
    
    if (rax_12 == 0)
        rcx_5 = 0
    else
        int64_t rdx_2 = *rax_12
        
        if ((*(rdx_2 + 0x158))(rax_12, rdx_2) == 0)
            rcx_5 = 0
        else
            int64_t r8_2 = *rax_12
            
            if ((*(*(r8_2 + 0x1e8))(rax_12, &arg_28, r8_2) u>> 7 & 1) == 0)
                rcx_5 = 0
            else
                int32_t rax_16 = (*(*rax_12 + 0x1d8))(rax_12)
                int32_t rax_18
                
                if (rax_16 != 0)
                    rax_18 = (*(*rax_12 + 0x1d8))(rax_12)
                
                if (rax_16 != 0 && rax_18 != 1)
                    rcx_5 = 0
                else
                    rcx_5 = 1
    
    rax_10 = *(arg1 + 0x12)
else
    rcx_5 = 0

rax_10 = (rax_10 & 0xfd) | (rcx_5 * 2)
*(arg1 + 0x12) = rax_10
uint8_t rcx_12 = (((*(arg2 + 0x9c) u>> 0x16).b << 2 ^ rax_10) & 4) ^ rax_10
*(arg1 + 0x12) = rcx_12
*(arg1 + 0x12) = (((*(arg2 + 0x9c) u>> 0x17).b & 7) | arg4 << 3) << 3 | (rcx_12 & 0x87)
return arg1
