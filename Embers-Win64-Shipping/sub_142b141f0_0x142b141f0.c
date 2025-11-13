// 函数: sub_142b141f0
// 地址: 0x142b141f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
int32_t rdx = 0
void* rcx = nullptr
int32_t i

do
    int64_t rax_1 = *(arg1 + 0x358)
    rdx += 1
    int64_t j_1 = sx.q(*(rcx + rax_1))
    rcx += 4
    
    if (rdx s>= *(arg1 + 0x360))
        i = 0x110000
    else
        i = *(rcx + rax_1)
        rdx += 1
        rcx += 4
    
    if (j_1.d s>= 0x100)
        break
    
    int64_t j = j_1
    
    do
        *(j + arg1 + 8) = 1
        j += 1
        
        if (j s>= sx.q(i))
            break
    while (j s< 0x100)
while (i s<= 0x100)
int64_t rcx_1 = *(arg1 + 0x358)
int64_t result = 0
int32_t i_1
int32_t i_2

do
    i_2 = *(rcx_1 + (result << 2))
    result_1 += 1
    result += 1
    
    if (result s>= sx.q(*(arg1 + 0x360)))
        i_1 = 0x110000
        break
    
    i_1 = *(rcx_1 + (result << 2))
    result_1 += 1
    result += 1
while (i_1 s<= 0x80)

int32_t i_4 = 0x800

if (i_2 s< 0x80)
    i_2 = 0x80
label_142b142d6:
    int64_t rsi_1 = result << 2
    
    do
        int32_t i_3 = 0x800
        
        if (i_1 s<= 0x800)
            i_3 = i_1
        
        result = sub_142b14500(arg1 + 0x10c, i_2, i_3)
        
        if (i_1 s> 0x800)
            i_2 = 0x800
            break
        
        result = *(arg1 + 0x358)
        result_1 += 1
        i_2 = *(rsi_1 + result)
        rsi_1 += 4
        
        if (result_1 s>= *(arg1 + 0x360))
            i_1 = 0x110000
        else
            i_1 = *(rsi_1 + result)
            result_1 += 1
            rsi_1 += 4
    while (i_2 s< 0x800)
else if (i_2 s< 0x800)
    goto label_142b142d6

if (i_2 s< 0x10000)
    result = sx.q(result_1)
    int64_t rsi_2 = result << 2
    
    do
        if (i_1 s> 0x10000)
            i_1 = 0x10000
        
        if (i_2 s< i_4)
            i_2 = i_4
        
        if (i_2 s< i_1)
            if ((i_2.b & 0x3f) != 0)
                int32_t r9_1 = i_2 s>> 6
                result = zx.q(r9_1) & 0x3f
                int64_t r8_2 = result << 2
                *(r8_2 + arg1 + 0x20c) |= 0x10001 << (r9_1 s>> 6).b
                i_2 = (r9_1 + 1) << 6
                i_4 = i_2
            
            if (i_2 s< i_1)
                result = zx.q(i_1) & 0xffffffc0
                
                if (i_2 s< result.d)
                    result = sub_142b14500(arg1 + 0x20c, i_2 s>> 6, i_1 s>> 6)
                
                if ((i_1.b & 0x3f) != 0)
                    int32_t rbx_1 = i_1 s>> 6
                    result = zx.q(rbx_1) & 0x3f
                    int64_t r8_5 = result << 2
                    *(r8_5 + arg1 + 0x20c) |= 0x10001 << (rbx_1 s>> 6).b
                    i_1 = (rbx_1 + 1) << 6
                    i_4 = i_1
        
        if (i_1 == 0x10000)
            break
        
        result = *(arg1 + 0x358)
        result_1 += 1
        i_2 = *(rsi_2 + result)
        rsi_2 += 4
        
        if (result_1 s>= *(arg1 + 0x360))
            i_1 = 0x110000
        else
            i_1 = *(rsi_2 + result)
            result_1 += 1
            rsi_2 += 4
    while (i_2 s< 0x10000)

return result
