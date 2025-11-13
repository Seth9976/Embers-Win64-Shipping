// 函数: sub_140b57490
// 地址: 0x140b57490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
int32_t var_418

if (arg3 != 0)
    uint64_t i_1 = zx.q(arg3)
    int32_t* r9_1 = &var_418
    uint64_t i
    
    do
        int32_t rcx = sx.d(*(arg2 - &var_418 + r9_1))
        r9_1 += 1
        int32_t rax_2
        rax_2.b = sbb.b((rcx - 0x41).b, (rcx - 0x41).b, rcx - 0x41 u< 0x1a)
        rax_2.b &= 0x20
        rax_2.b += rcx.b
        *(r9_1 - 1) = rax_2.b
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rax_3 = sub_140a6b260(&var_418, arg3)
int32_t r8 = 0
uint32_t rdx_2 = (rax_3 u>> 0x20).d

if (arg3 == 4)
    r8.b = (var_418 & 0xdfdfdfdf) == 0x454e4f4e

arg1[1] = rax_3.d
int32_t rbx
rbx.w = arg3.w << 5
*arg1 = rdx_2 & 0xf
arg1[2] = (rdx_2 & 0xe0000000) | r8 << 0x1d
arg1[3].w = (((rdx_2 u>> 4).w & 0x1f) | rbx.w) * 2
__security_check_cookie(rax_1 ^ &var_438)
return arg1
