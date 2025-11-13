// 函数: sub_14151b870
// 地址: 0x14151b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[1]
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx = &rbx_2[1]

if (rcx u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_2[1]

*(arg2 + 0x30) = rcx
*rbx_2 = rax
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[6]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[6]

*(arg2 + 0x30) = rax_1
void**** rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rbx_2
rcx_4[4].d = 0
*(rcx_4 + 0x24) = 2
rcx_4[5] = 0
int32_t rax_4 = *(arg1 + 0x16c)

if (rax_4 u>= 4)
    int64_t rdx = sx.q(arg1[0x2d].d)
    int64_t* rbx_7 = ((rdx + 1) << 4) + arg1[0x2a]
    int64_t* rcx_8 = rbx_7[1]
    
    if (rcx_8 != 0 && *rbx_7 != 0)
        (*(*rcx_8 + 0x10))(rcx_8, rbx_7)
        rbx_7[1] = 0
        rax_4 = *(arg1 + 0x16c)
        rdx = zx.q(arg1[0x2d].d)
    
    *(arg1 + 0x16c) = rax_4 - 1
    arg1[0x2d].d = (rdx + 1).d & 3

int32_t i = 0
int32_t rax_10 = arg3[1].d
void* r15_1 = &arg1[2 + zx.q(*(arg1 + 0x164)) * 0xa]

if (rax_10 s>= 4)
    rax_10 = 4

*r15_1 = rax_10

if (rax_10 s> 0)
    void* r9_1 = r15_1 + 0x10
    
    do
        i += 1
        int32_t* r8_2 = *arg3 + -0x10 - r15_1 + r9_1
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(*r8_2)
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r8_2[1])
        *(r9_1 - 0xc) = ((temp1_1 & 0xf) + temp2_1) s>> 4
        *(r9_1 - 8) = (temp4_1 + (temp3_1 & 0xf)) s>> 4
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r8_2[2] + 0xf)
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r8_2[3] + 0xf)
        *(r9_1 - 4) = ((temp5_1 & 0xf) + temp6_1) s>> 4
        *r9_1 = (temp8_1 + (temp7_1 & 0xf)) s>> 4
        r9_1 += 0x10
    while (i s< *r15_1)

int64_t* rcx_15 = arg1[0x2a]
int64_t* rbx_11 = &rcx_15[(sx.q(*(arg1 + 0x164)) + 1) * 2]

if (*rbx_11 == 0)
    int64_t* rcx_16 = *rcx_15
    int64_t var_58
    sub_1413c6650(rbx_11, (*(*rcx_16 + 8))(rcx_16, &var_58))
    int64_t* var_50
    
    if (var_50 != 0 && var_58 != 0)
        (*(*var_50 + 0x10))(var_50, &var_58)
        int64_t var_50_1 = 0
    
    sub_14081c9d0(&var_58)

int32_t rax_28 = *(arg2 + 0x8c)
int32_t rcx_20

if (rax_28 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_28)
    rcx_20 = temp0_1
    int32_t arg_8 = rcx_20
else
    rcx_20 = rax_28 + 0x20

int32_t rax_29 = 1 << rcx_20.b
*(r15_1 + 0x44) = rax_29
int32_t rbx_12 = *(arg2 + 0x8c)

if (rbx_12 != rax_29)
    *(arg2 + 0x8c) = rax_29
    
    if (*(arg2 + 0x14) u> 0)
        void*** rdx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_30 = &rdx_15[3]
        
        if (rax_30 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_30 = &rdx_15[3]
        
        *(arg2 + 0x30) = rax_30
        int64_t* rax_31 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_31 = rdx_15
        int32_t rax_32 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_15[1]
        rdx_15[1] = 0
        *rdx_15 = &data_142f11588
        rdx_15[2].d = rax_32
    else
        *(arg2 + 0x90) = rax_29

int64_t* rcx_23 = data_143f0f180
int64_t arg_18
(*(*rcx_23 + 0xa8))(rcx_23, &arg_18)

if (r15_1 + 0x48 != &arg_18)
    int64_t* r15_2 = *(r15_1 + 0x48)
    *(r15_1 + 0x48) = arg_18
    arg_18 = 0
    
    if (r15_2 != 0)
        r15_2[1].d -= 1
        
        if (r15_2[1].d == 1)
            char rax_36
            
            if (r15_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_36 = sub_1405949a0()
            
            if (r15_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_36 != 0))
                (**r15_2)(r15_2, 1)
            else
                bool z_1
                
                if (0 == *(r15_2 + 0xc))
                    *(r15_2 + 0xc) = 1
                    z_1 = true
                else
                    *(r15_2 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_38 = sub_140a20af0()
                    uint64_t rdx_19 = zx.q(rax_38)
                    void* const rax_39
                    
                    if (rax_38 != 0)
                        rax_39 = *(&data_143cf0bf8 + (rdx_19 u>> 0xe << 3))
                            + (zx.q(rdx_19.d) & 0x3fff) * 0x18
                    else
                        rax_39 = nullptr
                    
                    *(rax_39 + 8) = r15_2
                    sub_1405a42f0(&data_143f02390, rdx_19.d)

sub_1405d1550(&arg_18)
int64_t rbp_2 = *(r15_1 + 0x48)
int64_t r15_3 = *arg1
void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t r12 = arg1[0x2c].d
void* rax_44 = &rcx_31[5]

if (rax_44 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_44 = &rcx_31[5]

*(arg2 + 0x30) = rax_44
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_31
*(arg2 + 8) = &rcx_31[1]
rcx_31[2] = r15_3
rcx_31[3] = rbp_2
rcx_31[4].d = 0
*(rcx_31 + 0x24) = r12
rcx_31[1] = 0
*rcx_31 = &data_142fbb380
int64_t rbp_3 = *(arg1[0x2a] + (sx.q(*(arg1 + 0x164)) + 1) * 0x10)
void*** rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_48 = &rcx_40[3]

if (rax_48 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_48 = &rcx_40[3]

*(arg2 + 0x30) = rax_48
int64_t* rax_49 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_49 = rcx_40
*(arg2 + 8) = &rcx_40[1]
rcx_40[1] = 0
*rcx_40 = &data_142f284f8
rcx_40[2] = rbp_3
int32_t rax_51 = *(arg1 + 0x164)
*(arg1 + 0x16c) += 1
int32_t result = (rax_51 + 1) & 3
*(arg1 + 0x164) = result

if (*(arg2 + 0x8c) != rbx_12)
    *(arg2 + 0x8c) = rbx_12
    
    if (*(arg2 + 0x14) u> 0)
        void*** rdx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_53 = &rdx_22[3]
        
        if (rax_53 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_53 = &rdx_22[3]
        
        *(arg2 + 0x30) = rax_53
        int64_t* rax_54 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_54 = rdx_22
        result = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_22[1]
        rdx_22[1] = 0
        *rdx_22 = &data_142f11588
        rdx_22[2].d = result
    else
        *(arg2 + 0x90) = rbx_12

return result
