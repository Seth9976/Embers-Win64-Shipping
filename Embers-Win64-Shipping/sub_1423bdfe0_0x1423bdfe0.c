// 函数: sub_1423bdfe0
// 地址: 0x1423bdfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x48)
int32_t rdi = 0
char rax = *(r14 + 0xc2)

if (rax != 0)
    rdi.b = rax != 1
    rdi += 1

char rax_1 = *(r14 + 0xc1)
int32_t rsi = 0

if (rax_1 != 0)
    rsi.b = rax_1 != 1
    rsi += 1

void* rax_2
int32_t zmm6_1
rax_2, zmm6_1 = sub_141fe0c50(0)
void* rax_4 = sub_1405e25d0(sub_141fe0f50(rax_2))
uint32_t rdx = zx.d(*(r14 + 0x5d))
uint64_t rcx_1

if (rdx == 0)
    rcx_1.b = 0
else if (rdx == 1)
    rcx_1.b = 1
else if (rdx == 2)
    rcx_1.b = 2
else
    rcx_1 = zx.q(*(zx.q(*(r14 + 0x5f)) * 0x54 + *(rax_4 + 0x28) + 0x18))

char var_68 = rcx_1.b
int64_t* rcx_3 = data_143f0f180
int32_t var_64 = zmm6_1
int32_t var_5c = 0x7f7fffff
char var_67 = rsi.b
char var_66 = rdi.b
char var_65 = 0
int32_t var_60 = 0
int64_t var_58 = 0
char var_50 = 0
void arg_8
(*(*rcx_3 + 0x28))(rcx_3, &arg_8, &var_68)
sub_1405d1600(arg1 + 0x18, &arg_8)
sub_1405d1550(&arg_8)
void* r14_1 = *(arg1 + 0x48)
int32_t rdi_1 = 0
char rax_7 = *(r14_1 + 0xc2)

if (rax_7 != 0)
    rdi_1.b = rax_7 != 1
    rdi_1 += 1

char rax_8 = *(r14_1 + 0xc1)
int32_t rsi_1 = 0

if (rax_8 != 0)
    rsi_1.b = rax_8 != 1
    rsi_1 += 1

void* rax_9
int512_t zmm0
int32_t zmm6_2
rax_9, zmm0, zmm6_2 = sub_141fe0c50(0)
void* rax_11 = sub_1405e25d0(sub_141fe0f50(rax_9))
uint32_t rdx_5 = zx.d(*(r14_1 + 0x5d))
uint64_t rcx_7

if (rdx_5 == 0)
    rcx_7.b = 0
else if (rdx_5 == 1)
    rcx_7.b = 1
else if (rdx_5 == 2)
    rcx_7.b = 2
else
    rcx_7 = zx.q(*(zx.q(*(r14_1 + 0x5f)) * 0x54 + *(rax_11 + 0x28) + 0x18))

zmm0.o = 0x40000000
char var_48 = rcx_7.b
int32_t var_44 = zmm6_2
int32_t var_3c = 0x40000000
char var_47 = rsi_1.b
char var_46 = rdi_1.b
char var_45 = 0
int32_t var_40 = 0
int64_t var_38 = 1
char var_30 = 0
(*(*data_143f0f180 + 0x28))(zmm0, &arg_8, &var_48)
sub_1405d1600(arg1 + 0x20, &arg_8)
return sub_1405d1550(&arg_8)
