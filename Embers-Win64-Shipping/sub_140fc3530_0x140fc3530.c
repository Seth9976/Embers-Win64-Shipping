// 函数: sub_140fc3530
// 地址: 0x140fc3530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x3c8)
int64_t* rsi = nullptr
*(arg1 + 0x410) = 0
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float var_38[0x4] = zmm2
var_38[1] = temp0[0]
float var_24 = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
var_38[3] = temp0_1[0]
float var_1c = temp0_1[0]
var_38[0] = zmm2[0]
float var_28 = zmm2[0]
var_38[2] = temp0_2[0]
float var_20 = temp0_2[0]

if (*(arg1 + 0x520) != 0)
    int64_t* rcx = *(arg1 + 0x518)
    
    if (rcx != 0)
        if ((*(*rcx + 0x28))(rcx) != 0)
            var_28.o = var_28.o
            int64_t* rcx_1
            
            if (*(arg1 + 0x520) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x518)
            
            (*(*rcx_1 + 0x50))(rcx_1, &var_28)
        
        zmm2 = var_38

int32_t i = 0

if (*(arg1 + 0x420) s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t rbx_1 = *(arg1 + 0x418)
        void arg_8
        char* rax_4 = sub_140ae16d0(&var_38, &arg_8, 1)
        int32_t* rcx_3 = *(r15_1 + rbx_1)
        r15_1 = &r15_1[1]
        i += 1
        *rcx_3 = *rax_4
    while (i s< *(arg1 + 0x420))
    
    zmm2 = var_38

int32_t rdx_3 = 0

if (*(arg1 + 0x430) s> 0)
    int64_t r8_1 = 0
    
    while (true)
        r8_1 += 8
        rdx_3 += 1
        **(r8_1 + *(arg1 + 0x428) - 8) = zmm2
        
        if (rdx_3 s>= *(arg1 + 0x430))
            break
        
        zmm2 = var_38

int32_t i_1 = 0

if (*(arg1 + 0x440) s> 0)
    float** rax_7 = nullptr
    
    do
        int64_t rcx_5 = *(arg1 + 0x438)
        float* r8_2 = *(rax_7 + rcx_5)
        
        if (r8_2 != 0)
            *r8_2 = var_38[0][0]
        
        float* r8_3 = *(rax_7 + rcx_5 + 8)
        
        if (r8_3 != 0)
            *r8_3 = var_38[1][0]
        
        float* r8_4 = *(rax_7 + rcx_5 + 0x10)
        
        if (r8_4 != 0)
            *r8_4 = var_38[2][0]
        
        float* r8_5 = *(rax_7 + rcx_5 + 0x18)
        
        if (r8_5 != 0)
            *r8_5 = var_38[3][0]
        
        i_1 += 1
        rax_7 = &rax_7[4]
    while (i_1 s< *(arg1 + 0x440))

var_28.o = var_38

if (*(arg1 + 0x510) != 0)
    int64_t* rcx_6 = *(arg1 + 0x508)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        var_28.o = var_28.o
        
        if (*(arg1 + 0x510) != 0)
            rsi = *(arg1 + 0x508)
        
        (*(*rsi + 0x50))(rsi, &var_28)

return sub_140599090(&data_14399fd30)
