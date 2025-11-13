// 函数: sub_1420c41f0
// 地址: 0x1420c41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x50)
int64_t var_48
int32_t var_40
int64_t var_38
int32_t var_30
int32_t zmm2
int32_t zmm3
int128_t zmm4
int128_t zmm6

if (rsi != 0)
    void* rcx = *(arg1 + 0x48)
    var_48 = *(rcx + 4)
    var_40 = *(rcx + 0xc)
    var_38 = *(rcx + 4)
    var_30 = *(rcx + 0xc)
    
    if (rsi != 1)
        int32_t r14_1 = rsi - 1
        
        if (*(arg1 + 0x58) == 0)
            rsi = r14_1
        
        int32_t rcx_1 = 0
        
        if (rsi s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_3 = 0
                rbx_1 = rcx_1 + 1
                
                if (rcx_1 != r14_1)
                    rax_3 = rbx_1
                
                zmm6 = sub_140ad3060(sx.q(rcx_1) * 0x2c + *(arg1 + 0x48), 
                    sx.q(rax_3) * 0x2c + *(arg1 + 0x48), &var_48, &var_38)
                rcx_1 = rbx_1
            while (rbx_1 s< rsi)
    
    zmm4 = data_143dbb200
    zmm3 = data_143dbb1fc
    zmm2 = data_143dbb1f8
else
    zmm2 = data_143dbb1f8
    zmm3 = data_143dbb1fc
    zmm4 = data_143dbb200
    var_48.d = zmm2
    var_48:4.d = zmm3
    var_40 = zmm4.d
    var_38.d = zmm2
    var_38:4.d = zmm3
    var_30 = zmm4.d

int32_t rsi_1 = *(arg1 + 0x68)
int128_t var_28 = zmm6
int32_t zmm1
int32_t zmm5

if (rsi_1 != 0)
    void* rcx_4 = *(arg1 + 0x60)
    int64_t var_68 = *(rcx_4 + 4)
    int32_t rax_6 = *(rcx_4 + 0xc)
    int64_t var_58 = *(rcx_4 + 4)
    int32_t rax_7 = *(rcx_4 + 0xc)
    
    if (rsi_1 != 1)
        int32_t r14_2 = rsi_1 - 1
        
        if (*(arg1 + 0x70) == 0)
            rsi_1 = r14_2
        
        int32_t rcx_5 = 0
        
        if (rsi_1 s> 0)
            int32_t rbx_2
            
            do
                int32_t rax_8 = 0
                rbx_2 = rcx_5 + 1
                
                if (rcx_5 != r14_2)
                    rax_8 = rbx_2
                
                sub_140ad3060(sx.q(rcx_5) * 0x2c + *(arg1 + 0x60), 
                    sx.q(rax_8) * 0x2c + *(arg1 + 0x60), &var_68, &var_58)
                rcx_5 = rbx_2
            while (rbx_2 s< rsi_1)
    
    zmm4 = rax_6
    zmm3 = var_68:4.d
    zmm2 = var_68.d
    zmm6 = rax_7
    zmm5 = var_58:4.d
    zmm1 = var_58.d
else
    zmm1 = zmm2
    zmm5 = zmm3
    zmm6 = zmm4

int32_t result = *(arg1 + 0x98)
int32_t rcx_9 = result & 0x11

if ((result.b & 8) == 0)
    if (rcx_9 != 0x10)
        *arg2 = 0
        *arg3 = (zx.o(0)).q.d
        return result
    
    int32_t temp0_12 = _mm_min_ss(zmm2, zmm3)
    int32_t temp0_13 = _mm_max_ss(zmm1, zmm5)
    int32_t temp0_14 = _mm_min_ss(temp0_12, zmm4.d)
    int32_t temp0_15 = _mm_max_ss(temp0_13, zmm6.d)
    *arg2 = temp0_14
    *arg3 = temp0_15
    return result

int64_t temp0_1 = __minss_xmmss_memss(__minss_xmmss_memss(var_48.d.d, var_48:4.d).d, var_40)

if (rcx_9 != 0x10)
    int32_t temp0_10 = __maxss_xmmss_memss(var_38.d, var_38:4.d)
    *arg2 = temp0_1.d
    *arg3 = __maxss_xmmss_memss(temp0_10, var_30)
    return result

int32_t temp0_2 = _mm_max_ss(zmm1, zmm5)
int32_t temp0_3 = _mm_min_ss(zmm2, zmm3)
int32_t temp0_4 = _mm_max_ss(temp0_2, zmm6.d)
*arg2 = _mm_min_ss(temp0_1.d, _mm_min_ss(temp0_3, zmm4.d)).d
*arg3 = _mm_max_ss(temp0_4, 
    __maxss_xmmss_memss(__maxss_xmmss_memss(var_38.d.d, var_38:4.d).d, var_30).d)
return result
