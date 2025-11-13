// 函数: sub_1411417c0
// 地址: 0x1411417c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg4
int512_t zmm1
int512_t zmm6
zmm1, zmm6 = sub_141080ac0(arg1, arg2, *(arg2 + 0x1a0), *(arg3 + 0x10))
int32_t r8_1 = *(arg3 + 0x1548)
int64_t var_130 = *(arg2 + 0x1a0)

if (*(arg1 + 0x118) != 0xffff)
    int64_t* rcx_2
    
    if (r8_1 s< 3)
        int64_t var_128
        sub_14137b7f0(&var_128, arg2)
        sub_141083500(arg2, &var_130, arg1 + 0x118, var_128)
        rcx_2 = &var_128
    else
        int64_t var_138
        sub_14137baa0(&var_138, arg2, 0xf, r8_1)
        sub_141083500(arg2, &var_130, arg1 + 0x118, var_138)
        rcx_2 = &var_138
    
    zmm1, zmm6 = sub_1405d1550(rcx_2)

zmm1.o = data_142d3f660
int128_t var_f8
__builtin_memcpy(&var_f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x60)
int128_t var_78
__builtin_memset(&var_78, 0, 0x20)
sub_1411463f0(arg3, &var_f8)
int64_t rdi = sx.q(*(arg1 + 0xe0))
int32_t r8_4 = 0
int64_t r12 = *(arg2 + 0x1a0)

if (rdi s> 0)
    int64_t rdx_4 = 0
    
    while (true)
        void* rcx_7 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_7 = (rcx_7 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_7 + (rdx_4 << 3)) == data_143e58170)
            break
        
        r8_4 += 1
        rdx_4 += 1
        
        if (rdx_4 s>= rdi)
            goto label_14114193e

int16_t* rdi_1

if (rdi s<= 0 || r8_4 == 0xffffffff)
label_14114193e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdi_1 = &data_143ce8560
else
    void* rcx_19 = *(arg1 + 0xe8)
    
    if ((rcx_19.b & 1) != 0)
        rcx_19 = (rcx_19 s>> 1) + arg1 + 0xe8
    
    rdi_1 = rcx_19 + (sx.q(r8_4) << 1)

if (*rdi_1 != 0xffff)
    int64_t* rcx_10 = data_143f0f180
    int64_t var_120
    (*(*rcx_10 + 0xf8))(rcx_10, &var_120, &var_f8, &data_143e58180, 0, 1)
    int64_t r14_1 = var_120
    uint32_t r15_1 = zx.d(*rdi_1)
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_13[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142f11618
    rcx_13[2] = r12
    rcx_13[3].d = r15_1
    rcx_13[4] = r14_1
    sub_1405d1550(&var_120)

void* rcx_18 = **r13
int64_t* rdi_2

if (rcx_18 == 0)
    rdi_2 = data_143f10dc8 + 0x10
else
    rdi_2 = rcx_18 + 0x10

void* rdi_4 = *rdi_2
void* var_100 = rdi_4

if (rdi_4 != 0)
    *(rdi_4 + 8) += 1

int64_t* r15_2 = data_14395f4d0
int64_t r12_1 = *(arg2 + 0x1a0)

if (*(arg1 + 0x11c) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x11a))
    void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_23[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_23[5]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_23
    *(arg2 + 8) = &rcx_23[1]
    rcx_23[1] = 0
    rcx_23[3].d = r13_1
    r13 = arg4
    *rcx_23 = &data_142d5a070
    rcx_23[2] = r12_1
    rcx_23[4] = rdi_4

if (*(arg1 + 0x120) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x11e))
    
    if ((*(*r15_2 + 8))(r15_2) == 0)
        void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_16 = &rcx_30[5]
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_16 = &rcx_30[5]
        
        *(arg2 + 0x30) = rax_16
        void**** rax_17 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_17 = rcx_30
        *(arg2 + 8) = &rcx_30[1]
        rcx_30[1] = 0
        *rcx_30 = &data_142d5a080
        rcx_30[2] = r12_1
        rcx_30[3].d = r14_2
        rcx_30[4] = r15_2

void* r14_3 = r13[1]
void* rdi_5

if (r14_3 == 0)
    rdi_5 = *(data_1439b7138 + 0x10)
else
    rdi_5 = r14_3

void* var_108 = rdi_5

if (rdi_5 != 0)
    *(rdi_5 + 8) += 1

int64_t* r12_2 = data_14395fa10
int64_t r13_2 = *(arg2 + 0x1a0)
uint32_t arg_8

if (*(arg1 + 0x124) u> 0)
    int64_t rcx_35 = *(arg2 + 0x30) + 7
    arg_8 = zx.d(*(arg1 + 0x122))
    void*** rcx_36 = rcx_35 & 0xfffffffffffffff8
    void* rax_21 = &rcx_36[5]
    
    if (rax_21 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_36[5]
    
    *(arg2 + 0x30) = rax_21
    void**** rax_22 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_22 = rcx_36
    *(arg2 + 8) = &rcx_36[1]
    rcx_36[1] = 0
    *rcx_36 = &data_142d5a070
    rcx_36[3].d = arg_8
    rcx_36[2] = r13_2
    rcx_36[4] = rdi_5

if (*(arg1 + 0x128) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x126))
    
    if ((*(*r12_2 + 8))(r12_2) == 0)
        void*** rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_27 = &rcx_43[5]
        
        if (rax_27 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_27 = &rcx_43[5]
        
        *(arg2 + 0x30) = rax_27
        void**** rax_28 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_28 = rcx_43
        *(arg2 + 8) = &rcx_43[1]
        rcx_43[1] = 0
        *rcx_43 = &data_142d5a080
        rcx_43[2] = r13_2
        rcx_43[3].d = r15_3
        rcx_43[4] = r12_2

zmm6.o = zx.o(0)
uint32_t zmm0_1

if ((*(arg3 + 0x497c) & 0x2000) == 0)
    zmm0_1 = (zx.o(0)).d
else
    zmm0_1 = 0x3f800000

int64_t var_118 = *(arg2 + 0x1a0)
arg_8 = zmm0_1
int32_t zmm6_1 = sub_1405eb490(arg2, &var_118, arg1 + 0x12a, &arg_8, 0)

if (r14_3 != 0)
    zmm6_1 = arg4[4].d

int64_t var_110 = *(arg2 + 0x1a0)
int32_t arg_10 = zmm6_1
sub_1405eb490(arg2, &var_110, arg1 + 0x130, &arg_10, 0)
sub_1405d1550(&var_108)
return sub_1405d1550(&var_100)
