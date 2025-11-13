// 函数: sub_140f8e490
// 地址: 0x140f8e490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int32_t arg_8 = 0
int32_t rsi = 0
int64_t var_128
int32_t var_120

if (*(arg1 + 0x84b) != 0)
    sub_140f8b290(arg1, &arg1[0x10a], 0)
    int64_t* rcx = arg1[3]
    int64_t r8_1 = arg1[9]
    var_128 = 0
    var_120 = 0
    (*(*rcx + 0x10))(rcx, &var_128, r8_1)
    void var_e0
    sub_140aae2f0(&var_e0, &var_128)
    int64_t rcx_2 = var_128
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t* rcx_3 = *arg1
    (*(*rcx_3 + 0x98))(rcx_3, &var_e0)
    int64_t* var_d8
    
    if (var_d8 != 0)
        var_d8[1].d -= 1
        
        if (var_d8[1].d == 1)
            (**var_d8)(var_d8)
            int32_t rax_5 = *(var_d8 + 0xc)
            *(var_d8 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_d8 + 8))(var_d8, 1)
    
    *(arg1 + 0x84b) = 0

if (*(arg1 + 0x84c) != 0)
    int64_t* rcx_6 = arg1[3]
    int64_t r8_2 = arg1[9]
    int64_t var_118 = 0
    int64_t var_110_1 = 0
    (*(*rcx_6 + 0x10))(rcx_6, &var_118, r8_2)
    void var_c8
    sub_140aae2f0(&var_c8, &var_118)
    int64_t rcx_8 = var_118
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t* rcx_9 = *arg1
    (*(*rcx_9 + 0xa0))(rcx_9, &var_c8, zx.q(arg1[0x10d].d))
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rax_11 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    *(arg1 + 0x84c) = 0

if (arg1[0xe1] != 0)
    void* rcx_12 = arg1[0xdf]
    
    if (rcx_12 != 0 && (*arg2 f!= *(rcx_12 + 0x20) || arg2[1] f!= *(rcx_12 + 0x24)
            || arg2[3] f!= *(rcx_12 + 0x2c) || arg2[4] f!= *(rcx_12 + 0x30)
            || arg2[5] f!= *(rcx_12 + 0x34) || arg2[6] f!= *(rcx_12 + 0x38)
            || not(arg2[2] f== *(rcx_12 + 0x28))))
        sub_140d96150(rcx_12 + 0x20, arg2)
        int64_t* rcx_14 = arg1[0xe1]
        (*(*rcx_14 + 8))(rcx_14, 1)

int64_t r13

if (sub_140e59810(data_143e29f28) == 0)
    r13.b = 0
else
    int64_t* rcx_16 = *arg1
    void var_f0
    void* rax_17 = sub_140e195e0(*(*(*rcx_16 + 0x80))(rcx_16, &var_f0), &arg_8)
    void* rax_18
    
    if (*(rax_17 + 1) == 0 && arg1[0x111].b == 0 && arg1[0x112] != 0)
        rax_18 = arg1[0x113]
    
    if (*(rax_17 + 1) == 0 && arg1[0x111].b == 0
            && (arg1[0x112] == 0 || rax_18 == 0 || *(rax_18 + 8) s<= 0))
        rsi = 3
        r13.b = 0
    else
        r13.b = 1
        rsi = 3

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    arg_8:1.b = 0

int64_t* var_e8

