// 函数: sub_141d77e50
// 地址: 0x141d77e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rax_2 = *arg3
uint128_t zmm1 = zx.o(0)
int64_t* rax_3 = arg3[1]
uint128_t var_c8
__builtin_memset(&var_c8, 0, 0x3c)
int32_t var_8c = 0x80
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t var_78 = 0
int32_t var_70 = 0
int64_t var_68 = 0
int64_t var_60 = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0

if (rax_3 != 0)
    rax_3[1].d += 1
    zmm1 = var_c8

uint128_t zmm0 = rax_2.o
int64_t var_118
var_118.o = zmm1
void* rcx = _mm_bsrli_si128(zmm1, 8).q
uint128_t var_48 = zmm0
var_c8 = zmm0

if (rcx != 0)
    int32_t rax_4 = *(rcx + 8)
    *(rcx + 8) -= 1
    
    if (rax_4 == 1)
        (**rax_3)(rax_3)
        int32_t rax_6 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rax_3 + 8))(rax_3, 1)

var_68.o = *arg2
int64_t var_b8
sub_1405af100(&var_b8, arg1)
var_58.q = arg4
uint32_t rax_8

if (data_143de5480 != 0)
    rax_8.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_8.b != 0)
    sub_141d75bc0(&var_c8)
else
    void*** rax_9 = sub_140a82f30(0x80, 8)
    *rax_9 = &data_143234160
    rax_9[1] = var_c8.q
    rax_9[2] = var_c8:8.q
    void* rcx_6 = &rax_9[5]
    var_c8:8.q = 0
    var_c8.q = 0
    rax_9[3] = 0
    rax_9[4] = 0
    *(rcx_6 + 0x10) = 0
    *(rcx_6 + 0x18) = 0
    *(rcx_6 + 0x1c) = 0x80
    void* rax_10 = *(rcx_6 + 0x10)
    
    if (rax_10 != 0)
        rcx_6 = rax_10
    
    *rcx_6 = 0
    *(rcx_6 + 8) = 0
    rax_9[9].d = 0xffffffff
    *(rax_9 + 0x4c) = 0
    rax_9[0xb] = 0
    rax_9[0xc].d = 0
    sub_140780e10(&rax_9[3], &var_b8)
    void var_80
    
    if (var_78 == 0)
        memmove(&rax_9[0xa], &var_80, 4)
    int64_t rcx_9 = rax_9[0xb]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    rax_9[0xb] = var_78
    int64_t var_78_1 = 0
    rax_9[0xc].d = var_70
    int32_t var_70_1 = 0
    *(rax_9 + 0x68) = var_68.o
    rax_9[0xf] = var_58.q
    *rax_9 = &data_143234180
    int64_t (* var_108)(int64_t* arg1)
    int64_t (* rax_14)(int64_t* arg1) = var_108
    
    if (rax_9 != -8)
        rax_14 = j_sub_141d75bc0
    
    void*** var_f8_1 = rax_9
    var_108 = rax_14
    sub_140a20e40(2, &var_108)

int32_t result = sub_1405ae080(&var_b8)
int64_t* rbx_1 = var_c8:8.q

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_138)
return result
