// 函数: sub_142065460
// 地址: 0x142065460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[6]
int64_t* r13 = arg1
int64_t* r14 = arg1[1]
int32_t arg_10
sub_1408296b0(&r14[2], &arg_10, rbx + 0x70)
int64_t rax = sx.q(arg_10)

if (rax.d != 0xffffffff)
    r14[2]
    
    if (rax << 4 != neg.q(r14[2]))
        sub_1409740e0(&r14[2], rbx + 0x70)

int64_t* rsi = *r13
int32_t r11 = 1
int64_t* arg_20 = rsi

if (rsi != 0)
    uint64_t rcx_2 = zx.q(rsi[0x10].d)
    int32_t rax_1 = data_143a2e214
    void* r15_1 = rsi + 0x84
    uint64_t rdx_2 = zx.q((rcx_2 << 3).d)
    uint64_t rcx_3 = 0
    void* var_58_1 = r15_1
    
    if (*r15_1 == 0)
        rdx_2 = 0
    
    if (data_143f40a3c s> 0)
        rax_1 = 1
    
    if (rax_1 s> 0 && data_143f40a44 s> 0)
        rcx_3 = zx.q(rdx_2.d)
    
    r14[0x10] -= rcx_3 + zx.q((rcx_2 * 3).d << 3) + rdx_2
    int64_t rcx_4 = sx.q(r14[0xd].d)
    
    if (rcx_4.d != 0)
        int32_t r12_1 = 0
        int32_t rdi_1 = 0
        int64_t rbx_1 = 0
        r15_1.b = *r14[0xc] != rsi
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rcx_4)
                int64_t rcx_5 = r14[0xc] + (rbx_1 << 3)
                
                do
                    int32_t rax_6
                    rax_6.b = *rcx_5 != rsi
                    
                    if (zx.d(r15_1.b) != rax_6)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_5 += 8
                while (rbx_1 s< rcx_4)
            
            int32_t r14_2 = rdi_1 - r9_1.d
            
            if (r15_1.b != 0)
                if (r12_1 != r9_1.d)
                    int64_t rcx_6 = r14[0xc]
                    memmove(rcx_6 + (sx.q(r12_1) << 3), rcx_6 + (r9_1 << 3), r14_2 << 3)
                
                r12_1 += r14_2
            
            r15_1.b ^= 1
        while (rbx_1 s< rcx_4)
        
        r15_1 = var_58_1
        r14[0xd].d = r12_1
        r13 = arg1
    
    sub_142065ae0(rsi, r14)
    int64_t i_3 = 2
    int64_t i_2 = 2
    int64_t i
    
    do
        void* rcx_9 = *rsi
        
        if (rcx_9 != 0)
            int32_t rax_8 = 0
            
            if (0 == *(rcx_9 + 8))
                *(rcx_9 + 8) = 0
            else
                rax_8 = *(rcx_9 + 8)
            
            if (rax_8 == 1)
                void* rbx_2 = *rsi
                
                if (*(rbx_2 + 0x11) != 0)
                    if (data_143f0f1c7 != 0)
                        int64_t* rcx_10 = data_143f0f180
                        (*(*rcx_10 + 0x630))(rcx_10, rbx_2)
                    
                    *(rbx_2 + 0x11) = 0
        
        rsi[3].d = 0
        sub_1405d16e0(rsi, nullptr)
        sub_1405d16e0(&rsi[1], nullptr)
        sub_1405d16e0(&rsi[2], nullptr)
        rsi = &rsi[4]
        i = i_2
        i_2 -= 1
    while (i != 1)
    void* rbx_3
    
    if (*r15_1 == 0)
        rbx_3 = &arg_20[0xc]
    else
        sub_1408081b0(&arg_20[8])
        rbx_3 = &arg_20[0xc]
        sub_1408081b0(rbx_3)
    
    sub_1408081b0(rbx_3)
    sub_1405ec8a0(rbx_3 + 0x10)
    sub_1405d1550(rbx_3 + 8)
    sub_1405d1550(rbx_3)
    void* rbx_4 = &arg_20[8]
    sub_1408081b0(rbx_4)
    sub_1405ec8a0(rbx_4 + 0x10)
    sub_1405d1550(rbx_4 + 8)
    sub_1405d1550(rbx_4)
    int64_t i_1
    
    do
        rbx_4 -= 0x20
        sub_1408081b0(rbx_4)
        sub_1405ec8a0(rbx_4 + 0x10)
        sub_1405d1550(rbx_4 + 8)
        sub_1405d1550(rbx_4)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    j_sub_140a74f90(arg_20)
    *r13 = 0
    r11 = (i_3 + 1).d

int64_t* r9_2 = r14[0xe]
uint64_t rdx_8 = sx.q(r14[0xf].d)
int64_t* rcx_29 = r9_2
void* r8_8 = &r9_2[rdx_8]

if (r9_2 != r8_8)
    do
        if (*rcx_29 == r13)
            int32_t rcx_31 = ((rcx_29 - r9_2) s>> 3).d
            
            if (rcx_31 != 0xffffffff)
                int32_t rax_12 = rdx_8.d - rcx_31 - 1
                
                if (rax_12 s>= 1)
                    rax_12 = r11
                
                if (rax_12 != 0)
                    memcpy(&r9_2[sx.q(rcx_31)], &r9_2[sx.q(rdx_8.d - rax_12)], rax_12 << 3)
                    rdx_8 = zx.q(r14[0xf].d)
                
                r14[0xf].d = (rdx_8 - 1).d
            
            break
        
        rcx_29 = &rcx_29[1]
    while (rcx_29 != r8_8)

sub_1405ec8a0(&r13[0xd], rdx_8)
sub_1405ec8a0(&r13[0xc])
sub_1405ec8a0(&r13[0xa])
sub_1405ec8a0(&r13[9])
sub_142049280(&r13[4])
int64_t rcx_38 = r13[2]

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

return j_sub_140a74f90(r13) __tailcall
