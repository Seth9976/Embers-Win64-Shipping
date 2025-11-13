// 函数: sub_142c0f720
// 地址: 0x142c0f720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg3)

if (*arg1 == 0 || rbx.d u>= *(arg1 + 0xb8))
    void* result
    result.b = 0
    return result

int32_t arg_8
int64_t rax = sub_142bf4aa0(arg2, &arg_8)
char* rcx_1 = *(arg1 + 0x88)
uint32_t rsi

if (rcx_1 != &data_14369a5d0)
    char rax_1 = *rcx_1
    
    if (rax_1 != 0)
        int32_t rdx_1 = rbx.d
        uint32_t rax_2
        
        if (rax_1 != 3)
            rax_2 = sub_142c0fc10(&rcx_1[1], rdx_1)
        else
            rax_2 = sub_142c0b3b0(&rcx_1[1], rdx_1)
        
        rsi = rax_2
    else
        rsi = zx.d(rcx_1[rbx + 1])
else
    rsi = 0

char* rcx_3 = *(arg1 + 0x78)
int64_t var_160 = 0
int32_t var_158 = 0
int32_t var_150 = 0
char var_14c = 0
int64_t var_140 = 0
int64_t var_138 = 0
int64_t var_120 = 0
int32_t var_118 = 0
int32_t var_110 = 0
char var_10c = 0
int64_t var_e8 = 0
int64_t var_e0 = 0
int64_t var_88 = 0
int64_t var_80 = 0
char var_68
sub_142bfcc80(rcx_3, &var_68, rbx.d)
void var_168
sub_142c0e6b0(&var_168, &var_68, arg1, rsi, rax, arg_8)
int32_t var_144
int32_t r8_2 = var_144
char rdx_4 = var_14c
int32_t rcx_5 = var_150
int32_t r11 = var_158
int128_t var_60
__builtin_memcpy(&var_60, 
    "\x00\x00\xc0\xff\xff\xff\xdf\x41\x00\x00\xc0\xff\xff\xff\xdf\x41\x00\x00\x00\x00\x00\x00\xe0\xc1\x"
"00\x00\x00\x00\x00\x00\xe0\xc1", 
    0x20)
var_68 = 0
uint128_t zmm0 = data_14369a5e0.o
char var_100 = 0
int128_t zmm1 = data_14369a5d0
char rbx_1

