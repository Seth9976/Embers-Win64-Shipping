// 函数: sub_1417513e0
// 地址: 0x1417513e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 4
int64_t* rdx = arg2[1]
int32_t arg_18 = 2
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *r8
    *rdx += 4

int64_t* rcx_1 = arg2[1]
int32_t* rdx_2 = *rcx_1

if (&rdx_2[1] u> rcx_1[1])
    int32_t* rdx_3 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_18 = *rdx_2
    *rcx_1 += 4

sub_14152dc60(arg2, arg1, arg3)
sub_14152dda0(arg2, &arg1[4], arg3)
int64_t* rcx_5 = arg2[1]
int32_t* r8_1 = *rcx_5

if (&r8_1[1] u<= rcx_5[1])
    *(arg1 + 0x2c) = *r8_1
    int64_t* rax_8 = arg2[1]
    *rax_8 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x2c, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x2c, 4)

int64_t* rcx_7 = arg2[1]
int32_t* r8_2 = *rcx_7

if (&r8_2[1] u<= rcx_7[1])
    arg1[6].d = *r8_2
    int64_t* rax_12 = arg2[1]
    *rax_12 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[6], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[6], 4)

int64_t* rcx_9 = arg2[1]
int16_t* r8_3 = *rcx_9

if (&r8_3[1] u<= rcx_9[1])
    *(arg1 + 0x34) = *r8_3
    int64_t* rax_16 = arg2[1]
    *rax_16 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, arg1 + 0x34, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x34, 2)

int64_t* rcx_11 = arg2[1]
int16_t* r8_4 = *rcx_11

if (&r8_4[1] u<= rcx_11[1])
    *(arg1 + 0x36) = *r8_4
    int64_t* rax_20 = arg2[1]
    *rax_20 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, arg1 + 0x36, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x36, 2)

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_23
int512_t zmm1
rax_23, zmm1 = sub_140b4e7c0(arg2, &data_1439a9538)
int32_t rdi = 0

if (rax_23 s>= 7)
    int64_t* rcx_15 = arg2[1]
    int32_t* r8_5 = *rcx_15
    
    if (&r8_5[1] u<= rcx_15[1])
        arg1[7].d = *r8_5
        int64_t* rax_26 = arg2[1]
        *rax_26 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[7], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[7], 4)
    
    int64_t* rcx_17 = arg2[1]
    int32_t* r8_6 = *rcx_17
    
    if (&r8_6[1] u<= rcx_17[1])
        *(arg1 + 0x3c) = *r8_6
        int64_t* rax_30 = arg2[1]
        *rax_30 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x3c, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x3c, 4)
    
    int32_t rax_32
    int512_t zmm1_1
    rax_32, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)
    void*** var_38
    void*** rcx_21
    
    if (rax_32 s< 0x17)
        var_38 = nullptr
        int32_t i_2 = 0
        sub_14152f500(arg2, &var_38, zmm1_1)
        int32_t i_1 = i_2
        rcx_21 = var_38
        void*** rax_33 = rcx_21
        
        if (i_1 != 0)
            int32_t i
            
            do
                *rax_33 = &data_142fc3cd0
                rax_33 = &rax_33[5]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        goto label_1417516d7
    
    int32_t rax_34
    int512_t zmm1_2
    rax_34, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9538)
    
    if (rax_34 s< 0x20)
        var_38 = nullptr
        int64_t var_30_1 = 0
        sub_14152e270(arg2, &var_38, zmm1_2)
        rcx_21 = var_38
    label_1417516d7:
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)

uint64_t result
int512_t zmm1_3
result, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)

if (result.d s>= 0x12)
    int64_t* rcx_24 = arg2[1]
    int32_t result_1 = arg1[3].d
    int32_t* rdx_14 = *rcx_24
    
    if (&rdx_14[1] u> rcx_24[1])
        int32_t* rdx_15 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_15, zmm1_3)
        else
            (*(*arg2 + 0x150))(arg2, rdx_15, 4)
    else
        result_1 = *rdx_14
        *rcx_24 += 4
    
    result = zx.q(result_1)
    
    if (result.d s> *(arg1 + 0x1c))
        sub_1405c5510(&arg1[2], result.d)
        result = zx.q(result_1)
    
    int64_t rsi_1 = sx.q(arg1[3].d)
    
    if (result.d s> rsi_1.d)
        arg1[3].d = result.d
        
        if (result.d s> *(arg1 + 0x1c))
            sub_1405daba0(&arg1[2])
        
        memset(rsi_1 + arg1[2], 0, sx.q(result.d - rsi_1.d))
        result = zx.q(result_1)
    else if (result.d s< rsi_1.d)
        int32_t rcx_30 = rsi_1.d
        
        if (rcx_30 != result.d)
            arg1[3].d = rsi_1.d - (rcx_30 - result.d)
            sub_1405dac10(&arg1[2])
            result = zx.q(result_1)
    
    if (result.d s> 0)
        int64_t rsi_3 = 0
        
        do
            int64_t* rcx_33 = arg2[1]
            char* rdx_19 = arg1[2] + rsi_3
            char* r8_8 = *rcx_33
            
            if (&r8_8[1] u> rcx_33[1])
                result = (*(*arg2 + 0x150))(arg2, rdx_19, 1)
            else
                *rdx_19 = *r8_8
                result = arg2[1]
                *result += 1
            
            rdi += 1
            rsi_3 += 1
        while (rdi s< result_1)

return result
