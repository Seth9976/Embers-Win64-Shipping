// 函数: sub_140b57580
// 地址: 0x140b57580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_838
int64_t rax_1 = __security_cookie ^ &var_838
void var_818

if (arg3 != 0)
    uint64_t i_1 = zx.q(arg3)
    void* rax_2 = &var_818
    uint64_t i
    
    do
        uint32_t rdx = zx.d(*(arg2 - &var_818 + rax_2))
        rax_2 += 2
        int32_t rcx
        rcx.w = sbb.w((rdx - 0x41).w, (rdx - 0x41).w, rdx - 0x41 u< 0x1a)
        rcx.w &= 0x20
        rcx.w += rdx.w
        *(rax_2 - 2) = rcx.w
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rax_3 = sub_140a6b260(&var_818, arg3 * 2)
int32_t rbx
rbx.w = arg3.w << 5
uint32_t rdx_3 = (rax_3 u>> 0x20).d
arg1[1] = rax_3.d
*arg1 = rdx_3 & 0xf
arg1[2] = rdx_3 & 0xe0000000
arg1[3].w = ((((rdx_3 u>> 4).w & 0x1f) | rbx.w) * 2) | 1
__security_check_cookie(rax_1 ^ &var_838)
return arg1