while (true)
    uint32_t r9_1
    
    if (rdx_4 != 0 || rcx_5 + 1 u> r11)
        r9_1 = 0xb
        int32_t var_ec
        
        if (var_ec == 0)
            r9_1 = 0xe
    else
        int128_t* const rax_4
        
        if (rcx_5 u< r11)
            rax_4 = zx.q(rcx_5) + var_160
        else
            rdx_4 = 1
            rax_4 = &data_14369a5d0
            var_14c = 1
        
        r9_1 = zx.d(*rax_4)
        
        if (r9_1 == 0xc)
            if (rdx_4 == 0)
                int128_t* const rax_6
                
                if (rcx_5 + 1 u< r11)
                    rax_6 = zx.q(rcx_5 + 1) + var_160
                else
                    rdx_4 = 1
                    rax_6 = &data_14369a5d0
                    var_14c = 1
                
                r9_1 = zx.d(*rax_6) + 0x100
                
                if (rdx_4 != 0 || rcx_5 u> r11)
                    goto label_142c0f90d
                
                rcx_5 += 1
                
                if (rcx_5 u> r11)
                    goto label_142c0f90d
                
                goto label_142c0f900
            
            r9_1 = 0xffff
        else if (rdx_4 != 0 || rcx_5 u> r11)
        label_142c0f90d:
            rcx_5 = r11
            rdx_4 = 1
            var_150 = rcx_5
            var_14c = 1
        else
        label_142c0f900:
            rcx_5 += 1
            
            if (rcx_5 u> r11)
                goto label_142c0f90d
            
            var_150 = rcx_5
    
    char var_148
    char var_130
    uint128_t zmm6
    
    if (r9_1 == 0xa)
    label_142c0fad5:
        int128_t* rax_22
        
        if (r8_2 == 0)
            var_148 = 1
            rax_22 = &data_14369a5d0
        else
            uint64_t rax_21 = zx.q(r8_2 - 1)
            
            if (rax_21.d u< var_140.d)
                rax_22 = (rax_21 << 5) + var_138
            else
                data_144017550 = zmm1
                rax_22 = &data_144017550
                data_144017560.o = zmm0
        
        if (rax_22[1].d u<= 0)
            zmm6 = sub_142c11b00(r9_1, &var_168, &var_68)
            goto label_142c0f963
        
        var_130 = 1
    else if (r9_1 == 0xf)
        int128_t* rax_14
        
        if (r8_2 == 0)
            var_148 = 1
            rax_14 = &data_14369a5d0
        else
            uint64_t rax_13 = zx.q(r8_2 - 1)
            
            if (rax_13.d u< var_140.d)
                rax_14 = (rax_13 << 5) + var_138
            else
                data_144017550 = zmm1
                rax_14 = &data_144017550
                data_144017560.o = zmm0
        
        if (rax_14[1].d u<= 0)
            double* rax_18
            
            if (r8_2 == 0)
                var_148 = 1
            label_142c0fa6d:
                rax_18 = &data_144017550
                data_144017560.o = zmm0
                data_144017550 = zmm1
            else
                if (r8_2 - 1 u>= var_140.d)
                    goto label_142c0fa6d
                
                rax_18 = (zx.q(r8_2 - 1) << 5) + var_138
            
            int32_t r8_5 = int.d(fconvert.t(*rax_18))
            char rax_19 = var_148
            
            if (r8_5 s< 0)
                rax_19 = 1
            
            var_148 = rax_19
            char var_77
            char var_76
            
            if (var_77 != 0 || var_76 != 0)
                var_130 = 1
                r8_2 = 0
                var_77 = 1
                var_144 = 0
            else
                var_77 = 1
                int32_t rax_20 = 0
                var_144 = 0
                
                if (r8_5 s>= 0)
                    rax_20 = r8_5
                
                r8_2 = 0
                int32_t var_8c_1 = rax_20
        else
            var_130 = 1
    else
        if (r9_1 != 0x10)
            if (r9_1 == 0x1d)
                goto label_142c0fad5
            
            zmm6 = sub_142c11b00(r9_1, &var_168, &var_68)
            goto label_142c0f963
        
        sub_142c11820(&var_168)
    label_142c0f963:
        r8_2 = var_144
        rdx_4 = var_14c
        rcx_5 = var_150
        r11 = var_158
        zmm0 = data_14369a5e0.o
        zmm1 = data_14369a5d0
    
    char var_f0
    
    if (var_f0 != 0 || var_e8:4.d s< 0 || var_130 != 0 || rdx_4 != 0 || var_148 != 0
            || var_140:4.d s< 0)
        rbx_1 = 0
        break
    
    if (var_100 == 0)
        continue
    
    zmm0 = zx.o(var_60.q)
    uint128_t var_38_1 = zmm6
    int128_t var_50
    zmm6 = zx.o(var_50.q)
    
    if (zmm6.q f> zmm0.q)
        int32_t rbx_2 = int.d(floor(zmm0.q))
        *arg4 = rbx_2
        arg4[2] = int.d(ceil(zmm6.q).q) - rbx_2
    else
        arg4[2] = 0
        *arg4 = 0
    
    zmm0 = zx.o(var_50:8.q)
    zmm6 = zx.o(var_60:8.q)
    
    if (zmm0.q f> zmm6.q)
        int32_t rbx_3 = int.d(ceil(zmm0.q))
        arg4[1] = rbx_3
        rbx_1 = 1
        arg4[3] = int.d(floor(zmm6.q)) - rbx_3
    else
        rbx_1 = 1
        arg4[3] = 0
        arg4[1] = 0
    
    break

if (var_80 != 0)
    j_sub_140a74f90(var_80)

int64_t var_88_1 = 0
int64_t var_80_1 = 0
sub_142c0ec40(&var_140)

if (var_e0 != 0)
    j_sub_140a74f90(var_e0)

int64_t var_e8_1 = 0
int64_t var_e0_1 = 0
sub_142c0e7a0(&var_168)
return zx.q(rbx_1)
