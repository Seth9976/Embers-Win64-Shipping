// 函数: sub_1427a6700
// 地址: 0x1427a6700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68

if (sub_140d3e110(arg1 + 8) == 0)
    *arg2 = 0
else
    int64_t* rax_3 = sub_140d3c6e0(arg1 + 8)
    int64_t rdx = *rax_3
    (*(rdx + 0x280))(rax_3, rdx)
    int64_t* rax_4 = sub_140d3c6e0(arg1 + 8)
    void* rbx_1 = *(arg1 + 0x10)
    int64_t r8_1 = *rax_4
    void var_48
    int128_t* rax_5 = (*(r8_1 + 0x268))(rax_4, &var_48, r8_1)
    *(rbx_1 + 0x40) = *rax_5
    *(rbx_1 + 0x50) = rax_5[1]
    *(rbx_1 + 0x60) = rax_5[2]
    *arg2 = *(arg1 + 0x10)
    *(arg1 + 0x10) = 0

__security_check_cookie(rax_1 ^ &var_68)
return arg2
