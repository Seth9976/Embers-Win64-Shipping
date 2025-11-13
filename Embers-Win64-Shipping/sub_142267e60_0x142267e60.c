// 函数: sub_142267e60
// 地址: 0x142267e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_678
int64_t rax_1 = __security_cookie ^ &var_678
void var_648
sub_142259c20(&var_648, &arg1[0x1cc])
int128_t zmm7 = 0x3f800000
float zmm2[0x4]
float entry_zmm3[0x4]

if ((arg1[0x4e2].b & 0x20) != 0)
    float zmm5_1 = (*((*(*arg1 + 0x150))(arg1) + 0x520) f- arg1[0x51].d) f/ *(arg1 + 0x284)
    
    if (zmm5_1 >= 0f)
        zmm5_1 = _mm_min_ss(zmm5_1, 0x3f800000)
    else
        zmm5_1 = (zx.o(0)).d
    
    float zmm0_1[0x4] = arg1[0x4f].d
    float zmm4_1[0x4] = *(arg1 + 0x26c)
    entry_zmm3 = arg1[0x50].d
    zmm4_1[0] = zmm4_1[0] - zmm0_1[0]
    int32_t zmm1 = *(arg1 + 0x27c)
    zmm2 = arg1[0x4e].d
    zmm2[0] = zmm2[0] f- zmm1
    zmm4_1[0] = zmm4_1[0] * zmm5_1
    zmm2[0] = zmm2[0] * zmm5_1
    zmm4_1[0] = zmm4_1[0] + zmm0_1[0]
    zmm0_1 = *(arg1 + 0x274)
    zmm0_1[0] = zmm0_1[0] - entry_zmm3[0]
    zmm2[0] = zmm2[0] f+ zmm1
    zmm0_1[0] = zmm0_1[0] * zmm5_1
    zmm0_1[0] = zmm0_1[0] + entry_zmm3[0]
    float var_650_1 = zmm0_1[0]
    arg1[0x4c] = (_mm_unpacklo_ps(zmm4_1, zmm2[0].q)).q
    arg1[0x4d].d = var_650_1
    
    if (not(zmm5_1 != 1f))
        arg1[0x4e2].d &= 0xffffffdf

if (arg1[0x288] == 0 || (arg1[0x348].b & 1) == 0)
    sub_1422623c0(&arg1[0x1ca], arg1[0x44])
    (*(*arg1 + 0x748))(arg1, &arg1[0x1ca], arg2, entry_zmm3)

sub_14225b2c0(&var_648, &arg1[0x1cc])
int32_t r15 = 0

