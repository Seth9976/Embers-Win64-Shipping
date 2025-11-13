// 函数: sub_1420daec0
// 地址: 0x1420daec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1408d9160(arg1, arg2, arg3)
int64_t* r9 = rax[1]
int16_t* rax_1 = *r9

if (&rax_1[1] u<= r9[1])
    arg2[3].w = *rax_1
    int64_t* rcx_1 = rax[1]
    *rcx_1 += 2
else if ((*(rax + 0x29) & 0x20) != 0)
    sub_140b54000(rax, &arg2[3], arg3)
else
    (*(*rax + 0x150))(rax, &arg2[3], 2)

int64_t* rcx_3 = rax[1]
int16_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    *(arg2 + 0xe) = *r8_1
    int64_t* rax_5 = rax[1]
    *rax_5 += 2
else if ((*(rax + 0x29) & 0x20) != 0)
    sub_140b54000(rax, arg2 + 0xe, arg3)
else
    (*(*rax + 0x150))(rax, arg2 + 0xe, 2)

return arg1
