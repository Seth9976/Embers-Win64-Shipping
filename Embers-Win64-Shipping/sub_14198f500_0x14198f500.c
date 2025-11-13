// 函数: sub_14198f500
// 地址: 0x14198f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_78 = 8
void* var_80 = nullptr
char var_70 = 0
void** const var_88 = &data_142f3c760
sub_140888950(&var_80, 0)
int32_t i = 0
int32_t var_8c = 0x3f800000
int64_t rbx = 0
int32_t var_98

do
    int32_t rax_2 = 1
    int32_t j = 0
    int64_t r10_1 = rbx
    
    if (i != 0)
        rax_2 = -1
    
    int32_t var_90_1 = _mm_cvtepi32_ps(zx.o(rax_2)).d
    
    do
        int32_t rax_3 = 1
        int32_t k = 0
        int64_t r8_1 = r10_1
        
        if (j != 0)
            rax_3 = -1
        
        int32_t var_94_1 = _mm_cvtepi32_ps(zx.o(rax_3)).d
        
        do
            int32_t rax_4 = 1
            
            if (k != 0)
                rax_4 = -1
            
            bool cond:1_1 = (var_80.b & 1) == 0
            var_98 = _mm_cvtepi32_ps(zx.o(rax_4)).d
            void* rdx_1
            
            if (cond:1_1)
                rdx_1 = var_80
            else
                rdx_1 = &var_80 + (var_80 s>> 1)
            
            k += 1
            uint64_t rax_7 = zx.q(r8_1.w)
            r8_1 += 4
            *(rdx_1 + rax_7 * 0x10) = var_98.o
        while (k u< 2)
        
        j += 1
        r10_1 += 2
    while (j u< 2)
    
    i += 1
    rbx += 1
while (i u< 2)

uint128_t zmm0_1 = data_143dbb1e0
int64_t var_68
int64_t* var_a0 = &var_68
int64_t* rcx_2 = data_143f0f180
int32_t var_44 = (1 << (data_1439c7a34).b) - 1
void** const* var_60 = &var_88
var_68 = 0
int32_t var_58 = 1
uint128_t var_54 = zmm0_1
char var_40 = 0
int64_t var_38 = 0
int32_t var_30 = 0
(*(*rcx_2 + 0x498))(rcx_2, &var_98, &data_143f02b98, zx.q(var_78 << 4), 1, var_a0)
sub_1405d1600(arg1 + 0x10, &var_98)
sub_1405d1550(&var_98)
int64_t result = sub_140a1d5c0(&var_80)
__security_check_cookie(rax_1 ^ &var_c8)
return result
