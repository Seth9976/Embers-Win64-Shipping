// 函数: sub_1427d57c0
// 地址: 0x1427d57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_110 = *arg2
int128_t var_100 = arg2[1]
sub_1427e5d10(arg1, *arg2)
int32_t* rax = arg1[0xc]
int32_t rdx_1 = 0xb8

if (rax != 0)
    rdx_1 = 0xb8 + *rax

int32_t* rax_2 = arg1[0xb]
char var_118 = 1
int32_t var_114 = rdx_1

if (rax_2 != 0)
    *rax_2 += 1

char* var_f0
memset(&var_f0, 0, 0xe0)
sub_14280c4a0(&var_f0)
void* rax_3 = arg1[0xb]
void arg_8
void* rdx_2 = &arg_8

if (rax_3 != 0)
    rdx_2 = rax_3

sub_1427d9460(arg1, rdx_2, &var_118)
return sub_1427e5c70(arg1) __tailcall
