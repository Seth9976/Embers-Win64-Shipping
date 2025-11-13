// 函数: sub_141e8b330
// 地址: 0x141e8b330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2b8) = 0

if (*(arg1 + 0x2bc) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x2b0, 0)

int64_t var_28 = 0
int32_t var_20 = 0
int32_t var_18 = 0xffffffff
sub_140d3cc80(sub_141c4ae10(), &var_28, 1, 0x10, 0)
int32_t r8_1 = var_20
int32_t i = var_18 + 1
int64_t rdx_1 = var_28
int32_t i_6 = i

if (i s< r8_1)
    while (*(rdx_1 + (sx.q(i) << 3)) == 0)
        int32_t i_10 = i + 1
        i_6 = i_10
        i = i_10
        
        if (i_10 s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    int64_t rdi_1 = sx.q(*(arg1 + 0x2b8))
    int64_t rsi_1 = *(rdx_1 + (sx.q(i) << 3))
    int32_t rax_3 = (rdi_1 + 1).d
    *(arg1 + 0x2b8) = rax_3
    
    if (rax_3 s> *(arg1 + 0x2bc))
        sub_1405a4d70(arg1 + 0x2b0)
    
    *(*(arg1 + 0x2b0) + (rdi_1 << 3)) = rsi_1
    r8_1 = var_20
    i = i_6 + 1
    rdx_1 = var_28
    i_6 = i
    
    if (i s< r8_1)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_11 = i + 1
            i_6 = i_11
            i = i_11
            
            if (i_11 s>= r8_1)
                break

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

var_28 = 0
int32_t var_20_1 = 0
int32_t var_18_1 = 0xffffffff
sub_140d3cc80(sub_141c4aec0(), &var_28, 1, 0x10, 0)
int32_t r8_3 = var_20_1
int32_t i_1 = var_18_1 + 1
int64_t rdx_4 = var_28
int32_t i_7 = i_1

if (i_1 s< r8_3)
    while (*(rdx_4 + (sx.q(i_1) << 3)) == 0)
        int32_t i_12 = i_1 + 1
        i_7 = i_12
        i_1 = i_12
        
        if (i_12 s>= r8_3)
            break

while (i_1 s>= 0)
    if (i_1 s>= r8_3)
        break
    
    int64_t rdi_2 = sx.q(*(arg1 + 0x2b8))
    int64_t rsi_2 = *(rdx_4 + (sx.q(i_1) << 3))
    int32_t rax_9 = (rdi_2 + 1).d
    *(arg1 + 0x2b8) = rax_9
    
    if (rax_9 s> *(arg1 + 0x2bc))
        sub_1405a4d70(arg1 + 0x2b0)
    
    *(*(arg1 + 0x2b0) + (rdi_2 << 3)) = rsi_2
    r8_3 = var_20_1
    i_1 = i_7 + 1
    rdx_4 = var_28
    i_7 = i_1
    
    if (i_1 s< r8_3)
        while (*(rdx_4 + (sx.q(i_1) << 3)) == 0)
            int32_t i_13 = i_1 + 1
            i_7 = i_13
            i_1 = i_13
            
            if (i_13 s>= r8_3)
                break

if (rdx_4 != 0)
    sub_140a74f90(rdx_4)

var_28 = 0
int32_t var_20_2 = 0
int32_t var_18_2 = 0xffffffff
sub_140d3cc80(sub_141c4b020(), &var_28, 1, 0x10, 0)
int32_t r8_5 = var_20_2
int32_t i_2 = var_18_2 + 1
int64_t rdx_7 = var_28
int32_t i_8 = i_2

if (i_2 s< r8_5)
    while (*(rdx_7 + (sx.q(i_2) << 3)) == 0)
        int32_t i_14 = i_2 + 1
        i_8 = i_14
        i_2 = i_14
        
        if (i_14 s>= r8_5)
            break

while (i_2 s>= 0)
    if (i_2 s>= r8_5)
        break
    
    int64_t rdi_3 = sx.q(*(arg1 + 0x2b8))
    int64_t rsi_3 = *(rdx_7 + (sx.q(i_2) << 3))
    int32_t rax_15 = (rdi_3 + 1).d
    *(arg1 + 0x2b8) = rax_15
    
    if (rax_15 s> *(arg1 + 0x2bc))
        sub_1405a4d70(arg1 + 0x2b0)
    
    *(*(arg1 + 0x2b0) + (rdi_3 << 3)) = rsi_3
    r8_5 = var_20_2
    i_2 = i_8 + 1
    rdx_7 = var_28
    i_8 = i_2
    
    if (i_2 s< r8_5)
        while (*(rdx_7 + (sx.q(i_2) << 3)) == 0)
            int32_t i_15 = i_2 + 1
            i_8 = i_15
            i_2 = i_15
            
            if (i_15 s>= r8_5)
                break

if (rdx_7 != 0)
    sub_140a74f90(rdx_7)

var_28 = 0
int32_t i_5 = 0
int32_t var_18_3 = 0xffffffff
uint64_t result = sub_140d3cc80(sub_141c4af70(), &var_28, 1, 0x10, 0)
int32_t i_3 = i_5
int32_t i_4 = var_18_3 + 1
int64_t rdx_10 = var_28
int32_t i_9 = i_4

if (i_4 s< i_3)
    do
        result = sx.q(i_4)
        
        if (*(rdx_10 + (result << 3)) != 0)
            break
        
        result = zx.q(i_4 + 1)
        i_9 = result.d
        i_4 = result.d
    while (result.d s< i_3)

while (i_4 s>= 0)
    if (i_4 s>= i_3)
        break
    
    int64_t rdi_4 = sx.q(*(arg1 + 0x2b8))
    int64_t rsi_4 = *(rdx_10 + (sx.q(i_4) << 3))
    int32_t rax_20 = (rdi_4 + 1).d
    *(arg1 + 0x2b8) = rax_20
    
    if (rax_20 s> *(arg1 + 0x2bc))
        sub_1405a4d70(arg1 + 0x2b0)
    
    result = *(arg1 + 0x2b0)
    *(result + (rdi_4 << 3)) = rsi_4
    i_3 = i_5
    i_4 = i_9 + 1
    rdx_10 = var_28
    i_9 = i_4
    
    if (i_4 s< i_3)
        do
            result = sx.q(i_4)
            
            if (*(rdx_10 + (result << 3)) != 0)
                break
            
            result = zx.q(i_4 + 1)
            i_9 = result.d
            i_4 = result.d
        while (result.d s< i_3)

if (rdx_10 == 0)
    return result

return sub_140a74f90(rdx_10)
