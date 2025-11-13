// 函数: sub_140f6b460
// 地址: 0x140f6b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0
int128_t zmm8_1
zmm0, zmm8_1 = sub_140f01250(arg1 + 0x68)
float zmm0_1[0x4] = sub_140eec280(zmm0)
int64_t* rdi = nullptr
float zmm7 = zmm0_1[0]

if (*(arg1 + 0x628) != 0)
    int64_t* rcx_1 = *(arg1 + 0x620)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
        int64_t* rcx_2
        
        if (*(arg1 + 0x628) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x620)
        
        (*(*rcx_2 + 0x48))(rcx_2)
        *(arg1 + 0x618) = zmm0_1[0]

float zmm6 = *(arg1 + 0x618)

if (*(arg1 + 0x640) != 0)
    int64_t* rcx_3 = *(arg1 + 0x638)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        int64_t* rcx_4
        
        if (*(arg1 + 0x640) == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg1 + 0x638)
        
        *(arg1 + 0x630) = (*(*rcx_4 + 0x48))(rcx_4)

if (*(arg1 + 0x630) != 0)
    zmm0_1 = *(arg1 + 0x86c)
    
    if (not(zmm0_1[0] < 1f))
        if (not(zmm6 < 1f))
            zmm0_1 = _mm_min_ss(zmm0_1[0], zmm6)
        
        zmm0_1[0]

if (*(arg1 + 0x680) != 0)
    int64_t* rcx_5 = *(arg1 + 0x678)
    
    if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
        int64_t* rcx_6
        
        if (*(arg1 + 0x680) == 0)
            rcx_6 = nullptr
        else
            rcx_6 = *(arg1 + 0x678)
        
        float var_48[0x4]
        (*(*rcx_6 + 0x48))(rcx_6, &var_48)
        *(arg1 + 0x660) = var_48

zmm0_1 = *(arg1 + 0x660)
void* rcx_7 = *(arg1 + 0x48)
float var_58[0x4] = zmm0_1
zmm0_1[0] = zmm0_1[0] + zmm7
var_58[0] = zmm0_1[0]
zmm0_1 = var_58[2]
zmm0_1[0] = zmm0_1[0] + zmm7
var_58[2] = zmm0_1[0]
int128_t zmm6_1 = sub_140f166b0(rcx_7, zmm8_1)
sub_140f183b0(*(arg1 + 0x48), zmm6_1.d)

if (*(arg1 + 0x658) != 0)
    int64_t* rcx_9 = *(arg1 + 0x650)
    
    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
        int64_t* rcx_10
        
        if (*(arg1 + 0x658) == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *(arg1 + 0x650)
        
        *(arg1 + 0x648) = (*(*rcx_10 + 0x48))(rcx_10)

sub_140f18390(*(arg1 + 0x48), *(arg1 + 0x648))
float zmm0_2 = sub_140f160d0(*(arg1 + 0x48), &var_58)

if (*(arg1 + 0x6b0) != 0)
    int64_t* rcx_13 = *(arg1 + 0x6a8)
    
    if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
        int64_t* rcx_14
        
        if (*(arg1 + 0x6b0) == 0)
            rcx_14 = nullptr
        else
            rcx_14 = *(arg1 + 0x6a8)
        
        (*(*rcx_14 + 0x48))(rcx_14)
        *(arg1 + 0x6a0) = zmm0_2

sub_140f15f90(*(arg1 + 0x48), (*(arg1 + 0x6a0)).d)

if (*(arg1 + 0x698) != 0)
    int64_t* rcx_16 = *(arg1 + 0x690)
    
    if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
        if (*(arg1 + 0x698) != 0)
            rdi = *(arg1 + 0x690)
        
        *(arg1 + 0x688) = (*(*rdi + 0x48))(rdi)

sub_140f15d50(*(arg1 + 0x48), *(arg1 + 0x688))
void* rcx_19 = *(arg1 + 0x48)
int128_t zmm1_1 = *(rcx_19 + 0x8c)
zmm0_2 = zmm1_1.d
zmm1_1.d = zmm1_1.d f* *(arg1 + 0x76c)
int32_t arg_c = zmm1_1.d
float arg_8 = zmm0_2 f* *(arg1 + 0x768)
sub_140f18220(rcx_19, arg1 + 0x86c, &arg_8)
int64_t* rcx_20 = *(arg1 + 0x48)
return (*(*rcx_20 + 8))(rcx_20)
