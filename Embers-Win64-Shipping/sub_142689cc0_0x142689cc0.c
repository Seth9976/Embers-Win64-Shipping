// 函数: sub_142689cc0
// 地址: 0x142689cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
(*(*arg1 + 0x60))(arg2, &arg1[3])
void* rdx_1 = arg1[0x1d]
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24)))
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f* arg1[5].d
int32_t var_1d8 = zmm1.d
arg1[0x14] = (_mm_unpacklo_ps(zmm1, zmm1.q)).q
arg1[0x15].d = var_1d8
int32_t var_1d8_1 = (*(rdx_1 + 0x454) ^ 0x80000000).d
arg1[0x50] = (_mm_unpacklo_ps(*(rdx_1 + 0x450) ^ 0x80000000, *(rdx_1 + 0x458))).q
arg1[0x51].d = var_1d8_1
void var_1c8
sub_142671f70(&arg1[0x24], sub_142677590(&var_1c8, rdx_1))
void var_c8
sub_1405ae080(&var_c8)

if (*(arg1 + 0x8c) s<= 0)
    void* rcx_3 = *(arg1[0x1d] + 0x4a8)
    void* rax_6
    
    if (rcx_3 != 0)
        rax_6 = *(rcx_3 + 8)
    
    if (rcx_3 == 0 || rax_6 == 0 || 0f f>= *(rax_6 + 0x28) || 0f f>= *(rax_6 + 0x2c))
        rax_6.b = 0
    else
        rax_6.b = 1
    
    if (rax_6.b != 0)
        void* rax_7 = sub_1405e25d0(*(rcx_3 + 8))
        
        if (rax_7 != 0)
            *(arg1 + 0x8c) = *(rax_7 + 0x18)

int128_t zmm6
uint128_t zmm7
uint128_t zmm8
int128_t zmm9
zmm6, zmm7, zmm8, zmm9 = sub_142698750(arg1)
int64_t* rax_9 = sub_140a242a0()
int64_t rdx_3 = *rax_9
int32_t rax_10 = (*(rdx_3 + 0x18))(rax_9, rdx_3)
int64_t* rdi = arg1[0x1d]
int32_t rdx_4

if (rdi == 0)
    rdx_4 = 0x7fffffff
else
    rdx_4 = *(rdi + 0x43c)

int32_t rax_11 = rax_10 * 2
int32_t rcx_7 = 1

if (rax_11 s>= 1)
    rcx_7 = rax_11

if (rcx_7 s<= rdx_4)
    rdx_4 = rcx_7

*(arg1 + 0x28c) |= 1
arg1[0x16].d = rdx_4
*(arg1 + 0xac) = 0
int32_t var_1e8 = 0
int32_t var_1e4 = 0
void* rax_12 = rdi[0x95]

if (rax_12 == 0)
    rax_12.b = 0
else
    rax_12 = *(rax_12 + 8)
    
    if (rax_12 == 0 || zmm6.d f>= *(rax_12 + 0x28) || zmm6.d f>= *(rax_12 + 0x2c))
        rax_12.b = 0
    else
        rax_12.b = 1

uint128_t var_38 = zmm7
uint128_t var_48 = zmm8
uint64_t result

if (rax_12.b == 0)
label_14268a050:
    sub_142677940(arg1)
    int64_t* rcx_17 = arg1[0x1d]
    result = (*(*rcx_17 + 0x150))(rcx_17)
    
    if (result != 0)
        void* rdi_2 = *(result + 0x120)
        
        if (rdi_2 != 0)
            void* rax_23 = sub_14269bba0()
            void* rcx_18 = *(rdi_2 + 0x10)
            result = sx.q(*(rax_23 + 0x38))
            
            if (result.d s<= *(rcx_18 + 0x38))
                uint64_t result_1 = result
                result = *(rcx_18 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_23 + 0x30 && (*(rdi_2 + 0x70) & 1) == 0)
                    result = sub_14268cf50(arg1)
else
    int64_t rsi
    
    if (sub_14243ade0((*(*rdi + 0x150))(rdi)) == 0 || *(rdi + 0x2ac) == 2)
        rsi.b = 0
    else
        rsi.b = 1
    
    int128_t* rax_17 = sub_1405e25d0(*(*(arg1[0x1d] + 0x4a8) + 8))
    
    if (rax_17 == 0)
        goto label_14268a050
    
    int32_t rax_18
    
    if (rsi.b == 0)
        zmm8.d = _mm_cvtepi32_ps(zx.o(arg1[4].d)).d f* arg1[5].d
        
        if (zmm8.d f!= rax_17[1].d || zmm8.d f!= *(rax_17 + 0xc))
            goto label_14268a050
        
        *(rax_17 + 8)
        *rax_17
        float zmm0_1[0x4]
        float zmm6_1[0x4]
        float zmm8_1[0x4]
        int512_t zmm9_1
        zmm0_1, zmm6_1, zmm8_1, zmm9_1 = sub_140a454f0(*(rax_17 + 4), zmm8)
        zmm9_1.o = zmm0_1
        float zmm0_2[0x4]
        int512_t zmm6_2
        float zmm7_1[0x4]
        float zmm8_2[0x4]
        zmm0_2, zmm6_2, zmm7_1, zmm8_2 = sub_140a454f0(zmm6_1, zmm8_1)
        zmm6_2.o = zmm0_2
        uint32_t zmm0_3[0x4]
        uint32_t zmm6_3[0x4]
        uint32_t zmm9_2[0x4]
        zmm0_3, zmm6_3, zmm9_2 = sub_140a454f0(zmm7_1, zmm8_2)
        char rax_19
        
        if (_mm_and_ps(zmm0_3, 0x7fffffff)[0] f> 9.99999975e-05f)
            rax_19 = 0
        else if (_mm_and_ps(zmm6_3, 0x7fffffff)[0] f> 9.99999975e-05f)
            rax_19 = 0
        else if (_mm_and_ps(zmm9_2, 0x7fffffff)[0] f> 9.99999975e-05f)
            rax_19 = 0
        else
            rax_19 = 1
        
        if (rax_19 == 0)
            goto label_14268a050
        
        sub_142676500(arg1, &var_1e8, &var_1e4)
        int32_t rsi_1 = data_143cda914
        TEB* gsbase
        int64_t rbp_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint128_t zmm6_4 = _mm_cvtepi32_ps(zx.o(var_1e8))
        
        if (rsi_1 s> *(0x14 + rbp_1))
            _Init_thread_header(&data_143cda914)
            rsi_1 = data_143cda914
            
            if (rsi_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rsi_1 = data_143cda914
        
        uint128_t zmm0_5 = logf(zmm6_4.d)
        bool cond:1_1 = rsi_1 s> *(0x14 + rbp_1)
        zmm6_4.d = zmm0_5.d f* data_143cda910
        zmm7 = _mm_cvtepi32_ps(zx.o(*(rax_17 + 0x14)))
        
        if (cond:1_1)
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        if (zmm6_4.d f!= logf(zmm7.d) f* data_143cda910)
            goto label_14268a050
        
        rax_18 = var_1e4
        goto label_14268a028
    
    rax_18 = *(rax_17 + 0x18)
label_14268a028:
    *(arg1 + 0x8c) = rax_18
    result = sub_142688b80(*(*(arg1[0x1d] + 0x4a8) + 8))
    *(arg1 + 0xac) = result.d

__security_check_cookie(rax_1 ^ &var_208)
return result
