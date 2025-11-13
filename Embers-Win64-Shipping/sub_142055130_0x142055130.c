// 函数: sub_142055130
// 地址: 0x142055130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(data_143a2e25c)
void* rsi = arg2
int32_t rcx = *(arg1 + 0xa0)
int64_t rax = sx.q(arg4)
void* rdi_1 = rax * 0x150 + *(arg3 + 0x20)
void* arg_8 = rdi_1
int64_t* r12 = *(**(*(arg3 + 0x30) + 0x40) + (sx.q(*(arg3 + 0x70)) << 3))

if (rcx != r14.d)
    if (rcx s> r14.d)
        int64_t r15_2 = r14 << 5
        
        do
            int64_t* rbx_2 = *(arg1 + 0x98) + r15_2
            void* rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                int32_t rax_3 = 0
                
                if (0 == *(rcx_1 + 8))
                    *(rcx_1 + 8) = 0
                else
                    rax_3 = *(rcx_1 + 8)
                
                if (rax_3 == 1)
                    void* rdi_2 = *rbx_2
                    
                    if (*(rdi_2 + 0x11) != 0)
                        if (data_143f0f1c7 != 0)
                            int64_t* rcx_2 = data_143f0f180
                            (*(*rcx_2 + 0x630))(rcx_2, rdi_2)
                        
                        *(rdi_2 + 0x11) = 0
            
            rbx_2[3].d = 0
            sub_1405d16e0(rbx_2, nullptr)
            sub_1405d16e0(&rbx_2[1], nullptr)
            sub_1405d16e0(&rbx_2[2], nullptr)
            r14 = zx.q(r14.d + 1)
            r15_2 += 0x20
        while (r14.d s< *(arg1 + 0xa0))
        
        r14 = zx.q(data_143a2e25c)
        rsi = arg2
        rdi_1 = arg_8
    
    sub_1420682a0(arg1 + 0x98, r14.d, 0)
    rcx = *(arg1 + 0xa0)

uint32_t rbx_4 = *(rdi_1 + 0x114) * 0x18
int32_t temp1 = mods.dp.d(sx.q(*(arg1 + 0xa8) + 1), rcx)
int64_t* r15_5 = (sx.q(temp1) << 5) + *(arg1 + 0x98)
*(arg1 + 0xa8) = temp1
int32_t var_118

if (zx.q(r15_5[3].d) u< zx.q(rbx_4) << 2)
    sub_1408081b0(r15_5)
    var_118 = 8
    sub_1407b4d10(r15_5, 4, rbx_4, 0x1d, 8, u"SkinTangentIntermediate", 0)
    int64_t* rcx_10 = data_143f0f180
    (*(*rcx_10 + 0x2e0))(rcx_10, r15_5[1], u"SkinTangentIntermediate")
    int64_t rdi_3 = r15_5[1]
    void*** rcx_13 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    int64_t var_e8_1 = 0
    void* rax_12 = &rcx_13[5]
    
    if (rax_12 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x30)
        rcx_13 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_13[5]
    
    *(rsi + 0x30) = rax_12
    int64_t* rax_13 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_13 = rcx_13
    *(rsi + 8) = &rcx_13[1]
    rcx_13[1] = 0
    rcx_13[2] = rdi_3
    rdi_1 = arg_8
    *rcx_13 = &data_142f115d8
    *(rcx_13 + 0x18) = 0.o

int64_t* rax_15 = std::_Get_future_error_what((*U"1111")[3])
void* var_98
sub_1419a2ec0(rax_15, &var_98, &data_143f451f0, 0)
void* var_b8
sub_1419a2ec0(rax_15, &var_b8, &data_143f45350, 0)
void* var_a8
sub_1419a2ec0(rax_15, &var_a8, &data_143f454b0, 0)
void* var_c8
sub_1419a2ec0(rax_15, &var_c8, &data_143f45610, 0)
void* rax_16
void* r14_1

if (r12[0x16].b == 0)
    if (data_143f40a40 == 0)
        r14_1 = var_98
        void* var_90
        rax_16 = var_90
    else
        r14_1 = var_a8
        void* var_a0
        rax_16 = var_a0
