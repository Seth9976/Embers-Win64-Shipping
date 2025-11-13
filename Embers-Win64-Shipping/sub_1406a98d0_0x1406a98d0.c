// 函数: sub_1406a98d0
// 地址: 0x1406a98d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r14 = *(arg1 + 8)
int64_t* buffer2_2
sub_14068b760(*(arg1 + 0x18), &buffer2_2, arg2, arg3)
int32_t i = 0
int64_t* buffer2_1 = buffer2_2
int64_t var_68
int32_t result

do
    int64_t* rdi_1 = *(arg1 + 0x18)
    char* rax_2 = j_sub_140a82f30(1)
    *rax_2 = i.b
    std::ctype<char>::tolower()
    int64_t* rcx_1 = *rdi_1
    uint128_t var_a0
    (*(*rcx_1 + 0x20))(rcx_1, &var_a0, rax_2, &rax_2[1])
    uint128_t zmm0_1 = var_a0
    var_a0.b = 0
    int128_t* buffer1_2 = zmm0_1.q
    uint128_t var_60 = zmm0_1
    uint128_t var_90
    zmm0_1 = var_90
    var_90.q = 0
    var_90:8.q = 0xf
    uint128_t var_50_1 = zmm0_1
    result = j_sub_140a74f90(rax_2)
    int128_t* buffer1_1 = buffer1_2
    int64_t* buffer2 = &buffer2_2
    int128_t* buffer1 = &var_60
    uint64_t count = zmm0_1.q
    
    if (var_68 u>= 0x10)
        buffer2 = buffer2_1
    
    int64_t rsi_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rsi_2 u>= 0x10)
        buffer1 = buffer1_1
    
    int64_t var_70
    
    if (count != var_70)
        rdi_1.b = 0
    else
        result = memcmp(buffer1, buffer2, count)
        
        if (result != 0)
            rdi_1.b = 0
        else
            rdi_1.b = 1
    
    if (rsi_2 u>= 0x10)
        int128_t* buffer1_3 = buffer1_1
        
        if (rsi_2 + 1 u>= 0x1000)
            buffer1_1 = *(buffer1_1 - 8)
            
            if (buffer1_3 - buffer1_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        result = j_sub_140a74f90(buffer1_1)
    
    if (rdi_1.b != 0)
        int64_t rax_5 = *(r14 + 0x28)
        
        if (rax_5 == 0)
            rax_5 = j_sub_140a82f30(zx.q((rax_5 + 0x20).d))
            
            if (rax_5 != 0)
                __builtin_memset(rax_5, 0, 0x20)
            
            *(r14 + 0x28) = rax_5
        
        char* rdx_6 = (zx.q(i) u>> 3) + rax_5
        result = i & 7
        *rdx_6 |= (1 << (result u% 0x20)).b
    
    i += 1
while (i u< 0x100)

if (var_68 u>= 0x10)
    int64_t* buffer2_3 = buffer2_1
    
    if (var_68 + 1 u>= 0x1000)
        buffer2_1 = buffer2_1[-1]
        
        if (buffer2_3 - buffer2_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(buffer2_1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
