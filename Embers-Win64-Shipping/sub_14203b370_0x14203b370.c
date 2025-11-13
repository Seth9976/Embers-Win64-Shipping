// 函数: sub_14203b370
// 地址: 0x14203b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rbp_1 = nullptr
void* const rax_7

if ((*(arg2 + 0x5c) & 8) == 0)
    int32_t rax_1 = *(arg2 + 0xc)
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

uint8_t rax

if ((*(arg2 + 0x5c) & 8) != 0 || ((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
    rax = 1
else
    rax = 0

if (rax != 0 || arg3 == 0)
    return 

void* rbx_1 = *(arg3 + 0x130)
int64_t var_28
float var_18[0x4]
int32_t rax_12
float zmm0[0x4]

if (rbx_1 == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_12 = data_143dbb210
else
    float zmm1[0x4] = *(rbx_1 + 0x1c0)
    var_18 = zmm1
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1, *(rbx_1 + 0x180), 4)) != 0)
        *(rbx_1 + 0x180) = zmm1
        int32_t* rax_10 = sub_140adf5d0(&var_18, &var_28)
        *(rbx_1 + 0x190) = *rax_10
        *(rbx_1 + 0x198) = rax_10[2]
    
    zmm0 = zx.o(*(rbx_1 + 0x190))
    rax_12 = *(rbx_1 + 0x198)

var_28 = zmm0.q
int64_t var_38 = var_28
int32_t var_30_1 = rax_12
void* rax_14 = sub_14256a090()
void* rdx_4 = arg2[2]
int64_t rax_15 = sx.q(*(rax_14 + 0x38))

if (rax_15.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
    rbp_1 = arg2

if (sub_1424b2a30(arg1, rbp_1) != 0)
    return 

void* rbx_2 = arg2[0x4a]

if (rbx_2 == 0)
    if (sub_1424b2580(arg1, arg2) != 0)
        (*(*arg2 + 0x690))(arg2, sub_1424b2d30(arg1, arg2))
else
    void* rbx_3 = *(rbx_2 + 0x130)
    int32_t rax_20
    uint128_t zmm0_1
    
    if (rbx_3 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        rax_20 = data_143dbb210
    else
        float zmm1_1[0x4] = *(rbx_3 + 0x1c0)
        uint32_t temp0_5 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_3 + 0x180), zmm1_1, 4))
        var_18 = zmm1_1
        
        if (temp0_5 != 0)
            *(rbx_3 + 0x180) = zmm1_1
            int32_t* rax_18 = sub_140adf5d0(&var_18, &var_28)
            *(rbx_3 + 0x190) = *rax_18
            *(rbx_3 + 0x198) = rax_18[2]
        
        zmm0_1 = zx.o(*(rbx_3 + 0x190))
        rax_20 = *(rbx_3 + 0x198)
    
    var_28 = zmm0_1.q
    var_38 = var_28
    int32_t var_30_2 = rax_20

if (arg2[0x4a] != 0)
    sub_1424b2790(arg1, arg3)
    (*(*arg1 + 0x7e0))(arg1, arg2, &var_38)
else
    (*(*arg2 + 0x700))(arg2)
