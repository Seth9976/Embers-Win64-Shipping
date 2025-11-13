// 函数: sub_141d6fd70
// 地址: 0x141d6fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_3 = sx.q(arg2[1].d)
sub_141d708d0(arg1, i_3.d)
int32_t rax = arg1[1].d + i_3.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4ec0(arg1)

void* rdi = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rdi != &arg2[2])
    sub_14059a8e0(rdi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rdi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rdi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rdi = r10_1
        
        memcpy(rdi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *arg1
int64_t i_1 = i_3
int64_t i_2 = i_1
int32_t r12 = 0

if (i_3.d s<= 0)
    return arg1

int32_t* rbx_1 = rax_4 + 0x18
int32_t* r8_5 = *arg2 - rax_4
int32_t r15_1 = 1
int32_t* arg_10 = r8_5
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_3 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    int32_t rax_6 = r12
    
    if (r12 s< 0)
        rax_6 = r12 + 0x1f
    
    if ((*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & r15_1) == 0)
        rbx_1[-6] = *(rbx_1 + r8_5 - 0x18)
        rbx_1[-5] = *(rbx_1 + r8_5 - 0x14)
    else
        *(rbx_1 - 0x18) = *(rbx_1 + r8_5 - 0x18)
        *(rbx_1 - 8) = 0
        int32_t j_1 = *(r8_5 + rbx_1)
        void* rsi = *(rbx_1 + r8_5 - 8)
        *rbx_1 = j_1
        
        if (j_1 != 0)
            sub_140874c00(&rbx_1[-2], j_1, 0)
            void* rdi_1 = *(rbx_1 - 8)
            int64_t* rsi_1 = rsi + 0x10
            int32_t j
            
            do
                sub_140596d10(rdi_1, &rsi_1[-2])
                *(rdi_1 + 0x10) = *rsi_1
                sub_140596d10(rdi_1 + 0x18, &rsi_1[1])
                sub_140596d10(rdi_1 + 0x28, &rsi_1[3])
                rdi_1 += 0x38
                rsi_1 = &rsi_1[7]
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
            r8_5 = arg_10
        else
            rbx_1[1] = 0
        
        rbx_1[2] = *(r8_5 + rbx_1 + 8)
        rbx_1[3] = *(r8_5 + rbx_1 + 0xc)
    
    r12 += 1
    r15_1 = rol.d(r15_1, 1)
    rbx_1 = &rbx_1[0xa]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
