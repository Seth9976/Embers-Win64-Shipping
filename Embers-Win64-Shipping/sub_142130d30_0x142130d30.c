// 函数: sub_142130d30
// 地址: 0x142130d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a93e8)
(*(*arg1 + 0x1d8))(arg1, &data_1439a9418)
int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(arg1, &data_1439a93e8)

if (rax_2 s< 1)
    rax_2.b = 0
    return rax_2

int64_t* rcx_2 = arg1[1]
int32_t* rdx = *rcx_2

if (&rdx[1] u<= rcx_2[1])
    *arg2 = *rdx
    int64_t* rax_5 = arg1[1]
    *rax_5 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, zmm1)
else
    (*(*arg1 + 0x150))(arg1, arg2, 4)

int32_t rax_7
int512_t zmm1_1
rax_7, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a9418)

if (rax_7 s< 0x1f)
    uint64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_140a1d9d0(arg1, &var_28, zmm1_1)
    int16_t* const rdx_4 = &data_142d40450
    
    if (var_20_1 != 0)
        rdx_4 = var_28
    
    int64_t arg_18
    zmm1_1 = sub_140b58260(&arg_18, rdx_4, 1)
    uint64_t rcx_7 = var_28
    *(arg2 + 4) = arg_18
    
    if (rcx_7 != 0)
        zmm1_1 = sub_140a74f90(rcx_7)
else
    (*(*arg1 + 0x140))(arg1, &arg2[1])

int64_t* rcx_8 = arg1[1]
int32_t arg_8 = 0
int32_t* rdx_5 = *rcx_8

if (&rdx_5[1] u> rcx_8[1])
    int32_t* rdx_6 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_6, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_6, 4)
else
    arg_8 = *rdx_5
    *rcx_8 += 4

int64_t* rcx_10 = arg1[1]
int32_t* rdx_7 = *rcx_10

if (&rdx_7[1] u> rcx_10[1])
    int32_t* rdx_8 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_8, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_8, 4)
else
    arg_8 = *rdx_7
    *rcx_10 += 4

int64_t* rcx_12 = arg1[1]
int32_t* rdx_9 = *rcx_12

if (&rdx_9[1] u> rcx_12[1])
    int32_t* rdx_10 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_10, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_10, 4)
else
    arg_8 = *rdx_9
    *rcx_12 += 4

int64_t* rcx_14 = arg1[1]
int32_t* rdx_11 = *rcx_14

if (&rdx_11[1] u> rcx_14[1])
    int32_t* rdx_12 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_12, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_12, 4)
else
    arg_8 = *rdx_11
    *rcx_14 += 4

int64_t* rcx_16 = arg1[1]
int32_t* rdx_13 = *rcx_16

if (&rdx_13[1] u> rcx_16[1])
    int32_t* rdx_14 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_14, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_14, 4)
else
    arg_8 = *rdx_13
    *rcx_16 += 4

if ((*(arg1 + 0x2b) & 2) != 0)
    (*(*arg1 + 0x140))(arg1, &arg2[3])

int32_t rax_23
rax_23.b = 1
return rax_23
