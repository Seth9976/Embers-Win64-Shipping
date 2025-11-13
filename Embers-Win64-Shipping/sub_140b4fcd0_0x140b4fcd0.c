// 函数: sub_140b4fcd0
// 地址: 0x140b4fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = *arg3
void* rax = sub_140b50ef0(arg1 + 8, &var_38)

if (rax != 0)
    *arg2 = *rax
    arg2[1] = *(rax + 0x10)
    arg2[2].b = 1
    return arg2

void* rdi_1 = arg1 + 0x18
int32_t arg_8
sub_140b4ff10(rdi_1, &arg_8, arg3)
int64_t rax_2 = sx.q(arg_8)
void* rcx_3

if (rax_2.d == 0xffffffff)
    rcx_3 = nullptr
else
    void* rcx_2 = *(rdi_1 + 0xa00)
    
    if (rcx_2 != 0)
        rdi_1 = rcx_2
    
    rcx_3 = rdi_1 + rax_2 * 0x28

void* rdi_2 = rcx_3 + 0x10

if (rcx_3 == 0)
    rdi_2 = nullptr

if (rdi_2 == 0)
    arg2[2].b = 0
    return arg2

int16_t* rdx_2 = *(rdi_2 + 8)
var_38 = *arg3
int64_t* rax_4 = sub_140b58260(&arg_8, rdx_2, 1)
int32_t rcx_5 = *rdi_2
int64_t rax_5 = *rax_4
*arg2 = var_38
int64_t var_10 = rax_5
int32_t var_14 = 1
arg2[1] = rcx_5.o
arg2[2].b = 1
return arg2
