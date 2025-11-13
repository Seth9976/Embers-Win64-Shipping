// 函数: sub_1418fb870
// 地址: 0x1418fb870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void*** rax_2 = sub_1418c0d30(*(arg2 + 0x240))
int64_t var_78
__builtin_memset(&var_78, 0, 0x14)
int64_t var_60 = 0
int32_t var_58 = 0
int32_t rax_3
int64_t r8_1
rax_3, r8_1 = sub_1418d97d0(&var_78, *(arg1 + 0x10), *(arg1 + 0x70), *(arg1 + 0x68), 1)
int64_t rbx = sx.q(rax_3) * 9
int32_t rcx_3 = 1

if (*(arg1 + 0x58) == 3)
    rcx_3 = 6

int64_t var_70
*(var_70 + (rbx << 3) + 0x40) = rcx_3
*(var_70 + (rbx << 3) + 0x10) = 0
*(var_70 + (rbx << 3) + 0x18) = 0
var_78.d |= 1
*(var_70 + (rbx << 3) + 0x14) = 0x1000
*(var_70 + (rbx << 3) + 0x1c) = 7
var_78:4.d |= 0x1000
int32_t var_68

if (var_68 s> 0 || var_58 s> 0)
    r8_1.b = 1
    sub_1418c1fc0(&var_78, rax_2)

bool cond:1 = *(arg1 + 0x70) != 1
int64_t rdx_2 = *(arg1 + 0x10)
int32_t var_50 = *(arg3 + 4)
int64_t rcx_7 = var_70 + 0x30 + (rbx << 3)
int64_t rcx_8 = rax_2[8]
int32_t var_88_1 = 1

if (cond:1)
    int32_t var_4c_1 = *(arg3 + 8)
    data_143efba30(rcx_8, rdx_2, 7, &var_50, var_88_1, rcx_7)
    var_78 = 0
    *(var_70 + (rbx << 3) + 0x10) = 0x1000
    *(var_70 + (rbx << 3) + 0x18) = 7
    var_78.d |= 0x1000
    *(var_70 + (rbx << 3) + 0x14) = 0x20
    *(var_70 + (rbx << 3) + 0x1c) = 4
    var_78:4.d |= 0x80
else
    int32_t zmm1_1 = *(arg3 + 0xc)
    int32_t var_4c = *(arg3 + 8)
    int32_t var_44_1 = *(arg3 + 0x10)
    int32_t var_48_1 = zmm1_1
    data_143efba28(rcx_8, zmm1_1, 7, &var_50, var_88_1, rcx_7)
    var_78 = 0
    *(var_70 + (rbx << 3) + 0x10) = 0x1000
    *(var_70 + (rbx << 3) + 0x18) = 7
    var_78.d |= 0x1000
    int32_t rax_7 =
        sub_1418bfb90((zx.d(arg4) ^ 1) + 5, var_70 + 0x14 + (rbx << 3), var_70 + 0x1c + (rbx << 3))
    var_78:4.d |= rax_7

if (var_68 s> 0 || var_58 s> 0)
    int32_t* r8_3
    r8_3.b = 1
    sub_1418c1fc0(&var_78, rax_2)

int32_t rbx_1 = *(var_70 + (rbx << 3) + 0x1c)
int32_t* result = sub_1418e1230(arg2 + 0x248, *(arg1 + 0x10), rbx_1)
*result = rbx_1

if (var_60 != 0)
    result = sub_140a74f90(var_60)

if (var_70 != 0)
    result = sub_140a74f90(var_70)

__security_check_cookie(rax_1 ^ &var_a8)
return result
