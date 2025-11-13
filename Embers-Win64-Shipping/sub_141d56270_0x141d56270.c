// 函数: sub_141d56270
// 地址: 0x141d56270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char r14 = arg8
int32_t rsi_2 = zx.d(arg4) << 4 | 0x100

if (r14 u> 1)
    int32_t rcx = arg2[1]
    rsi_2 |= 0x11000
    
    if (*arg2 s>= rcx)
        rcx = *arg2
    
    uint128_t zmm0
    zmm0.d = logf(_mm_cvtepi32_ps(zx.o(rcx)).d).d f* 1.44269502f
    int32_t rcx_1 = int.d(zmm0.d)
    
    if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm0.d))
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm0, zmm0.q)) & 1)))
    
    char rcx_3 = (int.d(zmm0.d)).b
    char rdx = rcx_3
    
    if (r14 u<= rcx_3)
        rdx = r14
    
    r14 = rdx

uint64_t result
void* rbx_1

if ((*(arg1 + 0x5c)).d f!= *arg7 || (*(arg1 + 0x60)).d f!= arg7[1] || (*(arg1 + 0x64)).d f!= arg7[2]
    || (*(arg1 + 0x68)).d f!= arg7[3])
label_141d563aa:
    int32_t var_b0
    
    if (arg1 + 0xc8 != &var_b0)
        *(arg1 + 0xc8) = 0
        int64_t* rbx_2 = *(arg1 + 0xd0)
        
        if (rbx_2 != 0)
            *(arg1 + 0xd0) = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int32_t rdx_1 = arg2[1]
    uint64_t r9 = zx.q(*arg2)
    int128_t var_98
    int128_t* var_c0_1 = &var_98
    int64_t* rcx_8 = data_143f0f180
    int32_t var_74_1 = (1 << (data_1439c7a34).b) - 1
    int32_t rax_12 = (*arg7):0xc.d
    var_98 = zx.o(0)
    int32_t var_78_1 = rax_12
    int32_t var_d0_1 = 1
    char var_70_1 = 0
    int64_t var_68_1 = 0
    int32_t var_60_1 = 0
    var_b0 = 1
    uint128_t var_88_1 = var_b0.o
    void* var_b8
    (*(*rcx_8 + 0x560))(rcx_8, &var_b8, &data_143f02b98, r9, rdx_1, arg3.b, zx.d(r14), var_d0_1, 
        rsi_2 | 9, var_c0_1)
    void* rdx_3 = var_b8
    var_b0.q = rdx_3
    var_b8 = nullptr
    sub_1405d16e0(arg1 + 0x88, rdx_3)
    sub_1405d1550(&var_b8)
    int128_t zmm0_1 = *arg7
    *(arg1 + 0xa9) = r14
    *(arg1 + 0x5c) = zmm0_1
    sub_141d5db30(arg1)
    *(arg1 + 0x59) = 0
    result = sub_1405d1550(&var_b0)
    rbx_1 = *(arg1 + 0x88)
else
    rbx_1 = *(arg1 + 0x88)
    
    if (rbx_1 == 0 || *(rbx_1 + 0x60) != *arg2 || *(rbx_1 + 0x64) != arg2[1]
            || *(rbx_1 + 0x3c) != arg3)
        goto label_141d563aa
    
    result = zx.q(*(rbx_1 + 0x40)) & zx.q(rsi_2)
    
    if (result.d != rsi_2 || *(arg1 + 0xa9) != r14)
        goto label_141d563aa

if (*(arg1 + 8) != rbx_1)
    sub_1408c8cf0(arg1 + 0x20, rbx_1)
    sub_1405d16e0(arg1 + 8, rbx_1)
    sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x90) + 0x90), rbx_1, arg6, arg5)
    void* rax_14 = *(arg1 + 8)
    
    if (rax_14 == 0)
        int32_t* rcx_16 = *(arg1 + 0x98)
        *rcx_16 = data_143dbb180.d
        result = zx.q(data_143dbb180:4.d)
        rcx_16[1] = result.d
    else
        int32_t rdx_8 = *(rax_14 + 0x64)
        result = *(arg1 + 0x98)
        *result = *(rax_14 + 0x60)
        *(result + 4) = rdx_8

__security_check_cookie(rax_1 ^ &var_108)
return result
