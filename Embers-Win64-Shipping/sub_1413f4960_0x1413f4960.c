// 函数: sub_1413f4960
// 地址: 0x1413f4960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_c8 = *(arg4 + 0x1598)
int64_t* rdi = *(arg5 + 0x20)

if ((*(*rdi + 0xd0))(rdi, &var_c8, arg4, arg4 + 0x1598, var_c8) == 0)
    var_c8.d = *(arg4 + 0x1598)
    var_c8:4.d = *(arg4 + 0x159c)
    var_c8:8.d = *(arg4 + 0x15a0)
    var_c8:0xc.d = *(arg4 + 0x15a4)

if (arg7 != 0 && *arg7 != 0 && arg7[1] != 0)
    arg5.b = 1

if (arg7 == 0 || *arg7 == 0 || arg7[1] == 0 || arg7[2] == 0)
    arg5.b = 0

int32_t* rax_7 = sub_14081d830(0x150, *(arg2 + 8), 1, 0)
int32_t* r14 = rax_7

if (rax_7 == 0)
    r14 = nullptr
else
    *(rax_7 + 0x10) = 0
    *(rax_7 + 0x18) = 0
    *(rax_7 + 0x30) = 0
    *(rax_7 + 0x38) = 0
    *(rax_7 + 0xa8) = 0
    __builtin_memset(&rax_7[0x2e], 0, 0x68)
    *(rax_7 + 0x138) = 0
    *(rax_7 + 0x140) = 0

memset(r14, 0, 0x150)
*(r14 + 0x120) = arg8
*(r14 + 0x128) = arg9
*(r14 + 0x130) = arg10
r14[8] = *arg6
r14[9] = __maxss_xmmss_memss(data_1439b6af0, 0x3c23d70a)
r14[0xa] = zx.d(*(rdi + 0x13d))
(*(*rdi + 0x68))(rdi, &r14[0x14])
*(r14 + 0x118) = *(*(arg4 + 0x51e8) + 0x18)
sub_1405d16e0(&r14[0x4e], *(arg4 + 0x10))
*(r14 + 0xb0) = *arg3
*(r14 + 0xc0) = arg3[1]
*(r14 + 0xd0) = arg3[2]
*(r14 + 0xe0) = arg3[3]
*(r14 + 0xf0) = arg3[4]
r14[0xc] = var_c8.d
r14[0xd] = var_c8:4.d
r14[0xe] = var_c8:8.d
r14[0xf] = var_c8:0xc.d
*(r14 + 0x40) = 0
void*** rax_21
int512_t zmm6
rax_21, zmm6 = sub_1410fccd0(arg2, arg4 + 0x5210, u"External", 0)
*(r14 + 0x110) = rax_21

if (arg5.b != 0)
    int32_t rax_24
    
    if (arg7[3].b == 0 || *(data_143ec8f88 + 4) s<= 0)
        rax_24 = 0
    else
        rax_24 = 1
        
        if (sub_1411913f0() != 0)
            rax_24 = 0
    
    r14[0x12] = rax_24
    *(r14 + 0x100) = *arg7
    *(r14 + 0x108) = arg7[1]
    sub_1405d16e0(&r14[0x50], *(arg7[2] + 0x80))
    
    if (sub_1405949a0() != 0)
        sub_14119c160(arg2, arg4 + 0x51b0, r14)

int32_t arg_38
int32_t rcx_9 = arg_38
int128_t* arg_18
arg_18.d = zx.d(*(rdi + 0x13c))

if (rcx_9 != 1)
    int32_t rax_29 = 0
    
    if (rcx_9 == 2)
        rax_29 = 8
    
    arg_38 = rax_29
else
    arg_38 = 4

int32_t rsi_1 = *(data_143ec8e58 + 4)
int32_t rdi_1 = *arg6
uint32_t rbx_1 = zx.d(rdi[0x27].b)
int64_t* rax_35 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
int32_t rcx_11 = 0

if (rdi_1 s> 1)
    rcx_11 = 2

uint32_t rcx_12 = zx.d(arg5.b)
int128_t var_b8
char rcx_16 = sub_1419a2ec0(rax_35, &var_b8, &data_143ec8f90, 
    arg_18.d + (sbb.d(rcx_12, rcx_12, rsi_1 != 0) & 0xc)
        + (rcx_11 + (rbx_1 u>> 7 << 2) + rcx_12) * 0x18 + arg_38)
int128_t zmm7 = var_b8
zmm6.o = zx.o(0)
int128_t var_a8 = sub_1413eab10(rcx_16)
sub_141998c50(zmm7.q, &data_143eccb70, r14)
arg_18.d = *(arg4 + 0x15a0) - *(arg4 + 0x1598)
arg_18:4.d = *(arg4 + 0x15a4) - *(arg4 + 0x159c)
int128_t* var_70 = arg_18
void* var_90 = arg4
void*** rax_44
char rcx_18
rax_44, rcx_18 = sub_14081d830(0x68, *(arg2 + 8), 1, 0)
void*** rbx_2 = rax_44

if (rax_44 == 0)
    rbx_2 = nullptr
else
    var_b8.q = r14
    sub_1413eab10(rcx_18)
    var_b8:8.q = &data_143eccba0
    var_a8 = var_b8
    sub_141992bd0(rbx_2, &arg_38, &var_a8, 2)
    *rbx_2 = &data_142f78f08
    *(rbx_2 + 0x38) = arg1.o
    *(rbx_2 + 0x48) = zmm7
    *(rbx_2 + 0x58) = r14.o

return sub_1419968d0(arg2, rbx_2)
