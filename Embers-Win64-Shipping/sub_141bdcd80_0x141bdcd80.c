// 函数: sub_141bdcd80
// 地址: 0x141bdcd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298

if (rbx == 0)
    return 

void* rax_1 = sub_1424ad0c0()
void* rdx_1 = *(rbx + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

rax = *(rbx + 0x788)

if (rax == 0)
    return 

int64_t* rbx_1 = *(rax + 0xf0)

if (rbx_1 == 0)
    return 

int32_t rcx_2 = rbx_1[1].d

if (rcx_2 == 0)
    return 

int32_t rcx_3 = rcx_2 + 1
rbx_1[1].d = rcx_3
int64_t* rdx_2 = *(rax + 0xe8)

if (rdx_2 != 0)
    (*(*rdx_2 + 0x68))(rdx_2)
    rcx_3 = rbx_1[1].d

rax = zx.q(rcx_3 - 1)
rbx_1[1].d = rax.d

if (rax.d != 0)
    return 

(**rbx_1)(rbx_1)
int32_t temp0_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp0_1 == 1)
    jump(*(*rbx_1 + 8))
