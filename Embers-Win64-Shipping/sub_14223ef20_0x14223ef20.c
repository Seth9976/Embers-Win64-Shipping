// 函数: sub_14223ef20
// 地址: 0x14223ef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = **arg1 + 0xc8
(*(*rcx_1 + 0x30))(rcx_1)
int64_t* rcx_2 = **arg1
(*(*rcx_2 + 0x30))(rcx_2)
int64_t* rcx_4 = **arg1 + 0x88
(*(*rcx_4 + 0x30))(rcx_4)
int64_t* rcx_5 = *(*arg1 + 8)
(*(*rcx_5 + 0x30))(rcx_5)
int64_t* rbx = *arg1
int64_t* rcx_6 = rbx
int64_t* rdx = rbx[2]

if (rdx != 0)
    (*(*rdx + 0x30))(rdx)
    rbx = *arg1
    rcx_6 = rbx

void*** rbx_1 = *rbx

if (rbx_1 != 0)
    sub_142289b70(&rbx_1[0x19])
    sub_142289c80(&rbx_1[0x11])
    sub_1422b5620(rbx_1)
    j_sub_140a74f90(rbx_1)
    rcx_6 = *arg1

int64_t* r8 = rcx_6[1]

if (r8 != 0)
    (**r8)(r8, 1)
    rcx_6 = *arg1

int64_t* r8_1 = rcx_6[2]

if (r8_1 != 0)
    (**r8_1)(r8_1, 1)
    rcx_6 = *arg1

return j_sub_140a74f90(rcx_6) __tailcall
