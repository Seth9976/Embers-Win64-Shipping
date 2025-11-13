// 函数: sub_1427d4d30
// 地址: 0x1427d4d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

char* var_f0
memset(&var_f0, 0, 0xe0)
sub_14280c4a0(&var_f0)
void var_110
int128_t* rax_1
int64_t rdx_2
rax_1, rdx_2 = zmm1(&var_110, arg1[2])
arg1[3]
arg1[1]
int128_t var_158 = *rax_1
int64_t var_148 = rax_1[1].q
int32_t var_140 = *(rax_1 + 0x18)
int64_t var_168 = arg1[4]
void* result = sub_1427e1ab0(*arg1, rdx_2)
void* rdx_3 = *arg1

if (*(rdx_3 + 0x10) != 0)
    if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_7 = arg1[1]
        (*(*rcx_7 + 0x20))(rcx_7, rdx_3)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
