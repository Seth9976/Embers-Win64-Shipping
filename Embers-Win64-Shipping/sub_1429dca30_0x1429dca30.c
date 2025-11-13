// 函数: sub_1429dca30
// 地址: 0x1429dca30
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

int32_t rdx_11 = r8 & 0x10
void* (* rax_10)(int32_t (* arg1)[0x4], int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t (* arg5)[0x4], int32_t arg6) = sub_14038baa7

if (rdx_11 != 0)
    rax_10 = sub_14038c7d0

data_144021080 = rax_10
void* (* rax_11)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6) = sub_14038bd6d

if (rdx_11 != 0)
    rax_11 = sub_14038cac4

data_144021068 = rax_11
int32_t rcx_8 = r8 & 8
int64_t (* rax_12)(int128_t* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t arg5) =
    sub_14038ce90

if (rcx_8 != 0)
    rax_12 = sub_14038cf70

data_144021058 = rax_12
int16_t (* rax_13)(void* arg1, int16_t (** arg2)[0x8])[0x8] = sub_1429e8500

if (rdx_11 != 0)
    rax_13 = sub_1429e8b30

data_144021050 = rax_13
uint64_t (* rax_14)(void* arg1, void* arg2, void* arg3, int16_t* arg4, int32_t arg5, int32_t arg6, 
    int64_t arg7, int64_t* arg8, int16_t* arg9) = sub_1429e8c50

if (rcx_8 != 0)
    rax_14 = sub_1429e8f70

int32_t r8_3 = r8 & 0x20

if (r8_3 != 0)
    rax_14 = sub_1429e9350

data_144021098 = rax_14
char* (* rax_15)(void* arg1, int64_t* arg2) = sub_1429e8640

if (r8_3 != 0)
    rax_15 = sub_1429e97d0

data_144021090 = rax_15
int64_t (* rax_16)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t (* arg5)[0x4], 
    int32_t arg6) = sub_1429e9c70

if (rdx_11 != 0)
    rax_16 = sub_1429e9db0

data_144021088 = rax_16
int64_t (* rax_17)(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, 
    int32_t arg6) = sub_1429e9ea0

if (rdx_11 != 0)
    rax_17 = sub_1429e9f80

data_144021078 = rax_17
int64_t (* rax_18)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6) = sub_1429ea0f0

if (rdx_11 != 0)
    rax_18 = sub_1429ea230

data_144021070 = rax_18
int64_t (* result)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6) = sub_1429ea320

if (rdx_11 != 0)
    result = sub_1429ea460

data_144021060 = result
return result
