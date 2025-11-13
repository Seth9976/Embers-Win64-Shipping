// 函数: sub_14180b440
// 地址: 0x14180b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2[1].d)
int32_t rsi = arg1[1].d
int64_t r12 = sx.q(arg3)
int32_t rax = rsi + r15.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

int64_t rbx_1 = r12 * 0x30
int64_t rdx_2 = *arg1 + rbx_1
memmove(r15 * 0x30 + rdx_2, rdx_2, (rsi - r12.d) * 0x30)
void* r14_1 = *arg2
void* rbp_1 = *arg1 + rbx_1

if (r15.d != 0)
    int32_t i
    
    do
        sub_140596d10(rbp_1, r14_1)
        *(rbp_1 + 0x10) = 0
        int32_t j_1 = *(r14_1 + 0x18)
        void* rdi_1 = *(r14_1 + 0x10)
        *(rbp_1 + 0x18) = j_1
        
        if (j_1 != 0)
            sub_1405a4b40(rbp_1 + 0x10, j_1, 0)
            void* rbx_2 = *(rbp_1 + 0x10)
            int64_t* rdi_2 = rdi_1 + 0x20
            int32_t j
            
            do
                sub_140596d10(rbx_2, &rdi_2[-4])
                sub_140596d10(rbx_2 + 0x10, &rdi_2[-2])
                int64_t rax_2 = *rdi_2
                rdi_2 = &rdi_2[6]
                *(rbx_2 + 0x20) = rax_2
                *(rbx_2 + 0x28) = rdi_2[-5].b
                *(rbx_2 + 0x2c) = *(rdi_2 - 0x24)
                rbx_2 += 0x30
                j = j_1
                j_1 -= 1
            while (j != 1)
        else
            *(rbp_1 + 0x1c) = 0
        
        *(rbp_1 + 0x20) = *(r14_1 + 0x20)
        *(rbp_1 + 0x28) ^= (*(r14_1 + 0x28) ^ *(rbp_1 + 0x28)) & 1
        int32_t rcx_7 = *(r14_1 + 0x28)
        r14_1 += 0x30
        *(rbp_1 + 0x28) ^= (rcx_7 ^ *(rbp_1 + 0x28)) & 2
        rbp_1 += 0x30
        i = r15.d
        r15 = zx.q(r15.d - 1)
    while (i != 1)

return zx.q(r12.d)
