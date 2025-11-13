// 函数: sub_142c11820
// 地址: 0x142c11820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c119d0(arg1)
int32_t rax = *(arg1 + 0x24)
int32_t r13 = *(arg1 + 0xd8)
double* rax_3

if (rax == 0)
    *(arg1 + 0x20) = 1
    rax_3 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)
else
    uint64_t rax_1 = zx.q(rax - 1)
    *(arg1 + 0x24) = rax_1.d
    
    if (rax_1.d u>= *(arg1 + 0x28))
        rax_3 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    else
        rax_3 = (rax_1 << 5) + *(arg1 + 0x30)

int32_t i_1 = int.d(fconvert.t(*rax_3))

if (i_1 s< 0)
    *(arg1 + 0x20) = 1

int32_t i = 0

if (i_1 s>= 0)
    i = i_1

int32_t rax_5 = (r13 + 1) * i
int32_t r15_1 = *(arg1 + 0x24) - rax_5

if (r15_1 u> *(arg1 + 0x24))
    *(arg1 + 0x38) = 1
    return rax_5

if (i != 0)
    int32_t rsi_1 = r15_1 + i
    int32_t rax_7 = neg.d(rsi_1)
    int32_t arg_8 = rax_7
    int32_t r12_2 = neg.d(r15_1)
    int32_t rdi_1 = r15_1
    
    do
        int64_t rdx_1 = *(arg1 + 0x30)
        int32_t rcx = *(arg1 + 0x28)
        
        if (rsi_1 != 0)
            if (rsi_1 u<= rcx)
                rcx = rcx - rax_7 - rsi_1 - r15_1 - i
            else
                rcx = 0
            
            rdx_1 += zx.q(rsi_1) << 5
        
        int64_t var_40_1 = rdx_1
        int32_t var_38_1 = rcx
        
        if (rdi_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rcx_4
        
        if (rdi_1 u< *(arg1 + 0x28))
            rcx_4 = (zx.q(rdi_1) << 5) + *(arg1 + 0x30)
        else
            rcx_4 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        void var_48
        sub_142c12ed0(rcx_4, i, r12_2 + rdi_1, r13, &var_48)
        rdi_1 += 1
        rsi_1 += r13
        rax_7 = arg_8
    while (r12_2 + rdi_1 u< i)

int32_t rax_11 = *(arg1 + 0x24)
int32_t rbp = i * r13

if (rax_11 u< rbp)
    *(arg1 + 0x20) = 1
    return rax_11

int32_t rax_12 = rax_11 - rbp
*(arg1 + 0x24) = rax_12
return rax_12
