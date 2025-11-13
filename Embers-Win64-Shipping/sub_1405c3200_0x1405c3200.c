// 函数: sub_1405c3200
// 地址: 0x1405c3200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t r9 = arg2[1]
void* r11 = &arg1[7]
int32_t r10 = *arg2
int32_t r8_2 = (r10 - r9) ^ r9 u>> 0xd
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0
int32_t rdx_2 = (0x9e3779b9 - r8_2 - r9) ^ r8_2 << 8
int32_t rcx_3 = (r9 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rcx_3) ^ rcx_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rcx_3) ^ r8_5 << 0x10
int32_t rcx_6 = (rcx_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rcx_6) ^ rcx_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rcx_6) ^ r8_8 << 0xa
void* rax_17 = arg1[8]

if (rax_17 != 0)
    r11 = rax_17

int32_t i = *(r11 + (((sx.q(rcx_6 - rdx_8 - r8_8) ^ zx.q(rdx_8) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r8_9 = *arg1
    
    do
        int64_t rdx_10 = sx.q(i) << 6
        
        if (*(rdx_10 + r8_9) == r10 && *(rdx_10 + r8_9 + 4) == r9)
            int64_t rax_21 = sx.q(*(rdx_10 + r8_9 + 0x3c)) & rbp_1
            void* rcx_12 = r11 + (rax_21 << 2)
            
            for (int32_t j = *(r11 + (rax_21 << 2)); j != 0xffffffff; j = *rcx_12)
                if (j == i)
                    *rcx_12 = *(rdx_10 + r8_9 + 0x38)
                    break
                
                rcx_12 = (sx.q(j) << 6) + 0x38 + r8_9
            
            void* rsi_2 = *arg1 + rdx_10
            int64_t rcx_16 = *(rsi_2 + 0x28)
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            sub_140596e10(rsi_2 + 0x18)
            rsi = 1
            sub_1405c37b0(arg1, i, 1)
            break
        
        i = *(rdx_10 + r8_9 + 0x38)
    while (i != 0xffffffff)

return zx.q(rsi)
