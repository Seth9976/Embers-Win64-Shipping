// 函数: sub_141aa1650
// 地址: 0x141aa1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rax_2 = *(arg2 + 0x18)
int32_t i_1 = 0
int128_t* r12 = nullptr
int32_t rax_3 = *(arg1 + 0xd0)
int128_t* var_b8 = nullptr
int64_t var_b0 = 0

if (rax_3 s> 0)
    sub_1405a5220(&var_b8, rax_3)
    rax_3 = *(arg1 + 0xd0)
    r12 = var_b8

int32_t i_2 = 0

if (rax_3 s> 0)
    int64_t r13_1 = 0
    int32_t i
    
    do
        int64_t rdx_1 = sx.q(*(*(arg1 + 0xc8) + r13_1))
        
        if (*(rdx_1 + *(arg2 + 0x20)) == 0)
            sub_141a98300(arg2 + 8, rdx_1.d)
        
        int64_t rdi_1 = sx.q(var_b0.d)
        int64_t r8 = *(arg2 + 8)
        int32_t rax_6 = (rdi_1 + 1).d
        var_b0.d = rax_6
        
        if (rax_6 s> var_b0:4.d)
            sub_140638970(&var_b8)
            r12 = var_b8
        
        r13_1 += 4
        int64_t rdx_4 = rdx_1 * 6
        int64_t rcx_4 = rdi_1 * 6
        *(r12 + (rcx_4 << 3)) = *(r8 + (rdx_4 << 3))
        *(r12 + (rcx_4 << 3) + 0x10) = *(r8 + (rdx_4 << 3) + 0x10)
        *(r12 + (rcx_4 << 3) + 0x20) = *(r8 + (rdx_4 << 3) + 0x20)
        i = i_2 + 1
        i_2 = i
    while (i s< *(arg1 + 0xd0))

int64_t rdi_2 = sx.q(arg3[1].d)
int32_t var_78 = 0
int128_t* rax_8 = *(rax_2 + 0xa0)
var_b8.o = *rax_8
void* var_88
var_88.o = rax_8[1]
int32_t rax_9 = (rdi_2 + 1).d
int128_t var_98_1 = rax_8[2]
arg3[1].d = rax_9

if (rax_9 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

int64_t rax_10 = *arg3
int128_t zmm1 = var_b8.o
int64_t rcx_8 = rdi_2 << 6
*(rcx_8 + rax_10) = var_78.o
*(rcx_8 + rax_10 + 0x10) = zmm1
*(rcx_8 + rax_10 + 0x20) = var_88.o
*(rcx_8 + rax_10 + 0x30) = var_98_1

if (*(arg1 + 0xd0) s> 0)
    int32_t* r15_2 = nullptr
    int128_t* rdi_3 = r12
    
    do
        int64_t rsi_1 = sx.q(arg3[1].d)
        var_b8.o = *rdi_3
        int32_t rcx_9 = *(r15_2 + *(arg1 + 0xc8))
        int32_t rax_12 = (rsi_1 + 1).d
        var_88.o = rdi_3[1]
        int128_t var_98_2 = rdi_3[2]
        arg3[1].d = rax_12
        
        if (rax_12 s> *(arg3 + 0xc))
            sub_1405c4fe0(arg3)
        
        int64_t rax_13 = *arg3
        i_1 += 1
        zmm1 = var_b8.o
        r15_2 = &r15_2[1]
        int64_t rcx_12 = rsi_1 << 6
        rdi_3 = &rdi_3[3]
        *(rcx_12 + rax_13) = rcx_9.o
        *(rcx_12 + rax_13 + 0x10) = zmm1
        *(rcx_12 + rax_13 + 0x20) = var_88.o
        *(rcx_12 + rax_13 + 0x30) = var_98_2
    while (i_1 s< *(arg1 + 0xd0))

char var_c8
int64_t result = sub_141a8a370(*arg3, arg3[1].d, var_c8)

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_e8)
return result
