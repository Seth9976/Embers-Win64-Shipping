// 函数: sub_142720ff0
// 地址: 0x142720ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
void* rax

if ((*(arg1 + 0xc4) & 4) != 0)
    int64_t r8_1
    rax, r8_1 = (*(*arg1 + 0x410))()
    
    if (rax.b != 0)
        r8_1.b = 1
        
        if ((*(*arg1 + 0x418))(arg1, arg2, r8_1).b != 0)
            if ((*(*arg1 + 0x428))(arg1, arg2).b != 0)
                jump(*(*arg1 + 0x468))
            
            r14.b = 1

if ((*(arg1 + 0xc4) & 8) == 0 || arg1[0x1d].d s<= 0)
    return 

rax = (*(*arg2 + 0x638))(arg2)

if (rax == 0)
    return 

int64_t r8_2 = *arg1

if ((*(r8_2 + 0x420))(arg1, arg2, r8_2).b == 0)
    return 

char rax_6 = sub_14271de00(arg1, arg2, rax, 1)
int64_t var_38
int64_t var_2c
char rax_10
float zmm1_1[0x4]
int512_t zmm2

if (rax_6 != 0)
    void* rax_7 = arg2[0x26]
    float var_30_1
    
    if (rax_7 == 0)
        float rax_8 = data_143dbb200
        var_38 = data_143dbb1f8.q
        var_30_1 = rax_8
    else
        zmm1_1 = *(rax_7 + 0x1d0)
        var_38.d = zmm1_1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_30_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_38:4.d = temp0_1[0]
    
    int64_t rbx_1 = *arg1
    var_2c = var_38
    float var_24_1 = var_30_1
    zmm2.o = sub_141f156a0(rax, 1)
    rax_10 = (*(rbx_1 + 0x430))(arg1, &var_2c, zmm2, zx.q(r14.b))

int512_t zmm3

if (rax_6 == 0 || rax_10 == 0)
    if (sub_14271de00(arg1, arg2, rax, 0).b != 0)
        int64_t rbx_3 = *arg1
        zmm2.o = sub_141f156a0(rax, 0)
        
        if ((*(rbx_3 + 0x430))(arg1, rax + 0xb4, zmm2, 0).b != 0)
            int64_t rbx_4 = *arg1
            zmm3.o = sub_141f156a0(rax, 0)
            (*(rbx_4 + 0x478))(arg1, arg2, rax + 0xb4, zmm3)
else
    void* rax_11 = arg2[0x26]
    int64_t* rax_12
    
    if (rax_11 == 0)
        int32_t var_24_2 = data_143dbb200
        rax_12 = &var_2c
        var_2c = data_143dbb1f8.q
    else
        zmm1_1 = *(rax_11 + 0x1d0)
        rax_12 = &var_38
        var_38.d = zmm1_1[0]
        uint128_t zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        float var_30_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_38:4.d = zmm0_2.d
    
    int32_t rax_14 = rax_12[1].d
    int64_t rbx_2 = *arg1
    uint64_t var_20 = *rax_12
    int32_t var_18_1 = rax_14
    zmm3.o = sub_141f156a0(rax, 1)
    (*(rbx_2 + 0x470))(arg1, arg2, &var_20, zmm3)
