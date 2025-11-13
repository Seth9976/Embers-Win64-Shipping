// 函数: sub_140ece0b0
// 地址: 0x140ece0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rbx = arg1[0x98]
int64_t* rdi = nullptr

if (rbx != 0)
    int32_t rax_3 = rbx[1].d
    
    if (rax_3 != 0)
        rbx[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdi = arg1[0x97]

float var_b0
int64_t* rcx_1 = *(*(*rdi + 0xe0))(rdi, &var_b0)
char rax_7 = (*(*rcx_1 + 0x1a0))(rcx_1)
int64_t* var_a8

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        int64_t rdx_1 = *var_a8
        (*rdx_1)(var_a8, rdx_1)
        int32_t temp1_1 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

int64_t rax_10 = (*(*rdi + 0x48))(rdi, &arg1[-1])
float var_90
char var_5c
void* rsi_2

if (rax_10 == 0 || rax_7 == 0)
    rsi_2 = arg6
else
    int64_t rdx_3 = *rdi
    
    if ((*rdx_3)(rdi, rdx_3) == 0)
        rsi_2 = arg6
    else if ((*(*rdi + 8))(rdi, rax_10) == 0)
        rsi_2 = arg6
    else
        void* r9 = arg1[0x9b]
        uint32_t rcx_7 = zx.d(*(r9 + 0x38))
        void* rdx_5 = r9 + 0x28
        
        if (rcx_7 != 0)
            if (rcx_7 == 1)
                rdx_5 = *(rdx_5 + 0x18)
            else if (rcx_7 == 3)
                rdx_5 = &arg8[2]
            else
                rdx_5 = &arg8[1]
        
        float zmm2[0x4] = *rdx_5
        char rcx_9 = (*arg3)[0xd].b
        rsi_2 = arg6
        zmm2[0] = zmm2[0] f* *arg8
        arg5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        arg5[0] = arg5[0] f* *(arg8 + 4)
        var_5c = ((rcx_9 & 1) * 2) | (var_5c & 0xfc)
        var_b0 = zmm2[0]
        int32_t var_d0
        var_d0.q = &var_b0
        float zmm0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm0[0] = zmm0[0] f* *(arg8 + 8)
        int64_t var_84_1 = 0
        float var_ac_1 = arg5[0]
        arg5 = arg3[1][0]
        var_a8.d = zmm0[0]
        zmm0 = (*arg3)[3]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        zmm2[0] = zmm2[0] f* *(arg8 + 0xc)
        char var_d8 = 0
        var_90 = zmm0[0]
        float var_8c_1 = arg5[0]
        float var_7c_1 = (*arg3)[0]
        var_a8:4.d = zmm2[0]
        float var_78_1 = (*arg3)[1][0]
        float var_74_1[0x4] = *(arg3 + 0x1c)
        float var_88_1 = (*arg3)[2][0]
        int64_t var_64_1 = *(arg3 + 0x2c)
        arg5 = sub_140db3600(rsi_2, arg7, &var_90, r9 + 8, var_d8, var_d0)

int32_t rdi_1 = sub_140f56740(arg1, arg2, arg3, arg4, arg5, rsi_2, arg7, arg8, arg9)

if (*(arg1 + 0x50c) != 0)
    int32_t rax_18 = arg1[0xa1].d
    void* r9_3 = arg1[0x9b]
    void* r9_4
    
    if (rax_18 == 0)
        r9_4 = r9_3 + 0x520
    else if (rax_18 == 2)
        r9_4 = r9_3 + 0x630
    else
        r9_4 = r9_3 + 0x5a8
    
    uint32_t rcx_12 = zx.d(*(r9_4 + 0x30))
    void* rdx_8 = r9_4 + 0x20
    
    if (rcx_12 != 0)
        if (rcx_12 == 1)
            rdx_8 = *(rdx_8 + 0x18)
        else if (rcx_12 == 3)
            rdx_8 = &arg8[2]
        else
            rdx_8 = &arg8[1]
    
    uint128_t zmm2_1 = *rdx_8
    char rdx_9 = (*arg3)[0xd].b
    float zmm0_1[0x4] = zmm2_1
    int64_t var_84_2 = 0
    zmm0_1[0] = zmm0_1[0] f* *arg8
    uint128_t zmm1
    zmm1.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d f* *(arg8 + 4)
    char var_5c_1 = ((rdx_9 & 1) * 2) | (var_5c & 0xfc)
    var_b0 = zmm0_1[0]
    int32_t var_d0_1
    var_d0_1.q = &var_b0
    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    zmm0_1[0] = zmm0_1[0] f* *(arg8 + 8)
    void* var_d8_1
    var_d8_1.b = 0
    int32_t var_ac_2 = zmm1.d
    zmm1 = arg3[1][0]
    var_a8.d = zmm0_1[0]
    zmm0_1 = (*arg3)[3]
    zmm2_1.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff).d f* *(arg8 + 0xc)
    var_90 = zmm0_1[0]
    int32_t var_8c_2 = zmm1.d
    float var_7c_2 = (*arg3)[0]
    var_a8:4.d = zmm2_1.d
    int32_t var_78_2 = (*arg3)[1].d
    float var_74_2[0x4] = *(arg3 + 0x1c)
    int32_t var_88_2 = (*arg3)[2].d
    uint64_t var_64_2 = *(arg3 + 0x2c)
    sub_140db3600(rsi_2, rdi_1, &var_90, r9_4, var_d8_1.b, var_d0_1)
    rdi_1 += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rdi_1)
