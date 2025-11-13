// 函数: sub_141a28360
// 地址: 0x141a28360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[1]
*arg2 = **arg1
*(arg2 + 8) = *rsi
sub_140596d10(&arg2[4], &rsi[1])
sub_1405ac190(&arg2[8], &rsi[3])
void* rdi = &rsi[0x13]
*(arg2 + 0x40) = rsi[7]
arg2[0x12] = rsi[8].d
*(arg2 + 0x4c) = *(rsi + 0x44)
*(arg2 + 0x5c) = *(rsi + 0x54)
*(arg2 + 0x6c) = *(rsi + 0x64)
*(arg2 + 0x7c) = *(rsi + 0x74)
*(arg2 + 0x8c) = *(rsi + 0x84)
arg2[0x27] = *(rsi + 0x94)
arg2[0x2c].b &= 0xfe
arg2[0x2c].b |= 2
char rax_5 = rsi[0x15].b

if ((rax_5 & 1) != 0)
    void* rcx_3 = rdi
    
    if ((rax_5 & 2) == 0)
        rcx_3 = *rdi
    
    int64_t* r14_1 = *((*(*rcx_3 + 8))(rcx_3) + 0xb8)
    int64_t* rax_8 = sub_141a62bd0(&arg2[0x28], r14_1[1].d, *(r14_1 + 0xc))
    int64_t r8_2 = *r14_1
    (*(r8_2 + 0x18))(r14_1, rax_8, r8_2)
    
    if ((rsi[0x15].b & 2) == 0)
        rdi = *rdi
    
    (*(*r14_1 + 0xa8))(r14_1, rax_8, rdi, 1)

*(arg2 + 0xb8) = rsi[0x16]
*(arg2 + 0xc0) = *(rsi + 0xb8)
sub_1405ac190(&arg2[0x34], &rsi[0x19])
return arg2
