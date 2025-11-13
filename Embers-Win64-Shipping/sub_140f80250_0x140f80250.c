// 函数: sub_140f80250
// 地址: 0x140f80250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* rdi = *(arg4 + 0x48)

if (rdi != 0)
    rdi[1].d += 1

int64_t r12
r12.b = *(arg4 + 0x38) == data_143e1e020

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r12.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    (*(*arg1 + 0x278))(arg1, arg4)
    char var_1c8 = 1
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    char var_1a8_1 = 0
    int64_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x88)
    int512_t zmm1
    zmm1.o = zx.o(0)
    int32_t var_114
    int32_t var_114_1 = (var_114 & 0xffffff01) | 1
    int32_t var_118_1 = 0x20702
    void var_108
    sub_140596b00(&var_108, &var_1c8)
    sub_140597700(&var_1c8)
    arg1[0x9a].b = 0
    
    if (sub_140e19840(arg1, zmm1) != 0)
        float zmm3 = arg3[2]
        zmm1.o = arg3[4]
        float zmm2 = zmm3 * arg3[1]
        int64_t var_1d4_1 = 0
        zmm3 = zmm3 * *arg3
        float var_1cc_1 = zmm2
        int32_t var_1e0 = arg3[3]
        int32_t var_1dc_1 = zmm1.d
        float var_1d8_1 = zmm3
        float var_1f0
        sub_140dbe170(&var_1e0, &var_1f0)
        zmm1.o = *(arg1 + 0x4cc)
        int128_t zmm3_1 = arg1[0x99].d
        int128_t zmm2_1 = zmm1.o
        zmm1.d = zmm1.d f* arg3[0xa]
        float zmm0_1 = zmm3_1.d
        zmm3_1.d = zmm3_1.d f* arg3[8]
        zmm2_1.d = zmm2_1.d f* arg3[9]
        zmm3_1.d = zmm3_1.d f+ zmm1.d
        int32_t var_1ec
        zmm1.o = var_1ec
        zmm2_1.d = zmm2_1.d f+ zmm0_1 * arg3[7]
        zmm3_1.d = zmm3_1.d f+ arg3[0xc]
        
        if (not(zmm3_1.d f< zmm1.d))
            zmm1.o = zmm3_1
            int32_t var_1e4
            zmm1.o = __minss_xmmss_memss(zmm1.d, var_1e4)
        
        zmm1.d = zmm1.d f+ zmm1.d
        zmm2_1.d = zmm2_1.d f+ arg3[0xb]
        zmm1.d = zmm1.d f+ 0.5f
        int32_t rax_10 = int.d(zmm1.d)
        zmm1.o = var_1f0
        
        if (not(zmm2_1.d f< zmm1.d))
            zmm1.o = zmm2_1
            int32_t var_1e8
            zmm1.o = __minss_xmmss_memss(zmm1.d, var_1e8)
        
        zmm1.d = zmm1.d f+ zmm1.d
        int32_t var_1f4_1 = rax_10 s>> 1
        zmm1.d = zmm1.d f+ 0.5f
        int32_t var_1f8 = int.d(zmm1.d) s>> 1
        sub_140dbda80(&var_108, &var_1f8)
    
    sub_140e51550(arg2, &var_108)
    sub_140597700(&var_108)

__security_check_cookie(rax_1 ^ &var_218)
return arg2
