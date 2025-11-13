// 函数: sub_1410a8b30
// 地址: 0x1410a8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg2
void* rax = sub_14139ce70(arg1)
arg2[8]
int32_t rbx = (*(rax + 0x14)).d
int32_t r8 = *(arg1 + 0xcc)
void* rax_1 = *(rdi + 0x15a0)
void* arg_18 = rax_1
int32_t temp0 = divs.dp.d(sx.q(rax_1.d), r8)
arg_18.d = temp0
int32_t temp0_1 = divs.dp.d(sx.q(arg_18:4.d), r8)
arg_18:4.d = temp0_1
void* rax_7 = *(rdi + 0x1598)
void* arg_10 = rax_7
int32_t temp0_2 = divs.dp.d(sx.q(rax_7.d), r8)
arg_10.d = temp0_2
int32_t temp0_3 = divs.dp.d(sx.q(arg_10:4.d), r8)
arg_10:4.d = temp0_3
void* var_68 = arg_10
void* var_60 = arg_18
void* rcx_3 = arg2[8]
int128_t var_58 = var_68.o
sub_1410e0370(rcx_3)
sub_1419a2ec0(arg2[0xc], &var_68, &data_143e41610, 0)
void* r13 = var_68
int32_t temp26
int32_t temp27
temp26:temp27 = sx.q(temp0 - temp0_2 + 7)
arg_18.d = (temp27 + (temp26 & 7)) s>> 3
int32_t temp28
int32_t temp29
temp28:temp29 = sx.q(temp0_1 - temp0_3 + 7)
int32_t rax_20 = (temp29 + (temp28 & 7)) s>> 3
int32_t r15_2 = rax_20
arg_10.d = rax_20

