// 函数: sub_140fc0d20
// 地址: 0x140fc0d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rsi

if (arg6 == 0)
    rsi.b = 0x20
else
    if (*(arg1 + 0x1a0) != 0)
        int64_t* rcx = *(arg1 + 0x198)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x1a0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x198)
            
            *(arg1 + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (*(arg1 + 0x190) == 0)
        rsi.b = 0x20
    else
        rsi.b = 0

char var_c8 = rsi.b
int64_t i_2
int32_t var_80
char var_4c
int32_t rbx_1
int128_t zmm6

if (*(arg1 + 0x3b8) == 0)
    rbx_1 = arg5
else
    int64_t* rbx = data_143e243c8
    void* rax_7 = (*(*rbx + 0x48))(rbx, *sub_140b58170(&i_2, "ColorPicker.AlphaBackground", 1), 0)
    char rcx_4 = *(arg3 + 0x34) & 1
    int128_t zmm1_1 = arg3[2].d
    int32_t zmm2_1 = arg3[1].d
    rbx_1 = arg5
    var_80 = (*(arg3 + 0xc)).d
    int32_t var_7c_1 = zmm1_1.d
    var_4c = (rcx_4 * 2) | (var_4c & 0xfc)
    int64_t var_6c_1 = *arg3
    int32_t var_78_1 = zmm2_1
    int64_t var_74_1 = 0
    int128_t var_64_1 = *(arg3 + 0x1c)
    int64_t var_54_1 = *(arg3 + 0x2c)
    zmm6 = sub_140db3600(arg4, rbx_1, &var_80, rax_7, rsi.b, &data_14399f5c0)

int64_t var_c0

if (*(arg1 + 0x3b0) != 0)
    int64_t* rcx_6 = *(arg1 + 0x3a8)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rcx_7
        
        if (*(arg1 + 0x3b0) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x3a8)
        
        (*(*rcx_7 + 0x48))(rcx_7, &var_c0)
        
        if (arg1 + 0x390 == &var_c0)
            int64_t rcx_9 = var_c0
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        else
            int64_t rcx_8 = *(arg1 + 0x390)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *(arg1 + 0x390) = var_c0
            int32_t var_b8
            *(arg1 + 0x398) = var_b8
            int32_t var_b4
            *(arg1 + 0x39c) = var_b4

int64_t i_3 = sx.q(*(arg1 + 0x398))

if (i_3.d s> 0)
    int64_t rsi_1 = 0
    int32_t rdx_3 = 0
    var_c0 = 0
    int32_t r12_1 = 0
    int32_t var_b4_1 = 0
    int32_t rbx_2 = 0
    i_2 = i_3
    int64_t i_1 = i_3
    uint128_t zmm1
    
    if (i_3.d s> 0)
        int128_t var_38_1 = zmm6
        int64_t rcx_10 = 0
        int64_t var_a8_1 = 0
        zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(i_3.d - 1)).d
        int64_t i
        
        do
            uint128_t* rax_16 = *(arg1 + 0x390)
            int64_t r14_1 = sx.q(rbx_2)
            rbx_2 = (r14_1 + 1).d
            zmm1.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f* zmm6.d
            uint128_t zmm0 = zmm1
            zmm1.d = zmm1.d f* *(arg3 + 4)
            zmm0.d = zmm0.d f* *arg3
            int32_t var_94_1 = zmm1.d
            int32_t var_98_1 = zmm0.d
            uint128_t var_90_1 = *(rax_16 + rcx_10)
            
            if (rbx_2 s> rdx_3)
                sub_1405a4df0(&var_c0)
                rdx_3 = var_b4_1
                i_1 = i_2
                rsi_1 = var_c0
            
            int64_t rcx_12 = r14_1 * 3
            r12_1 += 1
            *(rsi_1 + (rcx_12 << 3)) = var_98_1.o
            *(rsi_1 + (rcx_12 << 3) + 0x10) = var_90_1:8.q
            rcx_10 = var_a8_1 + 0x10
            i = i_1
            i_1 -= 1
            var_a8_1 = rcx_10
            i_2 = i_1
        while (i != 1)
    
    var_c0 = 0
    int32_t var_b8_2 = rbx_2
    
    if (rbx_2 != 0)
        sub_140808f70(&var_c0, rbx_2, 0)
        memcpy(var_c0, rsi_1, rbx_2 * 0x18)
    else
        int32_t var_b4_2 = 0
    
    char rdx_7 = *(arg3 + 0x34) & 1
    zmm1 = arg3[2].d
    int32_t zmm2 = arg3[1].d
    rbx_1 = arg5
    var_80 = (*(arg3 + 0xc)).d
    int128_t* var_d0
    var_d0.b = var_c8
    int32_t var_7c_2 = zmm1.d
    char var_4c_1 = (rdx_7 * 2) | (var_4c & 0xfc)
    uint64_t var_6c_2 = *arg3
    char var_d8
    var_d8.d = *(arg1 + 0x3bc)
    int32_t var_78_2 = zmm2
    int64_t var_74_2 = 0
    uint128_t var_64_2 = *(arg3 + 0x1c)
    uint64_t var_54_2 = *(arg3 + 0x2c)
    sub_140db39e0(arg4, rbx_1 + 1, &var_80, &var_c0, var_d8, var_d0.b)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rbx_1 + 1)
