// 函数: sub_1414d7220
// 地址: 0x1414d7220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result

if ((*(arg1 + 0x3b) & 4) != 0)
label_1414d7384:
    result.b = 1
    return result

void* rdx_1 = *(arg1 + 0x110)
int128_t zmm1 = *(arg1 + 0x90)
uint32_t var_48[0x4] = *(arg1 + 0x80)
int64_t* r11_2 = *(rdx_1 + 0xf0) + 0x61d8
int128_t var_38_1 = zmm1
uint32_t var_28_1[0x4] = *(arg1 + 0xa0)
int128_t var_18_1 = *(arg1 + 0xb0)
int32_t* rdx_7

if (r11_2[2].d == *(r11_2 + 0x3c))
label_1414d72d3:
    rdx_7 = nullptr
else
    int64_t rcx = sx.q(*(rdx_1 + 0x10))
    void* r9_1 = &r11_2[8]
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_1 = *(r9_1 + (((sx.q(r11_2[0xa].d) - 1) & rcx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1414d72d3_1:
        rdx_7 = nullptr
    else
        while (true)
            rdx_7 = sx.q(rax_1) * 0xd0 + r11_2[1]
            
            if (*rdx_7 == rcx.d)
                break
            
            rax_1 = rdx_7[0x30]
            
            if (rax_1 == 0xffffffff)
                goto label_1414d72d3_2
        
        if (rax_1 == 0xffffffff)
        label_1414d72d3_2:
            rdx_7 = nullptr

void* rcx_1 = &rdx_7[4]

if (rdx_7 == 0)
    rcx_1 = nullptr

uint32_t zmm0[0x4]

if (rcx_1 != 0)
    zmm0 = *(rcx_1 + 0x50)
    zmm1 = *(rcx_1 + 0x60)
    *(rcx_1 + 0x90) = *r11_2
    var_48 = zmm0
    int128_t var_38_2 = zmm1
    uint32_t var_28_2[0x4] = *(rcx_1 + 0x70)
    int128_t var_18_2 = *(rcx_1 + 0x80)

int128_t* result_1 = &var_48
int64_t rdx_8 = 0

while (true)
    int64_t rcx_2 = 0
    result = result_1
    
    while (true)
        zmm0 = *(arg1 + 0x80 - &var_48 + result)
        zmm0[0] = zmm0[0] f- *result
        
        if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_1414d7384
        
        rcx_2 += 1
        result += 4
        
        if (rcx_2 s>= 4)
            rdx_8 += 1
            result_1 = &result_1[1]
            
            if (rdx_8 s< 4)
                break
            
            result.b = 0
            return result
