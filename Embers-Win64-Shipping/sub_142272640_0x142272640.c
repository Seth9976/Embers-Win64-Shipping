// 函数: sub_142272640
// 地址: 0x142272640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int512_t zmm0
zmm0.o = 0x40000000
int32_t var_84 = 1.d
int32_t var_8c
int32_t var_7c = var_8c & 0xfffffffe
int32_t var_80 = 0x40000000
int32_t var_88 = 0
(*(*arg1 + 0xd10))(zmm0, arg1, &var_88)
void* rbx = sub_142574150()
int64_t rax_5 = (*(*arg1 + 0x150))(arg1)

if (rbx == 0)
    rbx = nullptr
else
    void* rax_6 = sub_142574150()
    
    if (rax_6 == 0)
        rbx = nullptr
    else
        int64_t rcx_1 = sx.q(*(rax_6 + 0x38))
        
        if (rcx_1.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rcx_1 << 3)) != rax_6 + 0x30)
            rbx = nullptr

int32_t var_78 = 5
char var_20 = 0
void* var_70
sub_1405ab0f0(&var_70, rax_5, rbx)
char var_20_1 = 1
int64_t result = sub_1406277a0(&var_78)
char var_54

if (var_54 == 0)
    var_88 = 0
    int32_t var_80_1 = 0
    void* var_48
    void* rbx_1 = *(var_48 + 0x130)
    float var_a8[0x4]
    int64_t var_98
    int32_t rax_11
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    
    if (rbx_1 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        rax_11 = data_143dbb210
    else
        zmm1_1 = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1_1, 4))
        var_a8 = zmm1_1
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm1_1
            int32_t* rax_9 = sub_140adf5d0(&var_a8, &var_98)
            *(rbx_1 + 0x190) = *rax_9
            *(rbx_1 + 0x198) = rax_9[2]
        
        zmm0_1 = zx.o(*(rbx_1 + 0x190))
        rax_11 = *(rbx_1 + 0x198)
    
    var_a8[2] = rax_11
    var_a8[0].q = zmm0_1.q
    zmm1_1 = zx.o(var_a8[0].q)
    float rax_12 = var_a8[2]
    float var_84_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0]
    float var_90_1 = rax_12
    void* rax_13 = *(var_48 + 0x130)
    var_98 = zmm1_1.q
    
    if (rax_13 == 0)
        var_a8[0].q = data_143dbb1f8.q
        var_a8[2] = data_143dbb200
    else
        zmm1_1 = *(rax_13 + 0x1d0)
        var_a8[0] = zmm1_1[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_a8[2] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_a8[1] = temp0_4[0]
    
    float var_90_2 = var_a8[2]
    int64_t rax_16 = *arg1
    var_98 = var_a8[0].q
    result = (*(rax_16 + 0x670))(arg1, &var_98, &var_88)

if (var_20_1 != 0)
    char var_20_2 = 0
    int64_t var_28
    result = sub_142441560(var_70, var_28)
    int64_t var_40
    
    if (var_40 != 0)
        result = sub_140a74f90(var_40)
    
    int64_t var_68
    
    if (var_68 != 0)
        result = sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_c8)
return result
