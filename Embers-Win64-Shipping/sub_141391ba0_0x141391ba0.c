// 函数: sub_141391ba0
// 地址: 0x141391ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rcx = *(data_143f5b298 + 0xaf8)
char rax_4

if (rcx != 0)
    rax_4 = (*(*rcx + 8))(rcx)

int64_t* r14

if (rcx == 0 || rax_4 == 0)
    r14 = nullptr
else
    int64_t* rcx_1 = *(data_143f5b298 + 0xaf8)
    r14 = (*(*rcx_1 + 0xb8))(rcx_1)

uint64_t result = *(arg1 + 0x40)
int128_t var_c8
int128_t zmm0

if (result != 0)
    void* rax_8 = *(result + 8)
    zmm0 = *(rax_8 + 0x20)
    int32_t rax_9 = *(rax_8 + 0x30)
    result = zx.q(zmm0.d)
    var_c8 = zmm0
    
    if (result.d != *(arg1 + 0x3f4))
    label_141391cb5:
        int64_t* rcx_2 = *(arg1 + 0x40)
        *(arg1 + 0x40) = 0
        
        if (rcx_2 != 0)
            result = (*(*rcx_2 + 0x38))(zmm0)
    else
        bool z_1
        
        if (result.d == 1)
            zmm0 = var_c8:4.d
            
            if (zmm0.d f!= *(arg1 + 0x3f8))
                goto label_141391cb5
            
            zmm0 = var_c8:8.d
            
            if (zmm0.d f!= *(arg1 + 0x3fc))
                goto label_141391cb5
            
            zmm0 = var_c8:0xc.d
            
            if (zmm0.d f!= *(arg1 + 0x400))
                goto label_141391cb5
            
            zmm0 = rax_9
            float temp1_1 = *(arg1 + 0x404)
            zmm0.d f- temp1_1
            z_1 = zmm0.d f== temp1_1
            goto label_141391c9d
        
        if (result.d == 2)
            zmm0 = var_c8:4.d
            
            if (zmm0.d f!= *(arg1 + 0x3f8))
                goto label_141391cb5
            
            result = zx.q(*(arg1 + 0x3fc))
            z_1 = var_c8:8.d == result.d
        label_141391c9d:
            
            if (not(z_1))
                goto label_141391cb5
            
            goto label_141391c9f
        
    label_141391c9f:
        
        if (r14 != 0)
            result = (*(*r14 + 0x20))(zmm0, arg1 + 0x40)
            
            if (result.b != 0)
                goto label_141391cb5

char var_108
int32_t var_100
int32_t var_f8
int32_t var_f0
int64_t* var_e8
int64_t* var_e0
uint32_t var_d8
int64_t var_b0
int64_t* rbx_1

if (*(arg1 + 0x40) == 0 || data_143ed3440 != 0)
    int32_t r15_1 = 0x20c
    var_b0 = 0
    void* var_a8 = nullptr
    
    if (r14 != 0)
        int64_t rbx_2 = *r14
        var_d8 = zx.d(sub_14139cf50(*(arg1 + 0x3d0)))
        var_e0 = &var_a8
        var_e8 = &var_b0
        result = (*(rbx_2 + 0x40))(r14, 0, zx.q(*(arg1 + 0x37c)), zx.q(*(arg1 + 0x380)), 0xb, 1, 0, 
            0x20c, var_e8, var_e0, var_d8)
    
    if (r14 == 0 || result.b == 0)
        result.b = 0
    else
        result.b = 1
    
    int32_t rcx_5 = *(arg1 + 0x404)
    zmm0 = *(arg1 + 0x3f4)
    *(arg1 + 0x420) = result.b
    int64_t rax_14 = *(arg1 + 0x37c)
    var_c8.q = rax_14
    int32_t var_84_1 = rax_14.d
    int32_t var_80_1 = var_c8:4.d
    int32_t var_78_1 = 1
    int16_t var_70_1 = 1
    
    if (data_143f0f1c4 != 0)
        r15_1 = 0x1020c
    
    int32_t var_88_1 = rcx_5
    int32_t rcx_6 = *(arg1 + 0x3d0)
    wchar16 const* const var_58_1 = u"UnknownTexture2D"
    int16_t var_60_1 = 0
    int128_t var_98 = zmm0
    int32_t var_7c_1 = 0
    int32_t var_74_1 = 0x10000
    int64_t var_6c_1 = 0xb
    int16_t var_50_1 = 1
    char var_4e_1 = 0
    int16_t rax_16 = sub_14139cf50(rcx_6)
    var_6c_1:4.d |= data_143ed3380
    int16_t var_70_2 = rax_16
    
    if (*(arg1 + 0x421) == 0)
        int32_t var_64_2 = r15_1 | 0x800
    
    if (*(arg1 + 0x420) == 0 || rax_16 != 1)
        rax_16.b = 0
    
    var_f0.b = rax_16.b
    var_f8.b = 1
    var_100.b = 1
    var_108.q = u"SceneDepthZ"
    sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg1 + 0x40, var_108, var_100.b, var_f8.b, 
        var_f0.b)
    int64_t* rcx_8 = *(arg1 + 0x40)
    
    if (rcx_8 != 0 && *(arg1 + 0x420) != 0)
        int32_t rax_18 = (*(*rcx_8 + 0x20))(rcx_8)
        void* rbx_3 = *(arg1 + 0x40)
        
        if (*(rbx_3 + 0x10) == *(rbx_3 + 8))
            sub_1408c8cf0(rbx_3 + 8, var_a8)
        
        sub_1408c8cf0(rbx_3 + 0x10, var_a8)
        sub_141399630(rbx_3 + 0x38, 0)
        sub_1405d16e0(rbx_3 + 0x78, nullptr)
        sub_1419ba5f0(&data_1439c9260, arg1 + 0x40, rax_18)
    
    rbx_1 = arg1 + 0x48
    sub_1405d16e0(rbx_1, nullptr)
    sub_1405d1550(&var_a8)
    result = sub_1405d1550(&var_b0)
else
    rbx_1 = arg1 + 0x48

if (*(arg1 + 0x420) != 0)
    result = sub_1405d16e0(rbx_1, nullptr)

void* r9_3 = *(arg1 + 0x40)

if (r9_3 != 0 && *(arg1 + 0x48) == 0)
    int64_t* rcx_17 = data_143f0f180
    var_c8.w = 0x2c
    var_c8:2.b = 1
    var_c8:4.q = 0
    var_c8:0xc.d = 0
    var_108.q = &var_c8
    (*(*rcx_17 + 0x5d0))(rcx_17, &var_b0, &data_143f02b98, *(r9_3 + 8), var_108, var_100, var_f8, 
        var_f0, var_e8, var_e0, var_d8)
    sub_1405d1600(arg1 + 0x48, &var_b0)
    result = sub_1405ec8a0(&var_b0)

__security_check_cookie(rax_1 ^ &var_128)
return result
