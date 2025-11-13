// 函数: sub_1407b28c0
// 地址: 0x1407b28c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r8 = *(arg1 + 0x188)
*(arg1 + 0x160) = *(*(r8 + 0x18) + 0x18)
*(arg1 + 0x158) = *(r8 + 0xd0)
*(arg1 + 0x168) = *(r8 + 0x78)
*(arg1 + 0x170) = *(r8 + 0x88)
*(arg1 + 0x180) = *(r8 + 0xa8)
*(arg1 + 0x178) = *(r8 + 0x118)
*(arg1 + 0x184) = *(r8 + 0x15c)
int32_t r15 = *(r8 + 8)
int64_t* var_98
void var_88
int64_t var_80
int128_t var_78

if (*(arg1 + 0x1a4) != 0)
    void* rsi_1 = *(arg1 + 0x190)
    int32_t rbx_1 = *(arg1 + 0x198)
    int64_t* var_98_1 = &var_80
    int64_t* rcx_1 = data_143f0f180
    int128_t* var_a0_1 = &var_78
    int32_t var_68_1 = 1
    int128_t var_64_1 = data_143dbb1e0
    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
    char var_50_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    __builtin_memset(&var_80, 0, 0x18)
    int32_t count = rbx_1 << 2
    (*(*rcx_1 + 0x488))(zx.o(0), &var_88, &data_143f02b98, zx.q(count), 0x201, var_a0_1, var_98_1)
    sub_1405d1600(arg1 + 0x10, &var_88)
    sub_1405d1550(&var_88)
    void* rdx_3 = *(rsi_1 + 8)
    
    if ((1 & rdx_3.b) != 0)
        rdx_3 = (rdx_3 s>> 1) + rsi_1 + 8
    
    memcpy(var_80, rdx_3, count)
    int64_t* rcx_5 = data_143f0f180
    (*(*rcx_5 + 0x138))(rcx_5, &data_143f02b98, *(arg1 + 0x10))
    int64_t* rcx_6 = data_143f0f180
    var_a0_1.b = 0xd
    (*(*rcx_6 + 0x4b8))(rcx_6, &var_88, &data_143f02b98, *(arg1 + 0x10), 4, var_a0_1)
    sub_1405d1600(arg1 + 0x18, &var_88)
    sub_1405ec8a0(&var_88)
    int64_t* rcx_9 = data_143f0f180
    var_98 = &var_80
    (*(*rcx_9 + 0x488))(rcx_9, &var_88, &data_143f02b98, zx.q(count), 0x201, &var_78, var_98)
    sub_1405d1600(arg1 + 0x20, &var_88)
    sub_1405d1550(&var_88)
    void* rdx_9 = *(rsi_1 + 0x18)
    
    if ((1 & rdx_9.b) != 0)
        rdx_9 = (rdx_9 s>> 1) + 0x18 + rsi_1
    
    memcpy(var_80, rdx_9, count)
    int64_t* rcx_13 = data_143f0f180
    (*(*rcx_13 + 0x138))(rcx_13, &data_143f02b98, *(arg1 + 0x20))
    int64_t* rcx_14 = data_143f0f180
    int128_t* var_a0_2
    var_a0_2.b = 0x1c
    (*(*rcx_14 + 0x4b8))(rcx_14, &var_88, &data_143f02b98, *(arg1 + 0x20), 4, var_a0_2)
    sub_1405d1600(arg1 + 0x28, &var_88)
    sub_1405ec8a0(&var_88)

