// 函数: sub_141b0fc30
// 地址: 0x141b0fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1 + 8
char r14 = arg3
uint64_t var_58
__FrameHandler3::TryBlockMap::TryBlockMap(&var_58, r13, arg1 + 0x50)
void* r15 = arg1 + 0x40
int64_t rsi = 0
int64_t var_98
int32_t var_80
char arg_8
int32_t arg_c

if (*(var_58 + 8) s> 0)
    arg_8.d = arg2
    arg_c = 0
    int32_t rdx_1 = (arg_8.q).d
    var_80 = data_143f2c430
    char var_7c_1 = 1
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x20)
    sub_141b13b60(arg1, rdx_1, &var_80)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_98, r13, arg1 + 0x50)
    int64_t r15_1 = sx.q(sub_141a4b2f0(&var_98, arg2, 0))
    int64_t var_60
    
    if (r15_1.d == 0xffffffff)
        r15_1 = sx.q(sub_141a376d0(&var_98, arg2))
        int32_t r13_1 = *(r15 + 8)
        *(r15 + 8) = r13_1 + 1
        
        if (r13_1 + 1 s> *(r15 + 0xc))
            sub_1405c4ec0(r15)
        
        int64_t rdi_1 = r15_1 * 5
        int64_t rdx_7 = *r15 + (rdi_1 << 3)
        memmove(rdx_7 + 0x28, rdx_7, (r13_1 - r15_1.d) * 0x28)
        int64_t rax_9 = *r15
        r14 = arg3
        *(rax_9 + (rdi_1 << 3)) = var_80.o
        int64_t var_70
        *(rax_9 + (rdi_1 << 3) + 0x10) = var_70.o
        *(rax_9 + (rdi_1 << 3) + 0x20) = var_60
    else
        int64_t r8_3 = r15_1 * 5
        int128_t zmm0_1 = var_78.o
        int64_t rdx_4 = *r15
        *(rdx_4 + (r8_3 << 3)) = var_80
        *(rdx_4 + (r8_3 << 3) + 4) = var_7c_1
        *(rdx_4 + (r8_3 << 3) + 8) = zmm0_1
        int64_t var_68
        *(rdx_4 + (r8_3 << 3) + 0x18) = var_68
        *(rdx_4 + (r8_3 << 3) + 0x20) = var_60
    sub_141a50d30(&var_98, &arg_8, r15_1.d)

__FrameHandler3::TryBlockMap::TryBlockMap(&var_80, r13, arg1 + 0x50)
arg_c = 0
arg_8 = 2
int64_t var_a8 = arg_8.q
void* arg_20
arg_20:4.d = 0
arg_20.b = 2
void* var_a0 = arg_20
void* var_70_1 = r15
var_58 = 0
int32_t var_50 = 0
var_98 = 0
int64_t var_90 = 0
sub_141a51280(&var_80, &var_a8, &var_58, &var_98)
int32_t rdx_11 = 0
var_a8 = 0
int32_t r8_9 = 0
var_a0:4.d = 0
int32_t r15_2 = 0

if (var_50 s> 0)
    int32_t* rdi_2 = nullptr
    
    do
        uint64_t rax_12 = var_58
        
        if (r14 == 0)
            if (*(rdi_2 + rax_12) s> arg2)
            label_141b0fe39:
                int64_t r12_1 = var_98
                int64_t r14_2 = sx.q(rdx_11)
                rdx_11 = (r14_2 + 1).d
                var_a0.d = rdx_11
                
                if (rdx_11 s> r8_9)
                    sub_1405a4cf0(&var_a8)
                    r8_9 = var_a0:4.d
                    rdx_11 = var_a0.d
                    rsi = var_a8
                
                *(rsi + (r14_2 << 2)) = *(rdi_2 + r12_1)
                r14 = arg3
        else if (*(rdi_2 + rax_12) s< arg2)
            goto label_141b0fe39
        
        r15_2 += 1
        rdi_2 = &rdi_2[1]
    while (r15_2 s< var_50)

var_a0.d = rdx_11
var_a8 = rsi
var_a8.o = var_a8.o
int64_t result = sub_141b0f780(&var_80, &var_a8)

if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t rcx_16 = var_98

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

uint64_t rcx_17 = var_58

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
