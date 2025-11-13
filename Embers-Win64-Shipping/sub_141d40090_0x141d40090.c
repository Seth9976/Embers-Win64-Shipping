// 函数: sub_141d40090
// 地址: 0x141d40090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[8]
int64_t* var_f8

if (rcx != 0 && *(rcx + 0xc) != 0)
    float* rax_2 = (*(*rcx + 0x28))(rcx, &var_f8)
    float zmm0 = rax_2[3] - *rax_2
    float zmm2 = rax_2[4] - rax_2[1]
    float zmm1 = rax_2[5] - rax_2[2]
    
    if (zmm0 <= zmm2 || not(zmm0 > zmm1))
        zmm0 = _mm_max_ss(zmm1, zmm2)
    
    if (not(zmm0 f< data_143a21bf0))
        sub_14177af60(arg2, 0x2000000, 1)
        arg2[0x17].w = 1

char result = (*(*arg2 + 0x10))(arg2)

if (result == 0)
    return result

int64_t* rdi_2 = *(*(arg1 + 0x348) + 0x260) + 0x278
int32_t* rax_5
int128_t zmm6_1
rax_5, zmm6_1 = sub_1417b1d50(&rdi_2[2])
void*** rsi_1 = nullptr
int32_t rbx_1

if (rax_5 != 0)
label_141d4018c:
    rbx_1 = *rax_5
else
    while (true)
        bool z_1
        
        if (0 == rdi_2[7].b)
            rdi_2[7].b = 1
            z_1 = true
        else
            int64_t rax_6
            rax_6.b = rdi_2[7].b
            z_1 = false
        
        if (z_1)
            int32_t rax_12
            rax_12, zmm6_1 = sub_1417c7d10(rdi_2, 1)
            rbx_1 = rax_12
            bool z_2
            
            do
                if (1 == rdi_2[7].b)
                    rdi_2[7].b = 0
                    z_2 = true
                else
                    int64_t rax_13
                    rax_13.b = rdi_2[7].b
                    z_2 = false
            while (not(z_2))
            break
        
        rax_5, zmm6_1 = sub_1417b1d50(&rdi_2[2])
        
        if (rax_5 != 0)
            goto label_141d4018c

int128_t var_48_1 = zmm6_1
sub_14177af60(arg2, 0x4000000, 1)
char r12_1 = arg2[0x19].b
*(arg2 + 0x24) = rbx_1
void*** rax_7 = j_sub_140a82f30(0x68)
void*** rdi_3 = rax_7

if (r12_1 == 2)
    if (rax_7 == 0)
        rdi_3 = nullptr
    else
        int32_t var_c0_1 = 0x3f800000
        void* rax_8 = sub_141770000(arg2)
        rdi_3[1] = 0
        *rdi_3 = &data_1432224c8
        rdi_3[2].d = 7
        rdi_3[3] = 0
        rdi_3[4].b = 0
        rdi_3[5] = 0
        rdi_3[6] = 0
        __builtin_memcpy(&rdi_3[7], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x14)
        rdi_3[0xa] = rax_8
        rdi_3[0xb] = 0
        rdi_3[0xc] = 0
        void*** rax_9 = j_sub_140a82f30(0x420)
        
        if (rax_9 != 0)
            rsi_1 = sub_141d2c7a0(rax_9)
        
        void arg_10
        
        if (&rdi_3[0xc] != &arg_10)
            int64_t* rcx_8 = rdi_3[0xc]
            rdi_3[0xc] = rsi_1
            
            if (rcx_8 != 0)
                (**rcx_8)(rcx_8, 1)
        else if (rsi_1 != 0)
            (**rsi_1)(rsi_1, 1)
    
    int64_t rsi_2 = sx.q(*(arg1 + 0x408))
    int32_t rax_15 = (rsi_2 + 1).d
    *(arg1 + 0x408) = rax_15
    
    if (rax_15 s> *(arg1 + 0x40c))
        sub_1405a4d70(arg1 + 0x400)
    
    *(*(arg1 + 0x400) + (rsi_2 << 3)) = rdi_3
    rsi_1 = sub_141d3d270(rdi_3)
