// 函数: sub_141dd41f0
// 地址: 0x141dd41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x62] == arg1[0x6b])
    return 0

void* r11 = &arg1[0x6c]
uint32_t r9_1 = (arg2 u>> 4).d
int64_t rbp_1 = sx.q(arg1[0x70]) - 1
int32_t rsi = 0
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
void* rax_15 = *(arg1 + 0x1b8)

if (rax_15 != 0)
    r11 = rax_15

int32_t i = *(r11 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    int32_t* rax_18 = *(arg1 + 0x180)
    int32_t* rdx = arg1
    
    if (rax_18 != 0)
        rdx = rax_18
    
    do
        int64_t i_1 = sx.q(i)
        
        if (*(i_1 * 0x60 + rdx) == arg2)
            int64_t rax_22 = sx.q(rdx[i_1 * 0x18 + 0x17]) & rbp_1
            void* rcx_11 = r11 + (rax_22 << 2)
            
            for (int32_t j = *(r11 + (rax_22 << 2)); j != 0xffffffff; j = *rcx_11)
                if (j == i)
                    *rcx_11 = rdx[i_1 * 0x18 + 0x16]
                    break
                
                rcx_11 = sx.q(j) * 0x60 + 0x58 + rdx
            
            int32_t* rax_25 = *(arg1 + 0x180)
            int32_t* rcx_15 = arg1
            
            if (rax_25 != 0)
                rcx_15 = rax_25
            
            sub_1405ae080(&rcx_15[2 + i_1 * 0x18])
            rsi = 1
            sub_141dd4580(arg1, i, 1)
            break
        
        i = rdx[i_1 * 0x18 + 0x16]
    while (i != 0xffffffff)

return zx.q(rsi)
