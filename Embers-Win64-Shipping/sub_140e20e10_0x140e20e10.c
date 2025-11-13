// 函数: sub_140e20e10
// 地址: 0x140e20e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r10 = &arg1[7]
int64_t r11_1 = sx.q(arg1[9].d) - 1
uint32_t r9_1 = (arg2 u>> 4).d
int32_t rbp = 0
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

int32_t rdi = *(r10 + (((sx.q(rcx_5 - r8_7 - r9_7) ^ zx.q(r8_7) u>> 0xf) & r11_1) << 2))

if (rdi != 0xffffffff)
    void* r8_8 = *arg1
    int64_t rcx_11
    
    while (true)
        rcx_11 = sx.q(rdi)
        int64_t rax_19 = rcx_11 << 6
        
        if (*(rax_19 + r8_8) == arg2)
            break
        
        rdi = *(rax_19 + r8_8 + 0x38)
        
        if (rdi == 0xffffffff)
            return 0
    
    int64_t rcx_12 = rcx_11 << 6
    int64_t rax_22 = sx.q(*(rcx_12 + r8_8 + 0x3c)) & r11_1
    void* rdx = r10 + (rax_22 << 2)
    
    for (int32_t i = *(r10 + (rax_22 << 2)); i != 0xffffffff; i = *rdx)
        if (i == rdi)
            *rdx = *(rcx_12 + r8_8 + 0x38)
            break
        
        rdx = r8_8 + 0x38 + (sx.q(i) << 6)
    
    void* rbx_2 = *arg1 + rcx_12
    sub_140745b20(rbx_2 + 0x28)
    int64_t* rbx_3 = *(rbx_2 + 0x10)
    rbp = 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rsi_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_9 = *rbx_3
                (*(r8_9 + 8))(rbx_3, 1, r8_9)
    
    sub_1405c37b0(arg1, rdi, 1)

return zx.q(rbp)