else if (r12_1 != 1)
    if (rdi_3 == 0)
        rdi_3 = nullptr
    else
        rax_7[1] = 0
        rax_7[2].d = 5
        rax_7[3] = 0
        *rdi_3 = &data_1432224c8
        rdi_3[4].b = 0
        rdi_3[5] = 0
        rdi_3[6] = 0
        __builtin_memcpy(&rdi_3[7], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x14)
        rdi_3[0xa] = arg2
        int32_t var_98_1 = 0x3f800000
        rdi_3[0xb] = 0
        rdi_3[0xc] = 0
        void*** rax_27 = j_sub_140a82f30(0x180)
        void*** rcx_20
        
        if (rax_27 == 0)
            rcx_20 = nullptr
        else
            rcx_20 = sub_141d2c610(rax_27)
        
        void arg_20
        
        if (&rdi_3[0xc] != &arg_20)
            int64_t* r8_2 = rdi_3[0xc]
            rdi_3[0xc] = rcx_20
            
            if (r8_2 != 0)
                (**r8_2)(r8_2, 1)
        else if (rcx_20 != 0)
            (**rcx_20)(rcx_20, 1)
    
    int64_t rbp_2 = sx.q(*(arg1 + 0x3e8))
    int32_t rax_31 = (rbp_2 + 1).d
    *(arg1 + 0x3e8) = rax_31
    
    if (rax_31 s> *(arg1 + 0x3ec))
        sub_1405a4d70(arg1 + 0x3e0)
    
    *(*(arg1 + 0x3e0) + (rbp_2 << 3)) = rdi_3
    void* rbx_6 = rdi_3[0xa]
    
    if (rbx_6 != 0)
        void*** rax_33 = j_sub_140a82f30(0xb0)
        
        if (rax_33 != 0)
            rsi_1 = sub_1417609c0(rax_33, rbx_6)
else
    if (rdi_3 == 0)
        rdi_3 = nullptr
    else
        int32_t var_ac_1 = 0x3f800000
        void* rax_18 = sub_14176fff0(arg2)
        rdi_3[1] = 0
        *rdi_3 = &data_1432224c8
        rdi_3[2].d = 6
        rdi_3[3] = 0
        rdi_3[4].b = 0
        rdi_3[5] = 0
        rdi_3[6] = 0
        __builtin_memcpy(&rdi_3[7], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x14)
        rdi_3[0xa] = rax_18
        rdi_3[0xb] = 0
        rdi_3[0xc] = 0
        void*** rax_19 = j_sub_140a82f30(0x1e0)
        void*** rcx_15
        
        if (rax_19 == 0)
            rcx_15 = nullptr
        else
            rcx_15 = sub_141d2c740(rax_19)
        
        void arg_18
        
        if (&rdi_3[0xc] != &arg_18)
            int64_t* r8_1 = rdi_3[0xc]
            rdi_3[0xc] = rcx_15
            
            if (r8_1 != 0)
                (**r8_1)(r8_1, 1)
        else if (rcx_15 != 0)
            (**rcx_15)(rcx_15, 1)
    
    int64_t rbp_1 = sx.q(*(arg1 + 0x3f8))
    int32_t rax_23 = (rbp_1 + 1).d
    *(arg1 + 0x3f8) = rax_23
    
    if (rax_23 s> *(arg1 + 0x3fc))
        sub_1405a4d70(arg1 + 0x3f0)
    
    *(*(arg1 + 0x3f0) + (rbp_1 << 3)) = rdi_3
    void* rbx_4 = rdi_3[0xa]
    
    if (rbx_4 != 0)
        void*** rax_25 = j_sub_140a82f30(0xe0)
        
        if (rax_25 != 0)
            rsi_1 = sub_141760da0(rax_25, rbx_4)

void* rax_35 = data_143f376a0
rdi_3[1] = arg1
arg2[2] = rdi_3

if (rax_35 == 0)
    j_sub_140b3db50()
    void var_d8
    int64_t rbx_7 = *sub_140b58170(&var_d8, "ChaosSolvers", 1)
    j_sub_140b3db50()
    rax_35 = sub_140b407e0(&data_143de7d78, rbx_7)
    data_143f376a0 = rax_35

int64_t* rbx_8 = *(rax_35 + 0x30)
var_f8 = arg2
char var_f0_1 = r12_1
void*** var_e0_1 = rsi_1
void*** rax_36 = sub_140a82f30(0x28, 8)
int128_t zmm0_1 = var_f8.o
*rax_36 = &data_142ec17e8
*(rax_36 + 8) = zmm0_1
*(rax_36 + 0x18) = rdi_3.o
void*** var_78_1 = rax_36
int64_t (* var_88)(int64_t* arg1, int64_t* arg2)
int64_t (* rax_37)(int64_t* arg1, int64_t* arg2) = var_88

if (rax_36 != -8)
    rax_37 = sub_141d35bc0

var_88 = rax_37
return (*(*rbx_8 + 8))(rbx_8, arg1, &var_88)
