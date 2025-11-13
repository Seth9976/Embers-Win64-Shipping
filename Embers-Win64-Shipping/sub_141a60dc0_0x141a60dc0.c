// 函数: sub_141a60dc0
// 地址: 0x141a60dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int32_t r11 = arg2[1]
int64_t r10 = sx.q(*arg2)
int64_t r9 = sx.q(arg2[2])
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0
void* r14 = &arg1[7]

if (rax_1 != 0)
    r14 = rax_1

int32_t i = *(r14 + (((sx.q(not.d(r11)) ^ r10 ^ r9) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t rdx = *arg1
    
    do
        int64_t r8_1 = sx.q(i) * 0x48
        
        if (*(r8_1 + rdx + 4) == r11 && *(r8_1 + rdx) == r10.d && *(r8_1 + rdx + 8) == r9.d)
            int64_t rax_6 = sx.q(*(r8_1 + rdx + 0x44)) & rbp_1
            void* rcx_5 = r14 + (rax_6 << 2)
            int32_t j = *(r14 + (rax_6 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_5 = *(r8_1 + rdx + 0x40)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rcx_7 = j_1 + ((j_1 + 1) << 3)
                j = *(rdx + (rcx_7 << 3))
                rcx_5 = rdx + (rcx_7 << 3)
            
            int64_t rcx_8 = *(r8_1 + *arg1 + 0x30)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rsi = 1
            sub_1407c2d20(arg1, i, 1)
            break
        
        i = *(r8_1 + rdx + 0x40)
    while (i != 0xffffffff)

return zx.q(rsi)
