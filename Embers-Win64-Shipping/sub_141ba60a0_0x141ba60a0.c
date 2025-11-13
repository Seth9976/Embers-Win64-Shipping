// 函数: sub_141ba60a0
// 地址: 0x141ba60a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint128_t zmm1 = data_14399f5c0
char var_c0
char var_c0_1 = var_c0 & 0xfc
int128_t var_138 = data_142e05200
void** const var_140 = &data_142d8ad18
char var_30 = 0
int128_t var_108
__builtin_memset(&var_108, 0, 0x20)
uint128_t var_120 = zmm1
int64_t var_128 = 0
zmm1 = zx.o(data_143dbb1f0)
uint64_t var_148 = zmm1.q
int128_t zmm0 = var_148:4.d
int32_t var_dc = zmm0.d
int32_t var_e4 = zmm0.d
int128_t var_d0 = zx.o(0)
char var_110 = 0
int32_t var_e0 = zmm1.d
int32_t var_e8 = zmm1.d
char var_d8 = 0
int32_t var_d4 = 3
void** var_b8
sub_14068e310(&var_b8, &var_140)
int64_t* rbx = var_d0:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = var_108:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

char var_30_1 = 1
int64_t* rax_6 = sub_140d3c6e0(arg1 + 0x18)
int64_t r9 = *rax_6
(*(r9 + 0x210))(rax_6, *(arg1 + 8), &var_b8, r9, var_148)
sub_14068e310(arg2, &var_b8)

if (var_30_1 != 0)
    sub_140691a20(&var_b8)

__security_check_cookie(rax_1 ^ &var_168)
return arg2
