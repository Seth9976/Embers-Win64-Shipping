// 函数: sub_141c44d40
// 地址: 0x141c44d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t r11 = arg2[1]
int32_t rbx_1 = arg2[2]
int32_t rdi = *arg2
int32_t r8_2 = (rdi - r11) ^ r11 u>> 0xd
int32_t rcx_2 = (0x9e3779b9 - r8_2 - r11) ^ r8_2 << 8
int32_t rdx_3 = (r11 - rcx_2 - r8_2) ^ rcx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rcx_2 - rdx_3) ^ rdx_3 u>> 0xc
int32_t rcx_5 = (rcx_2 - r8_5 - rdx_3) ^ r8_5 << 0x10
int32_t rdx_6 = (rdx_3 - rcx_5 - r8_5) ^ rcx_5 u>> 5
int32_t r8_8 = (r8_5 - rcx_5 - rdx_6) ^ rdx_6 u>> 3
int32_t rcx_8 = (rcx_5 - r8_8 - rdx_6) ^ r8_8 << 0xa
int32_t rdx_11 = (((rdx_6 - rcx_8 - r8_8) ^ rcx_8 u>> 0xf) - rbx_1) ^ rbx_1 u>> 0xd
int32_t r9_2 = (0x9e3779b9 - rdx_11 - rbx_1) ^ rdx_11 << 8
int32_t rcx_13 = (rbx_1 - r9_2 - rdx_11) ^ r9_2 u>> 0xd
int32_t rdx_14 = (rdx_11 - r9_2 - rcx_13) ^ rcx_13 u>> 0xc
int32_t r9_5 = (r9_2 - rdx_14 - rcx_13) ^ rdx_14 << 0x10
void* r14 = &arg1[7]
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t rcx_16 = (rcx_13 - r9_5 - rdx_14) ^ r9_5 u>> 5
int32_t rsi = 0
int32_t rdx_17 = (rdx_14 - r9_5 - rcx_16) ^ rcx_16 u>> 3
int32_t r9_8 = (r9_5 - rdx_17 - rcx_16) ^ rdx_17 << 0xa
void* rax_33 = arg1[8]

if (rax_33 != 0)
    r14 = rax_33

int32_t i = *(r14 + (((sx.q(rcx_16 - r9_8 - rdx_17) ^ zx.q(r9_8) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r8_9 = *arg1
    int32_t i_1 = i
    
    do
        int64_t rcx_22 = sx.q(i_1) * 3
        
        if (*(r8_9 + (rcx_22 << 3)) == rdi && *(r8_9 + (rcx_22 << 3) + 4) == r11
                && *(r8_9 + (rcx_22 << 3) + 8) == rbx_1)
            int64_t r9_9 = sx.q(i) * 3
            int64_t rax_39 = sx.q(*(r8_9 + (r9_9 << 3) + 0x14)) & rbp_1
            void* rcx_23 = r14 + (rax_39 << 2)
            int32_t j = *(r14 + (rax_39 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_23 = *(r8_9 + (r9_9 << 3) + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rcx_25 = j_1 + ((j_1 + 1) << 1)
                j = *(r8_9 + (rcx_25 << 3))
                rcx_23 = r8_9 + (rcx_25 << 3)
            
            rsi = 1
            sub_1405c3640(arg1, i, 1)
            break
        
        i = *(r8_9 + (rcx_22 << 3) + 0x10)
        i_1 = i
    while (i != 0xffffffff)

return zx.q(rsi)
