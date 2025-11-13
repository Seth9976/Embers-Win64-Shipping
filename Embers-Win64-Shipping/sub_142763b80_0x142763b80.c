// 函数: sub_142763b80
// 地址: 0x142763b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
char* rax = *(r8 + 0x10)
char r10 = *rax
*(r8 + 0x10) = &rax[1]
void* r8_1 = *arg2
char arg_1c = r10
int16_t* rax_2 = *(r8_1 + 0x10)
int16_t r11 = *rax_2
*(r8_1 + 0x10) = &rax_2[1]
void* rcx = *arg2
int16_t arg_1a = r11
int16_t* rax_4 = *(rcx + 0x10)
int16_t r9 = *rax_4
*(rcx + 0x10) = &rax_4[1]
int16_t arg_18 = r9

if (r9 != *(arg1 + 4))
    void* rax_5
    rax_5.b = 0
    return rax_5

void* rdx = *arg2
uint32_t r8_2 = zx.d(r11)
int16_t* rax_6 = *(rdx + 0x10)
int16_t rcx_1 = *rax_6
*(rdx + 0x10) = &rax_6[1]
void* rdx_1 = *arg2
uint32_t rdi_1 = zx.d(r10)
int16_t* rax_8 = *(rdx_1 + 0x10)
int16_t rcx_2 = *rax_8
*(rdx_1 + 0x10) = &rax_8[1]
int16_t arg_a = rcx_2
uint32_t rdx_4 = (zx.d(r9) - r8_2) ^ r8_2 u>> 0xd
int32_t rcx_5 = (0x9e3779b9 - rdx_4 - r8_2) ^ rdx_4 << 8
int32_t r8_5 = (r8_2 - rcx_5 - rdx_4) ^ rcx_5 u>> 0xd
int32_t rdx_7 = (rdx_4 - rcx_5 - r8_5) ^ r8_5 u>> 0xc
int32_t rcx_8 = (rcx_5 - rdx_7 - r8_5) ^ rdx_7 << 0x10
int32_t r8_8 = (r8_5 - rcx_8 - rdx_7) ^ rcx_8 u>> 5
int32_t rdx_10 = (rdx_7 - rcx_8 - r8_8) ^ r8_8 u>> 3
int32_t rcx_11 = (rcx_8 - rdx_10 - r8_8) ^ rdx_10 << 0xa
int32_t r8_11 = (r8_8 - rcx_11 - rdx_10) ^ rcx_11 u>> 0xf
int32_t rcx_14 = r8_11 - rdi_1
int32_t rdx_15 = (0 - r8_11 - 0x61c88647) ^ rcx_14 << 8
int32_t rdi_4 = (rdi_1 - rdx_15 - rcx_14) ^ rdx_15 u>> 0xd
int32_t rcx_17 = (rcx_14 - rdx_15 - rdi_4) ^ rdi_4 u>> 0xc
int32_t rdx_18 = (rdx_15 - rcx_17 - rdi_4) ^ rcx_17 << 0x10
int32_t rdi_7 = (rdi_4 - rdx_18 - rcx_17) ^ rdx_18 u>> 5
int32_t rcx_20 = (rcx_17 - rdx_18 - rdi_7) ^ rdi_7 u>> 3
int32_t rdx_21 = (rdx_18 - rcx_20 - rdi_7) ^ rcx_20 << 0xa
int32_t rdi_10 = (rdi_7 - rdx_21 - rcx_20) ^ rdx_21 u>> 0xf
void* rbx_2

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_142763d85:
    rbx_2 = sub_14274a750(arg1 + 8, rdi_10, &arg_18)
else
    void* rcx_21 = *(arg1 + 0x48)
    void* r8_12 = arg1 + 0x40
    
    if (rcx_21 != 0)
        r8_12 = rcx_21
    
    int32_t rax_42 = *(r8_12 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rdi_10)) << 2))
    
    if (rax_42 == 0xffffffff)
    label_142763d85_1:
        rbx_2 = sub_14274a750(arg1 + 8, rdi_10, &arg_18)
    else
        int32_t* rcx_24
        
        while (true)
            rcx_24 = (sx.q(rax_42) << 5) + *(arg1 + 8)
            int32_t rdx_26 = *rcx_24
            int16_t rdx_27 = rcx_24[1].w
            int16_t arg_14 = rdx_27
            
            if (rdx_26.w == r9 && rdx_26:2.w == r11 && rdx_27.b == r10)
                break
            
            rax_42 = rcx_24[6]
            
            if (rax_42 == 0xffffffff)
                goto label_142763d85_2
        
        if (rax_42 == 0xffffffff || rcx_24 == 0)
        label_142763d85_2:
            rbx_2 = sub_14274a750(arg1 + 8, rdi_10, &arg_18)
        else
            rbx_2 = &rcx_24[2]

int64_t rdi_11 = sx.q(*(rbx_2 + 8))
int32_t rcx_26 = (rdi_11 + 1).d
*(rbx_2 + 8) = rcx_26

if (rcx_26 s> *(rbx_2 + 0xc))
    sub_1405a4cf0(rbx_2)

*(*rbx_2 + (rdi_11 << 2)) = rcx_1.d
int32_t rax_44
rax_44.b = 1
return rax_44
