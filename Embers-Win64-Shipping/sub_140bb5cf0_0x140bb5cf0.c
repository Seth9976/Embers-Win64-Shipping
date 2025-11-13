// 函数: sub_140bb5cf0
// 地址: 0x140bb5cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r11 = &arg1[7]
uint32_t r9_1 = (arg2 u>> 4).d
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r11 = rax_15

int32_t i = *(r11 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t rdx = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_19 = i_1 * 0x60
        
        if (*(rax_19 + rdx) == arg2)
            int64_t r8_9 = i_1 * 0x60
            int64_t rax_21 = sx.q(*(r8_9 + rdx + 0x5c)) & rbp_1
            void* rcx_11 = r11 + (rax_21 << 2)
            
            for (int32_t j = *(r11 + (rax_21 << 2)); j != 0xffffffff; j = *rcx_11)
                if (j == i)
                    *rcx_11 = *(r8_9 + rdx + 0x58)
                    break
                
                rcx_11 = sx.q(j) * 0x60 + 0x58 + rdx
            
            sub_14090a050(*arg1 + r8_9)
            rsi = 1
            sub_140bb6940(arg1, i, 1)
            break
        
        i = *(rax_19 + rdx + 0x58)
    while (i != 0xffffffff)

return zx.q(rsi)
