// 函数: sub_140e8c0a0
// 地址: 0x140e8c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t* rcx = data_143e29f28
int64_t var_298 = *arg2
void* rax_3 = arg2[1]
void* var_290 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t* rsi
int64_t* arg_10 = rsi
void* var_278
(*(*rcx + 0x28))(rcx, &var_278, &var_298)
int64_t* var_270

if (var_278 != 0)
    if (var_270 != 0)
        var_270[1].d += 1
    
    void var_1c8
    sub_140d947e0(&var_1c8)
    var_298 = *arg2
    void* rax_6 = arg2[1]
    void* var_290_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    sub_140e64900(data_143e29f28, &var_298, &var_1c8, data_1439ae51c, arg5)
    var_298 = *arg2
    void* rax_8 = arg2[1]
    void* var_290_2 = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    sub_140da8da0()
    int128_t* rbx_1 = &data_143e242d0
    void var_218
    int128_t* rax_9 = sub_140d9fd80(&var_1c8, &var_218, &var_298)
    
    if (*(rax_9 + 0x48) != 0)
        rbx_1 = rax_9
    
    int128_t zmm0 = *rbx_1
    int64_t* rbx_2 = rbx_1[4].q
    float var_258_1 = rbx_1[1].d
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    char var_1d0
    
    if (var_1d0 != 0)
        char var_1d0_1 = 0
        int64_t* var_1d8
        
        if (var_1d8 != 0)
            var_1d8[1].d -= 1
            
            if (var_1d8[1].d == 1)
                (**var_1d8)(var_1d8)
                int32_t temp3_1 = *(var_1d8 + 0xc)
                *(var_1d8 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_1d8 + 8))(var_1d8, 1)
    
    float var_288
    sub_140e15940(var_278, &var_288)
    uint128_t var_2a8
    int128_t* rax_16
    
    if (arg3[2] != *arg3 || arg3[3] != arg3[1])
        rax_16 = &var_298
        var_298.o = *arg3
    else
        var_2a8.q = 0
        var_2a8:8.d = int.d(zmm0.d f* zmm0:8.d)
        var_2a8:0xc.d = int.d(zmm0:4.d f* zmm0:8.d)
        rax_16 = &var_2a8
    
    uint128_t zmm0_1 = *rax_16
    int64_t* rcx_7 = arg1[4]
    float zmm3_1 = zmm0:0xc.d - var_288
    float var_284
    float zmm2_1 = var_258_1 - var_284
    var_2a8 = zmm0_1
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_2a8:8.d)).d f+ zmm3_1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(zmm0_1.d)).d f+ zmm3_1
    int32_t rax_18 = int.d(zmm0_1.d)
    zmm0_1 = _mm_cvtepi32_ps(zx.o(var_2a8:4.d))
    var_2a8.d = rax_18
    zmm0_1.d = zmm0_1.d f+ zmm2_1
    var_2a8:4.d = int.d(zmm0_1.d)
    zmm0_1 = _mm_cvtepi32_ps(zx.o(var_2a8:0xc.d))
    var_2a8:8.d = int.d(zmm1_1.d)
    zmm0_1.d = zmm0_1.d f+ zmm2_1
    var_2a8:0xc.d = int.d(zmm0_1.d)
    (*(*rcx_7 + 0xf0))(rcx_7, &var_2a8, arg4)
    zmm0_1 = var_278.o
    var_298.o = zmm0_1
    void* rax_23 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_23 != 0)
        *(rax_23 + 8) += 1
    
    sub_140e7a240(arg1, &var_298)
    int32_t rax_25 = var_2a8:8.d - var_2a8.d
    int32_t rcx_10 = var_2a8:0xc.d - var_2a8:4.d
    *arg6 = rax_25
    arg6[1] = rcx_10
    
    if (rax_25 == 0 || rcx_10 == 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    void var_78
    sub_140596d80(&var_78)
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp8_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    void var_1c0
    sub_140d94d20(&var_1c0)
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp9_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_270 + 8))(var_270, 1)
else
    rsi.b = 0

if (var_270 != 0)
    var_270[1].d -= 1
    
    if (var_270[1].d == 1)
        (**var_270)(var_270)
        int32_t temp1_1 = *(var_270 + 0xc)
        *(var_270 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_5 = *var_270
            (*(r8_5 + 8))(var_270, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_2c8)
return zx.q(rsi.b)
