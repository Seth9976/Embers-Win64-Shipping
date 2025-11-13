// 函数: sub_1426f51e0
// 地址: 0x1426f51e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t var_a0 = 0
int64_t* var_98 = nullptr
void var_a8
sub_1426fb510(arg1, arg2, &var_a8)
arg3[2].d &= 0xfffffffd
int128_t zmm6 = zx.o(0)
void* r15 = nullptr
int128_t var_c8 = zx.o(0)
int32_t var_64
arg3[2].d |= var_64 u>> 2 & 2
void* rax_4
void* rax_5
void* rcx_1
int64_t rdx

if (arg2 != 0)
    rax_4 = (*(*arg2 + 8))(arg2)
    rax_5 = sub_142737e30()
    rcx_1 = *(rax_4 + 0x10)
    rdx = sx.q(*(rax_5 + 0x38))

int64_t* rbx_1

if (arg2 == 0 || rdx.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx << 3)) != rax_5 + 0x30)
    rbx_1 = var_c8:8.q
else
    void* const rsi_1 = *(arg1 + 0x20)
    r15 = rax_4
    void* rax_7
    int64_t rax_8
    void* rdx_1
    
    if (rsi_1 != 0)
        rax_7 = sub_14269bba0()
        rdx_1 = *(rsi_1 + 0x10)
        rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rsi_1 == 0 || rax_8.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
        rsi_1 = nullptr
    
    void*** rax_10 = j_sub_140a82f30(0x20)
    void*** rbx = rax_10
    
    if (rax_10 == 0)
        rbx = nullptr
    else
        void* rdx_2 = *(rax_4 + 0x20)
        *rbx = &data_143459760
        rbx[1] = rsi_1
        sub_140d3a3a0(&rbx[2], rdx_2)
        rbx[3] = 0
    
    void*** rax_11 = j_sub_140a82f30(0x18)
    void*** rsi_2 = rax_11
    
    if (rax_11 == 0)
        rsi_2 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        *rsi_2 = &data_142d42ea8
        rsi_2[2] = rbx
    
    var_c8.q = rbx
    rbx_1 = var_c8:8.q
    
    if (rsi_2 != 0)
        rbx_1 = rsi_2
    
    var_c8:8.q = rbx_1
    zmm6 = var_c8

if (rbx_1 != 0)
    rbx_1[1].d += 1

uint128_t zmm0 = var_a0.o
var_a0.o = zmm6
int64_t* rsi_3 = _mm_bsrli_si128(zmm0, 8).q

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t temp1_1 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rsi_3 + 8))(rsi_3, 1)

void var_b8
sub_142697e10(&var_b8, (*(*arg2 + 0x10))(arg2, &var_c8))
void* rax_17 = *(*(*(arg1 + 0x28) + 0x338) + 0x10)
void* r9 = rax_17 + 8

if (rax_17 == 0)
    r9 = nullptr

int32_t rax_18
int128_t zmm6_1
rax_18, zmm6_1 = sub_1426027f0(*(arg1 + 0xd8), &var_b8, &var_a8, r9)
*(arg3 + 0x18) = rax_18
int32_t var_80

if (not(var_80.d f<= 0f) && (r15 == 0 || *(r15 + 0x278) == 0))
    rbp = 1

arg3[2].d &= 0xfffffffe
arg3[2].d |= rbp
var_c8 = zmm6_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int128_t* result = &var_c8

if (&var_c8 != arg3)
    int128_t zmm0_1 = *arg3
    *arg3 = zmm6_1
    var_c8 = zmm0_1

int64_t* rdi_1 = var_c8:8.q

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        result = (**var_98)(var_98)
        int32_t temp7_1 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*var_98 + 8))(var_98, 1)

return result
