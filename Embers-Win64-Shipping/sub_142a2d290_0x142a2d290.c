// 函数: sub_142a2d290
// 地址: 0x142a2d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(0, 0)
int32_t r8

if (temp0 u>= 1)
    int32_t temp0_1
    int32_t temp1_1
    int32_t temp2_1
    int32_t temp3_1
    temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(1, 0)
    int32_t rbx_3 = temp3_1 u>> 0x17 & 1
    int32_t rdx_3 = rbx_3 | 2
    
    if ((temp3_1 & 0x2000000) == 0)
        rdx_3 = rbx_3
    
    int32_t rcx_3 = rdx_3 | 4
    
    if ((temp3_1 & 0x4000000) == 0)
        rcx_3 = rdx_3
    
    int32_t rdx_5 = rcx_3 | 8
    
    if ((temp2_1.b & 1) == 0)
        rdx_5 = rcx_3
    
    int32_t rcx_5 = rdx_5 | 0x10
    
    if ((temp2_1 & 0x200) == 0)
        rcx_5 = rdx_5
    
    int32_t rbx_5 = rcx_5 | 0x20
    
    if ((temp2_1 & 0x80000) == 0)
        rbx_5 = rcx_5
    
    r8 = rbx_5
    
    if ((temp2_1 & 0x18000000) == 0x18000000)
        int32_t temp0_2
        char temp1_2
        temp0_2, temp1_2 = _xgetbv(0, arg1)
        
        if ((((zx.q(temp0_2) << 0x20).b | temp1_2) & 6) == 6)
            r8 |= 0x40
            
            if (temp0 u>= 7)
                int32_t temp0_3
                char temp1_3
                int32_t temp2_2
                int32_t temp3_2
                temp0_3, temp1_3, temp2_2, temp3_2 = __cpuid(7, 0)
                
                if ((temp1_3 & 0x20) != 0)
                    r8 |= 0x80
else
    r8 = 0

int64_t (* rax_10)(int64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4) = sub_1403bd7d0

if ((r8.b & 0x80) != 0)
    rax_10 = sub_142a323a0

data_144020d88 = rax_10
uint64_t (* rax_11)(void* arg1, void* arg2, int16_t* arg3, int16_t* arg4, int32_t arg5, 
    int32_t arg6, int32_t* arg7, int64_t arg8, int16_t* arg9) = sub_142a32470

if ((r8.b & 0x40) != 0)
    rax_11 = sub_142a33460

data_144020d80 = rax_11
int32_t rcx_8 = r8 & 0x10
int64_t (* rax_12)(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int32_t arg5, 
    int16_t (* arg6)[0x8], uint16_t (* arg7)[0x8], int64_t arg8, int64_t arg9, 
    uint16_t (* arg10)[0x8], int16_t* arg11, int64_t arg12) = sub_142a339c0

if (rcx_8 != 0)
    rax_12 = sub_142a341c0

data_144020d78 = rax_12
uint64_t (* rax_13)(void* arg1, int16_t* arg2, int32_t arg3, int32_t arg4, int64_t arg5, 
    int16_t* arg6, int32_t* arg7) = sub_142a329f0

if ((r8.b & 8) != 0)
    rax_13 = sub_142a32c70

if ((r8.b & 0x20) != 0)
    rax_13 = sub_142a32ff0

data_144020d70 = rax_13
int16_t* (* rax_14)(int64_t arg1, int64_t arg2, int32_t arg3, int128_t* arg4, int128_t* arg5, 
    int64_t arg6, int64_t arg7, int128_t* arg8, int16_t* arg9, int64_t arg10) = sub_142a349e0

if (rcx_8 != 0)
    rax_14 = sub_1403bd920

data_144020d68 = rax_14
int16_t* (* rax_15)(int64_t arg1, int64_t arg2, int32_t arg3, int64_t arg4, int64_t arg5, 
    int64_t arg6, int64_t arg7, int64_t arg8, int16_t* arg9, int16_t* arg10) = sub_142a34cf0

if (rcx_8 != 0)
    rax_15 = sub_1403bdc70

data_144020d60 = rax_15
int64_t (* result)(void* arg1, int32_t* arg2) = sub_142a34e50

if (rcx_8 != 0)
    result = sub_142a358a0

data_144020d58 = result
return result
