// 函数: sub_1408ca630
// 地址: 0x1408ca630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r15 = arg1[9]
int32_t rbx = 0
char rax_2 = *(r15 + 0xc1)

if (rax_2 != 0)
    rbx.b = rax_2 != 1
    rbx += 1

char rax_3 = *(r15 + 0xc0)
int32_t rsi = 0

if (rax_3 != 0)
    rsi.b = rax_3 != 1
    rsi += 1

char rax_7 = sub_1423c1fe0(sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0))), r15)
int64_t* rcx_3 = data_143f0f180
int32_t var_a4 = 0x7f7fffff
char var_b0 = rax_7
char var_af = rsi.b
char var_ae = rbx.b
char var_ad = 0
int64_t var_ac = 0
int64_t var_a0 = 0
char var_98 = 0
void* const var_b8
(*(*rcx_3 + 0x28))(rcx_3, &var_b8, &var_b0)
sub_1405d1600(&arg1[3], &var_b8)
sub_1405d1550(&var_b8)
void* r15_1 = arg1[9]
int32_t rbx_1 = 0
char rax_9 = *(r15_1 + 0xc1)

if (rax_9 != 0)
    rbx_1.b = rax_9 != 1
    rbx_1 += 1

char rax_10 = *(r15_1 + 0xc0)
int32_t rsi_1 = 0

if (rax_10 != 0)
    rsi_1.b = rax_10 != 1
    rsi_1 += 1

void* rax_11
int512_t zmm0
int128_t zmm2
int128_t zmm3
rax_11, zmm0, zmm2, zmm3 = sub_141fe0c50(0)
char rax_14 = sub_1423c1fe0(sub_1405e25d0(sub_141fe0f50(rax_11)), r15_1)
int64_t* rcx_9 = data_143f0f180
zmm0.o = 0x40000000
int32_t var_84 = 0x40000000
char var_90 = rax_14
char var_8f = rsi_1.b
char var_8e = rbx_1.b
char var_8d = 0
int64_t var_8c = 0
int64_t var_80 = 1
char var_78 = 0
(*(*rcx_9 + 0x28))(zmm0, &var_b8, &var_90)
sub_1405d1600(&arg1[4], &var_b8)
sub_1405d1550(&var_b8)
int128_t zmm1 = data_143dbb1e0
int32_t var_58 = 1
int32_t rax_17 = (1 << (data_1439c7a34).b) - 1
int128_t var_68 = zx.o(0)
int32_t var_44 = rax_17
int128_t var_54 = zmm1
char var_40 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t rax_19 = (*(*arg1 + 0x48))(arg1)
int64_t rdx_6 = *arg1
int32_t rax_20 = (*(rdx_6 + 0x40))(arg1, rdx_6)
int64_t* rcx_15 = data_143f0f180
(*(*rcx_15 + 0x560))(rcx_15, &var_b8, &data_143f02b98, zx.q(rax_20), rax_19, 2, 1, 1, 0, &var_68)
sub_1408c8cf0(&arg1[2], var_b8)
sub_1405d1550(&var_b8)
*(arg1[2] + 0x58) = *(arg1[9] + 0x18)
int64_t result = sub_14198ac20(&data_143f02b98, *(arg1[9] + 0x90), arg1[2], zmm3, zmm2)
void* r9_1 = arg1[9]

if (r9_1 != 0)
    int64_t* rcx_18 = *(r9_1 + 0xd0)
    
    if (rcx_18 != 0)
        int64_t rdx_12 = *(r9_1 + 0x78)
        
        if (rdx_12 != 0)
            var_b8 = nullptr
            uint64_t r9_2 = zx.q(*(r9_1 + 0xc2))
            *(r9_1 + 0xdc) = var_b8
            result = (*(*rcx_18 + 0x290))(rcx_18, rdx_12, r9_1 + 0xdc, r9_2)

__security_check_cookie(rax_1 ^ &var_108)
return result
