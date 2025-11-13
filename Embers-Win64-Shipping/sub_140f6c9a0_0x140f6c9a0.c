// 函数: sub_140f6c9a0
// 地址: 0x140f6c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
void* var_328
int32_t arg_8

if (*(arg1 + 0x794) == 0)
    int64_t var_300 = 0
    var_328 = arg1 + 0x2a8
    int32_t var_2f8_1 = 0
    void* var_320_1 = arg1 + 0x6a0
    void* var_318_1 = arg1 + 0x6d0
    void* var_310_1 = arg1 + 0x6e8
    char var_308_1 = *(arg1 + 0x700)
    char var_307_1 = *(arg1 + 0x701)
    sub_1407473e0(&var_300, arg1 + 0x708)
    int64_t* rbx_5 = *(arg1 + 0x2d8)
    void* var_2f0_1 = arg1 + 0x718
    void* var_2e8_1 = arg1 + 0x758
    void* var_2e0_1 = arg1 + 0x740
    void** var_2c8
    void*** rax_34
    int32_t zmm0_1
    rax_34, zmm0_1 = sub_140f75280(arg1, &var_2c8)
    float arg_20
    sub_140f6c1f0(rbx_5, &arg_20, &var_328, arg3, zmm0_1, rax_34)
    sub_140745b20(&var_300)
    sub_140de06c0(&var_2c8)
    int32_t zmm0_2 = (zx.o(0)).d
    arg_8 = 0
    
    if (*(arg1 + 0x774) != 0)
        if (*(arg1 + 0x780) != 0)
            int64_t* rcx_22 = *(arg1 + 0x778)
            
            if (rcx_22 != 0 && (*(*rcx_22 + 0x28))(rcx_22) != 0)
                if (*(arg1 + 0x780) != 0)
                    rsi = *(arg1 + 0x778)
                
                (*(*rsi + 0x48))(rsi)
                *(arg1 + 0x770) = 0
        
        zmm0_2 = *(arg1 + 0x770)
    
    *arg2 = __maxss_xmmss_memss(zmm0_2, arg_20)
    *(arg2 + 4) = arg4
else
    void* rbx
    
    if (*(arg1 + 0x618) == 0)
        rbx = arg1 + 0x360
    else
        rbx = arg1 + 0x610
        
        if (*(rbx + 0x18) != 0)
            int64_t* rcx = *(rbx + 0x10)
            
            if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                int64_t* rcx_1
                
                if (*(rbx + 0x18) == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = *(rbx + 0x10)
                
                (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
                *rbx = arg_8.q
    
    int128_t zmm8 = *rbx
    int128_t zmm9 = *(rbx + 4)
    int64_t* rax_4
    
    if (*(arg1 + 0x598) == 0)
        rax_4 = arg1 + 0x2e8
    else
        rax_4 = sub_140eff6e0(arg1 + 0x548)
    
    int64_t* rbx_1 = rax_4[7]
    char var_308
    var_308.o = *(rax_4 + 0x20)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    uint128_t zmm6 = _mm_cvtepi32_ps(zx.o((*(rax_4 + 0x10)).q.d))
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_2d8
    sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_2d8)
    int64_t* rbx_2 = var_2d8
    int64_t* rcx_8
    
    if (*(arg1 + 0x598) == 0)
        rcx_8 = arg1 + 0x2e8
    else
        rcx_8 = sub_140eff6e0(arg1 + 0x548)
    
    var_328 = *rcx_8
    uint128_t zmm7
    zmm7.d = zmm6.d f+ zmm6.d
    int64_t var_320 = rcx_8[1]
    int32_t var_318 = (*(rcx_8 + 0x10)).q.d
    var_308.o = *(rcx_8 + 0x20)
    int32_t var_2f8
    var_2f8.q = rcx_8[6]
    int64_t* rax_12 = rcx_8[7]
    
    if (rax_12 != 0)
        rax_12[1].d += 1
    
    int64_t var_2e8 = rcx_8[8]
    int64_t var_2e0
    var_2e0.d = rcx_8[9].d
    var_2e0:4.b = *(rcx_8 + 0x4c)
    int32_t* rax_17 =
        (*(*rbx_2 + 0x10))(rbx_2, &arg_8, sub_140d44910(arg1 + 0x2a8), &var_328, 0x3f800000)
    zmm7.d = zmm7.d f+ *rax_17
    zmm6.d = zmm6.d f+ rax_17[1]
    zmm7.d = zmm7.d f+ zmm8.d
    zmm6.d = zmm6.d f+ zmm9.d
    
    if (rax_12 != 0)
        rax_12[1].d -= 1
        
        if (rax_12[1].d == 1)
            (**rax_12)(rax_12)
            int32_t temp4_1 = *(rax_12 + 0xc)
            *(rax_12 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rax_12 + 8))(rax_12, 1)
    
    int64_t* var_2d0
    
    if (var_2d0 != 0)
        var_2d0[1].d -= 1
        
        if (var_2d0[1].d == 1)
            (**var_2d0)(var_2d0)
            int32_t temp5_1 = *(var_2d0 + 0xc)
            *(var_2d0 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_2d0 + 8))(var_2d0, 1)
    
    int64_t zmm0 = (zx.o(0)).q
    arg_8 = 0
    
    if (*(arg1 + 0x774) != 0)
        if (*(arg1 + 0x780) != 0)
            int64_t* rcx_15 = *(arg1 + 0x778)
            
            if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                if (*(arg1 + 0x780) != 0)
                    rsi = *(arg1 + 0x778)
                
                (*(*rsi + 0x48))(rsi)
                *(arg1 + 0x770) = zmm0.d
        
        zmm0 = *(arg1 + 0x770)
    
    int32_t arg_c = zmm6.d
    arg_8 = _mm_max_ss(zmm0.d, zmm7.d).d
    
    if (&arg_8 != arg1 + 0x788)
        *(arg1 + 0x788) = arg_8.q
        *(arg1 + 0x790) = 1
    
    *arg2 = *(arg1 + 0x788)
return arg2
