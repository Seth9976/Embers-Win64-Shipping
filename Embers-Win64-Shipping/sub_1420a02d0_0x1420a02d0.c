// 函数: sub_1420a02d0
// 地址: 0x1420a02d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_1424cdad0()
void* rdx = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

rax = zx.q(*(arg1 + 0x44))
int32_t i = 0
int32_t rdx_1 = 0
*(arg1 + 0x40) = 0
int32_t temp0_1 = rax.d

if (temp0_1 s< 0 && temp0_1 != 0)
    sub_1405dadb0(arg1 + 0x38, 0)
    rdx_1 = *(arg1 + 0x40)

int32_t rcx_3 = *(arg1 + 0x30) + rdx_1
*(arg1 + 0x40) = rcx_3

if (rcx_3 s> *(arg1 + 0x44))
    sub_1406105e0(arg1 + 0x38)

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t rbp_1 = 0
int64_t* rsi_1 = nullptr

do
    int32_t zmm0_1 = (zx.o(0)).d
    int64_t* r15_1 = *(rsi_1 + *(arg1 + 0x28))
    int32_t arg_10 = zmm0_1
    
    if (r15_1 != 0)
        void var_38
        sub_140b4c620(&var_38, arg2 + 0xa0)
        int32_t var_30_1 = 0xffffffff
        char var_2c_1 = 2
        (*(*r15_1 + 0x398))(r15_1, &var_38, &arg_10, 0)
        zmm0_1 = arg_10
    
    i += 1
    rsi_1 = &rsi_1[1]
    *(*(arg1 + 0x38) + rbp_1) = zmm0_1
    rbp_1 += 4
while (i s< *(arg1 + 0x30))
