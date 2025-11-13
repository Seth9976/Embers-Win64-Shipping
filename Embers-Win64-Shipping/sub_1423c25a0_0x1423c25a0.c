// 函数: sub_1423c25a0
// 地址: 0x1423c25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rbx = *(arg1 + 0x80)
void var_b8

if (*(rbx + 0xc0) s> 0)
    (*(*(arg1 + 0x48) + 0x20))(arg1 + 0x48)
    void* r8_1 = *(arg1 + 0x80)
    char rcx_1 = (data_1439c7a34).b
    arg2[0] = arg2[0] f- 1f
    int128_t zmm1 = *(r8_1 + 0xc4)
    int32_t var_b0_1 = 1
    int32_t var_54_1 = (1 << rcx_1) - 1
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)
    char var_50_1 = 0
    int64_t var_48_1 = 0
    uint32_t var_68_1[0x4] = var_b0_1.o
    int128_t var_78 = zx.o(0)
    int32_t var_40_1 = 0
    int32_t var_58_1 = zmm1:0xc.d
    char rdx_1 = *(r8_1 + 0xd4)
    
    if (rdx_1 == 0)
        rdx_1 = (*(r8_1 + 0xd5) & 1) << 3 | 2
    
    int64_t* rcx_2 = data_143f0f180
    int32_t rax_6 = 9
    
    if (temp0_1[0] f>= 9.99999975e-05f)
        rax_6 = 0x19
    
    (*(*rcx_2 + 0x5e8))(rcx_2, &var_b8, &data_143f02b98, zx.q(*(r8_1 + 0xc0)), rdx_1, 1, rax_6, 
        &var_78)
    sub_1405d16e0(arg1 + 0x98, *sub_1405d1600(arg1 + 0x88, &var_b8))
    sub_1405d1550(&var_b8)
    int32_t r14_1 = 1
    
    if (temp0_1[0] f>= 9.99999975e-05f)
        r14_1 = 0x11
    
    sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0x88))
    int128_t entry_zmm2
    int128_t entry_zmm3
    sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x80) + 0x90), *(arg1 + 0x10), entry_zmm3, entry_zmm2)
    void* r8_3 = *(arg1 + 0x80)
    int32_t var_b0_2 = 1
    int32_t var_54_2 = (1 << (data_1439c7a34).b) - 1
    int32_t rax_10 = (*(r8_3 + 0xc4)):0xc.d
    var_78 = zx.o(0)
    char var_50_2 = 0
    int64_t var_48_2 = 0
    int128_t var_68_2 = var_b0_2.o
    int32_t var_40_2 = 0
    int32_t var_58_2 = rax_10
    char rdx_8 = *(r8_3 + 0xd4)
    
    if (rdx_8 == 0)
        rdx_8 = (*(r8_3 + 0xd5) & 1) << 3 | 2
    
    int32_t r9_2 = *(r8_3 + 0xc0)
    int64_t* rcx_8 = data_143f0f180
    int128_t* var_d0_1
    var_d0_1.d = 1
    int32_t var_e0_1
    var_e0_1.b = rdx_8
    char var_e8_1
    var_e8_1.d = r9_2
    (*(*rcx_8 + 0x560))(rcx_8, &var_b8, &data_143f02b98, r9_2, var_e8_1, var_e0_1, 1, var_d0_1, 
        r14_1, &var_78)
    sub_1405d1600(arg1 + 0x90, &var_b8)
    sub_1405d1550(&var_b8)
    sub_1405d16e0(arg1 + 0x50, *(arg1 + 0x90))
    sub_1423bca20(arg1 + 0x58, 1)
    rbx = *(arg1 + 0x80)

void* rax_14 = sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0)))
uint32_t rdx_13 = zx.d(*(rbx + 0x5d))
uint64_t rcx_14

if (rdx_13 == 0)
    rcx_14.b = 0
else if (rdx_13 == 1)
    rcx_14.b = 1
else if (rdx_13 == 2)
    rcx_14.b = 2
else
    rcx_14 = zx.q(*(zx.q(*(rbx + 0x5f)) * 0x54 + *(rax_14 + 0x28) + 0x18))

char var_98 = rcx_14.b
int64_t* rcx_16 = data_143f0f180
int32_t var_8c = 0x7f7fffff
int16_t var_97 = 0x101
char var_95 = 1
int64_t var_94 = 0
int64_t var_88 = 0
char var_80 = 0
(*(*rcx_16 + 0x28))(rcx_16, &var_b8, &var_98)
sub_1405d1600(arg1 + 0x18, &var_b8)
int64_t result = sub_1405d1550(&var_b8)
__security_check_cookie(rax_1 ^ &var_108)
return result
