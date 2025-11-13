// 函数: sub_1423ee290
// 地址: 0x1423ee290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int32_t zmm0 = (zx.o(0)).d
int32_t zmm1 = (zx.o(0)).d
int32_t zmm2 = (zx.o(0)).d

if (*(arg1 + 0x18) == 0)
    zmm0 = *(arg4 + 0x80)
    zmm1 = *(arg4 + 0x84)
    zmm2 = *(arg4 + 0x88)

int64_t* rbx = *(arg4 + 0x58)
int64_t var_298 = -1
var_298.d |= 0x48000
int32_t var_264 = zmm1
var_298:4.d = (var_298:4.d & 0xfff8ffff) | 0x400
int64_t var_278 = var_298
int32_t var_260 = zmm2
int32_t var_25c = zmm0
int32_t var_254
int32_t var_254_1 = (var_254 & 0xfffffff8) | 0x18
int64_t rax_9 = *rbx
int64_t* var_288 = rbx
int64_t var_280 = 0
int32_t var_270 = 0xffffffff
int64_t var_26c = 0
(*(rax_9 + 0x20))(rbx)
int32_t var_258 = zmm0
int64_t* rax_10 = j_sub_140a82f30(0x90)
int64_t* r14

if (rax_10 == 0)
    r14 = nullptr
else
    r14 = sub_1422d9ba0(rax_10, &var_288)

int64_t rbx_1 = *(*(*rbx + 0x18))(rbx, &var_298)
uint32_t rdi_1 = (rbx_1 u>> 0x20).d
uint64_t var_248
sub_1413c1ea0(&var_248)
int128_t zmm1_1 = data_14399f6f0
var_248 = data_143dbb1f8.q
int64_t var_1b8 = 0
int64_t var_1a8 = 0
uint128_t var_238 = data_14399f6e0
int128_t var_228 = zmm1_1
int32_t var_240 = data_143dbb200
void* rax_15 = *(arg1 + 8)
uint128_t var_218 = data_14399f700
int128_t var_208 = data_14399f710
int64_t* var_198 = r14
int32_t var_1b0 = rbx_1.d
uint32_t var_1ac = rdi_1
int32_t var_1a0 = rbx_1.d
uint32_t var_19c = rdi_1
uint128_t var_1f8 = *(rax_15 + 0x10)
int128_t var_1e8 = *(rax_15 + 0x20)
uint128_t var_1d8 = *(rax_15 + 0x30)
int128_t var_1c8 = *(rax_15 + 0x40)
uint128_t var_170 = data_14399f5e0
int128_t var_160 = data_14399f5c0
int64_t* rax_16 = j_sub_140a82f30(0x15a0)
int64_t* rdi_2

if (rax_16 == 0)
    rdi_2 = nullptr
else
    rdi_2 = sub_1422d8af0(rax_16, &var_248)

char rcx_6

if (sub_14128e090((*U"1111")[sx.q(*(arg4 + 0x90))]) == 0 || *(arg4 + 0x8d) == 0)
    rcx_6 = 0
else
    rcx_6 = 1

sub_1423edc90(*(arg1 + 8), arg2, arg3, rdi_2, *(arg4 + 0x60) != 0, rcx_6)

if ((*(arg4 + 0x78) & 2) != 0 && arg1 + 8 != &var_298)
    *(arg1 + 8) = 0
    int64_t* rbx_2 = *(arg1 + 0x10)
    
    if (rbx_2 != 0)
        *(arg1 + 0x10) = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (rdi_2 != 0)
    sub_1413c58e0(rdi_2)
    j_sub_140a74f90(rdi_2)

void var_e0
sub_1413c3330(&var_e0)
int32_t var_e8 = 0
int64_t var_f0

if (var_f0 != 0)
    sub_140a74f90(var_f0)

int32_t var_128 = 0
int64_t var_130
int32_t var_124

if (var_124 != 0)
    sub_140638cc0(&var_130, 0)

int32_t var_100 = 0xffffffff
int32_t var_fc = 0
void var_120
sub_14059a8e0(&var_120, 0)
int64_t var_110

if (var_110 != 0)
    sub_140a74f90(var_110)

int64_t rcx_17 = var_130

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (r14 != 0)
    sub_1422dbb60(r14)
    j_sub_140a74f90(r14)

void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_2c8)
return result