if (arg1[0x19].d != 1)
    int64_t* rax_29 = sub_1413a8300(&arg1[6], arg2)
    void* r15_4 = nullptr
    
    if (r13 != 0)
        int64_t rdx_14 = sx.q(*(r13 + 0x10c))
        int64_t* rdi_9 = *(var_60 + 0x10)
        int64_t r14_4 = rdx_14 << 3
        int64_t r15_5 = rdi_9[3]
        
        if (*(r14_4 + r15_5) == 0)
            sub_1419ccf30(rdi_9, rdx_14.d)
            r15_5 = rdi_9[3]
        
        r15_4 = *(r14_4 + r15_5)
    
    void* rdi_10 = arg2[8]
    *(rdi_10 + 0x1b0) = r15_4
    sub_14198aa60(r15_4)
    void*** rcx_27 = (*(rdi_10 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_30 = &rcx_27[3]
    
    if (rax_30 u> *(rdi_10 + 0x38))
        sub_140b0e3d0(rdi_10 + 0x30, 0x20)
        rcx_27 = (*(rdi_10 + 0x30) + 7) & 0xfffffffffffffff8
        rax_30 = &rcx_27[3]
    
    *(rdi_10 + 0x30) = rax_30
    *(rdi_10 + 0x14) += 1
    **(rdi_10 + 8) = rcx_27
    *(rdi_10 + 8) = &rcx_27[1]
    rcx_27[1] = 0
    *rcx_27 = &data_142dd5b40
    rcx_27[2] = r15_4
    void* r15_6 = arg2[8]
    int64_t* rax_34 = rax_29[2]
    int64_t** rdi_13 = (*(r15_6 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_31 = &rdi_13[1]
    
    if (rcx_31 u> *(r15_6 + 0x38))
        sub_140b0e3d0(r15_6 + 0x30, 0x10)
        rdi_13 = (*(r15_6 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_31 = &rdi_13[1]
    
    *(r15_6 + 0x30) = rcx_31
    *rdi_13 = rax_34
    void*** rcx_35 = (*(r15_6 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_35 = &rcx_35[6]
    
    if (rax_35 u> *(r15_6 + 0x38))
        sub_140b0e3d0(r15_6 + 0x30, 0x38)
        rcx_35 = (*(r15_6 + 0x30) + 7) & 0xfffffffffffffff8
        rax_35 = &rcx_35[6]
    
    *(r15_6 + 0x30) = rax_35
    void** rax_36 = *(r15_6 + 8)
    *(r15_6 + 0x14) += 1
    *rax_36 = rcx_35
    *(r15_6 + 8) = &rcx_35[1]
    rcx_35[1] = 0
    *rcx_35 = &data_142da7798
    rcx_35[2].d = 1
    rcx_35[3] = rdi_13
    rcx_35[4] = 2
    rcx_35[5] = 0
    sub_1410814d0(r13, arg2[8], arg2, rbx, &var_58, rax_29[2])
    int32_t* var_78_1
    var_78_1.d = 1
    sub_1419cd1c0(arg2[8], r13, arg_18.d, arg_10.d, var_78_1.d)
else
    void* rdi_2 = nullptr
    int64_t* r14_2 = data_143ec4d28
    
    if (r13 != 0)
        int64_t rdx_11 = sx.q(*(r13 + 0x10c))
        int64_t* r14_3 = *(var_60 + 0x10)
        int64_t r15_3 = rdx_11 << 3
        int64_t rdi_3 = r14_3[3]
        
        if (*(r15_3 + rdi_3) == 0)
            sub_1419ccf30(r14_3, rdx_11.d)
            rdi_3 = r14_3[3]
        
        rdi_2 = *(r15_3 + rdi_3)
        r15_2 = arg_10.d
    
    data_143f02f10 = rdi_2
    sub_14198aa60(rdi_2)
    void*** rcx_11 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    void* rax_21 = &rcx_11[3]
    
    if (rax_21 u> data_143f02d98)
        sub_140b0e3d0(&data_143f02d90, 0x20)
        rcx_11 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_11[3]
    
    data_143f02d74 += 1
    data_143f02d90 = rax_21
    *data_143f02d68 = rcx_11
    data_143f02d68 = &rcx_11[1]
    rcx_11[1] = 0
    rcx_11[2] = rdi_2
    *rcx_11 = &data_142dd5b40
    int64_t* rcx_14 = r14_2[3]
    void** rdi_6 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    void* rax_24 = &rdi_6[1]
    
    if (rax_24 u> data_143f02d98)
        sub_140b0e3d0(&data_143f02d90, 0x10)
        rdi_6 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        rax_24 = &rdi_6[1]
    
    data_143f02d90 = rax_24
    *rdi_6 = rcx_14
    void*** rcx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    void* rax_25 = &rcx_17[6]
    
    if (rax_25 u> data_143f02d98)
        sub_140b0e3d0(&data_143f02d90, 0x38)
        rcx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_17[6]
    
    data_143f02d74 += 1
    data_143f02d90 = rax_25
    *data_143f02d68 = rcx_17
    data_143f02d68 = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142da7798
    rcx_17[2].d = 1
    rcx_17[3] = rdi_6
    rcx_17[4].d = 2
    *(rcx_17 + 0x24) = 3
    rcx_17[5] = 0
    sub_1410814d0(r13, &data_143f02d60, arg2, rbx, &var_58, r14_2[3])
    int32_t* var_78
    var_78.d = 1
    sub_1419cd1c0(&data_143f02d60, r13, arg_18.d, r15_2, var_78.d)

void* rbx_1 = arg2[8]
uint32_t r15_7 = zx.d(*(r13 + 0x212))
int64_t r14_5 = *(rbx_1 + 0x1b0)
void*** rcx_43 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_40 = &rcx_43[5]

if (rax_40 u> *(rbx_1 + 0x38))
    sub_140b0e3d0(rbx_1 + 0x30, 0x30)
    rcx_43 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_40 = &rcx_43[5]

*(rbx_1 + 0x30) = rax_40
void** rax_41 = *(rbx_1 + 8)
*(rbx_1 + 0x14) += 1
*rax_41 = rcx_43
*(rbx_1 + 8) = &rcx_43[1]
rcx_43[1] = 0
*rcx_43 = &data_142da77d8
rcx_43[2] = r14_5
rcx_43[3].d = r15_7
rcx_43[4] = 0
return &data_142da77d8
