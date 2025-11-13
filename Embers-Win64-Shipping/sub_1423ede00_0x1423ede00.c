// 函数: sub_1423ede00
// 地址: 0x1423ede00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
bool cond:0 = *(arg1 + 0x18) != 0
int64_t* var_2c0 = arg3
int128_t zmm6 = zx.o(0)
int128_t zmm7 = zx.o(0)
int128_t zmm8 = zx.o(0)

if (not(cond:0))
    zmm6 = *(arg2 + 0x80)
    zmm7 = *(arg2 + 0x84)
    zmm8 = *(arg2 + 0x88)

int64_t* rbx = *(arg2 + 0x58)
int64_t* rax_2
int512_t zmm0
rax_2, zmm0 = j_sub_140a82f30(0x90)
int64_t var_2c8
int64_t (* var_b8)(int64_t** arg1, int64_t arg2)
int64_t var_9c
int32_t var_88
int64_t* r15

if (rax_2 == 0)
    r15 = nullptr
else
    zmm0.o = 0x3f800000
    var_2c8 = -1
    var_2c8.d |= 0x48000
    int32_t var_88_1 = 0x3f800000
    var_2c8:4.d = (var_2c8:4.d & 0xfff8ffff) | 0x400
    int64_t* rcx_3 = *(arg2 + 0x70)
    int64_t var_a8_1 = var_2c8
    var_b8 = rbx
    int32_t var_84
    int32_t rax_6 = (var_84 & 0xffffffe8) | 8
    int64_t* var_b0_1 = rcx_3
    int32_t var_a0_1 = 0xffffffff
    var_9c = 0
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x240))(zmm0) != 0)
        uint32_t rax_9
        
        if (data_143de5480 != 0)
            rax_9.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_9.b != 0)
            rax_6 |= 0x10
    
    int32_t var_94_1 = zmm7.d
    int32_t var_84_2 = rax_6 | 0x10
    int32_t var_90_1 = zmm8.d
    int32_t var_8c_1 = zmm6.d
    (*(*rbx + 0x20))(rbx)
    var_88 = 0x3f800000
    r15 = sub_1422d9ba0(rax_2, &var_b8)

int64_t rbx_1 = *(*(*rbx + 0x18))(rbx, &var_2c8)
uint32_t rdi_2 = (rbx_1 u>> 0x20).d
uint64_t var_2a8
sub_1413c1ea0(&var_2a8)
int32_t rax_16 = data_143dbb200
int128_t zmm1 = data_14399f6f0
var_2a8 = data_143dbb1f8.q
uint128_t var_298 = data_14399f6e0
int128_t var_288 = zmm1
uint32_t var_20c = rdi_2
uint32_t var_1fc = rdi_2
int32_t var_2a0 = rax_16
void* rax_17 = *(arg1 + 8)
uint128_t var_278 = data_14399f700
int128_t var_268 = data_14399f710
int64_t* var_1f8 = r15
int64_t var_218 = 0
int32_t var_210 = rbx_1.d
int64_t var_208 = 0
int32_t var_200 = rbx_1.d
uint128_t var_258 = *(rax_17 + 0x10)
int128_t var_248 = *(rax_17 + 0x20)
uint128_t var_238 = *(rax_17 + 0x30)
int128_t var_228 = *(rax_17 + 0x40)
uint128_t var_1d0 = data_14399f5e0
int128_t var_1c0 = data_14399f5c0
int64_t* rax_18 = j_sub_140a82f30(0x15a0)
int64_t* r12

if (rax_18 == 0)
    r12 = nullptr
else
    r12 = sub_1422d8af0(rax_18, &var_2a8)

if (sub_14128e090((*U"1111")[sx.q(*(arg2 + 0x90))]) == 0 || *(arg2 + 0x8d) == 0)
    r15.b = 0
else
    r15.b = 1

void* rbx_2 = *(arg1 + 0x10)
void* r13
r13.b = *(arg2 + 0x60) != 0
var_2c8 = *(arg1 + 8)

if (rbx_2 != 0)
    *(rbx_2 + 8) += 1

void*** rax_23 = sub_140a82f30(0x28, 8)
rax_23[1] = var_2c8
rax_23[2] = rbx_2
int64_t* rbx_3 = var_2c0
rax_23[3] = r12
rax_23[4].b = r13.b
*(rax_23 + 0x21) = r15.b
*rax_23 = &data_143343538
int64_t* rbx_4 = *rbx_3
int64_t (* rax_24)(int64_t** arg1, int64_t arg2) = var_b8

if (rax_23 != -8)
    rax_24 = j_sub_1423d0cc0

var_b8 = rax_24
int64_t r15_1 = sx.q(rbx_4[1].d)
int32_t rax_25 = (r15_1 + 1).d
rbx_4[1].d = rax_25

if (rax_25 s> *(rbx_4 + 0xc))
    sub_1405c4fe0(rbx_4)

int64_t* rcx_14 = (r15_1 << 6) + *rbx_4
*rcx_14 = var_b8
rcx_14[2] = rax_23
void* var_a8_3 = nullptr
*(rcx_14 + 0x20) = var_9c:4.o
*(rcx_14 + 0x30) = var_88.o

if (*rcx_14 == 0 && var_b8 != 0)
    void* rcx_15 = &var_9c:4
    
    if (var_a8_3 != 0)
        rcx_15 = var_a8_3
    
    (*(*rcx_15 + 0x10))(rcx_15)

if ((*(arg2 + 0x78) & 2) != 0 && arg1 + 8 != &var_2c0)
    *(arg1 + 8) = 0
    int64_t* rbx_5 = *(arg1 + 0x10)
    
    if (rbx_5 != 0)
        *(arg1 + 0x10) = 0
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp1_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

void var_140
sub_1413c3330(&var_140)
int32_t var_148 = 0
int64_t var_150

if (var_150 != 0)
    sub_140a74f90(var_150)

int32_t var_188 = 0
int64_t var_190
int32_t var_184

if (var_184 != 0)
    sub_140638cc0(&var_190, 0)

int32_t var_160 = 0xffffffff
int32_t var_15c = 0
void var_180
sub_14059a8e0(&var_180, 0)
int64_t var_170

if (var_170 != 0)
    sub_140a74f90(var_170)

int64_t rcx_23 = var_190

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_2e8)
return result
