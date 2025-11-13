// 函数: sub_1427d49c0
// 地址: 0x1427d49c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_f0 = *arg2
int128_t var_e0 = arg2[1]
sub_1427e5d10(arg1, *arg2)
int32_t* rax = arg1[0xc]
int32_t rdx_1 = 0xdc

if (rax != 0)
    rdx_1 = 0xdc + *rax

int32_t* rax_2 = arg1[0xb]
char var_f8 = 1
int32_t var_f4 = rdx_1

if (rax_2 != 0)
    *rax_2 += 1

char* var_d0
memset(&var_d0, 0, 0xc0)
sub_14280c260(&var_d0)
void* rax_3 = arg1[0xb]
void arg_8
void* rdx_2 = &arg_8

if (rax_3 != 0)
    rdx_2 = rax_3

sub_1427d9380(arg1, rdx_2, &var_f8)
return sub_1427e5c70(arg1) __tailcall
