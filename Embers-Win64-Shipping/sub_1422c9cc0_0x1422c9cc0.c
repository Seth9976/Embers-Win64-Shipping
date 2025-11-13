// 函数: sub_1422c9cc0
// 地址: 0x1422c9cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
void* var_68 = arg2
int32_t arg_8 = 0
char r12 = arg4
int64_t rsi = arg3
void* r13 = arg2
int64_t* i_3

if (arg2 == 0)
    i_3 = nullptr
else
    i_3 = *(arg2 + 0x50)

int32_t var_58 = 0xffffffff
int16_t var_54 = 0x101
char var_52 = 0
sub_1406328d0(&var_68)
int64_t* i = i_3

if (i != 0)
    do
        if ((0x80000000 & zx.q(i[8].d)) == 0)
            int32_t j = 0
            
            if (i[7].d s> 0)
                do
                    int32_t rbx_1 = *(arg1 + 0x30)
                    *(arg1 + 0x30) = rbx_1 + 1
                    
                    if (rbx_1 + 1 s> *(arg1 + 0x34))
                        sub_1405c4f50(arg1 + 0x28)
                    
                    uint64_t rdx_1 = zx.q(rbx_1.w)
                    int64_t** rcx_4 = sx.q(rbx_1) * 0x30 + *(arg1 + 0x28)
                    uint64_t rbx_3 = rdx_1 * 0x30
                    *rcx_4 = i
                    rcx_4[1] = i[5]
                    rcx_4[2].d = j
                    rcx_4[3].d = 0
                    *(rcx_4 + 0x1c) = 0
                    *(rcx_4 + 0x24) = 0
                    rcx_4[5].d = 0xffffffff
                    *(rcx_4 + 0x2c) = 0
                    *(rbx_3 + *(arg1 + 0x28) + 0x1c) = *(arg1 + 0x40)
                    arg_8 = sub_1422b39c0(arg1 + 0x38, i, *(i + 0x3c) * j, arg_8, rdx_1.b, 0, j, 
                        arg3.d, var_68)
                    *(rbx_3 + *(arg1 + 0x28) + 0x1e) = *(arg1 + 0x40)
                    *(rbx_3 + *(arg1 + 0x28) + 0x14) = *(i + 0x4c)
                    int64_t* rdx_4 = *(arg1 + 0x28) + rbx_3
                    void* r8_2 = *rdx_4
                    
                    if (r8_2 != 0 && ((zx.q(*(*(r8_2 + 8) + 0x10)) u>> 0x14).b & 1) != 0)
                        void* rcx_11 = *(r8_2 + 0x78)
                        int32_t rax_10 = *(rdx_4 + 0x2c) | 0x20
                        *(rdx_4 + 0x2c) = rax_10
                        
                        if (((*(rcx_11 + 0xb0) u>> 0xa).b & 1) != 0)
                            *(rdx_4 + 0x2c) = rax_10 | 0x10
                    
                    if (((zx.q(*(r8_2 + 0x40)) u>> 9).b & 1) != 0)
                        *(rdx_4 + 0x2c) |= 0x40
                    
                    j += 1
                while (j s< i[7].d)
        
        int64_t* i_4 = i[4]
        sub_1406328d0(&var_68)
        i = i_4
    while (i != 0)
    
    r13 = arg2
    rsi = arg3
    r12 = arg4

int64_t rdi = sx.q(*(arg1 + 0x40))
int32_t rax_12 = (rdi + 1).d
*(arg1 + 0x40) = rax_12

if (rax_12 s> *(arg1 + 0x44))
    sub_1405c4e40(arg1 + 0x38)

void* rax_15 = (rdi << 5) + *(arg1 + 0x38)
__builtin_memset(rax_15, 0, 0x20)
*(rax_15 + 0x1c) = 1

if (rsi == 0 || (r12 & 1) != 0)
    sub_1422ba3b0(arg1, 0, *(arg1 + 0x40) - 1, arg1 + 0x48)

uint64_t result = zx.q(*(r13 + 0x58))
int32_t i_1 = 0
*(arg1 + 0x24) = result.d

while (i_1 s>= 0)
    if (i_1 s>= *(arg1 + 0x30))
        break
    
    uint64_t* rdx_8 = sx.q(i_1) * 0x30 + *(arg1 + 0x28)
    i_1 += 1
    result = *rdx_8
    rdx_8[3].d = *(result + 0x4c)

while (i_2 s>= 0)
    if (i_2 s>= *(arg1 + 0x40))
        break
    
    void* rcx_22 = (sx.q(i_2) << 5) + *(arg1 + 0x38)
    i_2 += 1
    result = zx.q(*(rcx_22 + 0xc))
    *(rcx_22 + 0x10) = result.d

*(arg1 + 0x60) = r13
return result
