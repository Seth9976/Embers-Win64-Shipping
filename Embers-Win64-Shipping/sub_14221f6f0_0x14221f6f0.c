// 函数: sub_14221f6f0
// 地址: 0x14221f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t r9 = *arg2
void* r11 = &arg1[7]
uint32_t r8_1 = (r9 u>> 4).d
int64_t rdi_1 = sx.q(arg1[9].d) - 1
int32_t rdx_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t rbx = 0
int32_t rcx_2 = neg.d(rdx_1 + r8_1) ^ rdx_1 u>> 0xd
int32_t r8_4 = (r8_1 - rdx_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t rdx_4 = (rdx_1 - r8_4 - rcx_2) ^ r8_4 << 0x10
int32_t rcx_5 = (rcx_2 - rdx_4 - r8_4) ^ rdx_4 u>> 5
int32_t r8_7 = (r8_4 - rdx_4 - rcx_5) ^ rcx_5 u>> 3
int32_t rdx_7 = (rdx_4 - r8_7 - rcx_5) ^ r8_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r11 = rax_15

int32_t rdx_8 = *(r11 + (((sx.q(rcx_5 - rdx_7 - r8_7) ^ zx.q(rdx_7) u>> 0xf) & rdi_1) << 2))

if (rdx_8 != 0xffffffff)
    int64_t r8_8 = *arg1
    int64_t rcx_11
    
    while (true)
        rcx_11 = sx.q(rdx_8)
        int64_t rax_19 = rcx_11 * 0x60
        
        if (*(rax_19 + r8_8) == r9)
            break
        
        rdx_8 = *(rax_19 + r8_8 + 0x50)
        
        if (rdx_8 == 0xffffffff)
            return 0
    
    int64_t r9_2 = rcx_11 * 0x60
    int64_t rax_22 = sx.q(*(r9_2 + r8_8 + 0x54)) & rdi_1
    void* rcx_12 = r11 + (rax_22 << 2)
    
    for (int32_t i = *(r11 + (rax_22 << 2)); i != 0xffffffff; i = *rcx_12)
        if (i == rdx_8)
            *rcx_12 = *(r9_2 + r8_8 + 0x50)
            break
        
        rcx_12 = sx.q(i) * 0x60 + 0x50 + r8_8
    
    rbx = 1
    sub_140bb6940(arg1, rdx_8, 1)

return zx.q(rbx)
