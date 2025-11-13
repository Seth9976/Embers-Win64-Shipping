// 函数: sub_142691f60
// 地址: 0x142691f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r11 = &arg1[7]
uint32_t r10_1 = (arg2 u>> 0x20).d
int64_t rbp_1 = sx.q(arg1[9].d) - 1
int32_t r9_2 = (arg2.d - r10_1) ^ r10_1 u>> 0xd
int32_t rsi = 0
int32_t r8_2 = (0x9e3779b9 - r10_1 - r9_2) ^ r9_2 << 8
int32_t rcx_3 = (r10_1 - r8_2 - r9_2) ^ r8_2 u>> 0xd
int32_t r9_5 = (r9_2 - r8_2 - rcx_3) ^ rcx_3 u>> 0xc
int32_t r8_5 = (r8_2 - r9_5 - rcx_3) ^ r9_5 << 0x10
int32_t rcx_6 = (rcx_3 - r8_5 - r9_5) ^ r8_5 u>> 5
int32_t r9_8 = (r9_5 - r8_5 - rcx_6) ^ rcx_6 u>> 3
int32_t r8_8 = (r8_5 - r9_8 - rcx_6) ^ r9_8 << 0xa
void* rax_17 = arg1[8]

if (rax_17 != 0)
    r11 = rax_17

int32_t i = *(r11 + (((sx.q(rcx_6 - r8_8 - r9_8) ^ zx.q(r8_8) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    void* r9_9 = *arg1
    
    do
        int64_t* rcx_13 = sx.q(i) << 5
        int64_t rax_20 = *(rcx_13 + r9_9)
        void* r8_9 = rcx_13 + r9_9
        
        if (rax_20.d == arg2.d && (rax_20 u>> 0x20).d == r10_1)
            int64_t rax_23 = sx.q(*(r8_9 + 0x1c)) & rbp_1
            void* rdx = r11 + (rax_23 << 2)
            
            for (int32_t j = *(r11 + (rax_23 << 2)); j != 0xffffffff; j = *rdx)
                if (j == i)
                    *rdx = *(r8_9 + 0x18)
                    break
                
                rdx = r9_9 + 0x18 + (sx.q(j) << 5)
            
            sub_142671860(rcx_13 + *arg1 + 8)
            rsi = 1
            sub_1405c36f0(arg1, i, 1)
            break
        
        i = *(r8_9 + 0x18)
    while (i != 0xffffffff)

return zx.q(rsi)
