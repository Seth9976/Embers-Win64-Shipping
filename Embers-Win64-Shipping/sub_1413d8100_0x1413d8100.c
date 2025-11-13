// 函数: sub_1413d8100
// 地址: 0x1413d8100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t temp0 = arg3[2]
int64_t* r12 = arg3

if (temp0 == 0)
    return 

int32_t rax_1 = (*(*arg3 + 0x40))(arg3)
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rax_1)
int32_t rbx_1

if (temp0 == 0)
    rbx_1 = 0x20
else
    rbx_1 = 0x1f - temp0_1

uint64_t rflags_2
int32_t temp0_2
temp0_2, rflags_2 = _bit_scan_reverse(rax_1 - 1)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = 0x20
else
    rdi_1 = 0x1f - temp0_2

sub_14139bef0(arg1)
int64_t* rax_3 = sub_14139bef0(arg1)
uint128_t zmm0 = zx.o(data_143dbb188.q)
void* r15_1 = rax_3[0x25]
int32_t rax_4 = data_143dbb190
int32_t var_c0_1 = rax_4
int32_t var_b4_1 = rax_4
int64_t var_a4_1 = 0
int32_t var_94_1 = 0
uint64_t var_c8_1 = zmm0.q
uint64_t var_bc_1 = zmm0.q
uint64_t var_b0_1 = zmm0.q
int64_t var_9c_1 = 1
int32_t var_90_1 = 1
int64_t* rcx_5 = *(r15_1 + 0x10)
void var_48
int32_t* rax_6 = (*(*rcx_5 + 0x30))(rcx_5, &var_48)
int64_t* rbx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
var_c8_1.d = *rax_6
var_c8_1:4.d = rax_6[1]
void* rcx_8 = &rbx_7[1]
int32_t var_c0_2 = rax_6[2]
int64_t rax_8 = r12[2]
var_9c_1.d = 6

if (rcx_8 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_8 = &rbx_7[1]

*(arg1 + 0x30) = rcx_8
*rbx_7 = rax_8
void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_12[5]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_12[5]

*(arg1 + 0x30) = rax_9
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_12
*(arg1 + 8) = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142d549c8
rcx_12[2].d = 1
rcx_12[3] = rbx_7
rcx_12[4].d = 1
int64_t r14_4 = r12[2]
int64_t* r15_2 = *(r15_1 + 0x10)

if (data_143f0f19d == 0)
    int32_t i = 0
    int32_t var_50_1 = 1
    uint128_t var_88_1 = var_c8_1.o
    uint64_t var_58_1 = var_9c_1
    
    if (((0x20 - rdi_1) & not.d(rbx_1 << 0x1a s>> 0x1f)) != 0xffffffff)
        do
            void*** rbx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_35 = &rbx_22[0xc]
            
            if (rax_35 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x68)
                rbx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_35 = &rbx_22[0xc]
            
            *(arg1 + 0x30) = rax_35
            void**** rax_36 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_36 = rbx_22
            *(arg1 + 8) = &rbx_22[1]
            rbx_22[1] = 0
            *rbx_22 = &data_142da7788
            *(rbx_22 + 0x10) = var_88_1
            *(rbx_22 + 0x20) = var_bc_1:4.o
            *(rbx_22 + 0x30) = rax_4.o
            rbx_22[8] = var_58_1
            rbx_22[9].d = 1
            rbx_22[0xa] = r15_2
            rbx_22[0xb] = r14_4
            
            if ((*(*r15_2 + 8))(r15_2) == 0)
                int64_t* rcx_35 = rbx_22[0xa]
                
                if ((*(*rcx_35 + 0x10))(rcx_35) == 0)
                    int64_t* rcx_36 = rbx_22[0xa]
                    
                    if ((*(*rcx_36 + 0x18))(rcx_36) == 0)
                        int64_t* rcx_37 = rbx_22[0xa]
                        (*(*rcx_37 + 0x20))(rcx_37)
            
            int64_t* rcx_38 = rbx_22[0xb]
            
            if ((*(*rcx_38 + 8))(rcx_38) == 0)
                int64_t* rcx_39 = rbx_22[0xb]
                
                if ((*(*rcx_39 + 0x10))(rcx_39) == 0)
                    int64_t* rcx_40 = rbx_22[0xb]
                    
                    if ((*(*rcx_40 + 0x18))(rcx_40) == 0)
                        int64_t* rcx_41 = rbx_22[0xb]
                        (*(*rcx_41 + 0x20))(rcx_41)
            
            var_58_1.d += 1
            var_58_1:4.d += 1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_88_1.d)
            int32_t rax_55 = (temp3_1 - temp2_1) s>> 1
            
            if (rax_55 s<= 1)
                rax_55 = 1
            
            var_88_1.d = rax_55
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_88_1:4.d)
            int32_t rax_59 = (temp5_1 - temp4_1) s>> 1
            
            if (rax_59 s<= 1)
                rax_59 = 1
            
            i += 1
            var_88_1:4.d = rax_59
        while (i u< ((0x20 - rdi_1) & not.d(rbx_1 << 0x1a s>> 0x1f)) + 1)
        
        r12 = arg3
else
    void*** rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rbx_12[0xc]
    
    if (rax_12 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x68)
        rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rbx_12[0xc]
    
    *(arg1 + 0x30) = rax_12
    int64_t* rax_13 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_13 = rbx_12
    *(arg1 + 8) = &rbx_12[1]
    rbx_12[1] = 0
    *rbx_12 = &data_142da7788
    *(rbx_12 + 0x10) = var_c8_1.o
    *(rbx_12 + 0x20) = var_bc_1:4.o
    *(rbx_12 + 0x30) = rax_4.o
    rbx_12[8] = var_9c_1
    rbx_12[9].d = ((0x20 - rdi_1) & not.d(rbx_1 << 0x1a s>> 0x1f)) + 1
    rbx_12[0xa] = r15_2
    rbx_12[0xb] = r14_4
    
    if ((*(*r15_2 + 8))(r15_2) == 0)
        int64_t* rcx_18 = rbx_12[0xa]
        
        if ((*(*rcx_18 + 0x10))(rcx_18) == 0)
            int64_t* rcx_19 = rbx_12[0xa]
            
            if ((*(*rcx_19 + 0x18))(rcx_19) == 0)
                int64_t* rcx_20 = rbx_12[0xa]
                (*(*rcx_20 + 0x20))(rcx_20)
    
    int64_t* rcx_21 = rbx_12[0xb]
    
    if ((*(*rcx_21 + 8))(rcx_21) == 0)
        int64_t* rcx_22 = rbx_12[0xb]
        
        if ((*(*rcx_22 + 0x10))(rcx_22) == 0)
            int64_t* rcx_23 = rbx_12[0xb]
            
            if ((*(*rcx_23 + 0x18))(rcx_23) == 0)
                int64_t* rcx_24 = rbx_12[0xb]
                (*(*rcx_24 + 0x20))(rcx_24)

int64_t* rax_30 = r12[2]
int64_t** rbx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_25 = &rbx_17[1]

if (rcx_25 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_25 = &rbx_17[1]

*(arg1 + 0x30) = rcx_25
*rbx_17 = rax_30
void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_31 = &rcx_29[5]

if (rax_31 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_31 = &rcx_29[5]

*(arg1 + 0x30) = rax_31
void** rax_32 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_32 = rcx_29
*(arg1 + 8) = &rcx_29[1]
rcx_29[1] = 0
rcx_29[2].d = 1
rcx_29[3] = rbx_17
*rcx_29 = &data_142d549c8
rcx_29[4].d = 0
