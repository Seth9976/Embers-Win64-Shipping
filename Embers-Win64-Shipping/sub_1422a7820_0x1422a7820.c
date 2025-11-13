// 函数: sub_1422a7820
// 地址: 0x1422a7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x11].b & 1) == 0 || sub_140d23dc0(arg1, 0x30) != 0)
    return 

int32_t rax_2
int64_t r8_1
rax_2, r8_1 = (*(*arg1 + 0x4c8))(arg1)

if (((rax_2 - 1) & 0xfffffffd) == 0)
    sub_141f36700(arg1)

if (arg2 != 0)
    if (arg1[0x2f].d s> 0)
        void* rdx = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
        *(rdx + 0x350) |= 2
        *(rdx + 0x10) = 3
        *(rdx + 0x74) = 0xffffffff
    else if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
        r8_1.b = 1
        char rax_6 = (*(*arg1 + 0x468))(arg1, 0, r8_1, 0)
        *(arg1 + 0x14c) &= 0xfd
        *(arg1 + 0x14c) |= (rax_6 & 1) * 2

char rax_8 = (*(*arg1 + 0x3e0))(arg1)
uint8_t rdx_1 = *(arg1 + 0x8a)

if ((rdx_1 u>> 2 & 1) != rax_8)
    *(arg1 + 0x8a) = ((rax_8 << 2 ^ rdx_1) & 4) ^ rdx_1
    sub_141df0440(arg1)

int64_t* var_18
sub_1422a17b0(arg1 + 0x3dd, &var_18)
int64_t* rcx_8 = var_18

if (rcx_8 != 0)
    int64_t* arg_8 = arg1
    sub_1405a9f90(rcx_8, &arg_8)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