if (*(arg1 + 0x44) s> 0)
    var_78.q = 0
    int32_t var_68_2 = 1
    int128_t var_64_2 = data_143dbb1e0
    int32_t var_54_2 = (1 << (data_1439c7a34).b) - 1
    char var_50_2 = 0
    int64_t var_48_2 = 0
    int32_t var_40_2 = 0
    
    if (*(arg1 + 0x40) != 0)
        int64_t* rcx_18 = data_143f0f180
        var_78:8.q = arg1 + 0x50
        (*(*rcx_18 + 0x498))(rcx_18, &var_88, &data_143f02b98, zx.q(*(arg1 + 0x60) << 2), 0x201, 
            &var_78, var_98)
        sub_1405d1600(arg1 + 0xd0, &var_88)
        sub_1405d1550(&var_88)
        int64_t* rcx_21 = data_143f0f180
        int128_t* var_a0_3
        var_a0_3.b = 0xd
        (*(*rcx_21 + 0x4b8))(rcx_21, &var_88, &data_143f02b98, *(arg1 + 0xd0), 4, var_a0_3)
        sub_1405d1600(arg1 + 0xd8, &var_88)
        sub_1405ec8a0(&var_88)
        int64_t* rcx_24 = data_143f0f180
        var_78:8.q = arg1 + 0x70
        (*(*rcx_24 + 0x498))(rcx_24, &var_88, &data_143f02b98, zx.q(*(arg1 + 0x80) << 2), 0x201, 
            &var_78)
        sub_1405d1600(arg1 + 0xe0, &var_88)
        sub_1405d1550(&var_88)
        int64_t* rcx_27 = data_143f0f180
        int128_t* var_a0_4
        var_a0_4.b = 0x1c
        (*(*rcx_27 + 0x4b8))(rcx_27, &var_88, &data_143f02b98, *(arg1 + 0xe0), 4, var_a0_4)
        sub_1405d1600(arg1 + 0xe8, &var_88)
        sub_1405ec8a0(&var_88)
    
    int64_t* rcx_30 = data_143f0f180
    var_78:8.q = arg1 + 0x90
    (*(*rcx_30 + 0x498))(rcx_30, &var_88, &data_143f02b98, zx.q(*(arg1 + 0xa0) << 2), 0x201, 
        &var_78, var_98)
    sub_1405d1600(arg1 + 0xf0, &var_88)
    sub_1405d1550(&var_88)
    int64_t* rcx_33 = data_143f0f180
    int128_t* var_a0_5
    var_a0_5.b = 0x1c
    (*(*rcx_33 + 0x4b8))(rcx_33, &var_88, &data_143f02b98, *(arg1 + 0xf0), 4, var_a0_5)
    sub_1405d1600(arg1 + 0xf8, &var_88)
    sub_1405ec8a0(&var_88)
    int64_t* rcx_36 = data_143f0f180
    var_78:8.q = arg1 + 0xb0
    (*(*rcx_36 + 0x498))(rcx_36, &var_88, &data_143f02b98, zx.q(*(arg1 + 0xc0) << 2), 0x201, 
        &var_78)
    sub_1405d1600(arg1 + 0x100, &var_88)
    sub_1405d1550(&var_88)
    int64_t* rcx_39 = data_143f0f180
    int128_t* var_a0_6
    var_a0_6.b = 0x1c
    (*(*rcx_39 + 0x4b8))(rcx_39, &var_88, &data_143f02b98, *(arg1 + 0x100), 4, var_a0_6)
    sub_1405d1600(arg1 + 0x108, &var_88)
    sub_1405ec8a0(&var_88)

int32_t r9_17 = *(arg1 + 0x19c)
int64_t* var_98_2 = &var_80
int64_t* rcx_43 = data_143f0f180
int128_t* var_a0_7 = &var_78
int32_t var_68_3 = 1
int128_t var_64_3 = data_143dbb1e0
int32_t var_54_3 = (1 << (data_1439c7a34).b) - 1
char var_50_3 = 0
int64_t var_48_3 = 0
int32_t var_40_3 = 0
__builtin_memset(&var_80, 0, 0x18)
(*(*rcx_43 + 0x488))(rcx_43, &var_88, &data_143f02b98, zx.q(r9_17 << 2), 0x201, var_a0_7, var_98_2)
sub_1405d1600(arg1 + 0x30, &var_88)
sub_1405d1550(&var_88)
int64_t rsi_2 = var_80
int32_t r8_5 = 0
int32_t rbx_2 = 0

if (r15 != 0)
    do
        int32_t rdx_32 = 0
        void* r10_2 = sx.q(rbx_2) * 0xe8 + **(arg1 + 0x188)
        int32_t r9_19 = *(r10_2 + 0x38)
        int32_t r11_1 = *(r10_2 + 0x10)
        
        if (r9_19 != 0)
            do
                uint64_t rax_37 = zx.q(rdx_32 + r11_1)
                rdx_32 += 1
                *(rsi_2 + (rax_37 << 2)) = r8_5
            while (rdx_32 u< r9_19)
        
        r8_5 += *(r10_2 + 0x30)
        rbx_2 += 1
    while (rbx_2 u< r15)

int64_t* rcx_46 = data_143f0f180
(*(*rcx_46 + 0x138))(rcx_46, &data_143f02b98, *(arg1 + 0x30))
int64_t* rcx_47 = data_143f0f180
var_a0_7.b = 0x1c
(*(*rcx_47 + 0x4b8))(rcx_47, &var_88, &data_143f02b98, *(arg1 + 0x30), 4, var_a0_7)
sub_1405d1600(arg1 + 0x38, &var_88)
int64_t result = sub_1405ec8a0(&var_88)
int32_t r9_21 = *(arg1 + 0x130)

if (r9_21 s> 0)
    int32_t var_68_4 = 1
    int64_t* rcx_51 = data_143f0f180
    var_78.q = 0
    int128_t var_64_4 = data_143dbb1e0
    int32_t var_54_4 = (1 << (data_1439c7a34).b) - 1
    char var_50_4 = 0
    int64_t var_48_4 = 0
    int32_t var_40_4 = 0
    var_78:8.q = arg1 + 0x120
    (*(*rcx_51 + 0x498))(rcx_51, &var_88, &data_143f02b98, zx.q(r9_21 * 2), 0x201, &var_78)
    sub_1405d1600(arg1 + 0x140, &var_88)
    sub_1405d1550(&var_88)
    int64_t* rcx_54 = data_143f0f180
    int128_t* var_a0_8
    var_a0_8.b = 0x20
    (*(*rcx_54 + 0x4b8))(rcx_54, &var_88, &data_143f02b98, *(arg1 + 0x140), 2, var_a0_8)
    sub_1405d1600(arg1 + 0x148, &var_88)
    result = sub_1405ec8a0(&var_88)

__security_check_cookie(rax_1 ^ &var_c8)
return result
