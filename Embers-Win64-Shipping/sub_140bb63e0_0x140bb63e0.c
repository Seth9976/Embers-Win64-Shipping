// 函数: sub_140bb63e0
// 地址: 0x140bb63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t r11 = *(arg2 + 0xc)
int32_t rbx_1 = arg2[1].d
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0
int64_t rdi = *arg2
uint32_t r9_1 = (rdi u>> 4).d
void* r14 = &arg1[7]
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rdx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rdx_2) ^ r9_4 << 0x10
int32_t rdx_5 = (rdx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rdx_5) ^ r9_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r14 = rax_15

int32_t i = *(r14 +
    (((sx.q((r11 << 0xe ^ rbx_1) << 0xd ^ r8_7 u>> 0xf) ^ sx.q(rdx_5 - r8_7 - r9_7)) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r8_8 = *arg1
    
    do
        int64_t rcx_8 = sx.q(i) * 3
        
        if (*(r8_8 + (rcx_8 << 3)) == rdi && *(r8_8 + (rcx_8 << 3) + 8) == rbx_1
                && *(r8_8 + (rcx_8 << 3) + 0xc) == r11)
            int64_t rax_21 = sx.q(*(r8_8 + (rcx_8 << 3) + 0x14)) & rbp_1
            void* rdx_8 = r14 + (rax_21 << 2)
            int32_t j = *(r14 + (rax_21 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rdx_8 = *(r8_8 + (rcx_8 << 3) + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_10 = j_1 + ((j_1 + 1) << 1)
                j = *(r8_8 + (rdx_10 << 3))
                rdx_8 = r8_8 + (rdx_10 << 3)
            
            rsi = 1
            sub_1405c3640(arg1, i, 1)
            break
        
        i = *(r8_8 + (rcx_8 << 3) + 0x10)
    while (i != 0xffffffff)

return zx.q(rsi)
