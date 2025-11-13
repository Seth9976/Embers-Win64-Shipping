// 函数: sub_140868df0
// 地址: 0x140868df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
int16_t r8 = arg2[2].w
int32_t r14 = 0
int32_t r15 = (rbx u>> 0x20).d + rax_1
int64_t rdx

if (r8 != 3)
    rdx = 0
else
    rdx = arg2[1]

uint32_t rdx_1 = (rdx u>> 4).d
int32_t rcx_2 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t rbx_4 = neg.d(rcx_2 + rdx_1) ^ rcx_2 u>> 0xd
int32_t rdx_4 = (rdx_1 - rcx_2 - rbx_4) ^ rbx_4 u>> 0xc
int32_t rcx_5 = (rcx_2 - rdx_4 - rbx_4) ^ rdx_4 << 0x10
int32_t rbx_7 = (rbx_4 - rcx_5 - rdx_4) ^ rcx_5 u>> 5
int32_t rdx_7 = (rdx_4 - rcx_5 - rbx_7) ^ rbx_7 u>> 3
int32_t rcx_8 = (rcx_5 - rdx_7 - rbx_7) ^ rdx_7 << 0xa
int32_t rbx_10 = (rbx_7 - rcx_8 - rdx_7) ^ rcx_8 u>> 0xf
void* const rbp

if (r8 != 3)
    rbp = arg2[1]
    void* rax_16
    int64_t rax_17
    void* rdx_8
    
    if (rbp != 0)
        rax_16 = sub_140be01c0()
        rdx_8 = *(rbp + 0x10)
        rax_17 = sx.q(*(rax_16 + 0x38))
    
    if (rbp == 0 || rax_17.d s> *(rdx_8 + 0x38)
            || *(*(rdx_8 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
        rbp = nullptr
else
    rbp = data_143ce3880

uint32_t rbp_1 = (rbp u>> 4).d
int32_t rcx_12 = (0x9e3779b9 - rbp_1) ^ rbp_1 << 8
int32_t rdx_11 = neg.d(rcx_12 + rbp_1) ^ rcx_12 u>> 0xd
int32_t rbp_4 = (rbp_1 - rcx_12 - rdx_11) ^ rdx_11 u>> 0xc
int32_t rcx_15 = (rcx_12 - rbp_4 - rdx_11) ^ rbp_4 << 0x10
int32_t rdx_14 = (rdx_11 - rcx_15 - rbp_4) ^ rcx_15 u>> 5
int32_t rbp_7 = (rbp_4 - rcx_15 - rdx_14) ^ rdx_14 u>> 3
int32_t rcx_18 = (rcx_15 - rbp_7 - rdx_14) ^ rbp_7 << 0xa
int32_t rdx_19 = (((rdx_14 - rcx_18 - rbp_7) ^ rcx_18 u>> 0xf) - rbx_10) ^ rbx_10 u>> 0xd
int32_t rcx_22 = (0x9e3779b9 - rbx_10 - rdx_19) ^ rdx_19 << 8
int32_t rbx_13 = (rbx_10 - rcx_22 - rdx_19) ^ rcx_22 u>> 0xd
int32_t rdx_22 = (rdx_19 - rcx_22 - rbx_13) ^ rbx_13 u>> 0xc
int32_t rcx_25 = (rcx_22 - rdx_22 - rbx_13) ^ rdx_22 << 0x10
int32_t rbx_16 = (rbx_13 - rcx_25 - rdx_22) ^ rcx_25 u>> 5
int32_t rdx_25 = (rdx_22 - rcx_25 - rbx_16) ^ rbx_16 u>> 3
int32_t rcx_28 = (rcx_25 - rdx_25 - rbx_16) ^ rdx_25 << 0xa
void* r10 = &arg1[7]
void* rcx_30 = arg1[8]
int32_t rbx_21 = (((rbx_16 - rcx_28 - rdx_25) ^ rcx_28 u>> 0xf) - r15) ^ r15 u>> 0xd
int32_t r12_2 = (0x9e3779b9 - rbx_21 - r15) ^ rbx_21 << 8
int32_t r15_3 = (r15 - r12_2 - rbx_21) ^ r12_2 u>> 0xd
int32_t rbx_24 = (rbx_21 - r12_2 - r15_3) ^ r15_3 u>> 0xc
int32_t r12_5 = (r12_2 - rbx_24 - r15_3) ^ rbx_24 << 0x10
int32_t r15_6 = (r15_3 - r12_5 - rbx_24) ^ r12_5 u>> 5
int32_t rbx_27 = (rbx_24 - r12_5 - r15_6) ^ r15_6 u>> 3
int32_t r12_8 = (r12_5 - rbx_27 - r15_6) ^ rbx_27 << 0xa
int64_t r11 = sx.q(arg1[9].d - 1)

if (rcx_30 != 0)
    r10 = rcx_30

uint64_t rcx_33 = (sx.q(r15_6 - r12_8 - rbx_27) ^ zx.q(r12_8) u>> 0xf) & r11
int32_t rax_69 = *(r10 + (rcx_33 << 2))
void* r8_2 = r10 + (rcx_33 << 2)

if (rax_69 != 0xffffffff)
    int64_t rdx_26 = *arg1
    
    while (true)
        int64_t* rax_72 = sx.q(rax_69) * 0x58 + rdx_26
        
        if (*rax_72 == *arg2)
            if (rax_72[1] != arg2[1] || rax_72[2].w != arg2[2].w)
                rcx_33.b = 0
            else
                rcx_33.b = 1
        
        if (*rax_72 != *arg2 || rcx_33.b == 0)
            rcx_33.b = 0
        else
            rcx_33.b = 1
        
        if (rcx_33.b != 0)
            break
        
        r8_2 = &rax_72[0xa]
        rax_69 = rax_72[0xa].d
        
        if (rax_69 == 0xffffffff)
            return 0
    
    int64_t rbx_28 = sx.q(*r8_2)
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r8_3 = rbx_28 * 0x58
        int64_t rax_76 = sx.q(*(r8_3 + rdx_26 + 0x54)) & r11
        void* rcx_34 = r10 + (rax_76 << 2)
        
        for (int32_t i = *(r10 + (rax_76 << 2)); i != 0xffffffff; i = *rcx_34)
            if (i == rbx_28.d)
                *rcx_34 = *(r8_3 + rdx_26 + 0x50)
                break
            
            rcx_34 = sx.q(i) * 0x58 + 0x50 + rdx_26
    
    void* rdi_2 = rbx_28 * 0x58 + *arg1
    int64_t rcx_37 = *(rdi_2 + 0x40)
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    int64_t rcx_38 = *(rdi_2 + 0x18)
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    sub_140869170(arg1, rbx_28.d, 1)
    r14 = 1

return zx.q(r14)
