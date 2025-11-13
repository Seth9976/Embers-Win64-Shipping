// 函数: sub_140907ef0
// 地址: 0x140907ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 6)
int32_t rsi = var_30:4.d
int32_t rdi = var_30.d + 6
var_30.d = rdi

if (rdi s> rsi)
    sub_140594770(&var_38)
    rsi = var_30:4.d
    rdi = var_30.d

int64_t r12 = var_38
UnDecorator::getReferenceType(r12, u"Linux", 0xc)
int64_t r14 = sx.q(*(arg1 + 0x20))
int32_t rax = (r14 + 1).d
*(arg1 + 0x20) = rax

if (rax s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

var_38 = 0
int64_t* rax_3 = (r14 << 4) + *(arg1 + 0x18)
int64_t var_30_1 = 0
*rax_3 = r12
rax_3[1].d = rdi
*(rax_3 + 0xc) = rsi
sub_1405947f0(&var_38, 4)
int32_t r14_1 = var_30_1:4.d
int32_t rdi_1 = var_30_1.d + 4
var_30_1.d = rdi_1

if (rdi_1 s> r14_1)
    sub_140594770(&var_38)
    r14_1 = var_30_1:4.d
    rdi_1 = var_30_1.d

int64_t r12_1 = var_38
UnDecorator::getReferenceType(r12_1, &data_142d8faa0, 8)
int64_t rsi_1 = sx.q(*(arg1 + 0x20))
int32_t rax_4 = (rsi_1 + 1).d
*(arg1 + 0x20) = rax_4

if (rax_4 s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

var_38 = 0
int64_t* rax_7 = (rsi_1 << 4) + *(arg1 + 0x18)
int64_t var_30_2 = 0
*rax_7 = r12_1
rax_7[1].d = rdi_1
*(rax_7 + 0xc) = r14_1
sub_1405947f0(&var_38, 8)
int32_t r14_2 = var_30_2:4.d
int32_t rsi_2 = var_30_2.d + 8
var_30_2.d = rsi_2

if (rsi_2 s> r14_2)
    sub_140594770(&var_38)
    r14_2 = var_30_2:4.d
    rsi_2 = var_30_2.d

int64_t r12_2 = var_38
UnDecorator::getReferenceType(r12_2, u"Windows", 0x10)
int64_t rdi_2 = sx.q(*(arg1 + 0x20))
int32_t rax_8 = (rdi_2 + 1).d
*(arg1 + 0x20) = rax_8

if (rax_8 s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

var_38 = 0
int64_t* rax_11 = (rdi_2 << 4) + *(arg1 + 0x18)
int64_t var_30_3 = 0
*rax_11 = r12_2
rax_11[1].d = rsi_2
*(rax_11 + 0xc) = r14_2
sub_1405947f0(&var_38, 4)
int32_t r14_3 = var_30_3:4.d
int32_t rsi_3 = var_30_3.d + 4
var_30_3.d = rsi_3

if (rsi_3 s> r14_3)
    sub_140594770(&var_38)
    r14_3 = var_30_3:4.d
    rsi_3 = var_30_3.d

int64_t r12_3 = var_38
UnDecorator::getReferenceType(r12_3, &data_142e1b5d8, 8)
int64_t rdi_3 = sx.q(*(arg1 + 0x30))
int32_t rax_12 = (rdi_3 + 1).d
*(arg1 + 0x30) = rax_12

if (rax_12 s> *(arg1 + 0x34))
    sub_1405a4f90(arg1 + 0x28)

int64_t* rax_15 = (rdi_3 << 4) + *(arg1 + 0x28)
*rax_15 = r12_3
rax_15[1].d = rsi_3
*(rax_15 + 0xc) = r14_3
void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "Media", 1)
j_sub_140b3db50()
int64_t* result = sub_140b407e0(&data_143de7d78, rbx)

if (result == 0)
    return result

int64_t r8_1 = *result
return (*(r8_1 + 0x68))(result, arg1 - 8, r8_1)
