// 函数: sub_141180420
// 地址: 0x141180420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg3 + 0x50)

if (rax != 0)
    *(rax + 0x120) = 0

int64_t* rax_1
int512_t zmm6
rax_1, zmm6 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
int64_t* rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    *rax_1 = 0
    rax_1[1] = 0

__builtin_memset(rbx, 0, 0x20)
rbx[1] = *(*(arg3 + 0x50) + 0x88)
rbx[2].d = *(*(arg3 + 0x50) + 0x70)
int128_t var_88
char rcx_3 = sub_1419a2ec0(arg2, &var_88, &data_143e6b450, 1)
int128_t zmm7 = var_88
zmm6.o = zx.o(0)
int32_t var_94 = 1
int128_t var_78 = sub_14118e750(rcx_3)
sub_141998c50(zmm7.q, &data_143e72670, rbx)
int32_t var_48 = 1
int64_t var_50 = 1.q
void*** rax_4
char rcx_5
rax_4, rcx_5 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rdi_1 = rax_4

if (rax_4 == 0)
    rdi_1 = nullptr
else
    int32_t var_98
    var_98.q = rbx
    sub_14118e750(rcx_5)
    void* var_90_1 = &data_143e726a0
    var_78 = var_98.o
    void arg_8
    sub_141992bd0(rdi_1, &arg_8, &var_78, 2)
    *rdi_1 = &data_142f2c9e8
    *(rdi_1 + 0x38) = rbx.o
    *(rdi_1 + 0x48) = zmm7
    rdi_1[0xb] = var_48.q

sub_1419968d0(arg1, rdi_1)
int64_t rdi_2 = sx.q(arg4[1].d)
int32_t rax_5 = (rdi_2 + 1).d
arg4[1].d = rax_5

if (rax_5 s> *(arg4 + 0xc))
    sub_1405a4d70(arg4)

int64_t result = rbx[1]
*(*arg4 + (rdi_2 << 3)) = result
return result
