// 函数: sub_141741af0
// 地址: 0x141741af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140b212b0(arg1 + 0x6c, 0xc, 0)
int32_t rax_1 = sub_140b212b0(arg1 + 0x60, 0xc, 0)
int32_t r14 = *(arg1 + 0x50)
int32_t r8_2 = (rax_1 - rax) ^ rax u>> 0xd
int32_t rbx = 0
int32_t rdx_2 = (0x9e3779b9 - r8_2 - rax) ^ r8_2 << 8
int32_t rdi_3 = (rax - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rdi_3) ^ rdi_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rdi_3) ^ r8_5 << 0x10
int32_t rdi_6 = (rdi_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rdi_6) ^ rdi_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rdi_6) ^ r8_8 << 0xa

if (r14 s> 0)
    rbx = sub_140b212b0(*(arg1 + 0x48), 0xc, 0)
    
    if (r14 s> 1)
        int64_t rsi_1 = 0xc
        uint64_t i_1 = zx.q(r14 - 1)
        uint64_t i
        
        do
            int32_t rax_15 = sub_140b212b0(*(arg1 + 0x48) + rsi_1, 0xc, 0)
            int32_t rbx_2 = (rbx - rax_15) ^ rax_15 u>> 0xd
            rsi_1 += 0xc
            int32_t r8_11 = (0x9e3779b9 - rbx_2 - rax_15) ^ rbx_2 << 8
            int32_t rbx_6 = (rax_15 - r8_11 - rbx_2) ^ r8_11 u>> 0xd
            int32_t rdx_13 = (rbx_2 - r8_11 - rbx_6) ^ rbx_6 u>> 0xc
            int32_t r8_14 = (r8_11 - rdx_13 - rbx_6) ^ rdx_13 << 0x10
            int32_t rbx_9 = (rbx_6 - r8_14 - rdx_13) ^ r8_14 u>> 5
            int32_t rdx_16 = (rdx_13 - r8_14 - rbx_9) ^ rbx_9 u>> 3
            int32_t r8_17 = (r8_14 - rdx_16 - rbx_9) ^ rdx_16 << 0xa
            rbx = (rbx_9 - r8_17 - rdx_16) ^ r8_17 u>> 0xf
            i = i_1
            i_1 -= 1
        while (i != 1)

char* rsi_2 = *(arg1 + 0x10)
int32_t rdi_11 = (((rdi_6 - rdx_8 - r8_8) ^ rdx_8 u>> 0xf) - rbx) ^ rbx u>> 0xd
int32_t rcx_15 = (0x9e3779b9 - rdi_11 - rbx) ^ rdi_11 << 8
int32_t rbx_14 = (rbx - rcx_15 - rdi_11) ^ rcx_15 u>> 0xd
int32_t rdi_14 = (rdi_11 - rcx_15 - rbx_14) ^ rbx_14 u>> 0xc
int32_t rcx_18 = (rcx_15 - rdi_14 - rbx_14) ^ rdi_14 << 0x10
int32_t rbx_17 = (rbx_14 - rcx_18 - rdi_14) ^ rcx_18 u>> 5
int32_t rdi_17 = (rdi_14 - rcx_18 - rbx_17) ^ rbx_17 u>> 3
int32_t rcx_21 = (rcx_18 - rdi_17 - rbx_17) ^ rdi_17 << 0xa
int32_t rbx_20 = (rbx_17 - rcx_21 - rdi_17) ^ rcx_21 u>> 0xf
void* rbp_1 = &rsi_2[sx.q(*(arg1 + 0x18)) * 0x18]

while (rsi_2 != rbp_1)
    int32_t rax_45 = sub_140b212b0(&rsi_2[0xc], 0xc, 0)
    int32_t r8_21 = (sub_140b212b0(rsi_2, 0xc, 0) - rax_45) ^ rax_45 u>> 0xd
    int32_t rdx_19 = (0x9e3779b9 - r8_21 - rax_45) ^ r8_21 << 8
    int32_t rdi_21 = (rax_45 - rdx_19 - r8_21) ^ rdx_19 u>> 0xd
    int32_t r8_24 = (r8_21 - rdx_19 - rdi_21) ^ rdi_21 u>> 0xc
    int32_t rdx_22 = (rdx_19 - r8_24 - rdi_21) ^ r8_24 << 0x10
    int32_t rdi_24 = (rdi_21 - rdx_22 - r8_24) ^ rdx_22 u>> 5
    int32_t r8_27 = (r8_24 - rdx_22 - rdi_24) ^ rdi_24 u>> 3
    int32_t rdx_25 = (rdx_22 - r8_27 - rdi_24) ^ r8_27 << 0xa
    int32_t rdi_27 = (rdi_24 - rdx_25 - r8_27) ^ rdx_25 u>> 0xf
    int32_t rbx_22 = (rbx_20 - rdi_27) ^ rdi_27 u>> 0xd
    int32_t rdx_29 = (0x9e3779b9 - rbx_22 - rdi_27) ^ rbx_22 << 8
    int32_t rbx_26 = (rdi_27 - rdx_29 - rbx_22) ^ rdx_29 u>> 0xd
    int32_t rcx_33 = (rbx_22 - rdx_29 - rbx_26) ^ rbx_26 u>> 0xc
    int32_t rdx_32 = (rdx_29 - rcx_33 - rbx_26) ^ rcx_33 << 0x10
    int32_t rbx_29 = (rbx_26 - rdx_32 - rcx_33) ^ rdx_32 u>> 5
    rsi_2 = &rsi_2[0x18]
    int32_t rcx_36 = (rcx_33 - rdx_32 - rbx_29) ^ rbx_29 u>> 3
    int32_t rdx_35 = (rdx_32 - rcx_36 - rbx_29) ^ rcx_36 << 0xa
    rbx_20 = (rbx_29 - rdx_35 - rcx_36) ^ rdx_35 u>> 0xf

return zx.q(rbx_20)
