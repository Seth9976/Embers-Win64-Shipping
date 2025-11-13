// 函数: sub_140d85620
// 地址: 0x140d85620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t r9 = *arg2
void* r10 = &arg1[7]
uint32_t r8_1 = (r9 u>> 4).d
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rdx_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t rbp = 0
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
    void* r8_8 = *arg1
    int64_t rcx_11
    
    while (true)
        rcx_11 = sx.q(rbx)
        int64_t rax_19 = rcx_11 << 5
        
        if (*(rax_19 + r8_8) == r9)
            break
        
        rbx = *(rax_19 + r8_8 + 0x18)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t rcx_12 = rcx_11 << 5
    int64_t rax_22 = sx.q(*(rcx_12 + r8_8 + 0x1c)) & r11_1
    void* rdx_8 = r10 + (rax_22 << 2)
    
    for (int32_t i = *(r10 + (rax_22 << 2)); i != 0xffffffff; i = *rdx_8)
        if (i == rbx)
            *rdx_8 = *(rcx_12 + r8_8 + 0x18)
            break
        
        rdx_8 = r8_8 + 0x18 + (sx.q(i) << 5)
    
    rbp = 1
    int64_t* rdi_1 = *(rcx_12 + *arg1 + 8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_9 = *rdi_1
                (*(r8_9 + 8))(rdi_1, 1, r8_9)
    
    sub_1405c36f0(arg1, rbx, 1)

return zx.q(rbp)
