// 函数: sub_141fe6da0
// 地址: 0x141fe6da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = *(arg1 + 0xa8)
int64_t* rcx = *(arg1 + 0xb0)
int32_t rbx = 4

if (rdi == 0)
    rbx = 8

void* r15 = arg1 + 0x20
int32_t arg_8
sub_1405d1600(r15, (*(*rcx + 0x18))(rcx, &arg_8, 0xc, zx.q(*(arg1 + 0x98))))
sub_1405d1550(&arg_8)
int64_t* rcx_3 = *(arg1 + 0xb0)
sub_1405d1600(arg1 + 0x38, (*(*rcx_3 + 0x18))(rcx_3, &arg_8, 4, zx.q(*(arg1 + 0x98) * 2)))
sub_1405d1550(&arg_8)
int64_t* rcx_6 = *(arg1 + 0xb0)
sub_1405d1600(arg1 + 0x50, 
    (*(*rcx_6 + 0x18))(rcx_6, &arg_8, zx.q(rbx), zx.q(*(arg1 + 0xa0) * *(arg1 + 0x98))))
sub_1405d1550(&arg_8)
int64_t* rcx_9 = *(arg1 + 0xb0)
void* r12 = arg1 + 0x68
sub_1405d1600(r12, (*(*rcx_9 + 0x18))(rcx_9, &arg_8, 4, zx.q(*(arg1 + 0x98))))
sub_1405d1550(&arg_8)
int64_t rax_8 = sx.q(data_143f0f1a0)

if ((((rax_8.d u> 0x18 || not(test_bit(0x100a040, rax_8.d)))
        && *(&data_143f025f0 + rax_8 * 0x14) != data_143f025b8) || (rax_8 - 0x19).d u<= 1
        || *(&data_143f025f0 + rax_8 * 0x14) == data_143f025d0)
        && (rax_8.d u> 0x1e || not(test_bit(0x6562c800, rax_8.d)))
        && (*(rax_8 * 0x14 + &data_143f025fc) & 1) == 0)
    int64_t* rcx_15 = data_143f0f180
    int32_t var_80
    var_80.b = 0x3d
    (*(*rcx_15 + 0x4b8))(rcx_15, &arg_8, &data_143f02b98, *(arg1 + 0x38), 4, 0x3d)
    sub_1405d1600(arg1 + 0x70, &arg_8)
    sub_1405ec8a0(&arg_8)
    int64_t* rcx_18 = data_143f0f180
    char rax_11 = 0xf
    
    if (rdi == 0)
        rax_11 = 0x11
    
    var_80.b = rax_11
    (*(*rcx_18 + 0x4b8))(rcx_18, &arg_8, &data_143f02b98, *(arg1 + 0x50), rbx, var_80)
    sub_1405d1600(arg1 + 0x78, &arg_8)
    sub_1405ec8a0(&arg_8)
    int64_t* rcx_21 = data_143f0f180
    (*(*rcx_21 + 0x4b8))(rcx_21, &arg_8, &data_143f02b98, *r12, 4, 0x25)
    sub_1405d1600(arg1 + 0x80, &arg_8)
    sub_1405ec8a0(&arg_8)
    int64_t* rcx_24 = data_143f0f180
    (*(*rcx_24 + 0x4b8))(rcx_24, &arg_8, &data_143f02b98, *r15, 4, 0xd)
    sub_1405d1600(arg1 + 0x88, &arg_8)
    sub_1405ec8a0(&arg_8)

int64_t* rcx_27 = data_143f0f180
int64_t rax_15 = (*(*rcx_27 + 0x130))(rcx_27, &data_143f02b98, *(arg1 + 0x50), 0, 
    *(arg1 + 0xa0) * rbx * *(arg1 + 0x98), 1)
char rcx_28 = *(arg1 + 0xa8)
int64_t r13 = 0

if (rcx_28 == 0)
    r13 = rax_15

int64_t r14_1 = 0
int64_t* rcx_29 = data_143f0f180

if (rcx_28 != 0)
    r14_1 = rax_15

int64_t* rax_19 = (*(*rcx_29 + 0x130))(rcx_29, &data_143f02b98, *r15, 0, *(arg1 + 0x98) * 0xc, 1)
int64_t* rcx_30 = data_143f0f180
int64_t* rbx_1 = rax_19
int64_t* arg_10 = rax_19
int32_t* rax_20 =
    (*(*rcx_30 + 0x130))(rcx_30, &data_143f02b98, *(arg1 + 0x38), 0, *(arg1 + 0x98) << 3, 1)
int64_t* rcx_31 = data_143f0f180
int32_t* rdi_1 = rax_20
int32_t* arg_18 = rax_20
int32_t* rax_21 = (*(*rcx_31 + 0x130))(rcx_31, &data_143f02b98, *r12, 0, *(arg1 + 0x98) << 2, 1)
int32_t i = 0
int32_t* var_78 = rax_21
int32_t* rdx_25 = rax_21

