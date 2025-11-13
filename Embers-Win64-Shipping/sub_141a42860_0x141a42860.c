// 函数: sub_141a42860
// 地址: 0x141a42860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = 0
uint64_t var_90
uint64_t var_68
void* var_58
char arg_8
char arg_20
int32_t arg_24

if (*(arg1 + 0x10) s> 0)
    arg_20.d = arg2
    arg_24 = 0
    int32_t rdx = (arg_20.q).d
    arg_8 = 0
    
    if (sub_141a46740(arg1, rdx, &arg_8) != 0)
        uint64_t rcx = *(arg1 + 8)
        int32_t r12_1 = *(arg1 + 0x10)
        void* rdi_1 = arg1 + 0x30
        var_68 = rcx
        var_58 = arg1 + 8
        int64_t var_60
        var_60.d = r12_1
        int128_t zmm0 = var_68.o
        var_90 = rcx
        void* var_50_1 = rdi_1
        void* var_48_1 = arg1 + 0x20
        arg_20.d = 0
        var_68.o = zmm0
        void var_98
        sub_141a4bf00(&var_68, arg2, 0, 1, &arg_20, &var_98)
        int64_t r14_1 = sx.q(arg_20.d)
        int32_t rax_5
        
        if (r14_1.d s>= 0 && r14_1.d s< r12_1)
            int32_t rax_4 = *(var_90 + (r14_1 << 2))
            rax_5 = rax_4 - arg2
            
            if (rax_4 - arg2 s< 0)
                rax_5 = neg.d(rax_5)
        
        if (r14_1.d s< 0 || r14_1.d s>= r12_1 || rax_5 s> 0 || r14_1.d == 0xffffffff)
            int32_t rax_7 = sub_141a376d0(&var_58, arg2)
            int32_t r12_2 = *(arg1 + 0x28)
            r14_1 = sx.q(rax_7)
            *(arg1 + 0x28) = r12_2 + 1
            
            if (r12_2 + 1 s> *(arg1 + 0x2c))
                sub_140679a80(arg1 + 0x20)
            
            int64_t rdx_5 = *(arg1 + 0x20) + r14_1
            memmove(rdx_5 + 1, rdx_5, r12_2 - r14_1.d)
            rdi_1 = arg1 + 0x30
            *(r14_1 + *(arg1 + 0x20)) = arg_8
        else
            *(r14_1 + *(arg1 + 0x20)) = arg_8
        
        if (rdi_1 == 0)
            sub_141f79930(&arg_20)
        else
            sub_141f880d0(rdi_1, &arg_8, r14_1.d)

int32_t arg_c = 0
var_58 = arg1 + 8
arg_8 = 2
void* var_50_2 = arg1 + 0x30
arg_24 = 0
void* var_48_2 = arg1 + 0x20
var_90 = arg_8.q
arg_20 = 2
int64_t var_88 = arg_20.q
uint64_t var_80 = 0
int32_t i_2 = 0
var_68 = 0
int64_t var_60_1 = 0
sub_141a51280(&var_58, &var_90, &var_80, &var_68)
int32_t rdx_9 = 0
uint64_t r13_1 = var_68
int32_t r8_4 = 0
uint64_t r14_2 = var_80
var_90 = 0
var_88:4.d = 0

if (i_2 s> 0)
    char rcx_9 = arg3
    uint64_t rdi_2 = r13_1
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t rax_16 = *(r14_2 - r13_1 + rdi_2)
        
        if (rcx_9 == 0)
            if (rax_16 s> arg2)
            label_141a42a62:
                int64_t r14_3 = sx.q(rdx_9)
                rdx_9 = (r14_3 + 1).d
                var_88.d = rdx_9
                
                if (rdx_9 s> r8_4)
                    sub_1405a4cf0(&var_90)
                    r8_4 = var_88:4.d
                    rdx_9 = var_88.d
                    rsi = var_90
                
                rcx_9 = arg3
                *(rsi + (r14_3 << 2)) = *rdi_2
        else if (rax_16 s< arg2)
            goto label_141a42a62
        
        rdi_2 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14_2 = var_80

var_60_1.d = rdx_9
var_68 = rsi
var_68.o = var_68.o
int64_t result = sub_141a422b0(&var_58, &var_68)

if (rsi != 0)
    result = sub_140a74f90(rsi)

if (r13_1 != 0)
    result = sub_140a74f90(r13_1)

if (r14_2 == 0)
    return result

return sub_140a74f90(r14_2)
