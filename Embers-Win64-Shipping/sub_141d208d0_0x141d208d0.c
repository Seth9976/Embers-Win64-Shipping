// 函数: sub_141d208d0
// 地址: 0x141d208d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rdi = sub_140b5ead0(rbx.d) + (rbx u>> 0x20).d
int64_t rbx_2 = arg2[1]
int32_t rax_2 = sub_140b5ead0(rbx_2.d)
void* r9 = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rbp = 0
int32_t r8 = (rbx_2 u>> 0x20).d + rax_2
int32_t rdi_2 = (rdi - r8) ^ r8 u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - rdi_2 - r8) ^ rdi_2 << 8
int32_t r8_3 = (r8 - rdx_2 - rdi_2) ^ rdx_2 u>> 0xd
int32_t rdi_5 = (rdi_2 - rdx_2 - r8_3) ^ r8_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - rdi_5 - r8_3) ^ rdi_5 << 0x10
int32_t r8_6 = (r8_3 - rdx_5 - rdi_5) ^ rdx_5 u>> 5
int32_t rdi_8 = (rdi_5 - rdx_5 - r8_6) ^ r8_6 u>> 3
int32_t rdx_8 = (rdx_5 - rdi_8 - r8_6) ^ rdi_8 << 0xa
void* rax_17 = arg1[8]

if (rax_17 != 0)
    r9 = rax_17

int32_t rbx_4 = *(r9 + (((sx.q(r8_6 - rdx_8 - rdi_8) ^ zx.q(rdx_8) u>> 0xf) & r10_1) << 2))

if (rbx_4 != 0xffffffff)
    void* r8_9 = *arg1
    int64_t rdx_10
    
    while (true)
        rdx_10 = sx.q(rbx_4) * 6
        
        if (*(r8_9 + (rdx_10 << 3)) == *arg2 && *(r8_9 + (rdx_10 << 3) + 8) == arg2[1])
            break
        
        rbx_4 = *(r8_9 + (rdx_10 << 3) + 0x28)
        
        if (rbx_4 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_25 = sx.q(*(r8_9 + (rdx_10 << 3) + 0x2c)) & r10_1
        void* rcx_8 = r9 + (rax_25 << 2)
        
        for (int32_t i = *(r9 + (rax_25 << 2)); i != 0xffffffff; i = *rcx_8)
            if (i == rbx_4)
                *rcx_8 = *(r8_9 + (rdx_10 << 3) + 0x28)
                break
            
            rcx_8 = r8_9 + 0x28 + sx.q(i) * 0x30
    
    void* rax_29 = *arg1
    rbp = 1
    int64_t* rcx_11 = *(rax_29 + (rdx_10 << 3) + 0x20)
    
    if (rcx_11 != 0 && *(rax_29 + (rdx_10 << 3) + 0x1d) == 0)
        int64_t r8_10 = *rcx_11
        (*(r8_10 + 0x28))(rcx_11, 1, r8_10)
    
    sub_1407c2ba0(arg1, rbx_4, 1)

return zx.q(rbp)
