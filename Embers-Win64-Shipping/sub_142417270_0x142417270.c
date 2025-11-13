// 函数: sub_142417270
// 地址: 0x142417270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float __saved_zmm6[0x4] = arg4
arg4 = arg3
float __saved_zmm8[0x4] = arg6
sub_142403cf0(arg1)
int32_t arg_18
sub_140d446e0(&arg1[0x2e], &arg_18, arg2)
int64_t rax = sx.q(arg_18)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + arg1[0x2e]

arg6 = 0x3f800000
int32_t* rbx = rax_3 + 0x18

if (rax_3 == 0)
    rbx = nullptr

int128_t __saved_zmm7
float zmm0_1[0x4]

if (rbx != 0)
    float _Y = *rbx
    __saved_zmm7 = arg5
    arg5 = zx.o(0)
    
    if (not(_Y <= 0f))
        if (arg4[0] <= 0f)
            arg4 ^= data_142d3f780
            arg4[0] = arg4[0] - _Y
            arg4 = _mm_max_ss(arg4[0], 0)
            arg4[0] = arg4[0] / (_Y - 1f)
        else
            arg4[0] = arg4[0] - _Y
            zmm0_1 = 0x3f800000
            zmm0_1[0] = 1f - _Y
            arg4 = _mm_max_ss(arg4[0], 0)
            arg4[0] = arg4[0] / zmm0_1[0]
    
    _Y = rbx[2]
    
    if (not(_Y == 1f))
        arg4[0] - 0f
        
        if (not(arg4[0] <= 0f))
            arg5 = 0x3f800000
        else if (not(arg4[0] >= 0f))
            arg5 = 0xbf800000
        
        arg4 = powf(__andps_xmmxud_memxud(arg4, data_142d3f770)[0], _Y)
        arg4[0] = arg4[0] f* arg5.d
    
    bool cond:1_1 = (rbx[3].b & 1) == 0
    arg4[0] = arg4[0] f* rbx[1]
    
    if (not(cond:1_1))
        arg4 ^= data_142d3f780

int64_t rax_4 = *arg2

if (rax_4 == data_143e1df90 || rax_4 == data_143e1dfa8)
    int64_t* rax_5
    rax_5, zmm0_1 = sub_1424c7800()
    void* rdi_1 = rax_5[0x23]
    
    if (rdi_1 == 0)
        int64_t rdx_1 = *rax_5
        (*(rdx_1 + 0x390))(rax_5, rdx_1)
        rdi_1 = rax_5[0x23]
    
    void* rax_8 = nullptr
    
    if (((arg1[1].d u>> 4).b & 1) == 0)
        rax_8 = arg1[4]
    
    char rdx_2 = *(rdi_1 + 0x38)
    
    if ((rdx_2 & 0x10) != 0)
        int64_t* rcx_2 = *(rax_8 + 0x2b8)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x6c0))(rcx_2, rdx_2)
            rdx_2 = *(rdi_1 + 0x38)
            arg6 = zmm0_1
            arg6[0] = arg6[0] f* *(rdi_1 + 0x74)
    
    arg3 = data_143a30510
    int64_t rax_10 = data_143e1df90
    arg4[0] = arg4[0] * arg6[0]
    arg3[0] = arg3[0] * arg4[0]
    
    if (*arg2 != rax_10)
        data_143f5d828 = data_143f5d828 - arg3[0]
    else
        data_143f5d820 = data_143f5d820 + arg3[0]
    
    if ((rdx_2 & 8) != 0)
        sub_14240da20(&arg1[0x4c], &arg_18, arg2)
        int64_t rax_11 = sx.q(arg_18)
        int64_t rax_13
        
        if (rax_11.d == 0xffffffff)
            rax_13 = 0
        else
            rax_13 = rax_11 * 0xf0 + arg1[0x4c]
        
        int64_t r8_2 = rax_13 + 0x18
        
        if (rax_13 == 0)
            r8_2 = 0
        
        if (r8_2 != 0)
            int64_t rdx_4 = *arg1
            int32_t rbp
            rbp.b = *arg2 != data_143e1df90
            (*(rdx_4 + 0x270))(arg1, rdx_4, r8_2 + 0x1d, zx.q(rbp), __saved_zmm8, __saved_zmm7, 
                __saved_zmm6)
            arg4 = arg3
        
        arg3 = data_143a30510
    
    int64_t rax_15 = data_143e1df90
    arg3[0] = arg3[0] * arg4[0]
    
    if (*arg2 != rax_15)
        zmm0_1 = data_143f5d82c
        zmm0_1[0] = zmm0_1[0] - arg3[0]
        data_143f5d82c = zmm0_1[0]
    else
        zmm0_1 = data_143f5d824
        zmm0_1[0] = zmm0_1[0] + arg3[0]
        data_143f5d824 = zmm0_1[0]

int64_t* rbx_2 = arg2[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg4
