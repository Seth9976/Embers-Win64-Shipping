// 函数: sub_1420986d0
// 地址: 0x1420986d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)

if (rcx[8].d s<= 0)
    return 

int64_t* rcx_1 = *rcx
int32_t rbp_1 = 0x10
int512_t zmm1 =
    sub_142085830(arg1, (*(*rcx_1 + 0x38))(rcx_1), 0x201, 0x10, arg2, 1, arg1 + 0x38, arg1 + 0x40)
void* rax_3 = *(arg1 + 0x10)
char rsi_1 = 1
char rdx_2 = *(rax_3 + 0x48)
int64_t* rcx_3 = *(rax_3 + 0x10)

if (rdx_2 != 0)
    rsi_1 = 0xa

if (rdx_2 != 0)
    rbp_1 = 8

int512_t zmm1_1 = sub_142085830(arg1, (*(*rcx_3 + 0x38))(rcx_3), 0x201, rbp_1, zmm1, rsi_1, 
    arg1 + 0x58, arg1 + 0x60)
int64_t* rcx_5 = *(*(arg1 + 0x10) + 0x20)
int512_t zmm1_2 =
    sub_142085830(arg1, (*(*rcx_5 + 0x38))(rcx_5), 0x201, 8, zmm1_1, 0x3f, arg1 + 0x78, arg1 + 0x80)
void* rcx_7 = *(arg1 + 0x10)

if (*(rcx_7 + 0x44) s<= 0)
    sub_1405d16e0(arg1 + 0xa0, data_143a2e410)
    return 

int64_t* rcx_8 = *(rcx_7 + 0x30)
sub_142085830(arg1, (*(*rcx_8 + 0x38))(rcx_8), 0x201, 4, zmm1_2, 0xd, arg1 + 0x98, arg1 + 0xa0)

if (*(arg1 + 0xa0) != 0)
    return 

int64_t* rcx_10 = data_143f0f180
void arg_8
(*(*rcx_10 + 0x4b8))(rcx_10, &arg_8, &data_143f02b98, *(arg1 + 0x98), 4, 0xd)
sub_1405d1600(arg1 + 0xa0, &arg_8)
sub_1405ec8a0(&arg_8)
