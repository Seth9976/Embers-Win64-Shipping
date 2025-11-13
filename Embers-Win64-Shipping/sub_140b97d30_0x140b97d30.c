// 函数: sub_140b97d30
// 地址: 0x140b97d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a94d8)
int32_t rax_1

if ((arg1[5].b & 1) != 0)
    rax_1, arg3 = sub_140b4e7c0(arg1, &data_1439a94d8)

int32_t arg_8

if ((arg1[5].b & 1) == 0 || rax_1 s>= 1)
    sub_1408db650(arg1, arg2, arg3)
else
    sub_1409ac7a0(arg1, &arg_8, arg3)
    *arg2 = arg_8
    arg2[1] = arg4
    arg2[2] = 0

int64_t* rax_5 = sub_1408d9160(sub_1408d9160(arg1, &arg2[6], arg3), &arg2[9], arg3)
int64_t* rcx_5 = rax_5[1]
char* rdx_4 = *rcx_5

if (&rdx_4[1] u> rcx_5[1])
    (*(*rax_5 + 0x150))(rax_5, &arg2[0xc], 1)
else
    arg2[0xc].b = *rdx_4
    int64_t* rax_8 = rax_5[1]
    *rax_8 += 1

int64_t* rax_10
int512_t zmm1
rax_10, zmm1 = sub_140a1d9d0(arg1, &arg2[0xe], arg3)
int64_t* rdx_7 = rax_10[1]
int32_t* rax_11 = *rdx_7

if (&rax_11[1] u<= rdx_7[1])
    arg2[0x12] = *rax_11
    int64_t* rcx_10 = rax_10[1]
    *rcx_10 += 4
else if ((*(rax_10 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_10, &arg2[0x12], zmm1)
else
    (*(*rax_10 + 0x150))(rax_10, &arg2[0x12], 4)

sub_1409ac7a0(rax_10, &arg2[0x13], zmm1)

if (arg1[8].d s>= 0x10c)
    int64_t* rcx_13 = arg1[1]
    int32_t* r8_1 = *rcx_13
    
    if (&r8_1[1] u<= rcx_13[1])
        arg2[0x15] = *r8_1
        int64_t* rax_15 = arg1[1]
        *rax_15 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x15], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x15], 4)

if (arg1[8].d s>= 0x149)
    int64_t* rcx_15 = arg1[1]
    int32_t* rdx_11 = *rcx_15
    
    if (&rdx_11[1] u> rcx_15[1])
        int32_t rax_19
        rax_19.b = arg2[0x16].b != 0
        arg_8 = rax_19
        (*(*arg1 + 0x150))(arg1, &arg_8, 4)
        arg2[0x16].b = arg_8 != 0
    else
        void* rax_17
        rax_17.b = *rdx_11 != 0
        arg2[0x16].b = rax_17.b
        int64_t* rax_18 = arg1[1]
        *rax_18 += 4

int32_t rax_26 = arg1[8].d

if (rax_26 s>= 0x10c)
    int64_t* rcx_17 = arg1[1]
    int32_t* rdx_13 = *rcx_17
    
    if (&rdx_13[1] u> rcx_17[1])
        int64_t rax_24 = *arg1
        int32_t r15
        r15.b = arg2[0x18].b != 0
        arg_8 = r15
        (*(rax_24 + 0x150))(arg1, &arg_8, 4)
        arg2[0x18].b = arg_8 != 0
    else
        void* rax_22
        rax_22.b = *rdx_13 != 0
        arg2[0x18].b = rax_22.b
        int64_t* rax_23 = arg1[1]
        *rax_23 += 4
    
    zmm1 = sub_140a1d9d0(arg1, &arg2[0x1a], zmm1)
    rax_26 = arg1[8].d

if (rax_26 s>= 0x13c)
    sub_140b97b60(arg1, &arg2[0x1e], zmm1)
    rax_26 = arg1[8].d

if (rax_26 s>= 0x13f)
    int64_t* rcx_21 = arg1[1]
    int32_t* r8_2 = *rcx_21
    
    if (&r8_2[1] u<= rcx_21[1])
        arg2[0x22] = *r8_2
        int64_t* rax_29 = arg1[1]
        *rax_29 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x22], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x22], 4)

if ((arg1[6].d & 0x400000) != 0)
    sub_1408db650(arg1, &arg2[3], zmm1)

return arg1
