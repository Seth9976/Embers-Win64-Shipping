// 函数: sub_141be4dc0
// 地址: 0x141be4dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *(arg1 + 0x168)
float zmm0[0x4]

if (rax == 0)
    zmm0 = *(arg1 + 0x150)
else
    zmm0 = *rax

float var_88[0x4] = zmm0
char var_68 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x93)
temp0[0] = arg2
float var_78[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
int128_t var_60 = zx.o(0)
int128_t* result = sub_140693390(arg1 + 0x150, &var_78)
int64_t* rcx_1 = *(arg1 + 0x290)
int64_t* rbx = var_60:8.q

if (rcx_1 != 0)
    char var_40_1 = var_68
    int64_t var_38_1 = var_60.q
    float var_50[0x4] = var_78
    
    if (rbx != 0)
        rbx[1].d += 1
        rcx_1 = *(arg1 + 0x290)
    
    char var_28_1 = 1
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    sub_140f8a450(rcx_1, &var_50)
    result = sub_140745b20(&var_20)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx + 8))(rbx, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
