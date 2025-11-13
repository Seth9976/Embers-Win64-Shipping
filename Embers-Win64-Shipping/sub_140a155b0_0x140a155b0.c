// 函数: sub_140a155b0
// 地址: 0x140a155b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 5)
int32_t rsi = var_30:4.d
int32_t rbx = var_30.d + 5
var_30.d = rbx

if (rbx s> rsi)
    sub_140594770(&var_38)
    rsi = var_30:4.d
    rbx = var_30.d

int64_t r15 = var_38
UnDecorator::getReferenceType(r15, u"webm", 0xa)
int64_t r14 = sx.q(*(arg1 + 0x10))
int32_t rax = (r14 + 1).d
*(arg1 + 0x10) = rax

if (rax s> *(arg1 + 0x14))
    sub_1405a4f90(arg1 + 8)

int64_t* rax_3 = (r14 << 4) + *(arg1 + 8)
*rax_3 = r15
rax_3[1].d = rbx
*(rax_3 + 0xc) = rsi
var_38 = 0
int64_t var_30_1 = 0
int64_t r14_1 = 0
int32_t rsi_1 = 0
int32_t r15_1 = 0
int64_t rbx_1 = -1

do
    rbx_1 += 1
while ((*u"Win64")[rbx_1] != 0)

if (rbx_1.d + 1 s> 0)
    sub_1405947f0(&var_38, rbx_1.d + 1)
    r15_1 = var_30_1:4.d
    rsi_1 = var_30_1.d
    r14_1 = var_38

rsi_1 += rbx_1.d + 1
var_30_1.d = rsi_1

if (rsi_1 s> r15_1)
    sub_140594770(&var_38)
    r15_1 = var_30_1:4.d
    rsi_1 = var_30_1.d
    r14_1 = var_38

UnDecorator::getReferenceType(r14_1, u"Win64", (rbx_1.d + 1) * 2)
int64_t rdi = sx.q(*(arg1 + 0x20))
int32_t rax_4 = (rdi + 1).d
*(arg1 + 0x20) = rax_4

if (rax_4 s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

var_38 = 0
int64_t* rax_7 = (rdi << 4) + *(arg1 + 0x18)
int64_t var_30_2 = 0
*rax_7 = r14_1
rax_7[1].d = rsi_1
*(rax_7 + 0xc) = r15_1
sub_1405947f0(&var_38, 8)
int32_t r14_2 = var_30_2:4.d
int32_t rsi_2 = var_30_2.d + 8
var_30_2.d = rsi_2

if (rsi_2 s> r14_2)
    sub_140594770(&var_38)
    r14_2 = var_30_2:4.d
    rsi_2 = var_30_2.d

int64_t r15_2 = var_38
sub_1405a7220(r15_2, 8, "Windows", 8, 0x3f)
int64_t rdi_1 = sx.q(*(arg1 + 0x20))
int32_t rax_8 = (rdi_1 + 1).d
*(arg1 + 0x20) = rax_8

if (rax_8 s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

var_38 = 0
int64_t* rax_11 = (rdi_1 << 4) + *(arg1 + 0x18)
int64_t var_30_3 = 0
*rax_11 = r15_2
rax_11[1].d = rsi_2
*(rax_11 + 0xc) = r14_2
sub_1405947f0(&var_38, 5)
int32_t r14_3 = var_30_3:4.d
int32_t rsi_3 = var_30_3.d + 5
var_30_3.d = rsi_3

if (rsi_3 s> r14_3)
    sub_140594770(&var_38)
    r14_3 = var_30_3:4.d
    rsi_3 = var_30_3.d

int64_t r15_3 = var_38
UnDecorator::getReferenceType(r15_3, u"file", 0xa)
int64_t rdi_2 = sx.q(*(arg1 + 0x30))
int32_t rax_12 = (rdi_2 + 1).d
*(arg1 + 0x30) = rax_12

if (rax_12 s> *(arg1 + 0x34))
    sub_1405a4f90(arg1 + 0x28)

int64_t* rax_15 = (rdi_2 << 4) + *(arg1 + 0x28)
*rax_15 = r15_3
rax_15[1].d = rsi_3
*(rax_15 + 0xc) = r14_3
void arg_8
int64_t rbx_3 = *sub_140b58170(&arg_8, "Media", 1)
j_sub_140b3db50()
int64_t* result = sub_140b407e0(&data_143de7d78, rbx_3)

if (result == 0)
    return result

int64_t r8_3 = *result
return (*(r8_3 + 0x68))(result, arg1 - 8, r8_3)