else if (data_143f40a40 == 0)
    r14_1 = var_b8
    void* var_b0
    rax_16 = var_b0
else
    r14_1 = var_c8
    void* var_c0
    rax_16 = var_c0

void* rbx_6 = nullptr
uint32_t r12_3 = (*(rdi_1 + 0x114) + 0x3f) u>> 6

if (r14_1 != 0)
    int64_t* rdi_4 = *(rax_16 + 0x10)
    int64_t rdx_9 = sx.q(*(r14_1 + 0x10c))
    int64_t* rbx_7 = rdi_4[3]
    
    if (rbx_7[rdx_9] == 0)
        sub_1419ccf30(rdi_4, rdx_9.d)
        rbx_7 = rdi_4[3]
    
    rbx_6 = rbx_7[rdx_9]

*(rsi + 0x1b0) = rbx_6
sub_14198aa60(rbx_6)
void*** rcx_26 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_26[3]

if (rax_17 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x20)
    rcx_26 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_26[3]

*(rsi + 0x30) = rax_17
*(rsi + 0x14) += 1
**(rsi + 8) = rcx_26
*(rsi + 8) = &rcx_26[1]
rcx_26[2] = rbx_6
rcx_26[1] = 0
*rcx_26 = &data_142dd5b40
int64_t rax_20 = r15_5[1]
int64_t* rbx_10 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_30 = &rbx_10[1]

if (rcx_30 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x10)
    rbx_10 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rcx_30 = &rbx_10[1]

*(rsi + 0x30) = rcx_30
*rbx_10 = rax_20
void*** rcx_34 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_34[6]

if (rax_21 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x38)
    rcx_34 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_34[6]

*(rsi + 0x30) = rax_21
void**** rax_22 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_22 = rcx_34
*(rsi + 8) = &rcx_34[1]
rcx_34[1] = 0
rcx_34[5] = 0
void* r13_2 = arg_8
*rcx_34 = &data_142da7798
rcx_34[2].d = 1
rcx_34[3] = rbx_10
rcx_34[4].d = 3
*(rcx_34 + 0x24) = 3

if (data_143f40a40 == 0)
    int64_t rbx_13 = rax * 0xe8
    sub_1405d16e0(r13_2 + 0x140, *(rbx_13 + *r12 + 0x70))
    sub_1405d16e0(r13_2 + 0x138, *(rbx_13 + *r12 + 0x80))

var_118.q = r15_5
sub_142068a10(r14_1, rsi, arg3, r13_2, var_118)
int32_t var_118_1 = 1
sub_1419cd1c0(rsi, r14_1, r12_3, 1, 1)
int64_t r12_4 = *(rsi + 0x1b0)
void* const r14_2

if (*(r14_1 + 0x11a) u<= 0)
    r14_2 = nullptr
else
    uint32_t rbx_14 = zx.d(*(r14_1 + 0x118))
    void*** rcx_44 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_25 = &rcx_44[5]
    
    if (rax_25 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x30)
        rcx_44 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_44[5]
    
    *(rsi + 0x30) = rax_25
    void**** rax_26 = *(rsi + 8)
    *(rsi + 0x14) += 1
    r14_2 = nullptr
    *rax_26 = rcx_44
    *(rsi + 8) = &rcx_44[1]
    rcx_44[1] = 0
    *rcx_44 = &data_142da77d8
    rcx_44[2] = r12_4
    rcx_44[3].d = rbx_14
    rcx_44[4] = 0

int64_t* rax_29 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_48
sub_1419a2ec0(rax_29, &var_48, &data_143f45930, 0)
void* var_88
sub_1419a2ec0(rax_29, &var_88, &data_143f45a90, 0)
void* var_78
sub_1419a2ec0(rax_29, &var_78, &data_143f45bf0, 0)
void* var_68
sub_1419a2ec0(rax_29, &var_68, &data_143f45d50, 0)
void* var_58
sub_1419a2ec0(rax_29, &var_58, &data_143f45eb0, 0)
int32_t rax_30 = data_143f40a44
void* rax_31
void* rbx_16

