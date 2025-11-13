// 函数: sub_140848650
// 地址: 0x140848650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[5]
void* rdx = &arg1[1]
int64_t var_c8 = 0
int64_t var_c0 = 0

if (rax != 0)
    rdx = rax

int32_t rax_1 = arg1[6].d
int64_t rcx = arg1[7]
void* var_b8 = rdx
int32_t var_b0 = rax_1
var_b8.o = var_b8.o
sub_14276e8e0(rcx, &var_c8, &var_b8)
int64_t rax_2 = *arg1
int64_t rax_3 = var_c8
int64_t var_c0_1 = 0
var_c8 = 0
void var_90
sub_140844740(&var_90, &arg1[9])
void*** rax_6 = sub_140a82f30(0x68, 8)
*rax_6 = &data_142ddc088
rax_6[1] = rax_2
rax_6[2] = rax_3
rax_6[3].d = var_c0.d
*(rax_6 + 0x1c) = var_c0:4.d
int64_t var_a0_1 = 0
int32_t var_98
var_98.q = 0
sub_140844740(&rax_6[4], &var_90)
*rax_6 = &data_142ddc0a8
uint64_t (* var_48)(int32_t* arg1)
uint64_t (* rax_7)(int32_t* arg1) = var_48

if (rax_6 != -8)
    rax_7 = j_sub_1408481b0

void*** var_38 = rax_6
var_48 = rax_7
uint64_t result = sub_140a20e40(2, &var_48)
int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

if (var_a0_1 != 0)
    result = sub_140a74f90(var_a0_1)

int64_t rcx_9 = var_c8

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
