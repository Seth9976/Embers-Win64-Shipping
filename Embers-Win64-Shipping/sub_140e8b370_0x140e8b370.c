// 函数: sub_140e8b370
// 地址: 0x140e8b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
sub_140e5af40(arg1)
*(arg1 + 0x280) = *arg2
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x288)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x288)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x288) = rbx

int64_t* var_218
sub_140e68260(arg1, &var_218)
int64_t* rcx_2 = *arg2
void var_228
int64_t* rax_5 = (**rcx_2)(rcx_2, &var_228)
int64_t* rbx_1 = rax_5[1]
void* rdi_1 = *rax_5

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_1f8
int64_t* rax_6 = sub_140e50640(&var_1f8)
void* var_260 = rdi_1
int64_t* rdi_2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_260 != &rax_6[0x34])
    var_260.o = *(rax_6 + 0x1a0)
    rdi_2 = rbx_1
    *(rax_6 + 0x1a0) = var_260.o

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp3_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_11 = j_sub_140a82f30(0x2d8)
void*** rdi_3 = rax_11

if (rax_11 == 0)
    rdi_3 = nullptr
else
    rax_11[1].d = 1
    *(rax_11 + 0xc) = 1
    *rdi_3 = &data_142ed9f28
    
    if (rdi_3 != -0x10)
        sub_140f67090(&rdi_3[2])

var_260 = &rdi_3[2]
sub_140918950(&var_260, &rdi_3[2])
int64_t var_278 = 0x2c8
void var_268
void* var_250 = &var_268
void* var_208
void** rax_12 = sub_140e57ce0(&var_260, &var_208, rax_6, sub_140e23ed0(&rdi_3[2], "SWeakWidget"))
int64_t performanceCount = *rax_12
void* rcx_14 = rax_12[1]
void* var_240 = rcx_14

if (rcx_14 != 0)
    *(rcx_14 + 8) += 1

int64_t* rdi_4 = var_218
sub_140e23de0(rdi_4, &performanceCount)
int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t temp7_1 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_200 + 8))(var_200, 1)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp9_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rdi_3)[1](rdi_3, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp11_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

int128_t zmm0_2 = sub_140ddea30(&var_1f8)
int64_t* var_220

if (var_220 != 0)
    var_220[1].d -= 1
    
    if (var_220[1].d == 1)
        (**var_220)(var_220)
        int32_t temp13_1 = *(var_220 + 0xc)
        *(var_220 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_220 + 8))(var_220, 1)

int64_t* r14_1 = data_143e29f28
int64_t* rbx_7 = *sub_140e152a0(rdi_4, &var_228)
(*(*r14_1 + 0x48))(r14_1)
(*(*rbx_7 + 0xf8))(rbx_7)
int128_t zmm6
zmm6.d = zmm0_2.d f* zmm0_2.d
sub_140e25880(rdi_4, zmm6, zmm0_2)

if (var_220 != 0)
    var_220[1].d -= 1
    
    if (var_220[1].d == 1)
        (**var_220)(var_220)
        int32_t temp15_1 = *(var_220 + 0xc)
        *(var_220 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_220 + 8))(var_220, 1)

int64_t zmm1_4 = *arg3
int32_t zmm0_3 = *(arg3 + 4)
int32_t var_238 = zmm1_4.d
int32_t var_234 = zmm0_3
int32_t var_230 = zmm1_4.d
int32_t var_22c = zmm0_3
var_278.b = 0
int128_t* rax_27 =
    (*(*r14_1 + 0x100))(r14_1, &var_260, &var_238, sub_140e13cf0(rdi_4, &performanceCount), var_278)
float zmm0_4[0x4] = *rax_27
zmm1_4 = *(rax_27 + 4)
*(arg1 + 0x2b0) = zmm0_4[0]
int64_t rdx_8 = _mm_unpacklo_ps(zmm0_4, zmm1_4)[0].q
*(arg1 + 0x2b4) = zmm1_4.d
sub_140e1c780(rdi_4, rdx_8)
sub_140e25670(rdi_4, sub_140e24c80(rdi_4, (zx.o(0)).q))
int64_t result = QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x2b8) = float.d(performanceCount) f* data_143d796f8 + 16777216.0
int64_t* var_210

if (var_210 != 0)
    var_210[1].d -= 1
    
    if (var_210[1].d == 1)
        result = (**var_210)(var_210)
        int32_t temp16_1 = *(var_210 + 0xc)
        *(var_210 + 0xc) -= 1
        
        if (temp16_1 == 1)
            result = (*(*var_210 + 8))(var_210, 1)

__security_check_cookie(rax_1 ^ &var_298)
return result
