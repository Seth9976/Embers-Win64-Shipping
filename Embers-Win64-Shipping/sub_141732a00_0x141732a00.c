// 函数: sub_141732a00
// 地址: 0x141732a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r10 = sx.q(*arg2) * 3
int64_t rax_3 = *(arg1 + 0x28)
int64_t zmm0 = *(rax_3 + (r10 << 2))
int32_t rax_4 = *(rax_3 + (r10 << 2) + 8)
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x2c)
int32_t var_a4 = 0
int64_t var_98 = 0
int32_t var_90 = 0
int64_t* var_108 = nullptr
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
void* rbx = **(arg2 + 0x20)
int64_t var_100 = 1
sub_1405a4d70(&var_108)
int64_t rbx_1 = sx.q(var_100.d)
int64_t* rsi = var_108
int32_t rdi = (rbx_1 + 1).d
*rsi = *(rbx + 8)
var_100.d = rdi
void* r15 = **(arg2 + 0x20)

if (rdi s> 0)
    sub_1405a4d70(&var_108)
    rdi = var_100.d
    rsi = var_108

rsi[rbx_1] = *(r15 + 0x10)
int32_t i = rdi + 1
int64_t* r15_1 = *(arg2 + 0x20)
var_100.d = i

if (i s> 0)
    sub_1405a4d70(&var_108)
    i = var_100.d
    rsi = var_108

rsi[sx.q(rdi)] = *r15_1
int64_t rdi_1 = sx.q(arg4[1].d)
int32_t rax_10 = (rdi_1 + 1).d
arg4[1].d = rax_10

if (rax_10 s> *(arg4 + 0xc))
    sub_1405a4d70(arg4)

*(*arg4 + (rdi_1 << 3)) = *(arg2 + 0x20)

while (i != 0)
    int32_t i_1 = i - 1
    int32_t rbx_2 = i - i_1
    void* r14_1 = rsi[sx.q(i_1)]
    
    if (rbx_2 != 1)
        memmove(&rsi[sx.q(i_1)], &rsi[sx.q(i_1 + 1)], (rbx_2 - 1) << 3)
    
    i = i_1
    void var_e8
    sub_140812a70(&var_d8, &var_e8, r14_1 + 0x20, nullptr)
    void* rax_15 = *(r14_1 + 0x18)
    void* r15_2 = *(rax_15 + 0x20)
    void var_e4
    
    if (*sub_1408296b0(&var_d8, &var_e4, r15_2) == 0xffffffff)
        float zmm2 = (zmm0:4.d.d f- *(r15_2 + 0x14)) f* *(r15_2 + 0x20)
            + (zmm0.d.d f- *(r15_2 + 0x10)) f* *(r15_2 + 0x1c)
            + (rax_4.d f- *(r15_2 + 0x18)) f* *(r15_2 + 0x24)
        
        if (zmm2 <= 0.100000001f)
            int64_t rdi_4 = sx.q(arg3[1].d)
            int32_t rax_21 = (rdi_4 + 1).d
            arg3[1].d = rax_21
            
            if (rax_21 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            *(*arg3 + (rdi_4 << 3)) = r14_1
        else
            int32_t r14_2 = i_1 + 1
            var_100.d = r14_2
            
            if (r14_2 s> var_100:4.d)
                sub_1405a4d70(&var_108)
                r14_2 = var_100.d
                rsi = var_108
            
            i = r14_2 + 1
            var_100.d = i
            rsi[sx.q(i_1)] = *(rax_15 + 8)
            
            if (i s> var_100:4.d)
                sub_1405a4d70(&var_108)
                i = var_100.d
                rsi = var_108
            
            rsi[sx.q(r14_2)] = *(rax_15 + 0x10)
            int64_t rdi_3 = sx.q(arg4[1].d)
            int32_t rax_19 = (rdi_3 + 1).d
            arg4[1].d = rax_19
            
            if (rax_19 s> *(arg4 + 0xc))
                sub_1405a4d70(arg4)
            
            *(*arg4 + (rdi_3 << 3)) = r15_2

if (rsi != 0)
    sub_140a74f90(rsi)

int32_t var_90_1 = 0

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t var_d0
var_d0.d = 0
int32_t var_a8_1 = 0xffffffff
int32_t var_a4_1 = 0
int64_t var_c8
void* result = sub_14059a8e0(&var_c8, 0)
int64_t var_b8

if (var_b8 != 0)
    result = sub_140a74f90(var_b8)

int64_t rcx_21 = var_d8

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

__security_check_cookie(rax_1 ^ &var_128)
return result
