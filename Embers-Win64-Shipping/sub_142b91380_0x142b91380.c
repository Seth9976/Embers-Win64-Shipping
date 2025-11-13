// 函数: sub_142b91380
// 地址: 0x142b91380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 == 0)
    return zx.q((&arg2[6]).d)

if (*(arg2 + 0x14) s> 0x2000a)
    return 4

int32_t r10 = *(arg1 + 0x14)
int32_t rsi = 0
int32_t r9 = 0

if (r10 != 0)
    do
        int64_t* r11_1 = arg1[zx.q(r9) + 3]
        char* rcx = *(*r11_1 + 8)
        void* r8_2 = *(arg2 + 8) - rcx
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rcx)
            i = zx.d(*(rcx + r8_2))
            
            if (rdx != i)
                break
            
            rcx = &rcx[1]
        while (i != 0)
        
        if (rdx - i == 0)
            if (*(arg2 + 0x10) s<= *(*r11_1 + 0x10))
                return 5
            
            sub_142b95a10(arg1, r11_1)
            break
        
        r9 += 1
    while (r9 u< r10)

int64_t rbp = *arg1

if (*(arg1 + 0x14) u< 0x20)
    int64_t* rbx_2 = nullptr
    int64_t count = sx.q(*(arg2 + 4))
    int32_t temp0_1 = count.d
    
    if (temp0_1 s> 0)
        int64_t* rax_8 = (*(rbp + 8))(rbp, zx.q(count.d))
        rbx_2 = rax_8
        
        if (rax_8 != 0)
            memset(rax_8, 0, count)
        else
            rsi = (&rax_8[8]).d
    else if (temp0_1 s< 0)
        rsi = 6
    
    if (rsi == 0)
        rbx_2[1] = arg1
        rbx_2[2] = rbp
        *rbx_2 = arg2
        int32_t rax_9
        
        if ((*arg2 & 2) != 0)
            rax_9 = sub_142b98850(rbx_2)
            rsi = rax_9
        
        int64_t rax_11
        int32_t rax_12
        
        if ((*arg2 & 2) == 0 || rax_9 == 0)
            if ((**rbx_2 & 4) != 0)
                arg1[0x26] = rbx_2
            
            char* rax_10 = *rbx_2
            
            if ((*rax_10 & 1) != 0)
                rbx_2[3] = rax_10
            
            rax_11 = *(arg2 + 0x20)
            
            if (rax_11 != 0)
                rax_12 = rax_11(rbx_2)
                rsi = rax_12
        
        if (((*arg2 & 2) == 0 || rax_9 == 0) && (rax_11 == 0 || rax_12 == 0))
            arg1[zx.q(*(arg1 + 0x14)) + 3] = rbx_2
            *(arg1 + 0x14) += 1
        else
            if ((**rbx_2 & 2) != 0)
                void* rax_14 = rbx_2[3]
                
                if (rax_14 != 0 && *(rax_14 + 0x38) == 0x6f75746c)
                    int64_t rcx_8 = rbx_2[0xc]
                    
                    if (rcx_8 != 0)
                        (*(*(rax_14 + 0x60) + 0x28))(rcx_8)
            
            (*(rbp + 0x10))(rbp, rbx_2)
else
    rsi = 0x30

return zx.q(rsi)
