// 函数: sub_1410ed650
// 地址: 0x1410ed650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x9c) & 8) == 0)
    return 

int64_t* rcx = *(arg2 + 0x80)
uint64_t rdx = zx.q(*(arg1 + 0x10))
int64_t arg_10 = 0
int64_t* rax_2 = (*(*rcx + 0x40))(rcx, rdx, &arg_10)
int64_t rdx_1 = *rax_2

if ((*(rdx_1 + 0xa0))(rax_2, rdx_1).b == 0)
    return 

int64_t* r12_1 = *(arg2 + 0x80)
int64_t* rax = (*(*r12_1 + 0x48))(r12_1, zx.q(*(arg1 + 0x10)))
int64_t* rsi_1 = rax

if (rax == 0)
    return 

int64_t rdx_3 = *rax

if ((*(rdx_3 + 0xa0))(rax, rdx_3).b == 0 || sub_1405948b0(rsi_1) == 0)
    return 

int32_t rax_4 = sub_1422e5a30(*(arg1 + 0x18))
int64_t rdx_4 = *rsi_1
char rax_5 = (*(rdx_4 + 0x2d0))(rsi_1, rdx_4)
int64_t rdx_5 = *rsi_1
int32_t rax_7 = sub_1410efe60(rax_4, (*(rdx_5 + 0x2b8))(rsi_1, rdx_5), rax_5)
int32_t rax_8 = sub_1410f0700(rax_4, rax_7)
int64_t var_40 = sub_141261c60(arg2)
int32_t rax_10 = sub_141261c10(arg2, rsi_1, &var_40)
arg_10.d = sub_141261bd0(arg2, rsi_1, &var_40)
rax = sub_1410f9600(*(arg1 + 0x68), rax_8, rax_7, rsi_1)

if (rax_7 != 2)
    if (rax.b == 0 || *(arg1 + 0x6c) == 5)
        rax.b = 0
    else
        rax.b = 1
else if (rax.b == 0 || *(arg1 + 0x6c) != 5)
    rax.b = 0
else
    rax.b = 1

if (rax.b == 0)
    return 

if (*(arg1 + 0x68) == 5)
    rax = (*(*rsi_1 + 0x2e8))(rsi_1)

if (*(arg1 + 0x68) == 5 && rax.b == 0)
    return 

char rax_14 = (*(*rsi_1 + 0x2d0))(rsi_1)
int64_t rdx_11 = *rsi_1
int32_t rbx_3 = *(arg1 + 0x68)
int32_t rdi_2 = sub_1410efe60(rax_4, (*(rdx_11 + 0x2b8))(rsi_1, rdx_11), rax_14)

if (rbx_3 == 5)
    int32_t rcx_18 = 0xb
    
    if (rdi_2 == 0xc)
        rcx_18 = 0xd
    
    rdi_2 = rcx_18

int512_t zmm0_1
rax, zmm0_1 = sub_1410f07b0(rax_4, rdi_2, rax_14)

if (rax.d == *(arg1 + 0x6c))
    *(arg1 + 0x28) = sub_1410f80a0(zx.q(*(arg1 + 0x10)), *(arg1 + 0x68), rdi_2, rax_14)
    sub_1410fac00(arg1, arg2, arg3, arg5, zmm0_1, arg4, r12_1, rsi_1, rax_10, arg_10.d)
