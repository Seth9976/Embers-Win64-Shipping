// 函数: sub_141e1ab70
// 地址: 0x141e1ab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x170) s<= 0)
    return &__return_addr

void* r15_1 = arg1 + 0x168
int64_t* rbx_1 = *r15_1
int128_t zmm6 = zx.o(0)
int64_t rax = sx.q(*(r15_1 + 8))
void* rdi_3 = &rbx_1[rax * 8]
int128_t zmm7

if (rbx_1 != rdi_3)
    do
        int128_t zmm2
        
        if (zmm6.d f== rbx_1[7].d)
            char rax_1 = *(rbx_1 + 0x19)
            
            if (rax_1 == 0)
                zmm2 = *(rbx_1 + 0x24)
            else
                uint32_t rcx_1 = zx.d(rax_1)
                
                if (rcx_1 == 1)
                    zmm2.d = (*(rbx_1 + 0x24)).d f+ *(rbx_1 + 0x1c)
                else if (rcx_1 != 2)
                    zmm2 = *(rbx_1 + 0x24)
                else
                    zmm2.d = (*(rbx_1 + 0x24)).d f* rbx_1[4].d
                    zmm2.d = zmm2.d f+ *(rbx_1 + 0x1c)
        else
            sub_141e18190(rbx_1)
            zmm2 = rbx_1[7].d
        
        zmm6, zmm7 = sub_141e2b920(rbx_1, arg1, zmm2, 0)
        rbx_1 = &rbx_1[8]
    while (rbx_1 != rdi_3)
    
    rax = zx.q(*(arg1 + 0x170))

void* rsi_1 = *r15_1
void* r13_3 = (sx.q(rax.d) << 6) + rsi_1

if (rsi_1 != r13_3)
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm10
    int128_t var_78_1 = zmm10
    
    do
        int64_t rdi_4 = sx.q(*(arg1 + 0x88))
        int128_t zmm0 = data_143246240
        char r15_2 = *(rsi_1 + 0x19)
        zmm8 = *(rsi_1 + 0x1c)
        zmm10 = *(rsi_1 + 0x20)
        zmm6 = *(rsi_1 + 0x24)
        int64_t rbx_2 = *(rsi_1 + 0x30)
        zmm7 = *(rsi_1 + 0x3c)
        void** const var_138 = &data_14323d4b8
        int32_t rax_2 = (rdi_4 + 1).d
        int128_t var_108_1 = zmm0
        int64_t var_130_1 = 0
        int32_t var_128_1 = 0
        int32_t var_124_1 = 0xffffffff
        int16_t var_120_1 = 0
        int64_t var_11c
        __builtin_memset(&var_11c, 0, 0x14)
        int64_t var_f8
        __builtin_memset(&var_f8, 0, 0x1c)
        void** const var_d8_1 = &data_142e0b890
        int64_t var_d0_1 = 0
        int32_t var_c8_1 = 0
        int32_t var_c4_1 = 0xffffffff
        int16_t var_c0_1 = 0
        int64_t var_bc
        __builtin_memset(&var_bc, 0, 0x16)
        int32_t var_a4_1 = 0x3f800000
        char var_a0_1 = 0
        int32_t var_9c_1 = 0
        int16_t var_98_1 = 1
        int64_t var_94
        __builtin_memset(&var_94, 0, 0x14)
        *(arg1 + 0x88) = rax_2
        
        if (rax_2 s> *(arg1 + 0x8c))
            sub_14092f900(arg1 + 0x80)
        
        int64_t rdi_5 = rdi_4 * 0xb8
        sub_141df22d0(*(arg1 + 0x80) + rdi_5, &var_138)
        void* rdi_6 = rdi_5 + *(arg1 + 0x80)
        *(rdi_6 + 0x40) = rbx_2
        
        if (r15_2 != 0)
            uint32_t rcx_7 = zx.d(r15_2)
            
            if (rcx_7 == 1)
                zmm6.d = zmm6.d f+ zmm8.d
            else if (rcx_7 == 2)
                zmm6.d = zmm6.d f* zmm10.d
                zmm6.d = zmm6.d f+ zmm8.d
        
        zmm7.d = zmm7.d f+ zmm6.d
        sub_141e2b920(rdi_6, arg1, zmm7, 0)
        *(rdi_6 + 0x90) = 0x101
        rsi_1 += 0x40
        *(rdi_6 + 0x48) = 0
        *(rdi_6 + 0x50) = 0
    while (rsi_1 != r13_3)
    
    rax = zx.q(*(arg1 + 0x170))
    r15_1 = arg1 + 0x168

void*** rdx_5 = *r15_1

if (rax.d != 0)
    int32_t i
    
    do
        *rdx_5 = &data_142e0b890
        rdx_5 = &rdx_5[8]
        i = rax.d
        rax = zx.q(rax.d - 1)
    while (i != 1)

bool cond:1_1 = *(r15_1 + 0xc) == 0
*(r15_1 + 8) = 0

if (not(cond:1_1))
    sub_1405a52a0(r15_1, 0)

return sub_141e2f220(arg1)
