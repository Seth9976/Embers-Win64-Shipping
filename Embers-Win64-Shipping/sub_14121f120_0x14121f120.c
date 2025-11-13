// 函数: sub_14121f120
// 地址: 0x14121f120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x168) == 0)
    return 

if (*(arg1 + 0x1a0) == 0xffffffff)
    (*(*(arg1 + 0x198) + 0x28))(arg1 + 0x198)

sub_1412392c0(arg1 + 0x198, *(arg1 + 0xa8))
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[2]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[2]

*(arg2 + 0x30) = rax_1
int64_t* rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7758
void* var_138
sub_1419a2ec0(*(arg3 + 0x5150), &var_138, &data_143e82750, 0)
void* r13_1 = var_138
void* r14_1 = nullptr
void* var_130

if (r13_1 != 0)
    int64_t rdx_2 = sx.q(*(r13_1 + 0x10c))
    int64_t* r14_2 = *(var_130 + 0x10)
    int64_t r15_1 = rdx_2 << 3
    int64_t rax_5 = r14_2[3]
    
    if (*(r15_1 + rax_5) == 0)
        sub_1419ccf30(r14_2, rdx_2.d)
        rax_5 = r14_2[3]
    
    r14_1 = *(r15_1 + rax_5)

*(arg2 + 0x1b0) = r14_1
sub_14198aa60(r14_1)
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_13[3]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_13[3]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int64_t var_128 = 0
*rax_7 = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142dd5b40
rcx_13[2] = r14_1
sub_141227d40(arg1, &var_128)
sub_14123aef0(r13_1, arg2, &var_128)
sub_1419cd1c0(arg2, r13_1, 8, 8, 8)
sub_141245b70(r13_1, arg2, &var_128)
sub_1405d1550(&var_128)
sub_1419a2ec0(*(arg3 + 0x5150), &var_138, &data_143e82550, 0)
void* r13_2 = var_138
void* r14_3 = nullptr

if (r13_2 != 0)
    int64_t rdx_8 = sx.q(*(r13_2 + 0x10c))
    int64_t* r14_4 = *(var_130 + 0x10)
    int64_t r15_2 = rdx_8 << 3
    int64_t rax_10 = r14_4[3]
    
    if (*(r15_2 + rax_10) == 0)
        sub_1419ccf30(r14_4, rdx_8.d)
        rax_10 = r14_4[3]
    
    r14_3 = *(r15_2 + rax_10)

*(arg2 + 0x1b0) = r14_3
sub_14198aa60(r14_3)
void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_27[3]

if (rax_11 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_27[3]

*(arg2 + 0x30) = rax_11
void**** rax_12 = *(arg2 + 8)
*(arg2 + 0x14) += 1
var_128 = 0
*rax_12 = rcx_27
*(arg2 + 8) = &rcx_27[1]
rcx_27[1] = 0
*rcx_27 = &data_142dd5b40
rcx_27[2] = r14_3
sub_141227d40(arg1, &var_128)
sub_14123aef0(r13_2, arg2, &var_128)
sub_1419cd1c0(arg2, r13_2, 8, 8, 8)
sub_141245b70(r13_2, arg2, &var_128)
sub_1405d1550(&var_128)

if (*(arg1 + 0x16a) != 0)
    sub_1419a2ec0(*(arg3 + 0x5150), &var_138, &data_143e82650, 0)
    void* r15_3 = var_138
    void* r14_5 = nullptr
    
    if (r15_3 != 0)
        int64_t rdx_14 = sx.q(*(r15_3 + 0x10c))
        int64_t* r13_3 = *(var_130 + 0x10)
        int64_t r12_1 = rdx_14 << 3
        int64_t r14_6 = r13_3[3]
        
        if (*(r12_1 + r14_6) == 0)
            sub_1419ccf30(r13_3, rdx_14.d)
            r14_6 = r13_3[3]
        
        r14_5 = *(r12_1 + r14_6)
    
    *(arg2 + 0x1b0) = r14_5
    sub_14198aa60(r14_5)
    void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_41[3]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_41[3]
    
    *(arg2 + 0x30) = rax_15
    void**** rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    var_128 = 0
    *rax_16 = rcx_41
    *(arg2 + 8) = &rcx_41[1]
    rcx_41[1] = 0
    *rcx_41 = &data_142dd5b40
    rcx_41[2] = r14_5
    sub_141227d40(arg1, &var_128)
    sub_14123aef0(r15_3, arg2, &var_128)
    sub_1419cd1c0(arg2, r15_3, 8, 8, 8)
    sub_141245b70(r15_3, arg2, &var_128)
    sub_1405d1550(&var_128)

void*** rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_52[2]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_52[2]

*(arg2 + 0x30) = rax_18
int64_t* rax_19 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_19 = rcx_52
*(arg2 + 8) = &rcx_52[1]
rcx_52[1] = 0
*rcx_52 = &data_142da7768
