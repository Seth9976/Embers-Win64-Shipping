// 函数: sub_1427d4a60
// 地址: 0x1427d4a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

char* var_d0
memset(&var_d0, 0, 0xc0)
sub_14280c260(&var_d0)
void var_e8
int128_t* rax_1
int64_t rdx_2
rax_1, rdx_2 = zmm1(&var_e8, arg1[2])
arg1[3]
arg1[1]
int128_t var_128 = *rax_1
int64_t var_138 = arg1[4]
int64_t var_118 = rax_1[1].q
void* result = sub_1427e1be0(*arg1, rdx_2)
void* rdx_3 = *arg1

if (*(rdx_3 + 0x10) != 0)
    if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_7 = arg1[1]
        (*(*rcx_7 + 0x20))(rcx_7, rdx_3)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
