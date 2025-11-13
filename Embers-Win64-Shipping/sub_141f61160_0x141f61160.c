// 函数: sub_141f61160
// 地址: 0x141f61160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
void* r15 = nullptr
int64_t* rbp = arg1
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0
sub_141b105d0(arg2)
void* rax = sub_1425b0e60()
int32_t i = 1

if (rax != 0)
    sub_140d3a3a0(&arg2[1], rax)
    int32_t rcx_2 = *(rax + 0x5c)
    int32_t rdx_4 = (*(rax + 0x58) - 1 + rcx_2) & not.d(rcx_2 - 1)
    int32_t rax_3 = 1
    
    if (rdx_4 != 0)
        rax_3 = rdx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg2[2] = rax_4
    sub_141f039e0(rax_4, rbp)
    *rax_4 = &data_14327c450
    rax_4[0x1e] = rbp[0x88]
    __builtin_memset(&rax_4[0x1f], 0, 0x30)
    arg2[4].b = 1

void* rax_5 = sub_1425b0e60()
void* rax_6 = sub_140d3c6e0(&arg2[1])

if (rax_5 != 0)
    int64_t rcx_7 = sx.q(*(rax_5 + 0x38))
    
    if (rcx_7.d s<= *(rax_6 + 0x38) && *(*(rax_6 + 0x30) + (rcx_7 << 3)) == rax_5 + 0x30)
        r15 = arg2[2]

int128_t* rsi = rbp[0x8c]
void* r14_2 = &rsi[sx.q(rbp[0x8d].d) * 9]

if (rsi != r14_2)
    do
        int64_t rbp_1 = sx.q(*(r15 + 0x110))
        int32_t rax_9 = (rbp_1 + 1).d
        *(r15 + 0x110) = rax_9
        
        if (rax_9 s> *(r15 + 0x114))
            sub_1405a4f90(r15 + 0x108)
        
        int128_t zmm0_1 = *rsi
        rsi = &rsi[9]
        *(*(r15 + 0x108) + rbp_1 * 0x10) = zmm0_1
    while (rsi != r14_2)
    
    rbp = arg1

sub_140780bc0(r15 + 0x118, &rbp[0x8e])

if (rbp[0x8d].d s<= 0)
    return arg2

int64_t r13 = 0
void* r12_1 = nullptr

do
    int64_t rbp_2 = rbp[0x8c]
    void* rax_11 = *(rbp_2 + r12_1 + 0x30)
    
    if (rax_11 != 0 && *(rax_11 + 0x34) u> 0)
        if (*(r15 + 0x100) s<= i - 1)
            int64_t rsi_1 = sx.q(*(r15 + 0x100))
            
            if (i s> rsi_1.d)
                *(r15 + 0x100) = i
                int32_t j_1 = i - rsi_1.d
                
                if (i s> *(r15 + 0x104))
                    sub_1405c4ec0(r15 + 0xf8)
                
                int64_t* rdx_10 = *(r15 + 0xf8) + rsi_1 * 0x28
                
                if (j_1 != 0)
                    void* rax_14 = rdx_10 + 0x1c
                    int32_t j
                    
                    do
                        *rdx_10 = 0
                        rdx_10 = &rdx_10[5]
                        __builtin_memset(rax_14 - 0x14, 0, 0x18)
                        rax_14 += 0x28
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
            else if (i s< rsi_1.d)
                sub_141f6f1d0(r15 + 0xf8, i, rsi_1.d - i, 1)
        
        uint64_t* rbx_5 = *(r15 + 0xf8) + r13
        rbx_5[4].d = i - 1
        sub_140b4cd20(rbx_5, r12_1 + 0x20 + rbp_2)
        sub_1422a2910(*(rbp_2 + r12_1 + 0x30), &rbx_5[2])
    
    rbp = arg1
    i += 1
    r12_1 += 0x90
    r13 += 0x28
while (i s<= rbp[0x8d].d)

return arg2