if (*(arg1 + 0x98) s> 0)
    int64_t r15_1 = 0
    int64_t* r12_1 = nullptr
    int64_t* arg_20 = nullptr
    
    do
        int64_t rax_22 = *(arg1 + 0x90)
        int32_t r11_1 = 0
        *rbx_1 = *(r12_1 + rax_22)
        rbx_1[1].d = *(r12_1 + rax_22 + 8)
        *rdi_1 = *(r12_1 + *(arg1 + 0x90) + 0x4c)
        rdi_1[1] = *(r12_1 + *(arg1 + 0x90) + 0x50)
        *rdx_25 = *(r12_1 + *(arg1 + 0x90) + 0x54)
        int32_t r10_5 = *(arg1 + 0xa0)
        
        if (r10_5 != 0)
            do
                int64_t rdi_2 = *(arg1 + 0x90)
                int64_t r9_11 = zx.q(r11_1) + r15_1
                
                if (*(arg1 + 0xa8) == 0)
                    *(r13 + (zx.q(r10_5 * i + r11_1) << 3)) = *(rdi_2 + (r9_11 << 3) + 0xc)
                else
                    arg_8 = (*(rdi_2 + (r9_11 << 3) + 0xc)).d
                    int32_t rdx_26 = arg_8
                    uint16_t rax_28 = (rdx_26 u>> 0x17).w
                    uint16_t r8_6 = (rdx_26 u>> 0x1f).w << 0xf
                    uint32_t rcx_35 = zx.d(rax_28.b)
                    
                    if (rcx_35 u> 0x70)
                        if (rcx_35 u< 0x8f)
                            r8_6 |= ((rax_28 - 0x10) & 0x1f) << 0xa | ((rdx_26 u>> 0xd).w & 0x3ff)
                        else
                            r8_6 |= 0x7bff
                    else if (0x70 - rcx_35 + 0xe s<= 0x18)
                        int32_t rdx_28 = (rdx_26 & 0x7fffff) | 0x800000
                        uint16_t rax_30 = ((rdx_28 u>> (0x70 - rcx_35 + 0xe).b).w & 0x3ff) | r8_6
                        r8_6 = rax_30
                        
                        if (((rdx_28 u>> ((0x70 - rcx_35).b + 0xd)).b & 1) != 0)
                            r8_6 = rax_30 + 1
                    
                    arg_8 = (*(rdi_2 + (r9_11 << 3) + 0x10)).d
                    int32_t r9_12 = arg_8
                    uint16_t rax_32 = (r9_12 u>> 0x17).w
                    uint16_t rdx_32 = (r9_12 u>> 0x1f).w << 0xf
                    uint32_t rcx_38 = zx.d(rax_32.b)
                    
                    if (rcx_38 u> 0x70)
                        if (rcx_38 u< 0x8f)
                            rdx_32 |= ((rax_32 - 0x10) & 0x1f) << 0xa | ((r9_12 u>> 0xd).w & 0x3ff)
                        else
                            rdx_32 |= 0x7bff
                    else if (0x70 - rcx_38 + 0xe s<= 0x18)
                        int32_t r9_14 = (r9_12 & 0x7fffff) | 0x800000
                        uint16_t rax_34 = ((r9_14 u>> (0x70 - rcx_38 + 0xe).b).w & 0x3ff) | rdx_32
                        rdx_32 = rax_34
                        
                        if (((r9_14 u>> ((0x70 - rcx_38).b + 0xd)).b & 1) != 0)
                            rdx_32 = rax_34 + 1
                    
                    uint64_t r10_7 = zx.q(r10_5 * i + r11_1)
                    *(r14_1 + (r10_7 << 2)) = r8_6
                    *(r14_1 + (r10_7 << 2) + 2) = rdx_32
                
                r10_5 = *(arg1 + 0xa0)
                r11_1 += 1
            while (r11_1 u< r10_5)
            
            r12_1 = arg_20
            rbx_1 = arg_10
            rdi_1 = arg_18
            rdx_25 = var_78
        
        rbx_1 += 0xc
        rdi_1 = &rdi_1[2]
        r12_1 = &r12_1[0xb]
        arg_10 = rbx_1
        rdx_25 = &rdx_25[1]
        arg_18 = rdi_1
        i += 1
        arg_20 = r12_1
        r15_1 += 0xb
        var_78 = rdx_25
    while (i s< *(arg1 + 0x98))

int64_t* rcx_41 = data_143f0f180
(*(*rcx_41 + 0x138))(rcx_41, &data_143f02b98, *r15)
int64_t* rcx_42 = data_143f0f180
(*(*rcx_42 + 0x138))(rcx_42, &data_143f02b98, *(arg1 + 0x38))
int64_t* rcx_43 = data_143f0f180
(*(*rcx_43 + 0x138))(rcx_43, &data_143f02b98, *(arg1 + 0x50))
*r12
jump(*(*data_143f0f180 + 0x138))