if ((rsi.b & 1) != 0 && var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t temp2_1 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

int64_t* rax_21

if (r13.b == 0)
    rax_21 = sub_1405d9400()
    
    if (arg1[0xa9].b != 0)
        rax_21 = sub_140d44910(&arg1[0xa6])
else
    rax_21 = nullptr

int128_t zmm10 = sub_140f87bb0(arg1, rax_21, 0)

if (arg1[0x114].b != 0)
    int64_t* rcx_22 = arg1[0xdf]
    arg1[0x114].b = 0
    
    if (rcx_22 != 0)
        *(arg1 + 0x8a4) s> arg1[0x115].d
        (*(*rcx_22 + 0x28))()

sub_1405d9400()
int64_t* rsi_1 = &data_143cd6fd8

if (arg1[0xb9].b != 0)
    rsi_1 = sub_140d44910(&arg1[0xb6])

if (sub_140ab26b0(&arg1[0xbc], rsi_1) == 0)
    if (sub_140ab3cc0(&arg1[0xbc], rsi_1) == 0)
        sub_14065da90(&arg1[0xbf], rsi_1)
        arg1[0xc2].d = 1
        sub_140f6a1d0(arg1, 0)
    
    void var_b0
    int64_t* rax_26 = sub_140a97f80(&var_b0, rsi_1)
    
    if (&arg1[0xbc] != rax_26)
        arg1[0xbc] = *rax_26
        *rax_26 = 0
        sub_1405aeff0(&arg1[0xbd], &rax_26[1])
    
    arg1[0xbe].w = rax_26[2].w
    *(arg1 + 0x5f2) = *(rax_26 + 0x12)
    *(arg1 + 0x5f4) = *(rax_26 + 0x14)
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t r12_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (r12_1 == 1)
                (*(*var_a8 + 8))(var_a8, zx.q(r12_1))

float zmm0_1
int128_t zmm7
int128_t zmm9
zmm0_1, zmm7, zmm9 = sub_140f01250(&arg1[0xd])
float zmm0_2 = sub_140eec280(zmm0_1)

if (arg1[0xc8].d != 0)
    int64_t* rcx_35 = arg1[0xc7]
    
    if (rcx_35 != 0 && (*(*rcx_35 + 0x28))(rcx_35) != 0)
        if (arg1[0xc8].d != 0)
            r14 = arg1[0xc7]
        
        arg1[0xc6].b = (*(*r14 + 0x48))(r14)

float zmm6 = (zx.o(0)).d
char rax_37
char rbx_6

if (arg1[0xc6].b == 0 || 0f f!= *(arg1 + 0x86c) || not(0f f== arg1[0x10e].d))
    int64_t* rcx_37 = *arg1
    rax_37 = (*(*rcx_37 + 0x10))(rcx_37)
    rbx_6 = data_1439ae51c

if ((arg1[0xc6].b != 0 && not(0f f!= *(arg1 + 0x86c)) && 0f f== arg1[0x10e].d) || rax_37 == 0)
    rbx_6 = data_1439ae51d

if (*(arg1 + 0x77c) != 0)
    void* rcx_38 = arg1[9]
    int32_t rax_38 = sub_140f01890(rcx_38, rcx_38 + 0x28, &arg1[0xee], arg1[0xef].b == 1)
    
    if (rax_38 s>= 0 && rax_38 s< *(rcx_38 + 0x30))
        void* rcx_39 = arg1[9]
        int128_t var_58_1 = zmm7
        int128_t var_78_1 = zmm9
        int128_t var_88_1 = zmm10
        zmm10.d = 1f f/ *(rcx_39 + 0x8c)
        void* rdx_20 = sx.q(rax_38) * 0x58 + *(rcx_38 + 0x28)
        zmm7 = *(rdx_20 + 0x34)
        zmm9 = zmm7
        zmm7.d = zmm7.d f+ *(rdx_20 + 0x3c)
        zmm9.d = zmm9.d f* zmm10.d
        zmm7.d = zmm7.d f* zmm10.d
        void var_108
        int64_t* rax_40
        rax_40, zmm6 =
            sub_140f01c90(rcx_39, &var_108, &arg1[0xee], arg1[0xef].b == 1, var_128.d, var_120)
        zmm10.d = zmm10.d f* *rax_40
        float zmm0_3 = zmm10.d + zmm0_2
        
        if (zmm10.d f>= zmm6)
            float zmm1_1 = *arg2
            
            if (not(zmm0_3 <= zmm1_1))
                arg1[0xed].d = zmm0_3 - zmm1_1 f+ arg1[0xed].d
        else
            zmm10.d = zmm10.d f+ arg1[0xed].d
            arg1[0xed].d = zmm10.d
        
        if (zmm9.d f>= zmm6)
            zmm0_3 = arg2[1]
            
            if (not(zmm7.d f<= zmm0_3))
                zmm7.d = zmm7.d f- zmm0_3
                zmm7.d = zmm7.d f+ *(arg1 + 0x76c)
                *(arg1 + 0x76c) = zmm7.d
        else
            zmm9.d = zmm9.d f+ *(arg1 + 0x76c)
            *(arg1 + 0x76c) = zmm9.d
    
    if (*(arg1 + 0x77c) != 0)
        *(arg1 + 0x77c) = 0

float var_100
float* rdx_22 = &var_100
float* rax_41 = sub_140f030e0(arg1[9], rdx_22)
float zmm2 = *arg2
float zmm3 = *rax_41

if (zmm2 <= zmm6 || zmm3 <= zmm6)
    zmm2 = 1f
else
    zmm2 = zmm2 / zmm3

float zmm0_4

if (not(zmm3 <= zmm6) && not(zmm2 >= 1f))
    zmm0_4 = arg1[0xed].d f/ zmm3

float zmm1_2

if (zmm3 <= zmm6 || zmm2 >= 1f || zmm0_4 < zmm6)
    zmm1_2 = (zx.o(0)).d
else
    zmm1_2 = _mm_min_ss(1f - zmm2, zmm0_4)

int64_t* rcx_41 = *arg1
zmm0_4 = zmm1_2 * zmm3
arg1[0xed].d = zmm0_4
(*(*rcx_41 + 0xb0))(rcx_41, rdx_22, zmm2, zx.q(rbx_6))
arg1[0xed].d = zmm0_4
float var_f8
float* rax_43 = sub_140f030e0(arg1[9], &var_f8)
zmm2 = arg2[1]
float zmm1_3 = rax_43[1]

if (zmm2 <= zmm6 || zmm1_3 <= zmm6)
    zmm2 = 1f
else
    zmm2 = zmm2 / zmm1_3

float zmm0_5

if (not(zmm1_3 <= zmm6) && not(zmm2 >= 1f))
    zmm0_5 = *(arg1 + 0x76c) / zmm1_3
    
    if (not(zmm0_5 < zmm6))
        zmm6 = _mm_min_ss(1f - zmm2, zmm0_5)

int64_t* rcx_43 = *arg1
zmm0_5 = zmm6 * zmm1_3
*(arg1 + 0x76c) = zmm0_5
(*(*rcx_43 + 0xb8))(rcx_43, zmm6, zmm2, zx.q(rbx_6))
void* rcx_44 = arg1[9]
*(arg1 + 0x76c) = zmm0_5
zmm1_3 = *(rcx_44 + 0x8c)
float arg_14 = zmm1_3 f* *(arg1 + 0x76c)
float arg_10 = zmm1_3 f* arg1[0xed].d
return sub_140f18220(rcx_44, arg2, &arg_10)
