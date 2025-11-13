// 函数: sub_141b2ef70
// 地址: 0x141b2ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t r11 = arg2[1]
int32_t rbx = *arg2
int32_t r8_2 = (rbx - r11) ^ r11 u>> 0xd
void* rsi = &arg1[7]
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t rdi = 0
int32_t rdx_2 = (0x9e3779b9 - r8_2 - r11) ^ r8_2 << 8
int32_t rcx_3 = (r11 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rcx_3) ^ rcx_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rcx_3) ^ r8_5 << 0x10
int32_t rcx_6 = (rcx_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rcx_6) ^ rcx_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rcx_6) ^ r8_8 << 0xa
void* rax_17 = arg1[8]

if (rax_17 != 0)
    rsi = rax_17

int32_t i = *(rsi + (((sx.q(rcx_6 - rdx_8 - r8_8) ^ zx.q(rdx_8) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r8_9 = *arg1
    
    do
        int64_t rcx_12 = sx.q(i) * 3
        void* rdx_9 = r8_9 + (rcx_12 << 3)
        
        if (*(r8_9 + (rcx_12 << 3)) == rbx && *(rdx_9 + 4) == r11)
            int64_t rax_22 = sx.q(*(rdx_9 + 0x14)) & rbp_1
            void* rcx_13 = rsi + (rax_22 << 2)
            int32_t j = *(rsi + (rax_22 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_13 = *(rdx_9 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                j = *(r8_9 + ((j_1 * 3 + 2) << 3))
                rcx_13 = r8_9 + ((j_1 * 3 + 2) << 3)
            
            rdi = 1
            sub_1405c3640(arg1, i, 1)
            break
        
        i = *(rdx_9 + 0x10)
    while (i != 0xffffffff)

return zx.q(rdi)
