// 函数: sub_1419e5760
// 地址: 0x1419e5760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439c9848)
char rax_1 = arg2[5].b

if ((rax_1 & 1) != 0 && rax_1 s< 0 && (arg2[6].d & 0x401000) == 0)
    char rax_2 = *(arg1 + 0x98)
    
    if (rax_2 != 0)
        uint32_t rcx_1 = zx.d(rax_2)
        int64_t rax_3
        
        if (rcx_1 == 1)
            rax_3 = 0x68
        label_1419e57dc:
            void* rcx_5 = arg1 + rax_3
            
            if (rcx_5 != 0)
                *rcx_5 |= 1
                *(rcx_5 + 4) = *(arg1 + 0x9c)
                *(rcx_5 + 8) ^= (*(arg1 + 0xa0) ^ *(rcx_5 + 8)) & 1
                *(arg1 + 0x98) = 0
        else
            if (rcx_1 == 2)
                rax_3 = 0x74
                goto label_1419e57dc
            
            if (rcx_1 == 3)
                rax_3 = 0x80
                goto label_1419e57dc
            
            if (rcx_1 == 4)
                rax_3 = 0x8c
                goto label_1419e57dc

int32_t rcx_6
rcx_6.b = sub_140b5b8a0(*(arg1 + 0xfc), 0).b == 0
uint32_t result
result.b = *(arg1 + 0x100) != 0
result.b |= rcx_6.b

if (result.b != 0 && *(arg1 + 0xd8) == 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0xd8))
    int32_t rax_8 = (rsi_1 + 1).d
    *(arg1 + 0xd8) = rax_8
    
    if (rax_8 s> *(arg1 + 0xdc))
        sub_1405a4d70(arg1 + 0xd0)
    
    *(*(arg1 + 0xd0) + (rsi_1 << 3)) = *(arg1 + 0xfc)
    result = 0
    int64_t arg_8 = 0
    *(arg1 + 0xfc) = 0

if ((arg2[5].b & 1) != 0)
    int128_t var_18 = data_1439c9848
    result = sub_140cdd5d0(arg1, &var_18)
    
    if (result s< 0xa)
        result.b = *(arg1 + 0x148) * 2
        result.b = not.b(result.b)
        result.b &= 2
        *(arg1 + 0x13c) = result.b

return result
