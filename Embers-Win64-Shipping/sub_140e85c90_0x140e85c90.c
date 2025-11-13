// 函数: sub_140e85c90
// 地址: 0x140e85c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t r9 = *arg2
void* r10 = &arg1[7]
uint32_t r8_1 = (r9 u>> 4).d
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rdx_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t rsi = 0
int32_t rcx_2 = neg.d(rdx_1 + r8_1) ^ rdx_1 u>> 0xd
int32_t r8_4 = (r8_1 - rdx_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t rdx_4 = (rdx_1 - r8_4 - rcx_2) ^ r8_4 << 0x10
int32_t rcx_5 = (rcx_2 - rdx_4 - r8_4) ^ rdx_4 u>> 5
int32_t r8_7 = (r8_4 - rdx_4 - rcx_5) ^ rcx_5 u>> 3
int32_t rdx_7 = (rdx_4 - r8_7 - rcx_5) ^ r8_7 << 0xa
void* rax_15 = arg1[8]

if (rax_15 != 0)
    r10 = rax_15

int32_t rbx = *(r10 + (((sx.q(rcx_5 - rdx_7 - r8_7) ^ zx.q(rdx_7) u>> 0xf) & r11_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx_8 = *arg1
    int64_t rcx_11
    
    while (true)
        rcx_11 = sx.q(rbx)
        int64_t rax_18 = rcx_11 * 5
        
        if (*(rdx_8 + (rax_18 << 3)) == r9)
            break
        
        rbx = *(rdx_8 + (rax_18 << 3) + 0x20)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r9_1 = rcx_11 * 0x28
    int64_t rax_22 = sx.q(*(r9_1 + rdx_8 + 0x24)) & r11_1
    void* rcx_12 = r10 + (rax_22 << 2)
    int32_t i = *(r10 + (rax_22 << 2))
    
    while (i != 0xffffffff)
        if (i == rbx)
            *rcx_12 = *(r9_1 + rdx_8 + 0x20)
            break
        
        int64_t i_1 = sx.q(i)
        i = *(rdx_8 + ((i_1 * 5 + 4) << 3))
        rcx_12 = rdx_8 + ((i_1 * 5 + 4) << 3)
    
    sub_140e53610(*arg1 + r9_1)
    rsi = 1
    sub_1405c3590(arg1, rbx, 1)

return zx.q(rsi)
