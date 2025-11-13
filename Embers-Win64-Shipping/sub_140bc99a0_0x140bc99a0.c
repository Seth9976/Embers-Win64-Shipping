// 函数: sub_140bc99a0
// 地址: 0x140bc99a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_608
int64_t rax_1 = __security_cookie ^ &var_608
int32_t var_60 = 0
int64_t var_4b8 = 0
var_60:3.b = 7
int32_t var_4b0 = 0x7000000
int32_t var_50 = 0
var_50:3.b = 8
int64_t var_4c8 = 0
int32_t var_4c0 = 0
int128_t var_5d8
sub_140ab5640(arg2, &var_5d8)
int64_t var_590 = 0
int64_t var_5a0 = -1
int128_t var_508 = 0.o
int128_t var_4f8 = 0.o
void var_5c0
sub_140ab9960(&var_5d8, &var_5c0, &var_4b8, &var_508)
int64_t var_570 = 0
int64_t var_580 = -1
int128_t var_4e8 = 0.o
int128_t var_4d8 = 0.o
void var_5b8
sub_140ab9960(&var_5d8, &var_5b8, &var_4c8, &var_4e8)
sub_140ab4030(&var_5d8)
int32_t var_178[0x44]
int32_t* rax_2 = sub_140ab1d30(arg2, &var_178, &var_4c8)

if (*rax_2 != 0)
    sub_140ac59f0(rax_2)

int32_t var_288[0x44]
int32_t* rax_3 = sub_140ab1d30(arg2, &var_288, &var_4b8)

if (*rax_3 != 0)
    sub_140ac59f0(rax_3)

sub_140b62f20(rax_3[0x42], rax_2[0x42])
sub_140a99e90(&var_288, 1)
sub_140a99e90(&var_178, 1)
sub_140ac8910(&var_5d8)
int32_t var_4a8
int32_t* rax_4 = sub_140ab1810(&var_5c0, &var_4a8)

if (*rax_4 != 0)
    sub_140ac59f0(rax_4)

sub_140a99e20(rax_4, &data_14399eba0)
int64_t* r14 = *(rax_4 + 0x108)
*(rax_4 + 0x108) = 0
int32_t rbx_2 = var_4a8
sub_140a99e90(&var_4a8, 1)
int64_t* var_3a0

if (rbx_2 == 0 && var_3a0 != 0)
    int32_t rax_5 = *(var_3a0 + 0xc)
    *(var_3a0 + 0xc) -= 1
    
    if (rax_5 == 1 && var_3a0 != 0)
        sub_140a99090(var_3a0)
        j_sub_140a74f90(var_3a0)

int32_t var_398
int32_t* rax_6 = sub_140ab1810(&var_5b8, &var_398)

if (*rax_6 != 0)
    sub_140ac59f0(rax_6)

sub_140a99e20(rax_6, &data_14399eba0)
int64_t* rsi_1 = *(rax_6 + 0x108)
*(rax_6 + 0x108) = 0
int32_t rbx_5 = var_398
sub_140a99e90(&var_398, 1)
int64_t* var_290

if (rbx_5 == 0 && var_290 != 0)
    int32_t rax_7 = *(var_290 + 0xc)
    *(var_290 + 0xc) -= 1
    
    if (rax_7 == 1 && var_290 != 0)
        sub_140a99090(var_290)
        j_sub_140a74f90(var_290)

int32_t var_560 = rsi_1[1].d
int128_t var_548 = (*rsi_1).o
int32_t var_550 = r14[1].d
int128_t var_538 = (*r14).o
sub_140b606a0(arg1, &var_538, &var_548)
int128_t var_528 = var_5d8
int64_t var_5c8
int64_t var_518 = var_5c8
int32_t result = sub_140aadd30(arg2, &var_528)

if (rsi_1 != 0)
    result = *(rsi_1 + 0xc)
    *(rsi_1 + 0xc) -= 1
    
    if (result == 1)
        sub_140a99090(rsi_1)
        result = j_sub_140a74f90(rsi_1)

int32_t rdi = *(r14 + 0xc)
*(r14 + 0xc) -= 1

if (rdi == 1)
    sub_140a99090(r14)
    result = j_sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_608)
return result
