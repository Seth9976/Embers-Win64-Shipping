// 函数: sub_1427414d0
// 地址: 0x1427414d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 0x12)
int32_t rax = var_30 + 0x12
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

sub_1405a7220(var_38, 0x12, "Apex_Destructible", 0x12, 0x3f)
HMODULE rax_1 = sub_1417ca570(&var_38)
int64_t rcx_4 = var_38
data_143f74118 = rax_1

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rcx_5 = data_143ef8530
int64_t* rax_3 = (*(*rcx_5 + 0x48))(rcx_5, "Destructible", 0)
data_143f74110 = rax_3
int64_t rdx_1 = *rax_3
int64_t rax_4 = (*(rdx_1 + 0x40))(rax_3, rdx_1)
int64_t* rcx_7 = data_143f74110
int64_t r8 = *rcx_7
(*(r8 + 0x28))(rcx_7, rax_4, r8)
int64_t* rcx_8 = data_143f74110
(*(*rcx_8 + 0xb0))(rcx_8, &data_143b6c530)
uint64_t rdx_3 = 0
int64_t* rcx_9 = data_143f74110
int32_t r8_1 = *data_143f74130

if (r8_1 s>= 0)
    rdx_3 = zx.q(r8_1)

(*(*rcx_9 + 0x80))(rcx_9, rdx_3, r8_1)
uint64_t rdx_4 = 0
int64_t* rcx_10 = data_143f74110
int32_t r8_2 = *data_143f74148

if (r8_2 s>= 0)
    rdx_4 = zx.q(r8_2)

(*(*rcx_10 + 0x88))(rcx_10, rdx_4, r8_2)
int64_t* rcx_11 = data_143f74110
int64_t r8_3 = *rcx_11
int64_t rdx_5
rdx_5.b = *data_143f74160 != 0
(*(r8_3 + 0x90))(rcx_11, rdx_5, r8_3)
int64_t* rcx_12 = data_143f74110
(*(*rcx_12 + 0xd8))(rcx_12, 2)
int64_t* rcx_13 = data_143f74110
int64_t rdx_6
rdx_6.b = 1
(*(*rcx_13 + 0x138))(rcx_13, rdx_6)
int64_t* rcx_14 = data_143f74110
int64_t rdx_7
rdx_7.b = 1
(*(*rcx_14 + 0x130))(rcx_14, rdx_7)
void*** rax_14 = j_sub_140a82f30(0x68)
void*** rdi = rax_14

if (rax_14 == 0)
    rdi = nullptr
else
    memset(rax_14, 0, 0x68)
    rdi[2] = 0
    void* rcx_16 = &rdi[5]
    *rdi = &data_143497e30
    rdi[3] = 0
    rdi[4] = 0
    *(rcx_16 + 0x10) = 0
    *(rcx_16 + 0x18) = 0
    *(rcx_16 + 0x1c) = 0x80
    void* rax_15 = *(rcx_16 + 0x10)
    
    if (rax_15 != 0)
        rcx_16 = rax_15
    
    *rcx_16 = 0
    *(rcx_16 + 8) = 0
    rdi[9].d = 0xffffffff
    *(rdi + 0x4c) = 0
    rdi[0xb] = 0
    rdi[0xc].d = 0

data_143f74100 = rdi
data_143ef85b0 = &data_143b6c538
void*** rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    *rax_16 = &data_142d3fe58
    rax_16[1] = arg1
    rax_16[2] = sub_141d8c290
    rax_16[4] = sub_140a387b0()
    *rax_16 = &data_142d3feb0

int64_t rdi_1 = 0
void arg_8

if (rax_16 != 0)
    sub_140599630(&data_143a2f340, 1)
    int64_t* rax_19 = (*rax_16)[6](rax_16, &arg_8)
    int64_t r14_1 = sx.q(data_143a2f348)
    rdi_1 = *rax_19
    int32_t rax_20 = (r14_1 + 1).d
    bool cond:2_1 = rax_20 s<= data_143a2f34c
    data_143a2f348 = rax_20
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_143a2f340)
    
    void** rax_23 = (r14_1 << 4) + data_143a2f340
    *rax_23 = rax_16
    rax_23[1].d = 3

*(arg1 + 8) = rdi_1
void** result = sub_140a84c80(0, 0x30, 0)
void*** result_1 = result

if (result != 0)
    *result = &data_142d3fe58
    result[1] = arg1
    result_1[2] = sub_141d8c298
    result = sub_140a387b0()
    result_1[4] = result
    *result_1 = &data_142d3feb0

if (result_1 != 0)
    sub_140599630(&data_143a2f370, 1)
    int64_t* rax_25 = (*result_1)[6](result_1, &arg_8)
    int64_t rsi_1 = sx.q(data_143a2f378)
    rbx = *rax_25
    int32_t rax_26 = (rsi_1 + 1).d
    bool cond:3_1 = rax_26 s<= data_143a2f37c
    data_143a2f378 = rax_26
    
    if (not(cond:3_1))
        sub_1405a4f90(&data_143a2f370)
    
    result = (rsi_1 << 4) + data_143a2f370
    *result = result_1
    result[1].d = 3

*(arg1 + 0x10) = rbx
data_143f74108 = arg1
return result
