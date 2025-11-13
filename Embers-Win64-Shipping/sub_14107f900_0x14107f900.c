// 函数: sub_14107f900
// 地址: 0x14107f900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
TEB* gsbase

if (data_143e498d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e498d0)
    
    if (data_143e498d0 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_15 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.GTAO.TemporalFilter", r8_1)
        
        if (rax_15 != 0)
            int64_t rdx_3 = *rax_15
            rax_15 = (*(rdx_3 + 0x58))(rax_15, rdx_3)
        
        data_143e498c8 = rax_15
        _Init_thread_footer(&data_143e498d0)

int64_t* rdi_1 = *(arg3 + 8)
int32_t rsi = 0
int32_t r14 = 0

if (rdi_1 != 0)
    int32_t rax_5 = (*(*rdi_1 + 0x68))(rdi_1)
    r14 = rdi_1[0x99].d
    rsi = rax_5

uint64_t rdx_1 = zx.q(rsi u/ 6)
float var_c8[0x4]
__builtin_memcpy(&var_c8, 
    "\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3e\x00\x00\x40\x3f\x00\x00\x70\x42\x00\x00\x96\x43\x"
"00\x00\x34\x43\x00\x00\x70\x43\x00\x00\xf0\x42", 
    0x24)
int32_t var_a4 = 0
int128_t var_b8
float zmm1[0x4] = *(&var_b8 + (zx.q(rsi - (rdx_1 * 3).d * 2) << 2))
zmm1[0] = zmm1[0] * 0.00872664619f
float zmm0_1[0x4]
float zmm6_1[0x4]
zmm0_1, zmm6_1 = __libm_sse2_sincosf_(zmm1)
float zmm4[0x4] = 0x3f800000
float zmm3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3[0] = zmm0_1[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm0_1 = zx.o(0)
float zmm2[0x4] = var_c8[zx.q(rsi) & 3]
zmm3[0] = var_c8[zx.q(rdx_1.d) & 3] * 0.25f
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3[0] = zmm2[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
float var_98[0x4] = zmm3
var_c8 = zmm3
zmm0_1[0] = float.s(zx.q(r14))
var_c8[2].q = 0
float zmm1_1 = *(data_143e2dec8 + 4)
zmm2 = var_c8
void* rax_12 = data_143e2dee0
zmm2[0] = zmm0_1[0]
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm2[0] = zmm1_1
zmm3 = _mm_cvtepi32_ps(zx.o(arg4.d))
zmm0_1 = _mm_cvtepi32_ps(zx.o(arg4:4.d))
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm1_1 = 1f / zmm3[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3[0] = zmm0_1[0]
float var_88[0x4] = zmm2
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm2 = 0x3f800000
zmm3[0] = zmm1_1
zmm2[0] = 1f / zmm0_1[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3[0] = zmm2[0]
float var_78[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x39)
float zmm5[0x4] = *(rax_12 + 4)
zmm0_1 = *(data_143e2def8 + 4)

if (not(zmm0_1[0] < zmm6_1[0]))
    zmm6_1 = __minss_xmmss_memss(zmm0_1[0], 0x3f7fbe77)

zmm6_1[0] = zmm6_1[0] * zmm5[0]
int32_t var_d0 = 0
int32_t var_d8 = 4
zmm5[0] = zmm5[0] * zmm5[0]
zmm1_1 = zmm6_1[0] * zmm6_1[0]
zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
zmm6_1[0] = zmm5[0]
zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc6)
zmm5[0] = zmm5[0] - zmm1_1
zmm4[0] = 1f / zmm5[0]
zmm6_1[0] = zmm4[0]
zmm4[0] = zmm4[0] * zmm1_1
zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x27)
zmm6_1[0] = (zmm4 ^ data_142d3f780)[0]
float var_68[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x39)
void arg_28
uint64_t result = sub_14077c9b0(arg2, &arg_28, arg1, &var_98, var_d8, var_d0)
__security_check_cookie(rax_1 ^ &var_f8)
return result
