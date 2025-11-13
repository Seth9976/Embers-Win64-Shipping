// 函数: sub_1406d2ce0
// 地址: 0x1406d2ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t var_68 = arg2
uint32_t result_2 = arg1[1]
uint32_t result = *arg1
uint32_t result_1 = result_2

if (result s<= result_2)
    result_1 = result

if (result s>= result_2)
    result_2 = result

uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(result_2 - result_1)).d f+ 1f
uint128_t zmm0
zmm0.d = 5.35714293f f/ zmm2.d
zmm0.d = zmm0.d f* arg4
uint128_t zmm1
zmm1.d = 1f f- var_68:4.d

if (zmm1.d f<= zmm0.d)
    zmm6.d = var_68.d.d f* zmm2.d
    zmm6.d = zmm6.d f+ _mm_cvtepi32_ps(zx.o(result_1)).d
    int32_t rdi_1 = int.d(zmm6.d)
    zmm6.d = zmm6.d f- _mm_cvtepi32_ps(zx.o(rdi_1)).d
    int32_t rdx_4 = rdi_1 s/ 7
    uint64_t rdi_2 = zx.q(rdi_1 s% 7)
    char result_3 = rdx_4.b
    rdx_4.b *= 2
    result_3 = ((result_3 + rdx_4.b) << 2) + (rdi_2.d s<= 2) - 1 + (rdi_2 << 1).b
    
    if (not(zmm1.d f< zmm0.d * 0.333333343f))
        int128_t var_58
        __builtin_memcpy(&var_58, 
            "\x00\x00\x00\x00\x00\x40\x03\x44\x00\x00\x2f\x43\x00\x40\x26\x44\x00\x80\x9d\x43\x00\x00\x"
        "52\x44\x00\x00\x00\x00\x00\x80\xe3\x43\x00\x00\xd2\x42\x00\xc0\x14\x44\x00\x00\x75\x43\x00"
        "c0\x37\x44\x00\x80\xc0\x43\x00\x00\x52\x44", 
            0x38)
        var_68 = 0
        int32_t var_60_1 = 7
        sub_1406387e0(&var_68, 7, 0)
        uint64_t rcx_2 = var_68
        *rcx_2 = var_58
        __builtin_memcpy(rcx_2 + 0x10, 
            "\x00\x80\x9d\x43\x00\x00\x52\x44\x00\x00\x00\x00\x00\x80\xe3\x43\x00\x00\xd2\x42\x00\xc0\x"
        "14\x44\x00\x00\x75\x43\x00\xc0\x37\x44", 
            0x20)
        int32_t var_28
        *(rcx_2 + 0x30) = var_28.q
        int64_t rax_7 = sx.q(rdi_2.d)
        zmm2.d = (*(rcx_2 + (rax_7 << 3) + 4)).d f* 0.00119047624f
        int128_t zmm0_1
        zmm0_1.d = (*(rcx_2 + (rax_7 << 3))).d f* 0.00119047624f
        
        if (not(zmm6.d f>= zmm0_1.d))
            result_3 -= 1
        else if (not(zmm6.d f<= zmm2.d))
            result_3 += 1
        
        sub_140a74f90(rcx_2)
    
    result = zx.d(result_3)
else
    result.b = 0xff

__security_check_cookie(rax_1 ^ &var_88)
return result
