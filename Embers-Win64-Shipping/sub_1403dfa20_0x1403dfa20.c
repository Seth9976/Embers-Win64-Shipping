// 函数: sub_1403dfa20
// 地址: 0x1403dfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2 = sub_1403f73c0(arg1, &data_1436fc8a0, 8)
int64_t i_3 = 2
void var_34
void* rbx = &var_34
int64_t i_2 = 2
uint64_t rdx_2 = zx.q(rax_2 s/ 5)
int32_t var_30 = rdx_2.d
int32_t var_24 = rax_2 - (rdx_2 * 5).d
int64_t i

do
    *(rbx - 4) = sub_1403f73c0(arg1, &data_1436fc844, 8)
    rbx += 0xc
    *(rbx - 0xc) = sub_1403f73c0(arg1, &data_1436fc84c, 8)
    i = i_2
    i_2 -= 1
while (i != 1)
void* r9 = arg2
void var_38
void* r8_2 = &var_38
int64_t i_1

do
    uint64_t rax_6 = zx.q(*(r8_2 + 8))
    r9 += 4
    r8_2 += 0xc
    *(r8_2 - 0xc) += (rax_6 * 3).d
    int64_t rax_7 = sx.q(*(r8_2 - 0xc))
    int32_t rdx_3 = sx.d(*(&data_1436fc880 + (rax_7 << 1)))
    int32_t rcx_7 = sx.d(*((rax_7 << 1) + 0x1436fc882)) - rdx_3
    *(r9 - 4) = sx.d(((zx.d(rcx_7.w) * 0x199a) s>> 0x10).w + (rcx_7 s>> 0x10).w * 0x199a)
        * sx.d(*(r8_2 - 8) * 2 + 1) + rdx_3
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int32_t result = arg2[1]
*arg2 -= result
__security_check_cookie(rax_1 ^ &var_58)
return result
