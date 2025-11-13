// 函数: sub_1404074d0
// 地址: 0x1404074d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t rsi = sx.q(arg7)
int32_t rcx = *arg1
int64_t r10 = sx.q(arg1[4])
void* rbx = nullptr
void* rdx = *(arg1 + 8)
int32_t rax
rax.b = rcx == 0
int32_t rax_1 = arg1[6]
int64_t* rax_2 = *(arg1 + 0x20)
char* rcx_5 = sx.q(*(*(rdx + 0x88) + ((sx.q(*(rdx + 8)) * (rsi + 1) + r10) << 1))) + *(rdx + 0x90)
int32_t arg_48

if (rsi.d != 0xffffffff && arg4 s> zx.d(rcx_5[zx.q(*rcx_5)]) + 0xc && arg3 s> 2)
    int32_t r8 = arg3 s>> 1
    void* r9_1 = (sx.q(r8) << 2) + arg2
    
    if (arg5 == 1)
        int32_t rax_7 = arg_48
        arg_48 = (rax_7 & arg5) | (rax_7 * 2)
    
    int32_t rax_10 = (arg5 + 1) s>> 1
    void var_70
    int128_t zmm8 =
        sub_140404990(arg1, &var_70, arg2, r9_1, r8, &arg_20, rax_10.b, arg5, rsi.d - 1, 0, &arg_48)
    int32_t var_64
    int32_t r8_2 = var_64
    int32_t var_6c
    uint128_t zmm6
    zmm6.d = _mm_cvtepi32_ps(zx.o(var_6c)).d f* 3.05175781e-05f
    int32_t var_68
    uint128_t zmm7
    zmm7.d = _mm_cvtepi32_ps(zx.o(var_68)).d f* 3.05175781e-05f
    int32_t var_60
    uint64_t r10_1
    
    if (arg5 s<= 1 || (var_60 & 0x3fff) == 0)
        r10_1 = zx.q(r8)
    else
        r10_1 = zx.q(r8)
        
        if (var_60 s<= 0x2000)
            int32_t rax_14 = ((r10_1 << 3).d s>> (5 - (rsi.d - 1).b)) + r8_2
            r8_2 = rax_14
            
            if (rax_14 s> 0)
                r8_2 = 0
        else
            r8_2 -= r8_2 s>> (4 - (rsi.d - 1).b)
    
    int32_t rbp_1 = arg_20
    int32_t temp2
    int32_t temp3
    temp2:temp3 = sx.q(rbp_1 - r8_2)
    int32_t rax_19 = (temp3 - temp2) s>> 1
    int32_t rsi_2 = rax_19
    
    if (rbp_1 s< rax_19)
        rax_19 = rbp_1
    
    if (rax_19 s< 0)
        rsi_2 = 0
    else if (rbp_1 s< rsi_2)
        rsi_2 = rbp_1
    
    int32_t rbp_2 = rbp_1 - rsi_2
    int32_t var_5c
    arg1[0xa] -= var_5c
    int32_t rax_21 = arg1[0xa]
    
    if (arg6 != 0)
        rbx = arg6 + (sx.q(r10_1.d) << 2)
    
    int32_t rax_23 = arg_48
    int128_t var_58 = zmm8
    zmm8 = arg8
    uint64_t r8_3 = zx.q(r10_1.d)
    
    if (rsi_2 s< rbp_2)
        zmm7.d = zmm7.d f* zmm8.d
        int32_t rax_35 = sub_1404074d0(arg1, r9_1, r8_3, zx.q(rbp_2), rax_10, rbx, rsi.d - 1, 
            zmm7.d, rax_23 s>> rax_10.b)
        int32_t rax_38 = arg1[0xa] - rax_21 + rbp_2
        
        if (rax_38 s> 0x18 && var_60 != 0x4000)
            rsi_2 = rsi_2 - 0x18 + rax_38
        
        zmm6.d = zmm6.d f* zmm8.d
        return zx.q(sub_1404074d0(arg1, arg2, zx.q(r8), zx.q(rsi_2), rax_10, arg6, rsi.d - 1, 
            zmm6.d, arg_48)) | zx.q(rax_35 << (arg5 s>> 1).b)
    
    zmm6.d = zmm6.d f* zmm8.d
    int32_t rax_26 =
        sub_1404074d0(arg1, arg2, r8_3, zx.q(rsi_2), rax_10, arg6, rsi.d - 1, zmm6.d, rax_23)
    int32_t rcx_18 = arg1[0xa] - rax_21 + rsi_2
    
    if (rcx_18 s> 0x18 && var_60 != 0)
        rbp_2 = rbp_2 - 0x18 + rcx_18
    
    zmm7.d = zmm7.d f* zmm8.d
    return zx.q(sub_1404074d0(arg1, r9_1, zx.q(r8), zx.q(rbp_2), rax_10, rbx, rsi.d - 1, zmm7.d, 
        arg_48 s>> rax_10.b) << (arg5 s>> 1).b) | zx.q(rax_26)

void* rsi_4 = *(arg1 + 8)
int32_t i_9 = sub_1404046b0(rsi_4, r10.d, rsi.d, arg4)
int64_t i_5 = sx.q(i_9)
int32_t rax_43

if (i_9 != 0)
    rax_43 = zx.d(rcx_5[i_5]) + 1
else
    rax_43 = 0

