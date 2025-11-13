// 函数: sub_141f4cd60
// 地址: 0x141f4cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6_1 = sub_141f748c0(arg1, arg2, arg3)
uint64_t result = zx.q(*(arg1 + 0x5a9))

if ((result.b & 4) == 0)
    char rax
    
    if (*(arg1 + 0x630) != 0)
        rax = sub_141f73df0(arg1)
    
    if (*(arg1 + 0x630) == 0 || (rax != 0 && (*(*(arg1 + 0x630) + 2) & 8) != 0))
        result.b = 0
        goto label_141f4cdb5
    
label_141f4cdbd:
    bool cond:0_1 = (*(arg1 + 0x5a9) & 4) == 0
    *(arg1 + 0x868) = data_143de5458.d
    
    if (cond:0_1)
        if (sub_141f73df0(arg1) != 0)
            zmm6_1.d = zmm6_1.d f+ *(*(arg1 + 0x630) + 0x10)
    else
        zmm6_1 = *(arg1 + 0x568)
    
    sub_141f4b670(arg1, zmm6_1, arg3)
    result = data_143f3b5f8
    
    if (*result s> 0)
        int32_t rax_4 = data_143f3b5e0
        data_143f3b5e0 += 1
        result = zx.q(rax_4 + 1)
        
        if (result.d == 0x1f4)
            int32_t temp0_2 = data_143f3b5e0
            data_143f3b5e0 = 0
            data_143f3b5e4 = 0
            return zx.q(temp0_2)
else
    result.b u>>= 4
    result.b &= 1
label_141f4cdb5:
    
    if (result.b != 0)
        goto label_141f4cdbd
    
    if ((*(arg1 + 0x5a9) & 4) == 0)
        int64_t* rcx_3 = *(arg1 + 0x650)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x298))(rcx_3)
        
        int64_t rbx_1 = 0
        int64_t* rsi_1 = *(arg1 + 0x6c0)
        uint64_t r14_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x6c8))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rcx_4 = *rsi_1
                (*(*rcx_4 + 0x298))(rcx_4)
                rbx_1 += 1
                rsi_1 = &rsi_1[1]
            while (rbx_1 != r14_2)
        
        int64_t* rcx_5 = *(arg1 + 0x658)
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x298))(rcx_5)
        
        result = data_143f3b5f8
        
        if (*result != 0)
            data_143f3b5e4 += 1

return result
