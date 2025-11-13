// 函数: sub_1422b7bd0
// 地址: 0x1422b7bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a94c8)
sub_1422b7940(arg1, arg2, arg3)

if ((arg1[5].b & 1) != 0 && sub_140b4e7c0(arg1, &data_1439a94c8) s< 5)
    int32_t rsi = *(arg2 + 0x24)
    uint32_t i = divu.dp.d(0:(*(arg2 + 0x44)), rsi)
    sub_1422c8790(arg2 + 0x48, i)
    int32_t r10 = 0
    uint64_t r9 = 0
    
    if (i != 0)
        do
            uint64_t rcx_3 = zx.q((r9 << 2).d)
            int32_t rdx_2
            rdx_2.b = *(arg2 + 0x28) != 0
            r9 = zx.q(r9.d + 1)
            int32_t rdx_4 = (rdx_2 + 2) * r10
            r10 += rsi
            *(rcx_3 + *(arg2 + 0x78)) = rdx_4 << 8 | rsi
        while (r9.d u< i)
    
    return arg1

char arg_8
sub_141ff4780(&arg_8, arg1, 0, 0xd6)
(*(*arg1 + 0x1d8))(arg1, &data_1439a94c8)
sub_1422d13c0(arg2 + 0x48, arg1)

if ((arg1[5].b & 1) != 0 || *(arg2 + 0x70) == 0)
    sub_1422b8f40(arg2 + 0x48)

if (((arg_8 & 2) == 0 || *(arg1 + 0x2a) s< 0) && *(arg2 + 0x70) != 0)
    if (sub_140b4e7c0(arg1, &data_1439a94c8) s>= 5)
        int64_t* rcx_9 = *(arg2 + 0x70)
        (*(*rcx_9 + 0x40))(rcx_9, arg1, 0)
    
    if (*(arg1 + 0x2a) s>= 0)
        if (*(arg2 + 0x80) u> 0)
            int64_t* rcx_10 = *(arg2 + 0x70)
            int64_t* rax_10 = (*(*rcx_10 + 0x38))(rcx_10)
            int64_t rdx_10 = *rax_10
            
            if ((*(rdx_10 + 0x18))(rax_10, rdx_10) != 0)
                int64_t* rcx_12 = *(arg2 + 0x70)
                *(arg2 + 0x78) = (*(*rcx_12 + 0x30))(rcx_12)
                return arg1
        
        *(arg2 + 0x78) = 0

return arg1