int32_t temp0_2 = arg1[0xa]
arg1[0xa] -= rax_43
int32_t rcx_31 = arg1[0xa]
int64_t i = i_5

if (temp0_2 - rax_43 s< 0)
    while (i s> 0)
        i_5 = zx.q(i_5.d - 1)
        arg1[0xa] = rax_43 + rcx_31
        int64_t i_8 = i
        i -= 1
        
        if (i_8 != 1)
            rax_43 = zx.d(*(sx.q(*(*(rsi_4 + 0x88) + ((sx.q(*(rsi_4 + 8)) * (rsi + 1) + r10) << 1)))
                + i + *(rsi_4 + 0x90))) + 1
        else
            rax_43 = 0
        
        int32_t temp4_1 = arg1[0xa]
        arg1[0xa] -= rax_43
        rcx_31 = arg1[0xa]
        
        if (temp4_1 - rax_43 s>= 0)
            break

if (i_5.d != 0)
    if (i_5.d s>= 8)
        i_5 = zx.q(((i_5.d & 7) + 8) << ((i_5.d s>> 3).b - 1))
    
    if (rcx == 0)
        return sub_14040b0c0(arg2, arg3, i_5.d, rax_1, arg5, rax_2, arg8.d) __tailcall
    
    return sub_14040ac30(arg2, arg3, i_5.d, rax_1, arg5, rax_2) __tailcall

if (rax != 0)
    int64_t r11_3 = sx.q(arg3)
    int32_t rsi_6 = (1 << arg5.b) - 1
    int32_t r8_12 = arg_48 & rsi_6
    
    if (r8_12 != 0)
        if (arg6 != 0)
            uint128_t zmm0
            
            if (r11_3 s>= 4)
                void* rcx_46 = arg2 + 4
                int32_t* r8_16 = arg6 - arg2
                int64_t i_7 = ((r11_3 - 4) u>> 2) + 1
                rbx = i_7 << 2
                int64_t i_1
                
                do
                    zmm0 = 0x3b800000
                    int32_t rax_77 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_77
                    
                    if (not(test_bit(rax_77, 0xf)))
                        zmm0 = 0xbb800000
                    
                    zmm0.d = zmm0.d f+ *(r8_16 + rcx_46 - 4)
                    *(rcx_46 - 4) = zmm0.d
                    zmm0 = 0x3b800000
                    int32_t rax_80 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_80
                    
                    if (not(test_bit(rax_80, 0xf)))
                        zmm0 = 0xbb800000
                    
                    zmm0.d = zmm0.d f+ *(r8_16 + rcx_46)
                    *rcx_46 = zmm0.d
                    zmm0 = 0x3b800000
                    int32_t rax_83 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_83
                    
                    if (not(test_bit(rax_83, 0xf)))
                        zmm0 = 0xbb800000
                    
                    zmm0.d = zmm0.d f+ *(r8_16 + rcx_46 + 4)
                    *(rcx_46 + 4) = zmm0.d
                    zmm0 = 0x3b800000
                    int32_t rax_86 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_86
                    
                    if (not(test_bit(rax_86, 0xf)))
                        zmm0 = 0xbb800000
                    
                    zmm0.d = zmm0.d f+ *(r8_16 + rcx_46 + 8)
                    rcx_46 += 0x10
                    *(rcx_46 - 8) = zmm0.d
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            if (rbx s< r11_3)
                void* rcx_48 = (rbx << 2) + arg2
                void* i_4 = r11_3 - rbx
                void* i_2
                
                do
                    zmm0 = 0x3b800000
                    int32_t rax_89 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_89
                    
                    if (not(test_bit(rax_89, 0xf)))
                        zmm0 = 0xbb800000
                    
                    zmm0.d = zmm0.d f+ *(rcx_48 + arg6 - arg2)
                    rcx_48 += 4
                    *(rcx_48 - 4) = zmm0.d
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            rsi_6 = r8_12
        else
            if (r11_3 s>= 4)
                void* rcx_45 = arg2 + 8
                int64_t i_6 = ((r11_3 - 4) u>> 2) + 1
                rbx = i_6 << 2
                int64_t i_3
                
                do
                    rcx_45 += 0x10
                    int32_t rax_57 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_57
                    *(rcx_45 - 0x18) = _mm_cvtepi32_ps(zx.o(rax_57 s>> 0x14)).d
                    int32_t rax_61 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_61
                    *(rcx_45 - 0x14) = _mm_cvtepi32_ps(zx.o(rax_61 s>> 0x14)).d
                    int32_t rax_65 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_65
                    *(rcx_45 - 0x10) = _mm_cvtepi32_ps(zx.o(rax_65 s>> 0x14)).d
                    int32_t rax_69 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                    arg1[0xe] = rax_69
                    *(rcx_45 - 0xc) = _mm_cvtepi32_ps(zx.o(rax_69 s>> 0x14)).d
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
            
            while (rbx s< r11_3)
                rbx += 1
                int32_t rax_73 = arg1[0xe] * 0x19660d + 0x3c6ef35f
                arg1[0xe] = rax_73
                *(arg2 + (rbx << 2) - 4) = _mm_cvtepi32_ps(zx.o(rax_73 s>> 0x14)).d
        
        sub_14040b790(arg2, r11_3.d, arg8)
        return zx.q(rsi_6)
    
    if (r11_3.d s> 0)
        __builtin_memset(arg2, 0, r11_3 << 2)

return 0
