// 函数: sub_1420315d0
// 地址: 0x1420315d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1

if (arg2 == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14256a090()
    void* rdx = arg2[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38))
        rbx_1 = nullptr
    else
        rbx_1 = arg2
        
        if (*(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

int64_t var_38 = 0
int64_t var_30 = 0
void* rax_4 = sub_1424b24d0(arg1, arg2, &var_38)
int64_t rcx_2 = var_38

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rax_4 != 0)
    void* rcx_3 = *(rax_4 + 0x130)
    float var_68[0x4]
    int64_t var_58
    uint64_t var_48
    float (* rax_9)[0x4]
    float zmm1_1[0x4]
    
    if (rcx_3 == 0)
        int32_t var_50_1 = data_143dbb210
        rax_9 = &var_58
        var_58 = data_143dbb208
    else
        zmm1_1 = *(rcx_3 + 0x1c0)
        void* r14_1 = rcx_3 + 0x180
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*r14_1, zmm1_1, 4))
        var_68 = zmm1_1
        
        if (temp0_2 != 0)
            *r14_1 = zmm1_1
            int32_t* rax_6 = sub_140adf5d0(&var_68, &var_48)
            *(r14_1 + 0x10) = *rax_6
            *(r14_1 + 0x18) = rax_6[2]
            rcx_3 = *(rax_4 + 0x130)
        
        float zmm0_1[0x4] = zx.o(*(r14_1 + 0x10))
        var_68[2] = *(r14_1 + 0x18)
        rax_9 = &var_68
        var_68[0].q = zmm0_1.q
    
    uint128_t zmm2_1 = zx.o(*rax_9)
    float rax_11 = (*rax_9)[2]
    zmm1_1 = zmm2_1
    var_58:4.d = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0]
    float var_40_1 = rax_11
    var_58.d = 0
    var_48 = zmm2_1.q
    int32_t var_50_2 = 0
    
    if (rcx_3 == 0)
        var_68[0].q = data_143dbb1f8.q
        var_68[2] = data_143dbb200
    else
        zmm1_1 = *(rcx_3 + 0x1d0)
        var_68[0] = zmm1_1[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_68[2] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_68[1] = temp0_4[0]
    
    float var_40_2 = var_68[2]
    int64_t rax_14 = *arg2
    var_48 = var_68[0].q
    (*(rax_14 + 0x670))(arg2, &var_48, &var_58)

int64_t result = sub_140d3a3a0(&arg2[0x46], rax_4)

if (rbx_1 == 0)
    return result

(*(*rbx_1 + 0xb00))(rbx_1)

if (sub_1424b2a30(arg1, rbx_1) != 0)
    jump(*(*rbx_1 + 0xd00))

rbx_1[0x7a].d |= 0x10
int32_t arg_1c = 0
void arg_10
(*(*rbx_1 + 0x658))(rbx_1, (*sub_140b5e500(&arg_10, 0x142)).q)
arg_1c = 0
return sub_142569290(rbx_1, (*sub_140b5e500(&arg_10, 0x142)).q)