if (arg1[0x288] != 0)
    arg1[0x346].d = arg1[0x346].d f- arg2[0]
    sub_1422623c0(&arg1[0x288], arg1[0x44])
    (*(*arg1 + 0x748))(arg1, &arg1[0x288], arg2)
    float _Y = arg1[0x346].d
    
    if (_Y <= 0f)
        arg1[0x1ca] = arg1[0x288]
        sub_14225b2c0(&arg1[0x1cc], &arg1[0x28a])
        arg1[0x286] = arg1[0x344]
        arg1[0x288] = 0
        arg1[0x346].d = 0
        sub_14225b2c0(&var_648, &arg1[0x28a])
        int64_t* rbp
        rbp.b = 0
        *(arg1 + 0x1a5c) += 1
        int32_t rax_9 = arg1[0x34a].d
        int32_t rcx_15 = *(arg1 + 0x1a5c)
        int64_t rsi_1 = sx.q(rax_9 - 1)
        
        if (rax_9 - 1 s>= 0)
            int64_t rbx_2 = rsi_1 << 4
            int64_t temp4_1
            
            do
                uint64_t rcx_16 = arg1[0x349]
                
                if (*(rbx_2 + rcx_16 + 8) == 0)
                    rbp.b = 1
                else
                    int64_t* rcx_17 = *(rbx_2 + rcx_16)
                    
                    if (rcx_17 == 0)
                        rbp.b = 1
                    else if ((*(*rcx_17 + 0x50))(rcx_17) == 0)
                        rbp.b = 1
                
                rbx_2 -= 0x10
                temp4_1 = rsi_1
                rsi_1 -= 1
            while (temp4_1 - 1 s>= 0)
            rcx_15 = *(arg1 + 0x1a5c)
        
        *(arg1 + 0x1a5c) = rcx_15 - 1
        
        if (rbp.b != 0)
            sub_140599630(&arg1[0x349], 0)
    else
        float zmm0_3[0x4] = *(arg1 + 0x1a34)
        uint32_t rcx_7 = zx.d(arg1[0x347].b)
        zmm2 = zmm0_3
        zmm2[0] = zmm2[0] - _Y
        float zmm6[0x4] = zx.o(0)
        zmm2[0] = zmm2[0] / zmm0_3[0]
        
        if (rcx_7 == 0)
            zmm6 = zmm2
        else if (rcx_7 == 1)
            zmm6 = zmm2
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm6[0] = zmm6[0] * 3f
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm6[0] = zmm6[0] - zmm6[0]
        else if (rcx_7 == 2)
            zmm6 = powf(zmm2[0], *(arg1 + 0x1a3c))
        else if (rcx_7 == 3)
            zmm6 = powf(zmm2[0], 1f f/ *(arg1 + 0x1a3c))
        else if (rcx_7 == 4)
            bool cond:4_1 = zmm2[0] >= 0.5f
            _Y = *(arg1 + 0x1a3c)
            zmm2[0] = zmm2[0] + zmm2[0]
            
            if (cond:4_1)
                zmm2[0] = zmm2[0] - 1f
                zmm0_3 = 0x3f800000
                zmm0_3[0] = 1f - zmm2[0]
                zmm6 = 0x3f800000
                zmm6[0] = 1f - powf(zmm0_3[0], _Y)
                zmm6[0] = zmm6[0] + 1f
                zmm6[0] = zmm6[0] * 0.5f
            else
                zmm6 = powf(zmm2[0], _Y)
                zmm6[0] = zmm6[0] * 0.5f
        
        sub_14225b2c0(&var_648, &arg1[0x1cc])
        zmm7 = sub_141e95980(&var_648, &arg1[0x28a], zmm6)

int32_t rax_14 = arg1[0x4e2].d

if ((rax_14.b & 4) != 0)
    char rcx_19 = rax_14.b
    
    if (test_bit(rax_14, 0xc))
        entry_zmm3 = arg1[0x4cd].d
        float zmm1_1 = *(arg1 + 0x2664)
        entry_zmm3[0] = entry_zmm3[0] - arg2[0]
        float temp0_4[0x4] = _mm_max_ss(entry_zmm3[0], 0)
        arg1[0x4cd].d = temp0_4[0]
        
        if (not(zmm1_1 <= 0f))
            zmm2 = *(arg1 + 0x265c)
            zmm7.d = zmm7.d f- temp0_4[0] / zmm1_1
            zmm7.d = zmm7.d f* (arg1[0x4cc].d f- zmm2[0])
            zmm7.d = zmm7.d f+ zmm2[0]
            *(arg1 + 0x25c) = zmm7.d
        
        if (not(test_bit(rax_14, 0xb)) && not(temp0_4[0] > 0f))
            (*(*arg1 + 0x7c0))(arg1)
            rcx_19 = (arg1[0x4e2].d).b
    
    if ((rcx_19 & 8) != 0)
        (*(*arg1 + 0x738))(arg1)

if ((*(*arg1 + 0x730))(arg1) != 0)
    char rax_20 = (*(*arg1 + 0x720))(arg1, &var_648)
    int32_t rcx_24 = arg1[0x4e2].d
    
    if (test_bit(rcx_24, 0xa) || rax_20 != 0)
        r15 = 0x400
    
    arg1[0x4e2].d = (rcx_24 & 0xfffffbff) | r15

int64_t result = sub_14226a8c0(arg1, &var_648)
char var_88 = 0
int64_t var_d8

if (var_d8 != 0)
    result = sub_140a74f90(var_d8)

__security_check_cookie(rax_1 ^ &var_678)
return result
