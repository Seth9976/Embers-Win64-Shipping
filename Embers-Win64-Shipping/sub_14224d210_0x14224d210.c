// 函数: sub_14224d210
// 地址: 0x14224d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[9].d
uint64_t r15 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140a20c40(&var_58, rdx)
void arg_8
int64_t* rax = sub_140b58170(&arg_8, "Bodies", 1)
int64_t rsi = var_58
uint64_t var_40 = 0
int64_t rbx = *rax
int32_t var_34
int32_t r12

if (var_50 != 0)
    sub_1405a4c70(&var_40, var_50, 0)
    r15 = var_40
    memcpy(r15, rsi, var_50 * 2)
    r12 = var_34
else
    r12 = 0

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_1 = (rsi_1 + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_4 = (rsi_1 << 5) + *arg2
*rax_4 = rbx
rax_4[1] = r15
uint64_t r15_1 = 0
rax_4[2].d = var_50
*(rax_4 + 0x14) = r12
rax_4[3] = 2
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t rdx_4 = arg1[0xb].d
var_58 = 0
int32_t var_50_1 = 0
sub_140a20c40(&var_58, rdx_4)
int64_t* rax_5 = sub_140b58170(&arg_8, "Constraints", 1)
int64_t rsi_2 = var_58
var_40 = 0
int64_t rbx_1 = *rax_5
int32_t r12_1

if (var_50_1 != 0)
    sub_1405a4c70(&var_40, var_50_1, 0)
    r15_1 = var_40
    memcpy(r15_1, rsi_2, var_50_1 * 2)
    r12_1 = var_34
else
    r12_1 = 0

int64_t rsi_3 = sx.q(arg2[1].d)
int32_t rax_6 = (rsi_3 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_9 = (rsi_3 << 5) + *arg2
*rax_9 = rbx_1
rax_9[1] = r15_1
rax_9[2].d = var_50_1
*(rax_9 + 0x14) = r12_1
rax_9[3] = 2
int64_t rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return sub_140cdbf60(arg1, arg2) __tailcall
