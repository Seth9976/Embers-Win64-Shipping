// 函数: sub_140f10bb0
// 地址: 0x140f10bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rbp

if (arg9 == 0)
    rbp.b = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx = arg1[0x33]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x34].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x33]
            
            arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (arg1[0x32].b == 0)
        rbp.b = 0
    else
        rbp.b = 1

void* rdi = arg1[0xa5]
char r14 = *(rdi + 0x6c)

if (r14 == 0 || rbp.b != 0)
    rdi = (*(*arg1 + 0x248))(arg1)

if (r14 != 0 || rbp.b != 0)
    r14 = 0
else
    r14 = 0x20

if (rdi != 0 && *(rdi + 0x6c) != 0)
    int128_t* rax_8 = sub_140e11270(&arg1[0x87], arg5)
    int128_t* r8 = rax_8
    uint32_t rdx = zx.d(rax_8[1].b)
    
    if (rdx != 0)
        if (rdx == 1)
            r8 = *(rax_8 + 0x18)
        else if (rdx == 3)
            r8 = &arg8[2]
        else
            r8 = &arg8[1]
    
    uint32_t rcx_4 = zx.d(*(rdi + 0x30))
    void* rdx_2 = rdi + 0x20
    
    if (rcx_4 != 0)
        if (rcx_4 == 1)
            rdx_2 = *(rdx_2 + 0x18)
        else if (rcx_4 == 3)
            rdx_2 = &arg8[2]
        else
            rdx_2 = &arg8[1]
    
    uint128_t zmm2 = *rdx_2
    char rcx_6 = (*arg3)[0xd].b
    float zmm1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    zmm1[0] = zmm1[0] f* *(arg8 + 8)
    uint128_t zmm0_1
    zmm0_1.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f* *(arg8 + 4)
    int32_t var_c0
    int32_t var_a8
    var_c0.q = &var_a8
    zmm1[0] = zmm1[0] f* *(r8 + 8)
    zmm0_1.d = zmm0_1.d f* *(r8 + 4)
    uint128_t zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    zmm2.d = zmm2.d f* *arg8
    zmm3.d = zmm3.d f* *(arg8 + 0xc)
    zmm2.d = zmm2.d f* *r8
    zmm3.d = zmm3.d f* *(r8 + 0xc)
    char var_54
    char var_54_1 = ((rcx_6 & 1) * 2) | (var_54 & 0xfc)
    float var_a0_1 = zmm1[0]
    int32_t var_a4_1 = zmm0_1.d
    float var_84_1 = arg3[1][0][0]
    zmm1 = *arg3
    int32_t var_88 = (*arg3)[3].d
    zmm0_1 = (*arg3)[1]
    float var_74_1 = zmm1[0]
    zmm1 = *(arg3 + 0x1c)
    int64_t var_7c_1 = 0
    var_a8 = zmm2.d
    int32_t var_70_1 = zmm0_1.d
    float var_6c_1[0x4] = zmm1
    int32_t var_9c_1 = zmm3.d
    int32_t var_80_1 = (*arg3)[2].d
    uint64_t var_5c_1 = *(arg3 + 0x2c)
    sub_140db3600(arg6, arg7, &var_88, rdi, r14, var_c0)

uint64_t result = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg6, arg7, arg8, rbp.b)
__security_check_cookie(rax_1 ^ &var_e8)
return result
