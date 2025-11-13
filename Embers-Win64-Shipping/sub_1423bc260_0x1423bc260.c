// 函数: sub_1423bc260
// 地址: 0x1423bc260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423c7510()
void* rax = sub_140963350(arg2)
int64_t i_1 = 0
int64_t var_48 = 0
int64_t r14 = 0
int32_t var_3c = 0
int32_t rbp = 0
int64_t i_2 = 0x2710
int32_t r12 = 0
int64_t result
int64_t i

do
    int64_t j_1 = 8
    int64_t j
    
    do
        void*** rax_1 = j_sub_140a82f30(0x28)
        void*** rbx_1 = rax_1
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            char rcx_1 = *(rax_1 + 0xa)
            rax_1[1].w = 0
            *(rax_1 + 0xb) = 1
            *(rax_1 + 0xa) = (rcx_1 & 0xc8) | 8
            __builtin_memset(rax_1 + 0xc, 0, 0x1c)
            *(rax_1 + 0xa) |= 1
            *rax_1 = &data_14333a1b0
        
        int64_t rsi_1 = sx.q(rbp)
        rbp = (rsi_1 + 1).d
        
        if (rbp s> r12)
            sub_1405a4d70(&var_48)
            r12 = var_3c
            r14 = var_48
        
        *(r14 + (rsi_1 << 3)) = rbx_1
        j = j_1
        j_1 -= 1
    while (j != 1)
    void*** rax_2 = j_sub_140a82f30(zx.q((j_1 + 0x28).d))
    void*** rbx_2 = rax_2
    
    if (rax_2 == 0)
        rbx_2 = nullptr
    else
        char rcx_4 = *(rax_2 + 0xa)
        rax_2[1].w = 0
        *(rax_2 + 0xb) = 1
        *(rax_2 + 0xa) = (rcx_4 & 0xc8) | 8
        __builtin_memset(rax_2 + 0xc, 0, 0x1c)
        *(rax_2 + 0xa) |= 1
        *rax_2 = &data_14333a1b0
    
    sub_1423c6c10(rbx_2, rax)
    int64_t rsi_2 = sx.q(data_143f5a710)
    int32_t rax_3 = (rsi_2 + 1).d
    bool cond:1_1 = rax_3 s<= data_143f5a714
    data_143f5a710 = rax_3
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f5a708)
    
    i = i_2
    i_2 -= 1
    result = data_143f5a708
    *(result + (rsi_2 << 3)) = rbx_2
while (i != 1)

do
    int64_t* rcx_6 = *(r14 + (i_1 << 3))
    
    if (rcx_6 != 0)
        result = (**rcx_6)(rcx_6, 1)
    
    i_1 += 1
while (i_1 s< 8)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
