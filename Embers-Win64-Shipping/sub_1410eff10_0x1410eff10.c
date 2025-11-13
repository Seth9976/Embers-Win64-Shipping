// 函数: sub_1410eff10
// 地址: 0x1410eff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[0x2b4].d - arg2[0x2b3].d)
void* r13 = arg6
void*** rcx_2 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(((temp1 - temp0) s>> 1) + 7)
int64_t rbx = *(r13 + 0xa8)
int128_t var_48 = zx.o(0)
int32_t rax_8 = (temp3 + (temp2 & 7)) s>> 3
int32_t* r12 = arg4
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(((temp5 - temp4) s>> 1) + 7)
void* rdx_6 = &rcx_2[6]
int32_t rax_17 = (temp7 + (temp6 & 7)) s>> 3

if (rdx_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x40)
    rcx_2 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    rdx_6 = &rcx_2[6]

*(arg1 + 0x30) = rdx_6
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_2
*(arg1 + 8) = &rcx_2[1]
*rcx_2 = &data_142da7778
rcx_2[2] = rbx
rcx_2[1] = 0
*(rcx_2 + 0x20) = var_48
int64_t rbx_1 = *(r13 + 0x88)
void*** rcx_8 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
var_48 = zx.o(0)
void* rax_20 = &rcx_8[6]

if (rax_20 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x40)
    rcx_8 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_20 = &rcx_8[6]

*(arg1 + 0x30) = rax_20
int64_t* rax_21 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_21 = rcx_8
*(arg1 + 8) = &rcx_8[1]
*rcx_8 = &data_142da7778
void** r15 = arg5
rcx_8[2] = rbx_1
rcx_8[1] = 0
*(rcx_8 + 0x20) = var_48
sub_1411da060(&arg2[0xa1b], arg2, arg1, r15, r13, r12)

