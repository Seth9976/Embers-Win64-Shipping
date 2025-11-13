// 函数: sub_141a42e00
// 地址: 0x141a42e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
uint64_t var_88
int32_t arg_8
char arg_20
int32_t arg_24

if (*(arg1 + 0x18) s> 0)
    uint64_t r15_1 = *(arg1 + 0x10)
    int32_t r14_1 = *(arg1 + 0x18)
    var_88 = r15_1
    int64_t var_80
    var_80.d = r14_1
    var_88.o = var_88.o
    arg_8 = 0
    sub_141a4bf00(&var_88, arg2, 0, 1, &arg_8, &arg_20)
    int64_t rdx = sx.q(arg_8)
    int32_t rcx_2
    
    if (rdx.d s>= 0 && rdx.d s< r14_1)
        int32_t rcx_1 = *(r15_1 + (rdx << 2))
        rcx_2 = rcx_1 - arg2
        
        if (rcx_1 - arg2 s< 0)
            rcx_2 = neg.d(rcx_2)
    
    if (rdx.d s< 0 || rdx.d s>= r14_1 || rcx_2 s> 0 || rdx.d == 0xffffffff)
        arg_20.d = arg2
        arg_24 = 0
        int64_t rdx_1 = arg_20.q
        arg_8 = 0
        char rax_1
        int128_t zmm6_1
        rax_1, zmm6_1 = sub_141a467f0(arg1, rdx_1, &arg_8)
        
        if (rax_1 != 0)
            char var_78_1 = 0
            int32_t rax_2
            int128_t zmm6_2
            rax_2, zmm6_2 = sub_141a554f0(arg1, arg2)
            int32_t zmm0_1 = arg_8
            int32_t* rdx_4 = sx.q(rax_2) * 0x1c + *(arg1 + 0x20)
            *(rdx_4 + 4) = zmm6_2
            rdx_4[5] = var_78_1.d
            *rdx_4 = zmm0_1
            rdx_4[6].w = 2
            sub_141a3b020(arg1, zx.o(0))
            int512_t zmm6_3
            zmm6_3.o = zmm6_1

int32_t arg_c = 0
void* var_68 = arg1 + 0x10
arg_8.b = 2
void* var_60 = arg1 + 0x38
arg_24 = 0
void* var_58 = arg1 + 0x20
uint64_t var_a8 = arg_8.q
arg_20 = 2
int64_t var_a0 = arg_20.q
uint64_t var_98 = 0
int32_t i_2 = 0
var_88 = 0
int64_t var_80_1 = 0
sub_141a51280(&var_68, &var_a8, &var_98, &var_88)
int32_t rdx_6 = 0
uint64_t r13 = var_88
int32_t r8_2 = 0
uint64_t r14_2 = var_98
var_a8 = 0
var_a0:4.d = 0

if (i_2 s> 0)
    char rcx_8 = arg3
    uint64_t rsi_1 = r13
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t rax_10 = *(rsi_1 + r14_2 - r13)
        
        if (rcx_8 == 0)
            if (rax_10 s> arg2)
            label_141a42faa:
                int64_t r14_3 = sx.q(rdx_6)
                rdx_6 = (r14_3 + 1).d
                var_a0.d = rdx_6
                
                if (rdx_6 s> r8_2)
                    sub_1405a4cf0(&var_a8)
                    r8_2 = var_a0:4.d
                    rdx_6 = var_a0.d
                    rdi = var_a8
                
                rcx_8 = arg3
                *(rdi + (r14_3 << 2)) = *rsi_1
        else if (rax_10 s< arg2)
            goto label_141a42faa
        
        rsi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14_2 = var_98

var_80_1.d = rdx_6
var_88 = rdi
var_88.o = var_88.o
int64_t result = sub_141a424a0(&var_68, &var_88)

if (rdi != 0)
    result = sub_140a74f90(rdi)

if (r13 != 0)
    result = sub_140a74f90(r13)

if (r14_2 == 0)
    return result

return sub_140a74f90(r14_2)
