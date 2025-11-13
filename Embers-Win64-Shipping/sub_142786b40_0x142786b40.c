// 函数: sub_142786b40
// 地址: 0x142786b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t arg_8 = 0
sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_1434ad598
arg1[0x2a] = 0
arg1[0x2b] = 0
sub_141f15fd0(arg2, &arg1[0x2c], arg1[0x21][1].d)
void* rax_1 = arg1[0x21]
arg1[0x2d] = 0
sub_142786f60(&arg1[0x2e], (*(rax_1 + 8)).b)
int64_t rax_2

if (*(arg1 + 0x211) != 0 && arg1[0x21][1].d s> 1)
    rax_2 = sx.q(data_143f0f1a0)

if (*(arg1 + 0x211) != 0 && arg1[0x21][1].d s> 1 && (((rax_2.d u> 0x18
        || not(test_bit(0x100a040, rax_2.d))) && *(&data_143f025f0 + rax_2 * 0x14) != data_143f025b8)
        || (rax_2 - 0x19).d u<= 1 || *(&data_143f025f0 + rax_2 * 0x14) == data_143f025d0)
        && (rax_2.d u> 0x1e || not(test_bit(0x6562c800, rax_2.d)))
        && (*(rax_2 * 0x14 + &data_143f025fc) & 1) == 0)
    rax_2.b = 1
else
    rax_2.b = 0

arg1[0x8d].b = rax_2.b
sub_1422b4e50(&arg1[0x8e])
sub_142287b50(&arg1[0x9f])
sub_1422877b0(&arg1[0xa7])
arg1[0xb0].d = 0xffffffff
void* rsi = &arg1[0xdf]
*(arg1 + 0x584) = 4
arg1[0xb1] = 0
arg1[0xaf] = &data_1434ad4d8
arg1[0xb4].d = 0xffffffff
*(arg1 + 0x5a4) = 4
arg1[0xb5] = 0
arg1[0xb3] = &data_1434ad4d8
arg1[0xb8].d = 0xffffffff
*(arg1 + 0x5c4) = 4
arg1[0xb9] = 0
arg1[0xb7] = &data_1434ad518
arg1[0xbb] = 0
arg1[0xcb] = 0
arg1[0xcc].d = 0
*(arg1 + 0x664) = 3
arg1[0xdc] = 0
arg1[0xdd].d = 0
*(arg1 + 0x6ec) = 3
__builtin_memset(rsi, 0, 0x20)
arg1[0xe3].b = *(arg2 + 0x653)
*(arg1 + 0x719) = *(arg2 + 0x654)
*(arg1 + 0x71c) = *(arg2[0xa4] + 0xb8)
arg1[0xe4].b = 0
arg1[0x2b].d = 0

if (*(arg1 + 0x15c) != 0)
    sub_1405c5570(&arg1[0x2a], 0)

int32_t r12 = 0
int64_t rax_8 = sx.q((*(*arg2 + 0x6a0))(arg2))

if (rax_8 s> 0)
    int64_t rbp_1 = 0
    
    do
        int64_t rax_10 = (*(*arg2 + 0x548))(arg2, zx.q(r12))
        int64_t rbx_1 = sx.q(arg1[0x2b].d)
        int32_t rcx_12 = (rbx_1 + 1).d
        arg1[0x2b].d = rcx_12
        
        if (rcx_12 s> *(arg1 + 0x15c))
            sub_1405a4d70(&arg1[0x2a])
        
        arg1[0x2a][rbx_1] = rax_10
        int64_t* rcx_14 = arg1[0x2a][rbp_1]
        char rax_14
        
        if (rcx_14 != 0)
            rax_14 = (*(*rcx_14 + 0x2d8))(rcx_14, 8)
        
        if (rcx_14 == 0 || rax_14 == 0)
            arg1[0x2a][rbp_1] = sub_14210f630(0)
        
        r12 += 1
        rbp_1 += 1
    while (rbp_1 s< rax_8)
    
    rsi = &arg1[0xdf]

int64_t* rcx_15 = *(data_143f5b298 + 0x460)

if (rcx_15 != 0)
    (*(*rcx_15 + 0x2d8))(rcx_15, 8)

void* rax_18 = arg2[0xa4]
int64_t* rbx_3 = *(rax_18 + 0xc8)
void* r12_1 = *(rax_18 + 0xc0)

if (rbx_3 != 0)
    rbx_3[1].d += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rbp_2 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rbp_2 == 1)
                (*(*rbx_3 + 8))(rbx_3, zx.q(rbp_2))

int64_t i_2 = sx.q((*(*(r12_1 + 0x338) + 0x48))(r12_1 + 0x338))
*(rsi + 8) = 0

if (i_2.d s> *(rsi + 0xc))
    sub_1405a51b0(rsi, i_2.d)

int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t i
    
    do
        int128_t* rbx_4 = *(r12_1 + 0x340)
        
        if (*(rbx_4 + rdi + 8) s> 0)
            int64_t rbp_3 = sx.q(*(rsi + 8))
            int32_t rax_24 = (rbp_3 + 1).d
            *(rsi + 8) = rax_24
            
            if (rax_24 s> *(rsi + 0xc))
                sub_1405c4e40(rsi)
            
            int64_t rax_25 = *rsi
            int64_t rcx_22 = rbp_3 << 5
            *(rcx_22 + rax_25) = *(rbx_4 + rdi)
            *(rcx_22 + rax_25 + 0x10) = *(rbx_4 + rdi + 0x10)
        
        rdi += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x3b) |= 4
return arg1