if (data_1439b55dc != 0)
    sub_1419a2ec0(arg2[0xa2a], &var_48, &data_143e53410, 0)
    void* r14_1 = var_48.q
    void* rbx_2 = nullptr
    
    if (r14_1 != 0)
        int64_t rdx_9 = sx.q(*(r14_1 + 0x10c))
        int64_t* r15_1 = *(var_48:8.q + 0x10)
        int64_t rbx_3 = r15_1[3]
        
        if (*(rbx_3 + (rdx_9 << 3)) == 0)
            sub_1419ccf30(r15_1, rdx_9.d)
            rbx_3 = r15_1[3]
        
        rbx_2 = *(rbx_3 + (rdx_9 << 3))
        r12 = arg4
        r15 = arg5
    
    *(arg1 + 0x1b0) = rbx_2
    sub_14198aa60(rbx_2)
    void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_18[3]
    
    if (rax_24 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_18[3]
    
    *(arg1 + 0x30) = rax_24
    void**** rax_25 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_25 = rcx_18
    *(arg1 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142dd5b40
    rcx_18[2] = rbx_2
    sub_1411060a0(r14_1, arg1, arg2, r15, r13)
    sub_1419cd1c0(arg1, r14_1, rax_8, rax_17, 1)
    sub_14077cfd0(r14_1 + 0x13c, arg1, *(arg1 + 0x1b0))
    int64_t rax_27 = *(r13 + 0x68)
    int64_t* rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    var_48.q = rax_27
    void* rcx_25 = &rbx_6[1]
    
    if (rcx_25 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rax_27 = var_48.q
        rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_25 = &rbx_6[1]
    
    *(arg1 + 0x30) = rcx_25
    *rbx_6 = rax_27
    void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_28 = &rcx_29[6]
    
    if (rax_28 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_28 = &rcx_29[6]
    
    *(arg1 + 0x30) = rax_28
    void**** rax_29 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_29 = rcx_29
    *(arg1 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142da7798
    rcx_29[2].d = 1
    rcx_29[3] = rbx_6
    rcx_29[4].d = 0
    *(rcx_29 + 0x24) = 3
    rcx_29[5] = 0
    
    if (data_1439b55e0 != 0)
        sub_1419a2ec0(arg2[0xa2a], &var_48, &data_143e53510, 0)
        void* r13_1 = var_48.q
        void* rbx_9 = nullptr
        
        if (r13_1 != 0)
            int64_t rdx_14 = sx.q(*(r13_1 + 0x10c))
            int64_t* r14_2 = *(var_48:8.q + 0x10)
            int64_t rbx_10 = r14_2[3]
            
            if (*(rbx_10 + (rdx_14 << 3)) == 0)
                sub_1419ccf30(r14_2, rdx_14.d)
                rbx_10 = r14_2[3]
            
            rbx_9 = *(rbx_10 + (rdx_14 << 3))
            r15 = arg5
        
        *(arg1 + 0x1b0) = rbx_9
        sub_14198aa60(rbx_9)
        void*** rcx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_32 = &rcx_38[3]
        
        if (rax_32 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_32 = &rcx_38[3]
        
        *(arg1 + 0x30) = rax_32
        void**** rax_33 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_33 = rcx_38
        *(arg1 + 8) = &rcx_38[1]
        rcx_38[1] = 0
        *rcx_38 = &data_142dd5b40
        rcx_38[2] = rbx_9
        sub_141105ca0(r13_1, arg1, arg2, r15, r12)
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
        int32_t* var_58_2
        var_58_2.d = 1
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(arg2[0x2b4].d - arg2[0x2b3].d)
        sub_1419cd1c0(arg1, r13_1, (temp11_1 - temp10_1) s>> 1, (temp9_1 - temp8_1) s>> 1, 
            var_58_2.d)
        sub_14077cfd0(r13_1 + 0x1b0, arg1, *(arg1 + 0x1b0))
        int64_t* rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rax_46 = *(*(arg2[0x2b5] + 0xd48) + 0x88)
        void* rcx_46 = &rbx_13[1]
        var_48.q = rax_46
        
        if (rcx_46 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rax_46 = var_48.q
            rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_46 = &rbx_13[1]
        
        *(arg1 + 0x30) = rcx_46
        *rbx_13 = rax_46
        void*** rcx_50 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_47 = &rcx_50[6]
        
        if (rax_47 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_50 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_47 = &rcx_50[6]
        
        *(arg1 + 0x30) = rax_47
        void**** rax_48 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        r13 = arg6
        *rax_48 = rcx_50
        *(arg1 + 8) = &rcx_50[1]
        rcx_50[1] = 0
        *rcx_50 = &data_142da7798
        rcx_50[2].d = 1
        rcx_50[3] = rbx_13
        rcx_50[4].d = 0
        *(rcx_50 + 0x24) = 3
        rcx_50[5] = 0

sub_1419a2ec0(arg2[0xa2a], &var_48, &data_143e53610, 0)
void* r14_3 = var_48.q
void* rbx_16 = nullptr

if (r14_3 != 0)
    int64_t rdx_21 = sx.q(*(r14_3 + 0x10c))
    int64_t* r15_3 = *(var_48:8.q + 0x10)
    int64_t rbx_17 = r15_3[3]
    
    if (*(rbx_17 + (rdx_21 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_21.d)
        rbx_17 = r15_3[3]
    
    rbx_16 = *(rbx_17 + (rdx_21 << 3))

*(arg1 + 0x1b0) = rbx_16
sub_14198aa60(rbx_16)
void*** rcx_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_51 = &rcx_59[3]

if (rax_51 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_51 = &rcx_59[3]

*(arg1 + 0x30) = rax_51
void**** rax_52 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_52 = rcx_59
*(arg1 + 8) = &rcx_59[1]
rcx_59[2] = rbx_16
rcx_59[1] = 0
*rcx_59 = &data_142dd5b40
sub_141105a40(r14_3, arg1, arg2, r13, arg7)
sub_1419cd1c0(arg1, r14_3, rax_8, rax_17, 1)
sub_14077cfd0(r14_3 + 0x118, arg1, *(arg1 + 0x1b0))
void* rax_54 = *(arg7 + 0x10)
void** rbx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_66 = &rbx_21[1]

if (rcx_66 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_66 = &rbx_21[1]

*(arg1 + 0x30) = rcx_66
*rbx_21 = rax_54
void*** rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_55 = &rcx_70[6]

if (rax_55 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_55 = &rcx_70[6]

*(arg1 + 0x30) = rax_55
void**** rax_56 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_56 = rcx_70
*(arg1 + 8) = &rcx_70[1]
rcx_70[1] = 0
rcx_70[3] = rbx_21
*rcx_70 = &data_142da7798
rcx_70[2].d = 1
rcx_70[4].d = 0
*(rcx_70 + 0x24) = 3
rcx_70[5] = 0
return &data_142da7798
