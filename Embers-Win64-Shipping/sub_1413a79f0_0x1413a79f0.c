// 函数: sub_1413a79f0
// 地址: 0x1413a79f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg4 + 8)
uint32_t* arg_18
sub_1413a14d0(arg1, arg2, arg3, arg4, arg5, &arg_18, r13 + 0xcd0)
uint32_t* rax_1 = sub_14081d830(0xb0, arg2[1], 1, 0)
uint32_t* rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    *(rax_1 + 0x20) = 0
    *(rax_1 + 0x28) = 0
    __builtin_memset(&rax_1[0xe], 0, 0x60)
    *(rax_1 + 0xa0) = 0
    *(rax_1 + 0xa8) = 0

memset(rdi, 0, 0xb0)
int32_t rax_2 = data_1439b69d8

if (rax_2 s<= 0xffffffff)
    rax_2 = *(arg4 + 0x123c)

int32_t rcx_1 = 0x20

if (rax_2 s<= 0x20)
    rcx_1 = rax_2

int32_t rax_4 = *(*(arg4 + 0x15a8) + 0x4c8)
rdi[1] = rcx_1
*rdi = modu.dp.d(0:rax_4, rcx_1)
rdi[5] = data_1439b69e8
int32_t zmm0_1 = sub_1413e95d0()
int32_t rax_6 = arg5
rdi[6] = zmm0_1
rdi[7] = data_1439b69f4
rdi[2] = rax_6
*(rdi + 0xc) = 0
*(rdi + 0x20) = *(*(arg4 + 0x51e8) + 0x18)
sub_1405d16e0(&rdi[0xa], *(arg4 + 0x10))
*(rdi + 0x30) = *arg3
*(rdi + 0x40) = arg3[1]
*(rdi + 0x50) = arg3[2]
*(rdi + 0x60) = arg3[3]
*(rdi + 0x70) = arg3[4]
int64_t* rax_8 = sub_1422c6ca0(*arg2)
int64_t* arg_10 = rax_8
int64_t* rbx_1 = rax_8

if (rax_8 != 0)
    (*(*rax_8 + 0x30))(rbx_1)
    rbx_1 = arg_10

if (rax_8 == 0 || rbx_1 == 0)
    int64_t* rcx_6 = data_1439b70c8
    arg_10 = rcx_6
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x30))()
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1)

*(rdi + 0x80) = sub_1410fccd0(arg2, &arg_10, u"External", 0)
*(rdi + 0x88) = data_14395f4d0
int32_t rcx_9 = *(r13 + 0xcd4)
uint32_t* r13_1 = arg_18
rdi[0x26] = *(r13 + 0xcd0)
rdi[0x27] = rcx_9
bool cond:0 = (r13_1[0xe] & 0x100) == 0
uint32_t* var_c8 = r13_1
int64_t var_c0 = 1

if (not(cond:0))
    var_c0.d = 4
    var_c0:4.d = 0x1c

void*** rax_15 = sub_14081d830(0x28, arg2[1], 1, 0)

if (rax_15 == 0)
    rax_15 = nullptr
else
    int128_t zmm0_3 = var_c8.o
    rax_15[1] = *(r13_1 + 8)
    *rax_15 = &data_142f285c0
    rax_15[2] = 0
    *(rax_15 + 0x18) = zmm0_3

*(rdi + 0x90) = rax_15
int64_t* rdx_5 = arg2[1]
var_c0.w = 0
uint32_t* rbx_2 = *arg6
var_c8 = rbx_2
void*** rax_16 = sub_14081d830(0x28, rdx_5, 1, 0)

if (rax_16 == 0)
    rax_16 = nullptr
else
    int128_t zmm0_4 = var_c8.o
    rax_16[1] = *(rbx_2 + 8)
    rax_16[2] = 0
    *(rax_16 + 0x18) = zmm0_4
    *rax_16 = &data_142f285c0

*(rdi + 0xa0) = rax_16
uint32_t* rbx_3 = arg6[2]
int64_t* rdx_6 = arg2[1]
var_c8 = rbx_3
var_c0.w = 0
void*** rax_17
int512_t zmm6
rax_17, zmm6 = sub_14081d830(0x28, rdx_6, 1, 0)

if (rax_17 == 0)
    rax_17 = nullptr
else
    int128_t zmm0_5 = var_c8.o
    rax_17[1] = *(rbx_3 + 8)
    *rax_17 = &data_142f285c0
    rax_17[2] = 0
    *(rax_17 + 0x18) = zmm0_5

*(rdi + 0xa8) = rax_17
int32_t rbx_4 = *(data_143ec5878 + 4)
int64_t* rax_20 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
int32_t r9 = 1

if (rbx_4 != 0)
    r9 = 3

char rcx_15 = sub_1419a2ec0(rax_20, &var_c8, &data_143ec6070, r9)
int128_t zmm7 = var_c8.o
zmm6.o = zx.o(0)
int128_t var_b8 = sub_14139ed30(rcx_15)
sub_141998c50(zmm7.q, &data_143ec7d20, rdi)
int32_t r8_1 = arg5
void* var_90 = arg1
void* arg_8
arg_8.d = divs.dp.d(sx.q(*(arg4 + 0x15a0) - *(arg4 + 0x1598) - 1 + r8_1), r8_1)
arg_8:4.d = divs.dp.d(sx.q(r8_1 - 1 + *(arg4 + 0x15a4) - *(arg4 + 0x159c)), r8_1)
void* var_70 = arg_8
void*** rax_32
char rcx_19
rax_32, rcx_19 = sub_14081d830(0x68, arg2[1], 1, 0)
void*** rbx_5 = rax_32

if (rax_32 == 0)
    rbx_5 = nullptr
else
    var_c8 = rdi
    sub_14139ed30(rcx_19)
    void* var_c0_1 = &data_143ec7d50
    var_b8 = var_c8.o
    sub_141992bd0(rbx_5, &arg5, &var_b8, 2)
    *rbx_5 = &data_142f6e200
    *(rbx_5 + 0x38) = rdi.o
    *(rbx_5 + 0x48) = arg4.o
    *(rbx_5 + 0x58) = zmm7

sub_1419968d0(arg2, rbx_5)
int64_t rbx_6 = sx.q(arg2[0x2f].d)
var_b8.q = r13_1
var_b8:8.q = r13 + 0xcc8
int32_t rax_35 = (rbx_6 + 1).d
int16_t var_a8 = 0x100
arg2[0x2f].d = rax_35

if (rax_35 s> *(arg2 + 0x17c))
    sub_14119a720(&arg2[0x2e], rbx_6.d)

int64_t result = arg2[0x2e]
int64_t rcx_23 = rbx_6 * 3
*(result + (rcx_23 << 3)) = var_b8
*(result + (rcx_23 << 3) + 0x10) = var_a8.q
int64_t* rcx_24 = arg_10

if (rcx_24 == 0)
    return result

return (*(*rcx_24 + 0x38))(rcx_24)
