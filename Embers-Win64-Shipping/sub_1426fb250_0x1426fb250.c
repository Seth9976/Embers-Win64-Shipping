// 函数: sub_1426fb250
// 地址: 0x1426fb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0x5c) & 8) != 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_1 = *(arg2 + 0xc)
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 0

*(arg1 + 0x11c)
int32_t rax_12
int64_t* rcx_8

if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
label_1426fb33e:
    rcx_8 = nullptr
else
    void* r9_1 = arg1 + 0x120
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    rax_12 =
        *(r9_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(*(arg1 + 0x130)) - 1)) << 2))
    
    if (rax_12 == 0xffffffff)
    label_1426fb33e_1:
        rcx_8 = nullptr
    else
        while (true)
            rcx_8 = sx.q(rax_12) * 0x38 + *(arg1 + 0xe8)
            
            if (*rcx_8 == arg2)
                break
            
            rax_12 = rcx_8[6].d
            
            if (rax_12 == 0xffffffff)
                goto label_1426fb33e_2
        
        if (rax_12 == 0xffffffff)
        label_1426fb33e_2:
            rcx_8 = nullptr

void* rsi = &rcx_8[1]

if (rcx_8 == 0)
    rsi = nullptr

if (rsi == 0)
    rax_12.b = 0
    return rax_12

int32_t i_1 = 0
int64_t rdi = 0
int32_t r15 = 0
int64_t var_30 = 0
int32_t var_24 = 0
int64_t rax_17 = sub_140d3c6e0(rsi)

if (&var_30 != rsi + 8)
    i_1 = *(rsi + 0x10)
    void* rbp_1 = *(rsi + 8)
    int32_t i_2 = i_1
    
    if (i_1 != 0)
        sub_14174fdd0(&var_30, i_1, 0)
        rdi = var_30
        int32_t* rdx_6 = rbp_1 + 4
        int32_t* r8_3 = rdi - rbp_1
        int32_t i
        
        do
            *(r8_3 + rdx_6 - 4) = rdx_6[-1]
            *(r8_3 + rdx_6) = *rdx_6
            *(r8_3 + rdx_6 + 4) = rdx_6[1]
            *(r8_3 + rdx_6 + 8) = *(rdx_6 + 8)
            *(r8_3 + rdx_6 + 0x10) = rdx_6[4]
            *(r8_3 + rdx_6 + 0x14) = *(rdx_6 + 0x14)
            *(r8_3 + rdx_6 + 0x1c) = rdx_6[7]
            *(r8_3 + rdx_6 + 0x20) = *(rdx_6 + 0x20)
            *(r8_3 + rdx_6 + 0x28) = rdx_6[0xa].b
            *(r8_3 + rdx_6 + 0x2c) = *(rdx_6 + 0x2c)
            int32_t rax_27 = *(r8_3 + rdx_6 + 0x34) ^ rdx_6[0xd]
            rdx_6 = &rdx_6[0xf]
            *(r8_3 + rdx_6 - 8) ^= rax_27 & 1
            int32_t rcx_15 = ((*(r8_3 + rdx_6 - 8) ^ rdx_6[-2]) & 2) ^ *(r8_3 + rdx_6 - 8)
            *(r8_3 + rdx_6 - 8) = rcx_15
            *(r8_3 + rdx_6 - 8) = ((rcx_15 ^ rdx_6[-2]) & 4) ^ rcx_15
            i = i_1
            i_1 -= 1
        while (i != 1)
        r15 = var_24
        i_1 = i_2

int32_t rbp_2 = *(rsi + 0x24)
*arg3 = rax_17

if (&arg3[1] != &var_30)
    int64_t rcx_16 = arg3[1]
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    arg3[1] = rdi
    rdi = 0
    arg3[2].d = i_1
    *(arg3 + 0x14) = r15

arg3[3].d &= 0xfffffffe
arg3[3].d |= rbp_2 & 1

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t* rax_33
rax_33.b = 1
return rax_33
