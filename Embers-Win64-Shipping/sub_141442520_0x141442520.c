// 函数: sub_141442520
// 地址: 0x141442520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1

if (arg1 == arg2)
    return r14

int64_t i_3 = sx.q(arg2[1].d)
sub_1414531e0(arg1, i_3.d)
int32_t rax = r14[1].d + i_3.d
r14[1].d = rax

if (rax s> *(r14 + 0xc))
    sub_1405c4fe0(r14)

void* rdi = &r14[2]
r14[6].d = arg2[6].d
*(r14 + 0x34) = *(arg2 + 0x34)

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

int32_t r12 = 0
void* rax_4 = *arg2
int64_t i_1 = i_3
int64_t i_2 = i_1

if (i_3.d s<= 0)
    return r14

void* rcx_4 = *r14 - rax_4
int32_t rbp_1 = 1
int64_t* rsi = rax_4 + 0x30
int64_t* r14_1 = rcx_4
void* r8_4 = rcx_4 - 0x18
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_5 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    int32_t rax_6 = r12
    
    if (r12 s< 0)
        rax_6 = r12 + 0x1f
    
    if ((*(rcx_5 + (sx.q(rax_6 s>> 5) << 2)) & rbp_1) == 0)
        *(rsi + r14_1 - 0x30) = rsi[-6].d
        *(rsi + r14_1 - 0x2c) = *(rsi - 0x2c)
    else
        void* rbx_1 = &rsi[-3]
        *(rsi + r14_1 - 0x30) = rsi[-6]
        int64_t j = 3
        int64_t* r15_3 = r8_4 - rbx_1 + rsi
        *(r14_1 + rsi - 0x28) = *(rsi - 0x28)
        
        do
            int64_t* rcx_6 = *rbx_1
            j -= 1
            *(r15_3 + rbx_1) = rcx_6
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x30))()
            
            rbx_1 += 8
        while (j != 0)
        
        int64_t* rcx_7 = *rsi
        *(r14_1 + rsi) = rcx_7
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x30))()
        
        r8_4 = &r14_1[-3]
        i_1 = i_2
        *(r14_1 + rsi + 8) = rsi[1].d
        *(r14_1 + rsi + 0xc) = *(rsi + 0xc)
    
    r12 += 1
    rbp_1 = rol.d(rbp_1, 1)
    rsi = &rsi[8]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
