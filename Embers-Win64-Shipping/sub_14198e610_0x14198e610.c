// 函数: sub_14198e610
// 地址: 0x14198e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_58 = 1
char rcx = (data_1439c7a34).b
int128_t var_68
int128_t* var_b0 = &var_68
int32_t var_b8 = 8
int32_t var_c0 = 1
var_68 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int128_t var_54 = data_143dbb1e0
int32_t var_44 = (1 << rcx) - 1
int32_t j_2 = 0x800
char var_40 = 0
int64_t var_38 = 0
int32_t var_30 = 0
void* var_a8
(*(*rcx_1 + 0x560))(rcx_1, &var_a8, &data_143f02b98, 0x800, 0x800, 2, 0xc, var_c0, var_b8, var_b0)
sub_1408c8cf0(arg1 + 0x10, var_a8)
int32_t i = 0
void* rbx = &data_1439c93fc

do
    int64_t* rcx_3 = data_143f0f180
    var_c0.b = 1
    int32_t var_c8
    var_c8.b = 0
    char var_d0
    int32_t var_a0
    var_d0.q = &var_a0
    int64_t rdx_2 =
        (*(*rcx_3 + 0x510))(rcx_3, &data_143f02b98, var_a8, zx.q(i), 1, var_d0, var_c8, var_c0)
    
    if (j_2 s> 0)
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            int64_t k = 0
            
            if (j_2 s> 0)
                do
                    *(rdx_2 + (k << 2)) = *rbx
                    k += 1
                while (k s< sx.q(j_2))
            
            rdx_2 += zx.q(var_a0) u>> 2 << 2
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    int64_t* rcx_4 = data_143f0f180
    int32_t var_d8_1
    var_d8_1.b = 0
    (*(*rcx_4 + 0x518))(rcx_4, &data_143f02b98, var_a8, zx.q(i), var_d8_1, 1)
    j_2 s>>= 1
    i += 1
    rbx -= 4
while (i s< 0xc)

int64_t* rcx_5 = data_143f0f180
int32_t var_8c = 0x7f7fffff
int32_t var_98 = 0
int64_t var_94 = 0
int64_t var_88 = 0
char var_80 = 0
void var_78
(*(*rcx_5 + 0x28))(rcx_5, &var_78, &var_98)
sub_1405d1600(arg1 + 0x18, &var_78)
sub_1405d1550(&var_78)
int64_t result = sub_1405d1550(&var_a8)
__security_check_cookie(rax_1 ^ &var_f8)
return result
