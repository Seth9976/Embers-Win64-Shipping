// 函数: sub_140f0a1b0
// 地址: 0x140f0a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg3[5].d
float zmm4 = *(arg3 + 0x24)
int128_t zmm6 = *(arg3 + 0x1c)
uint128_t zmm7 = arg3[4].d
int128_t zmm8 = *(arg4 + 0x18)
uint128_t zmm9 = *(arg4 + 0x1c)
uint128_t zmm0
zmm0.d = zmm7.d f* zmm4
int128_t zmm10 = zmm8
zmm8.d = zmm8.d f- *(arg3 + 0x2c)
zmm10.d = zmm10.d f- *(arg3 + 0x2c)
float zmm1 = zmm6.d f* zmm2.d f- zmm0.d
zmm0 = zmm9
zmm9.d = zmm9.d f- arg3[6].d
zmm0.d = zmm0.d f- arg3[6].d
float zmm5 = 1f / zmm1
zmm1 = (zx.o(0)).d
zmm6.d = zmm6.d f* zmm5
zmm7.d = zmm7.d f* zmm5
zmm9.d = zmm9.d f* zmm6.d
zmm8.d = zmm8.d f* zmm7.d
zmm2.d = zmm2.d f* zmm5
zmm9.d = zmm9.d f- zmm8.d
zmm10.d = zmm10.d f* zmm2.d
zmm2 = zx.o(*arg3)
zmm0.d = zmm0.d f* zmm4 * zmm5
zmm10.d = zmm10.d f- zmm0.d
zmm9.d = zmm9.d f/ _mm_shuffle_ps(zmm2, zmm2, 0x55).d

if (zmm9.d f>= 0f)
    zmm9 = __minss_xmmss_memss(zmm9.d, 0x3f800000)
else
    zmm9 = zx.o(0)

zmm10.d = zmm10.d f/ zmm2.q.d

if (not(zmm10.d f< 0f))
    zmm1 = __minss_xmmss_memss(zmm10.d, 0x3f800000)

int64_t* rbx = *(arg1 + 0x530)
int64_t rsi = 0
uint64_t arg_8
arg_8:4.d = zmm9.d
arg_8.d = zmm1

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr

void* r15_1

if (rbx != 0)
    r15_1 = *(arg1 + 0x528)

if (rbx == 0 || r15_1 == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* r14_1 = *(arg1 + 0x4d0)
    void* rcx = nullptr
    
    if (r14_1 != 0)
        int32_t rax_2 = r14_1[1].d
        
        if (rax_2 != 0)
            r14_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            r14_1 = nullptr
        
        if (r14_1 != 0)
            rcx = *(arg1 + 0x4c8)
    
    char r12_1 = *(rcx + 0x128)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp3_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    if (r12_1 == 0)
        *arg2 = 1
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
    else
        int64_t* r14_2 = *(arg1 + 0x10)
        
        if (r14_2 != 0)
            int32_t rax_5 = r14_2[1].d
            
            if (rax_5 != 0)
                r14_2[1].d = rax_5 + 1
                rax_5.b = 1
            
            if (rax_5.b == 0)
                r14_2 = nullptr
            
            if (r14_2 != 0)
                rsi = *(arg1 + 8)
        
        int64_t var_88 = rsi
        int64_t* var_80_1 = r14_2
        
        if (r14_2 != 0)
            int32_t rax_6 = r14_2[1].d
            r14_2[1].d = rax_6
            
            if (rax_6 == 0)
                (**r14_2)(r14_2)
                int32_t temp4_1 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*r14_2 + 8))(r14_2, 1)
        
        sub_140edc280(r15_1, arg2, &var_88, arg_8, arg4)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