if (rax_30 == 1)
    rbx_16 = var_88
    void* var_80
    rax_31 = var_80
else if (rax_30 == 2)
    rbx_16 = var_78
    void* var_70
    rax_31 = var_70
else if (rax_30 == 3)
    rbx_16 = var_68
    void* var_60
    rax_31 = var_60
else if (rax_30 != 4)
    rbx_16 = var_48
    void* var_40
    rax_31 = var_40
else
    rbx_16 = var_58
    void* var_50
    rax_31 = var_50

if (rbx_16 != 0)
    int64_t* r13_3 = *(rax_31 + 0x10)
    int64_t rdx_22 = sx.q(*(rbx_16 + 0x10c))
    int64_t* r14_3 = r13_3[3]
    
    if (r14_3[rdx_22] == 0)
        sub_1419ccf30(r13_3, rdx_22.d)
        r14_3 = r13_3[3]
    
    r14_2 = r14_3[rdx_22]
    r13_2 = arg_8

*(rsi + 0x1b0) = r14_2
sub_14198aa60(r14_2)
void*** rcx_58 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_32 = &rcx_58[3]

if (rax_32 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x20)
    rcx_58 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_32 = &rcx_58[3]

*(rsi + 0x30) = rax_32
*(rsi + 0x14) += 1
**(rsi + 8) = rcx_58
*(rsi + 8) = &rcx_58[1]
rcx_58[2] = r14_2
rcx_58[1] = 0
*rcx_58 = &data_142dd5b40
int64_t rax_35 = r15_5[1]
int64_t* r14_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
uint32_t r12_8 = (*(r13_2 + 0x50) + 0x3f) u>> 6
void* rcx_62 = &r14_6[1]

if (rcx_62 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x10)
    r14_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rcx_62 = &r14_6[1]

*(rsi + 0x30) = rcx_62
*r14_6 = rax_35
void*** rcx_66 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_36 = &rcx_66[6]

if (rax_36 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x38)
    rcx_66 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_36 = &rcx_66[6]

*(rsi + 0x30) = rax_36
void**** rax_37 = *(rsi + 8)
*(rsi + 0x14) += 1
var_118_1.q = r15_5
*rax_37 = rcx_66
*(rsi + 8) = &rcx_66[1]
rcx_66[1] = 0
rcx_66[5] = 0
*rcx_66 = &data_142da7798
rcx_66[2].d = 1
rcx_66[3] = r14_6
rcx_66[4].d = 2
*(rcx_66 + 0x24) = 3
sub_142068f90(rbx_16, rsi, arg3, r13_2, 1)
void* result = sub_1419cd1c0(rsi, rbx_16, r12_8, 1, 1)
int64_t r14_9 = *(rsi + 0x1b0)

if (*(rbx_16 + 0x11e) u> 0)
    uint32_t r15_6 = zx.d(*(rbx_16 + 0x11c))
    void*** rcx_74 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_39 = &rcx_74[5]
    
    if (rax_39 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x30)
        rcx_74 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_39 = &rcx_74[5]
    
    *(rsi + 0x30) = rax_39
    void**** rax_40 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_40 = rcx_74
    result = &rcx_74[1]
    *(rsi + 8) = result
    *result = 0
    *rcx_74 = &data_142da77d8
    rcx_74[2] = r14_9
    rcx_74[3].d = r15_6
    rcx_74[4] = 0

if (*(rbx_16 + 0x11a) u> 0)
    uint32_t rbx_17 = zx.d(*(rbx_16 + 0x118))
    void*** rcx_80 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_41 = &rcx_80[5]
    
    if (rax_41 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x30)
        rcx_80 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_41 = &rcx_80[5]
    
    *(rsi + 0x30) = rax_41
    void**** rax_42 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_42 = rcx_80
    result = &rcx_80[1]
    *(rsi + 8) = result
    *result = 0
    *rcx_80 = &data_142da77d8
    rcx_80[2] = r14_9
    rcx_80[3].d = rbx_17
    rcx_80[4] = 0

return result
