// 函数: sub_142265ea0
// 地址: 0x142265ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (data_143f52618 s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t* rcx_1 = *(data_143f52610 + (rdi_1 << 3))
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1)
            
            if (rdi_1 s>= 0 && i s< data_143f52618)
                *(data_143f52610 + (rdi_1 << 3)) = 0
        
        i += 1
        rdi_1 += 1
    while (i s< data_143f52618)

int32_t rax_4 = data_143f5261c
data_143f52618 = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405c5570(&data_143f52610, 0)

int32_t i_1 = 0

if (data_143f52608 s> 0)
    int64_t rdi_2 = 0
    
    do
        int64_t* rcx_2 = *(data_143f52600 + (rdi_2 << 3))
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2)
            
            if (rdi_2 s>= 0 && i_1 s< data_143f52608)
                *(data_143f52600 + (rdi_2 << 3)) = 0
        
        i_1 += 1
        rdi_2 += 1
    while (i_1 s< data_143f52608)

int32_t rax_8 = data_143f5260c
data_143f52608 = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405c5570(&data_143f52600, 0)

int32_t i_2 = 0

if (data_143f52628 s> 0)
    int64_t rdi_3 = 0
    
    do
        int64_t* rcx_3 = *(data_143f52620 + (rdi_3 << 3))
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3)
            
            if (rdi_3 s>= 0 && i_2 s< data_143f52628)
                *(data_143f52620 + (rdi_3 << 3)) = 0
        
        i_2 += 1
        rdi_3 += 1
    while (i_2 s< data_143f52628)

int32_t rax_12 = data_143f5262c
data_143f52628 = 0

if (rax_12 s< 0 && rax_12 != 0)
    sub_1405c5570(&data_143f52620, 0)

int32_t i_3 = 0

if (data_143f52638 s> 0)
    int64_t rdi_4 = 0
    
    do
        int64_t* rcx_4 = *(data_143f52630 + (rdi_4 << 3))
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4)
            
            if (rdi_4 s>= 0 && i_3 s< data_143f52638)
                *(data_143f52630 + (rdi_4 << 3)) = 0
        
        i_3 += 1
        rdi_4 += 1
    while (i_3 s< data_143f52638)

int32_t result = data_143f5263c
data_143f52638 = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(&data_143f52630, 0) __tailcall

return result
