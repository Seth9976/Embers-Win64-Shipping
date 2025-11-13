// 函数: sub_141a60ef0
// 地址: 0x141a60ef0
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
    void* r8_1 = *arg1
    
    do
        int32_t* rcx_5 = sx.q(i) << 5
        
        if (*(rcx_5 + r8_1 + 4) == r11 && *(rcx_5 + r8_1) == r10.d && *(rcx_5 + r8_1 + 8) == r9.d)
            int64_t rax_5 = sx.q(*(rcx_5 + r8_1 + 0x1c)) & rbp_1
            void* rdx = r14 + (rax_5 << 2)
            
            for (int32_t j = *(r14 + (rax_5 << 2)); j != 0xffffffff; j = *rdx)
                if (j == i)
                    *rdx = *(rcx_5 + r8_1 + 0x18)
                    break
                
                rdx = r8_1 + 0x18 + (sx.q(j) << 5)
            
            rsi = 1
            int64_t* rcx_6 = *(rcx_5 + *arg1 + 0x10)
            
            if (rcx_6 != 0)
                int64_t r8_2 = *rcx_6
                (*r8_2)(rcx_6, 1, r8_2)
            
            sub_1405c36f0(arg1, i, 1)
            break
        
        i = *(rcx_5 + r8_1 + 0x18)
    while (i != 0xffffffff)

return zx.q(rsi)
