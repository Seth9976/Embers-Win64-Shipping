// 函数: sub_14146ead0
// 地址: 0x14146ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp

if (arg4 != 0 || arg6 != 0)
    rbp.b = 0
else
    rbp.b = 1

*arg9 = 0
arg9[1] = 0
*arg10 = 0
arg10[1] = 0
*arg12 = 0
arg12[1] = 0
void* rax_3 = (*(*arg2 + 0x40))(arg2)
int64_t rdx = *arg1
int64_t rsi

if ((*(rdx + 0x168))(arg1, rdx) == 0)
    rsi.b = 0
else if (sub_1419803d0((*U"1111")[sx.q(arg3)]) == 0)
    rsi.b = 0
else if ((*(rax_3 + 0x60))() == 0)
    rsi.b = 0
else
    rsi.b = 1

char var_a0 = 1
int32_t var_a8 = 0
int64_t rdx_2
int512_t zmm0
void* var_68
void** rax_14
int64_t* r8_1
int512_t zmm0_1

if (arg6 == 0)
    void** rdx_5 = &var_68
    
    if (rbp.b == 0)
        void** rax_18
        rax_18, zmm0 = sub_142127800(arg1, rdx_5, &data_143edb000, rax_3, arg5)
        rdx_2 = rax_18[1]
        *arg8 = *rax_18
        arg8[1] = rdx_2
        
        if (rsi.b != 0)
            char var_a0_5 = 1
            int32_t var_a8_5 = 0
            rax_14, zmm0_1 = sub_142127800(arg1, &var_68, &data_143edb160, rax_3, zmm0)
            r8_1 = &data_143edb2c0
        label_14146ecd4:
            int64_t rdx_7 = rax_14[1]
            *arg9 = *rax_14
            arg9[1] = rdx_7
            char var_a0_4 = 1
            int32_t var_a8_4 = 0
            void** rax_16
            rax_16, zmm0 = sub_142127800(arg1, &var_68, r8_1, rax_3, zmm0_1)
            rdx_2 = rax_16[1]
            void** rax_17 = arg10
            *rax_17 = *rax_16
            rax_17[1] = rdx_2
    else
        void** rax_15
        rax_15, zmm0 = sub_142127800(arg1, rdx_5, &data_143eda7c0, rax_3, arg5)
        rdx_2 = rax_15[1]
        *arg8 = *rax_15
        arg8[1] = rdx_2
        
        if (rsi.b != 0)
            char var_a0_3 = 1
            int32_t var_a8_3 = 0
            rax_14, zmm0_1 = sub_142127800(arg1, &var_68, &data_143eda920, rax_3, zmm0)
            r8_1 = &data_143edaa80
            goto label_14146ecd4
else
    void** rdx_1
    int64_t* r8
    
    if (arg7 == 0)
        r8 = &data_143eda660
        void var_78
        rdx_1 = &var_78
    else
        r8 = &data_143edc0f0
        void var_88
        rdx_1 = &var_88
    
    void** rax_7
    rax_7, zmm0 = sub_142127800(arg1, rdx_1, r8, rax_3, arg5)
    int64_t rcx_4 = rax_7[1]
    *arg8 = *rax_7
    arg8[1] = rcx_4
    char rax_10
    rax_10, rdx_2 = sub_14122e130((*U"1111")[sx.q(arg3)])
    
    if (rax_10 != 0)
        char var_a0_1 = 1
        int32_t var_a8_1 = 0
        void** rax_11
        rax_11, rdx_2, zmm0 = sub_142127800(arg1, &var_68, &data_143ed91f0, rax_3, zmm0)
        int64_t var_90_1 = rax_11[1]
        zmm0.o = (*rax_11).o
        *arg12 = zmm0.o
    
    if (rsi.b != 0)
        char var_a0_2 = 1
        int32_t var_a8_2 = 0
        rax_14, zmm0_1 = sub_142127800(arg1, &var_68, &data_143edb9a0, rax_3, zmm0)
        r8_1 = &data_143edbb00
        goto label_14146ecd4
rdx_2.b = 1
sub_142134f80(arg1, rdx_2.b)
void** rdx_10
int64_t* r8_2

if (rbp.b != 0)
    r8_2 = &data_143edc640
    void var_58
    rdx_10 = &var_58
else if (arg6 == 0)
    r8_2 = &data_143edc380
    void var_38
    rdx_10 = &var_38
else
    r8_2 = &data_143edca60
    void var_48
    rdx_10 = &var_48

char var_a0_6 = 1
int32_t var_a8_6 = 0
void** rax_19 = sub_142127800(arg1, rdx_10, r8_2, rax_3, zmm0)
int64_t rcx_18 = rax_19[1]
void* result = *rax_19
*arg11 = result
arg11[1] = rcx_18
return result
