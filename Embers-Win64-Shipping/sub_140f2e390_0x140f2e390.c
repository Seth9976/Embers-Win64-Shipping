// 函数: sub_140f2e390
// 地址: 0x140f2e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
char* rdi_1 = *(arg1 + 0x2c8) + 0x1a8
char arg_8

if (*(rdi_1 + 0x10) != 0)
    int64_t* rcx = *(rdi_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rdi_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rdi_1 + 8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *rdi_1 = arg_8

if (*rdi_1 == data_1439ae51d)
    *arg2 = data_143dbb1f0
    return arg2

if (*(arg1 + 0x318) != 0)
    int64_t* rcx_2 = *(arg1 + 0x310)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg1 + 0x318) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x310)
        
        (*(*rcx_3 + 0x48))(rcx_3, &arg_8)
        *(arg1 + 0x308) = arg_8.d.d

float zmm9[0x4] = *(arg1 + 0x308)

if (*(arg1 + 0x330) != 0)
    int64_t* rcx_4 = *(arg1 + 0x328)
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        int64_t* rcx_5
        
        if (*(arg1 + 0x330) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(arg1 + 0x328)
        
        (*(*rcx_5 + 0x48))(rcx_5, &arg_8)
        *(arg1 + 0x320) = arg_8.d.d

float zmm8[0x4] = *(arg1 + 0x320)
uint128_t zmm0 = 0xbf800000
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
void var_78
uint128_t var_70
int32_t arg_20

if (not(zmm8[0] != -1f))
    if (*(arg1 + 0x300) != 0)
        int64_t* rcx_6 = *(arg1 + 0x2f8)
        
        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
            int64_t* rcx_7
            
            if (*(arg1 + 0x300) == 0)
                rcx_7 = nullptr
            else
                rcx_7 = *(arg1 + 0x2f8)
            
            (*(*rcx_7 + 0x48))(rcx_7, &var_70)
            *(arg1 + 0x2e0) = var_70
    
    zmm6 = *(arg1 + 0x2ec)
    zmm7 = *(arg1 + 0x2e4)
    int64_t* rax_15 = sub_140e13cf0(*(arg1 + 0x2c8), &var_78)
    zmm7[0] = zmm7[0] + zmm6[0]
    zmm7[0] = zmm7[0] f+ *(rax_15 + 4)
    
    if (*(arg1 + 0x360) != 0)
        int64_t* rcx_9 = *(arg1 + 0x358)
        
        if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
            int64_t* rcx_10
            
            if (*(arg1 + 0x360) == 0)
                rcx_10 = nullptr
            else
                rcx_10 = *(arg1 + 0x358)
            
            (*(*rcx_10 + 0x48))(rcx_10, &arg_8)
            *(arg1 + 0x350) = arg_8.d.d
    
    zmm6 = *(arg1 + 0x350)
    
    if (*(arg1 + 0x390) != 0)
        int64_t* rcx_11 = *(arg1 + 0x388)
        
        if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
            int64_t* rcx_12
            
            if (*(arg1 + 0x390) == 0)
                rcx_12 = nullptr
            else
                rcx_12 = *(arg1 + 0x388)
            
            (*(*rcx_12 + 0x48))(rcx_12, &arg_20)
            *(arg1 + 0x380) = arg_20.d
    
    zmm0 = 0xbf800000
    float zmm1[0x4] = *(arg1 + 0x380)
    
    if (not(zmm6[0] == -1f))
        zmm7 = _mm_max_ss(zmm6[0], zmm7[0])
    
    if (not(zmm1[0] == -1f))
        zmm7 = _mm_min_ss(zmm1[0], zmm7[0])
    
    zmm8 = zmm7

if (not(zmm9[0] f!= zmm0.d))
    if (*(arg1 + 0x300) != 0)
        int64_t* rcx_13 = *(arg1 + 0x2f8)
        
        if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
            int64_t* rcx_14
            
            if (*(arg1 + 0x300) == 0)
                rcx_14 = nullptr
            else
                rcx_14 = *(arg1 + 0x2f8)
            
            (*(*rcx_14 + 0x48))(rcx_14, &var_70)
            *(arg1 + 0x2e0) = var_70
    
    zmm6 = *(arg1 + 0x2e8)
    zmm7 = *(arg1 + 0x2e0)
    int64_t* rax_25 = sub_140e13cf0(*(arg1 + 0x2c8), &var_78)
    zmm7[0] = zmm7[0] + zmm6[0]
    zmm7[0] = zmm7[0] f+ *rax_25
    
    if (*(arg1 + 0x348) != 0)
        int64_t* rcx_16 = *(arg1 + 0x340)
        
        if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
            int64_t* rcx_17
            
            if (*(arg1 + 0x348) == 0)
                rcx_17 = nullptr
            else
                rcx_17 = *(arg1 + 0x340)
            
            (*(*rcx_17 + 0x48))(rcx_17, &arg_8)
            *(arg1 + 0x338) = arg_8.d[0]
    
    zmm6 = *(arg1 + 0x338)
    
    if (*(arg1 + 0x378) != 0)
        int64_t* rcx_18 = *(arg1 + 0x370)
        
        if (rcx_18 != 0 && (*(*rcx_18 + 0x28))(rcx_18) != 0)
            if (*(arg1 + 0x378) != 0)
                rsi = *(arg1 + 0x370)
            
            (*(*rsi + 0x48))(rsi, &arg_20)
            *(arg1 + 0x368) = arg_20[0]
    
    float zmm0_1[0x4] = *(arg1 + 0x368)
    
    if (not(zmm6[0] == -1f))
        zmm7 = _mm_max_ss(zmm6[0], zmm7[0])
    
    if (not(zmm0_1[0] == -1f))
        zmm7 = _mm_min_ss(zmm0_1[0], zmm7[0])
    
    zmm9 = zmm7

*arg2 = zmm9[0]
arg2[1] = zmm8[0]
return arg2
