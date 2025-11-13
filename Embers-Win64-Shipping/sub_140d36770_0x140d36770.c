// 函数: sub_140d36770
// 地址: 0x140d36770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_2 = *(arg2 + 0x20)
int32_t rdi = 4
int32_t rsi = 8
int32_t var_78 = 4
int32_t var_74 = 8
int32_t var_70 = 0
int64_t* rcx = *rax_2
*(arg2 + 0x20) = &rax_2[1]
int32_t var_6c = 4
int32_t var_68 = 8
int32_t r14 = rax_2[1].d
*(arg2 + 0x20) = rax_2 + 0xc
int32_t var_38 = var_78.q:4.d
int128_t var_48 = var_70.o
int64_t* var_58 = rcx
int32_t rbx_1 = *(rcx + 0x3c) * rcx[7].d
int32_t rax_8 = (*(*rcx + 0x108))()
int32_t rdx = rax_8
int32_t r8 = 4

if (rax_8 s<= 0)
    rdx = 0

int32_t rcx_3 = 4
int32_t rax_12 = (rbx_1 + 3 + ((rax_8 - 1) & neg.d(rax_8))) & 0xfffffffc

if (rdx s>= 4)
    rcx_3 = rdx

int32_t rax_14 = (rax_12 + 7) & 0xfffffffc
int32_t var_6c_1 = rax_14

if (rcx_3 s>= 4)
    r8 = rcx_3

int32_t rcx_6 = (rax_14 + 3 + r8) & not.d(r8 - 1)
int32_t var_68_1 = rcx_6

if (r8 s>= 4)
    rdi = r8

if (rcx_6 s>= 8)
    rsi = rcx_6

int32_t var_74_1 = rsi
int32_t rax_18 = rdi.q:4.d
var_48 = rax_12.o
sub_140cfba20(&var_58, r14)

while (**(arg2 + 0x20) != 0x3e)
    int32_t rax_20 = sub_140cf1c20(arg3, &var_48:0xc)
    int64_t* r9_1 = var_58
    int64_t r10_1 = r9_1[8]
    int64_t rcx_12 = sx.q(rax_18 * rax_20) + *arg3
    uint8_t r8_2 = (r10_1 u>> 9).b & 1
    
    if (r8_2 != 0)
        memset(rcx_12, 0, sx.q(var_48:8.d))
    else if (not(test_bit(r10_1, 9)))
        (*(*r9_1 + 0xf0))(r9_1, sx.q(*(r9_1 + 0x4c)) + rcx_12, r8_2)
    else
        memset(rcx_12 + sx.q(*(r9_1 + 0x4c)), 0, sx.q(*(r9_1 + 0x3c) * r9_1[7].d))
    
    int64_t r8_5
    
    if (arg3[1].d != *(arg3 + 0x34))
        r8_5 = sx.q(rax_18 * rax_20) + *arg3
    else
        r8_5 = 0
    
    char* rax_28 = *(arg2 + 0x20)
    uint32_t rcx_16 = zx.d(*rax_28)
    *(arg2 + 0x20) = &rax_28[1]
    (&data_143e1cd60)[zx.q(rcx_16)](*(arg2 + 0x18), arg2, r8_5)

sub_140d0c8b0(&var_58)
int64_t result = *(arg2 + 0x20)
int64_t r12
r12.b = result != 0
*(arg2 + 0x20) = r12 + result
__security_check_cookie(rax_1 ^ &var_98)
return result
