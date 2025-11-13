// 函数: sub_141448480
// 地址: 0x141448480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(*arg4 + 0x70)
uint64_t result = zx.q(*(arg3 + 8))

if ((result.b & 4) != 0 && (result.b & 0xe0) != 0)
    *arg6 |= 1
    arg5[0x2e0].d += rbp
    
    if ((*(arg3 + 8) & 0xa0) != 0)
        *arg6 |= 2
        *(arg5 + 0x1704) += rbp
        
        if (arg1 == 0)
            *arg6 |= 0x8000
            *(arg5 + 0x173c) += rbp
        
        if ((*(arg3 + 8) & 0x20) != 0)
            *arg6 |= 0x4000
            arg5[0x2e7].d += rbp
        
        if (arg2 != 0)
            *arg6 |= 0x1000
            arg5[0x2e6].d += rbp
        
        if ((*(arg3 + 8) & 0x10) != 0)
            *arg6 |= 0x40
            arg5[0x2e3].d += rbp
        
        if ((*(arg3 + 3) & 2) != 0)
            *arg6 |= 0x80
            *(arg5 + 0x171c) += rbp
        
        if ((*(arg3 + 4) & 1) != 0)
            *arg6 |= 8
            *(arg5 + 0x170c) += rbp

if ((*(arg3 + 2) & 0x70) != 0)
    result = zx.q(*(arg3 + 8))
    
    if (not(test_bit(result.d, 8)) && result.b s< 0)
        result = sub_1422dd780(*arg5)
        
        if (result.b == 0)
            *arg6 |= 0x800
            *(arg5 + 0x172c) += rbp
        else
            result = zx.q(*(arg3 + 2))
            
            if ((result.b & 0x40) != 0)
                *arg6 |= 0x100
                arg5[0x2e4].d += rbp
                result = zx.q(*(arg3 + 2))
            
            if ((result.b & 0x10) != 0)
                *arg6 |= 0x200
                *(arg5 + 0x1724) += rbp
                result = zx.q(*(arg3 + 2))
            
            if ((result.b & 0x20) != 0)
                *arg6 |= 0x400
                arg5[0x2e5].d += rbp
        
        if ((*(arg3 + 2) & 4) != 0)
            *arg6 |= 0x20
            *(arg5 + 0x1714) += rbp
        
        if (arg1 == 0 && *(arg5 + 0xd72) != arg1.b)
            *arg6 |= 0x10000
            arg5[0x2e8].d += rbp

if ((*(arg3 + 4) & 2) != 0)
    int32_t rdx = arg5[0x319].d
    int32_t rax_1 = rdx + 1
    arg5[0x319].d = rax_1
    
    if (rax_1 s> *(arg5 + 0x18cc))
        sub_14083a990(&arg5[0x318], rdx)
        rax_1 = arg5[0x319].d
    
    void* rdx_3 = (sx.q(rax_1) << 4) + arg5[0x318]
    *(rdx_3 - 0x10) = *arg4
    result = arg4[1]
    *(rdx_3 - 8) = result

if ((*(arg3 + 8) & 0x80) != 0 && (*(arg3 + 3) & 0x10) != 0)
    int32_t rdx_4 = arg5[0x317].d
    int32_t rax_3 = rdx_4 + 1
    arg5[0x317].d = rax_3
    
    if (rax_3 s> *(arg5 + 0x18bc))
        sub_1410b38a0(&arg5[0x316], rdx_4)
        rax_3 = arg5[0x317].d
    
    void* rdx_5 = arg5[0x316] + sx.q(rax_3) * 0x18
    *(rdx_5 - 0x18) = *arg4
    *(rdx_5 - 0x10) = arg4[1]
    result = arg4[1]
    *(rdx_5 - 8) = *(result + 0x30)

if ((*(arg3 + 2) & 8) != 0)
    result = sub_141191440(sub_1422e5a30(arg5))
    
    if (result.b != 0)
        int32_t rdx_6 = arg5[0x3b3].d
        int32_t rax_9 = rdx_6 + 1
        arg5[0x3b3].d = rax_9
        
        if (rax_9 s> *(arg5 + 0x1d9c))
            sub_14119a720(&arg5[0x3b2], rdx_6)
            rax_9 = arg5[0x3b3].d
        
        int64_t rcx_8 = sx.q(rax_9) * 3
        result = arg5[0x3b2]
        *(result + (rcx_8 << 3) - 0x18) = *arg4
        *(result + (rcx_8 << 3) - 8) = arg4[2]

return result
