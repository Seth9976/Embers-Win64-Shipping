// 函数: sub_14211aee0
// 地址: 0x14211aee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x140))()
int64_t* r8 = rax_1[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*rax_1 + 0x150))(rax_1, arg2 + 8, 1)
else
    *(arg2 + 8) = *rcx
    int64_t* rax_4 = rax_1[1]
    *rax_4 += 1

int64_t* rcx_2 = rax_1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg2 + 0xc) = *r8_1
    int64_t* rax_8 = rax_1[1]
    *rax_8 += 4
else if ((*(rax_1 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_1, arg2 + 0xc, arg3)
else
    (*(*rax_1 + 0x150))(rax_1, arg2 + 0xc, 4)

return arg1
