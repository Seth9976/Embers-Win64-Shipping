// 函数: sub_140cce300
// 地址: 0x140cce300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg2 + 8)
int64_t* rdx = rcx[1]
int32_t* r8 = *rdx

if (&r8[1] u<= rdx[1])
    *arg1 = *r8
    int64_t* rax_3 = rcx[1]
    *rax_3 += 4
else if ((*(rcx + 0x29) & 0x20) != 0)
    sub_140b54070(rcx, arg1, arg4)
else
    (*(*rcx + 0x150))(arg3, arg1, 4)

int64_t* r9_1 = *(*arg2 + 8)
int64_t* rcx_1 = r9_1[1]
int32_t* rdx_2 = *rcx_1

if (&rdx_2[1] u<= rcx_1[1])
    arg1[1] = *rdx_2
    int64_t* result = r9_1[1]
    *result += 4
    return result

if ((*(r9_1 + 0x29) & 0x20) != 0)
    return sub_140b54070(r9_1, &arg1[1], arg4) __tailcall

jump(*(*r9_1 + 0x150))
