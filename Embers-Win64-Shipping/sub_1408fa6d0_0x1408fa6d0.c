// 函数: sub_1408fa6d0
// 地址: 0x1408fa6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r10 = &arg1[7]
int64_t r11_1 = sx.q(arg1[9].d) - 1
uint32_t r9_1 = (arg2 u>> 4).d
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
    r10 = rax_15

int32_t rbx = *(r10 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & r11_1) << 2))

if (rbx != 0xffffffff)
    void* r8_8 = *arg1
    int64_t rcx_11
    
    while (true)
        rcx_11 = sx.q(rbx)
        int64_t rax_19 = rcx_11 << 5
        
        if (*(rax_19 + r8_8) == arg2)
            break
        
        rbx = *(rax_19 + r8_8 + 0x18)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t rcx_12 = rcx_11 << 5
    int64_t rax_22 = sx.q(*(rcx_12 + r8_8 + 0x1c)) & r11_1
    void* rdx = r10 + (rax_22 << 2)
    
    for (int32_t i = *(r10 + (rax_22 << 2)); i != 0xffffffff; i = *rdx)
        if (i == rbx)
            *rdx = *(rcx_12 + r8_8 + 0x18)
            break
        
        rdx = r8_8 + 0x18 + (sx.q(i) << 5)
    
    int64_t rcx_13 = *(rcx_12 + *arg1 + 8)
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    rsi = 1
    sub_1405c36f0(arg1, rbx, 1)

return zx.q(rsi)
