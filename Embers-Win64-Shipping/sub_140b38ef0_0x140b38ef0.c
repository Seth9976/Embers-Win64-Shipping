// 函数: sub_140b38ef0
// 地址: 0x140b38ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t i = 0
void* rcx = arg1 + 0x12
void var_18

do
    char rax_2 = *(rcx - 2)
    rcx += 4
    *(&var_18 + i) = rax_2
    void var_17
    *(&var_17 + i) = *(rcx - 5)
    void var_16
    *(&var_16 + i) = *(rcx - 4)
    char var_15[0x5]
    var_15[i] = *(rcx - 3)
    i += 4
while (i s< 8)

int32_t rdx_2 = arg1[4] u>> 3 & 0x3f
int32_t rax_6 = 0x38 - rdx_2

if (rdx_2 u>= 0x38)
    rax_6 = 0x78 - rdx_2

sub_140b4aca0(arg1, &data_1439a90b0, sx.q(rax_6))
sub_140b4aca0(arg1, &var_18, 8)
void* r8_1 = arg2 + 1
int64_t i_2 = 4
void* rax_7 = arg1 + 2
int64_t i_1

do
    char rcx_4 = *(rax_7 - 2)
    rax_7 += 4
    *(r8_1 - 1) = rcx_4
    r8_1 += 4
    *(r8_1 - 4) = *(rax_7 - 5)
    *(r8_1 - 3) = *(rax_7 - 4)
    *(r8_1 - 2) = *(rax_7 - 3)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int64_t result = memset(arg1, 0, zx.q((i_2 + 0x58).d))
__security_check_cookie(rax_1 ^ &var_38)
return result
