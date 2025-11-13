// 函数: sub_141fa67e0
// 地址: 0x141fa67e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t rax_1 = (*(*rcx + 0x20))(rcx)
int64_t* rcx_1 = *arg1
int64_t arg_8 = rax_1 - arg1[1] - 8
int64_t r8_3 = *rcx_1
(*(r8_3 + 0x178))(rcx_1, arg2, r8_3)
int64_t* r9 = *arg1
int64_t* rcx_2 = r9[1]
int64_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int64_t* rdx_2 = &arg_8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b540d0(r9, rdx_2, arg2)
    else
        (*(*r9 + 0x150))(r9, rdx_2, 8)
else
    arg_8 = *rdx_1
    int64_t* rax_4 = r9[1]
    *rax_4 += 8

int64_t* rcx_4 = *arg1
return (*(*rcx_4 + 0x178))(rcx_4, rax_1)
