// 函数: sub_1420fc500
// 地址: 0x1420fc500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_668
int64_t rax_1 = __security_cookie ^ &var_668
sub_1420f9750()
EnterCriticalSection(&data_143f48878)
int64_t* i_1
int32_t var_638

if (arg1 != data_143f488a0)
    data_143f488a0 = arg1
    int32_t var_648
    sub_141a0a300(&data_143f48828, &var_648, arg1)
    int64_t rax_2 = sx.q(var_648)
    void* const rax_5
    
    if (rax_2.d == 0xffffffff)
        rax_5 = nullptr
    else
        rax_5 = rax_2 * 0x30 + data_143f48828
    
    int128_t* rcx = rax_5 + 8
    
    if (rax_5 == 0)
        rcx = nullptr
    
    if (rcx == 0)
        int64_t zmm3 = data_143dbb208
        var_638 = data_143dbb200
        int32_t var_628_1 = data_143dbb210
        char var_624_1 = 0
        uint128_t zmm0_1
        zmm0_1.q = data_143dbb1f8.q
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
        zmm0_1.d = 0x42b40000
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x39)
        data_143f488a8.o = zmm0_1
        i_1.o = zmm0_1
        zmm0_1.q = zmm3
        uint128_t var_630_1 = zmm0_1
        data_143f488b8.o = zmm0_1
    else
        data_143f488a8.o = *rcx
        data_143f488b8.o = rcx[1]

float zmm6[0x4] = data_143f488a8.o
uint128_t zmm7 = data_143f488b8.o
char r9 = LeaveCriticalSection(&data_143f48878)

if (_mm_bsrli_si128(zmm7, 0xc).b == 0)
    int64_t* rcx_1 = *(arg1 + 0x30)
    
    if (rcx_1 != 0)
        int64_t* r8_2 = rcx_1[0x57]
        
        if (r8_2 != 0)
            void var_618
            int64_t* rax_10 = (*(*r8_2 + 0x660))(r8_2, &var_618)
            *arg2 = *rax_10
            arg2[1].d = rax_10[1].d
            *(arg2 + 0xc) = *(rax_10 + 0xc)
            *(arg2 + 0x14) = *(rax_10 + 0x14)
            arg2[3].d = rax_10[3].d
            *(arg2 + 0x1c) = *(rax_10 + 0x1c)
            arg2[4].d = rax_10[4].d
            *(arg2 + 0x24) = *(rax_10 + 0x24)
            arg2[5].d = rax_10[5].d
            *(arg2 + 0x2c) = *(rax_10 + 0x2c)
            arg2[6].d ^= (arg2[6].d ^ rax_10[6].d) & 1
            arg2[6].d ^= (arg2[6].d ^ rax_10[6].d) & 2
            *(arg2 + 0x34) = *(rax_10 + 0x34)
            arg2[7].d = rax_10[7].d
            sub_1405af800(&arg2[8], &rax_10[8])
            uint128_t zmm0_2 = zx.o(rax_10[0xb0])
            arg2[0xb0] = zmm0_2.q
            
            if (&rax_10[0xb2] != &arg2[0xb2])
                if (arg2[0xb8].b != 0)
                    arg2[0xb8].b = 0
                
                if (rax_10[0xb8].b != 0)
                    *(arg2 + 0x590) = *(rax_10 + 0x590)
                    *(arg2 + 0x5a0) = *(rax_10 + 0x5a0)
                    zmm0_2 = *(rax_10 + 0x5b0)
                    *(arg2 + 0x5b0) = zmm0_2
                    arg2[0xb8].b = 1
            
            char var_58_1 = 0
            int64_t var_a8
            
            if (var_a8 != 0)
                zmm0_2 = sub_140a74f90(var_a8)
            
            int64_t* rcx_11 = *(*(arg1 + 0x30) + 0x2b8)
            (*(*rcx_11 + 0x6c0))(rcx_11)
            arg2[3].d = zmm0_2.d
            rcx_1 = *(arg1 + 0x30)
        
        r9 = (*(*rcx_1 + 0x6f8))(rcx_1, arg2, arg2 + 0xc)
else
    *arg2 = zmm6.q
    *(arg2 + 0xc) = zmm7.q
    uint128_t temp0_4 = _mm_bsrli_si128(zmm6, 8)
    uint128_t temp0_5 = _mm_bsrli_si128(zmm7, 8)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    arg2[1].d = temp0_4.d
    arg2[3].d = temp0_6[0]
    *(arg2 + 0x14) = temp0_5.d

sub_1422e3b90(*(data_143f5b298 + 0xb18), &i_1, 0, r9)

for (int64_t* i = i_1; i != &i[sx.q(var_638) * 2]; i = &i[2])
    int64_t* rcx_14 = *i
    (*(*rcx_14 + 0x18))(rcx_14, *(arg1 + 0x30), arg2)

sub_140596e10(&i_1)
int32_t result = arg2[3].d
*(arg2 + 0x1c) = result
__security_check_cookie(rax_1 ^ &var_668)
return result
