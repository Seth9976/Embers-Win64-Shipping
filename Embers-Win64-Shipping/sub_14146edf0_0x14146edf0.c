// 函数: sub_14146edf0
// 地址: 0x14146edf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp

if (arg4 != 0 || arg6 != 0)
    rbp.b = 0
else
    rbp.b = 1

int64_t rbx = 0
*arg9 = 0
arg9[1] = 0
*arg10 = 0
arg10[1] = 0
int64_t* rax_3 = arg12
*rax_3 = 0
rax_3[1] = 0
void* rax_5 = (*(*arg2 + 0x40))(arg2)
int64_t rdx = *arg1
int64_t r15

if ((*(rdx + 0x168))(arg1, rdx) == 0)
    r15.b = 0
else if (sub_1419803d0((*U"1111")[sx.q(arg3)]) == 0)
    r15.b = 0
else if ((*(rax_5 + 0x60))() == 0)
    r15.b = 0
else
    r15.b = 1

char var_a0 = 1
int32_t var_a8 = 0
void* var_48
int64_t rdx_2
int512_t zmm0
void** rax_17
void* rcx_9
void** rdx_6
int64_t* r8_1
int512_t zmm0_1

if (arg6 != 0)
    void* var_98
    void* var_88
    void** rdx_1
    int64_t* r8
    
    if (arg7 == 0)
        r8 = &data_143eda660
        rdx_1 = &var_88
    else
        r8 = &data_143edc0f0
        rdx_1 = &var_98
    
    void** rax_9
    rax_9, zmm0 = sub_142127800(arg1, rdx_1, r8, rax_5, arg5)
    int64_t rcx_4 = rax_9[1]
    *arg8 = *rax_9
    arg8[1] = rcx_4
    char rax_12
    rax_12, rdx_2 = sub_14122e130((*U"1111")[sx.q(arg3)])
    
    if (rax_12 != 0)
        char var_a0_1 = 1
        int32_t var_a8_1 = 0
        void** rax_13
        rax_13, rdx_2, zmm0 = sub_142127800(arg1, &var_88, &data_143ed91f0, rax_5, zmm0)
        int64_t var_90_1 = rax_13[1]
        var_98 = *rax_13
        zmm0.o = var_98.o
        *arg12 = zmm0.o
    
    if (r15.b != 0)
        char var_a0_2 = 1
        int32_t var_a8_2 = 0
        void** rax_16
        rax_16, zmm0_1 = sub_142127800(arg1, &var_88, &data_143edb9a0, rax_5, zmm0)
        r8_1 = &data_143edbb00
        rcx_9 = *rax_16
        rax_17 = arg9
        rax_17[1] = rax_16[1]
        rdx_6 = &var_88
        goto label_14146f0be
else if (rbp.b == 0)
    void** rdx_10
    int64_t* r8_3
    
    if (arg7 == 0)
        r8_3 = &data_143edb420
        rdx_10 = &var_48
    else
        r8_3 = &data_143edbdc0
        void var_58
        rdx_10 = &var_58
    
    void** rax_21
    rax_21, rdx_2, zmm0 = sub_142127800(arg1, rdx_10, r8_3, rax_5, arg5)
    int64_t rcx_12 = rax_21[1]
    *arg8 = *rax_21
    arg8[1] = rcx_12
    
    if (r15.b != 0)
        char var_a0_4 = 1
        int32_t var_a8_4 = 0
        void** rax_23
        rax_23, zmm0_1 = sub_142127800(arg1, &var_48, &data_143edb580, rax_5, zmm0)
        r8_1 = &data_143edb6e0
        rcx_9 = *rax_23
        rax_17 = arg9
        rax_17[1] = rax_23[1]
        rdx_6 = &var_48
    label_14146f0be:
        *rax_17 = rcx_9
        char var_a0_5 = 1
        int32_t var_a8_5 = 0
        void** rax_24
        rax_24, zmm0 = sub_142127800(arg1, rdx_6, r8_1, rax_5, zmm0_1)
        rdx_2 = rax_24[1]
        void** rax_25 = arg10
        *rax_25 = *rax_24
        rax_25[1] = rdx_2
else
    void* var_68
    void** rdx_7
    int64_t* r8_2
    
    if (arg7 == 0)
        r8_2 = &data_143edabe0
        rdx_7 = &var_68
    else
        r8_2 = &data_143edbc60
        void var_78
        rdx_7 = &var_78
    
    void** rax_18
    rax_18, rdx_2, zmm0 = sub_142127800(arg1, rdx_7, r8_2, rax_5, arg5)
    int64_t rcx_10 = rax_18[1]
    *arg8 = *rax_18
    arg8[1] = rcx_10
    
    if (r15.b != 0)
        char var_a0_3 = 1
        int32_t var_a8_3 = 0
        void** rax_20
        rax_20, zmm0_1 = sub_142127800(arg1, &var_68, &data_143edad40, rax_5, zmm0)
        r8_1 = &data_143edaea0
        rcx_9 = *rax_20
        rax_17 = arg9
        rax_17[1] = rax_20[1]
        rdx_6 = &var_68
        goto label_14146f0be
rdx_2.b = 1
int64_t* r8_4

if (sub_142134f80(arg1, rdx_2.b) == 0)
label_14146f121:
    
    if (rbp.b != 0)
        goto label_14146f126
    
    r8_4 = &data_143edca60
    
    if (arg6 == 0)
        r8_4 = &data_143edc4e0
    
    goto label_14146f142

void* result

if (rbp.b != 0)
label_14146f126:
    r8_4 = &data_143edc7a0
label_14146f142:
    char var_a0_6 = 1
    int32_t var_a8_6 = 0
    void** rax_29 = sub_142127800(arg1, &var_48, r8_4, rax_5, zmm0)
    rbx = rax_29[1]
    result = *rax_29
else
    if ((*(*arg2 + 0x60))(arg2) == 0)
        goto label_14146f121
    
    result = nullptr

*arg11 = result
arg11[1] = rbx
return result
