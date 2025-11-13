// 函数: sub_14173e8a0
// 地址: 0x14173e8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r10)[0x4] = arg3
uint64_t rbx

if (arg3 == 0)
    rbx.b = 7
else
    rbx.b = (*arg3)[2].b & 0x3f

char r11

if (arg4 == 0)
    r11 = 7
else
    r11 = *(arg4 + 8) & 0x3f

int64_t rsi

if (r10 == 0 || *(arg3 + 0xa) == 0)
    rsi.b = 0
else
    rsi.b = 1

int64_t rdi

if (arg4 == 0 || *(arg4 + 0xa) == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t r8 = sx.q(arg1[1].d) * 3
int32_t* result = *arg1
int64_t rcx = *(result + 0x3c8)
int64_t rdx = *(result + 0x28)
uint128_t zmm5
zmm5.d = (*(rcx + (r8 << 2) + 4)).d f- *(rdx + (r8 << 2) + 4)
uint128_t zmm6
zmm6.d = (*(rcx + (r8 << 2))).d f- *(rdx + (r8 << 2))
float zmm4 = *(rcx + (r8 << 2) + 8) f- *(rdx + (r8 << 2) + 8)
int32_t var_64 = zmm5.d
uint128_t zmm2
zmm2.d = zmm5.d f* zmm5.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_68 = zmm6.d
float var_60 = zmm4
zmm2.d = zmm2.d f+ zmm4 * zmm4
int32_t temp0 = _mm_sqrt_ss(0, zmm2.d)

if (temp0 f< 9.99999975e-05f)
    result.b = 0
else
    zmm2.d = 1f f/ temp0
    zmm0.d = zmm2.d f* zmm6.d
    float zmm1 = zmm2.d f* zmm5.d
    zmm2.d = zmm2.d f* zmm4
    var_68 = zmm0.d
    float var_64_1 = zmm1
    int32_t var_60_1 = zmm2.d
    int64_t var_58
    int32_t var_50
    int32_t var_40
    void var_38
    int32_t arg_8
    
    if (rbx.b == 1)
        if (r11 == 0xc)
            arg_8 = 0x3f800000
            
            if (*(arg4 + 8) != r11)
                arg4 = nullptr
            
            if ((*r10)[2].b != rbx.b)
                r10 = nullptr
            
            int32_t* var_78_1 = &arg_8
            int32_t var_80_1 = zx.o(0).d
            sub_1415e7cc0(&var_58, r10, arg5, arg4, arg6, &var_68, temp0)
            goto label_14173ef34
        
        if (r11 != 0xb)
            goto label_14173edac
        
        char rdx_2 = *(arg4 + 8)
        void* const rcx_2 = arg4
        zmm0 = 0x7f7fffff
        
        if ((*r10)[2].b != 1)
            r10 = nullptr
        
        var_58 = 0x3f800000
        var_50 = 0
        arg_8 = 0
        
        if (rdx_2 != 0x8b)
            rcx_2 = nullptr
        
        if (rcx_2 != 0)
            int32_t* var_78_2 = &arg_8
            int32_t var_80_2 = 0
            int128_t* rax_3 = sub_1415e7390(&var_38, r10, arg5, rcx_2, arg6, &var_68, temp0)
            var_40 = *(rax_3 + 0x18)
            var_58.o = *rax_3
            goto label_14173ef34
        
        if (rdx_2 != 0xb)
            arg4 = nullptr
        
        if (arg4 == 0)
            goto label_14173ef3d
        
        int32_t* var_78_3 = &arg_8
        int32_t var_80_3 = 0
        int64_t* rax_6 = sub_1415e85b0(&var_38, r10, arg5, arg4, arg6, &var_68, temp0)
        var_40 = rax_6[3].d
        var_58.o = *rax_6
        goto label_14173ef34
    
    if (rbx.b == 0)
        if (r11 == 0xc)
            arg_8 = 0x3f800000
            
            if (*(arg4 + 8) != r11)
                arg4 = nullptr
            
            if ((*r10)[2].b != 0)
                r10 = nullptr
            
            int32_t* var_78_4 = &arg_8
            int32_t var_80_4 = 0
            sub_1415e7cc0(&var_58, r10, arg5, arg4, arg6, &var_68, temp0)
            goto label_14173ef34
        
        if (r11 != 0xb)
            goto label_14173edac
        
        char rdx_6 = *(arg4 + 8)
        void* rcx_6 = arg4
        zmm0 = 0x7f7fffff
        
        if ((*r10)[2].b != 0)
            r10 = nullptr
        
        var_58 = 0x3f800000
        var_50 = 0
        arg_8 = 0
        
        if (rdx_6 != 0x8b)
            rcx_6 = nullptr
        
        if (rcx_6 != 0)
            int32_t* var_78_5 = &arg_8
            int32_t var_80_5 = 0
            int128_t* rax_10 = sub_1415e7390(&var_38, r10, arg5, rcx_6, arg6, &var_68, temp0)
            var_40 = *(rax_10 + 0x18)
            var_58.o = *rax_10
            goto label_14173ef34
        
        if (rdx_6 != 0xb)
            arg4 = nullptr
        
        if (arg4 == 0)
            goto label_14173ef3d
        
        int32_t* var_78_6 = &arg_8
        int32_t var_80_6 = 0
        int64_t* rax_13 = sub_1415e85b0(&var_38, r10, arg5, arg4, arg6, &var_68, temp0)
        var_40 = rax_13[3].d
        var_58.o = *rax_13
        goto label_14173ef34
    
    if (rbx.b == 3)
        if (r11 == 0xc)
            arg_8 = 0x3f800000
            
            if (*(arg4 + 8) != r11)
                arg4 = nullptr
            
            if ((*r10)[2].b != rbx.b)
                r10 = nullptr
            
            int32_t* var_78_7 = &arg_8
            int32_t var_80_7 = 0
            sub_1415e7cc0(&var_58, r10, arg5, arg4, arg6, &var_68, temp0)
            goto label_14173ef34
        
        if (r11 != 0xb)
            goto label_14173edac
        
        char rdx_10 = *(arg4 + 8)
        void* rcx_10 = arg4
        zmm0 = 0x7f7fffff
        
        if ((*r10)[2].b != 3)
            r10 = nullptr
        
        var_58 = 0x3f800000
        var_50 = 0
        arg_8 = 0
        
        if (rdx_10 != 0x8b)
            rcx_10 = nullptr
        
        if (rcx_10 != 0)
            int32_t* var_78_8 = &arg_8
            int32_t var_80_8 = 0
            int128_t* rax_17 = sub_1415e7390(&var_38, r10, arg5, rcx_10, arg6, &var_68, temp0)
            var_40 = *(rax_17 + 0x18)
            var_58.o = *rax_17
            goto label_14173ef34
        
        if (rdx_10 != 0xb)
            arg4 = nullptr
        
        if (arg4 == 0)
            goto label_14173ef3d
        
        int32_t* var_78_9 = &arg_8
        int32_t var_80_9 = 0
        int64_t* rax_20 = sub_1415e85b0(&var_38, r10, arg5, arg4, arg6, &var_68, temp0)
        var_40 = rax_20[3].d
        var_58.o = *rax_20
        goto label_14173ef34
    
label_14173edac:
    
    if (rsi.b == 0)
        result.b = 0
    else
        if (r11 == 0xc)
            arg_8 = 0x3f800000
            
            if (*(arg4 + 8) != r11)
                arg4 = nullptr
            
            int32_t* var_78_10 = &arg_8
            int32_t var_80_10 = 0
            sub_1415e7cc0(&var_58, r10, arg5, arg4, arg6, &var_68, temp0)
            goto label_14173ef34
        
        if (r11 == 0xb)
            char rdx_14 = *(arg4 + 8)
            zmm0 = 0x7f7fffff
            void* rcx_14 = arg4
            var_58 = 0x3f800000
            
            if (rdx_14 != 0x8b)
                rcx_14 = nullptr
            
            var_50 = 0
            arg_8 = 0
            
            if (rcx_14 != 0)
                int32_t* var_78_11 = &arg_8
                int32_t var_80_11 = 0
                int128_t* rax_24 = sub_1415e7390(&var_38, r10, arg5, rcx_14, arg6, &var_68, temp0)
                var_40 = *(rax_24 + 0x18)
                var_58.o = *rax_24
                goto label_14173ef34
            
            if (rdx_14 != 0xb)
                arg4 = nullptr
            
            if (arg4 == 0)
                goto label_14173ef3d
            
            int32_t* var_78_12 = &arg_8
            int32_t var_80_12 = 0
            int64_t* rax_27 = sub_1415e85b0(&var_38, r10, arg5, arg4, arg6, &var_68, temp0)
            var_40 = rax_27[3].d
            var_58.o = *rax_27
            goto label_14173ef34
        
        if (rdi.b == 0)
            result.b = 0
        else
            int32_t* var_78_13 = &arg_8
            arg_8 = 0
            int32_t var_80_13 = 0
            sub_141553fa0(&var_58, r10, arg5, arg4, arg6, &var_68, temp0)
        label_14173ef34:
            zmm0 = var_40
        label_14173ef3d:
            
            if (zmm0.d f>= *arg9)
                result.b = 0
            else
                *arg9 = zmm0.d
                *arg8 = var_58
                arg8[1].d = var_50
                *arg7 = arg_8.d
                result.b = 1

return result
