// 函数: sub_140f53660
// 地址: 0x140f53660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t* rdi = *(arg4 + 0x48)
char* result = arg2

if (rdi != 0)
    rdi[1].d += 1

int64_t r14

if (*(arg4 + 0x38) != data_143e1e020 || *(arg1 + 0x4cc) s>= 0)
    r14.b = 0
else
    r14.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r14.b == 0)
    *result = 0
    *(result + 8) = 0
    *(result + 0x10) = 0
    result[0x20] = 0
    __builtin_memset(&result[0x28], 0, 0x88)
    *(result + 0xb4) &= 0xffffff00
    *(result + 0xb0) = 0x20702
else
    if ((*(arg1 + 0x4cc) & 0x40) == 0 && sub_140f4a760(arg1) != 0)
        sub_140d96150(arg1 + 0x434, arg3)
        sub_140f2cf90(arg1)
    
    arg2.b = 1
    *(arg1 + 0x3c4) = 0
    sub_140e19ef0(arg1, arg2.b)
    char var_1b8 = 1
    int512_t zmm1_1
    zmm1_1.o = zx.o(0)
    int64_t var_1b0_1 = 0
    int64_t var_1a8_1 = 0
    char var_198_1 = 0
    int32_t var_104
    int32_t var_104_1 = (var_104 & 0xffffff01) | 1
    int64_t var_190
    __builtin_memset(&var_190, 0, 0x88)
    int32_t var_108_1 = 0x20702
    void var_f8
    sub_140596b00(&var_f8, &var_1b8)
    sub_140597700(&var_1b8)
    *(arg1 + 0x4cc) &= 0xfd
    
    if (sub_140e19840(arg1, zmm1_1) != 0)
        float zmm3 = *(arg3 + 8)
        zmm1_1.o = arg3[1].d
        float zmm2 = zmm3 f* *(arg3 + 4)
        int64_t var_1c4_1 = 0
        zmm3 = zmm3 f* *arg3
        float var_1bc_1 = zmm2
        int32_t var_1d0 = *(arg3 + 0xc)
        int32_t var_1cc_1 = zmm1_1.d
        float var_1c8_1 = zmm3
        float var_1e0
        sub_140dbe170(&var_1d0, &var_1e0)
        zmm1_1.o = *(arg1 + 0x404)
        int128_t zmm3_1 = arg1[0x80].d
        int128_t zmm2_1 = zmm1_1.o
        zmm1_1.d = zmm1_1.d f* *(arg3 + 0x28)
        float zmm0_2 = zmm3_1.d
        zmm3_1.d = zmm3_1.d f* arg3[2].d
        zmm2_1.d = zmm2_1.d f* *(arg3 + 0x24)
        zmm3_1.d = zmm3_1.d f+ zmm1_1.d
        int32_t var_1dc
        zmm1_1.o = var_1dc
        zmm2_1.d = zmm2_1.d f+ zmm0_2 f* *(arg3 + 0x1c)
        zmm3_1.d = zmm3_1.d f+ arg3[3].d
        
        if (not(zmm3_1.d f< zmm1_1.d))
            zmm1_1.o = zmm3_1
            int32_t var_1d4
            zmm1_1.o = __minss_xmmss_memss(zmm1_1.d, var_1d4)
        
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        zmm2_1.d = zmm2_1.d f+ *(arg3 + 0x2c)
        zmm1_1.d = zmm1_1.d f+ 0.5f
        int32_t rax_10 = int.d(zmm1_1.d)
        zmm1_1.o = var_1e0
        
        if (not(zmm2_1.d f< zmm1_1.d))
            zmm1_1.o = zmm2_1
            int32_t var_1d8
            zmm1_1.o = __minss_xmmss_memss(zmm1_1.d, var_1d8)
        
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        int32_t var_1e4_1 = rax_10 s>> 1
        zmm1_1.d = zmm1_1.d f+ 0.5f
        int32_t var_1e8 = int.d(zmm1_1.d) s>> 1
        sub_140dbda80(&var_f8, &var_1e8)
    
    sub_140e51550(result, &var_f8)
    sub_140597700(&var_f8)

__security_check_cookie(rax_1 ^ &var_208)
return result
