// 函数: sub_142c8e850
// 地址: 0x142c8e850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143ccb898((arg2 + arg4) * 2)

if (rax == 0)
    return zx.q((rax + 0x1b).d)

int32_t rdi_1 = 0
void* rbx_1 = nullptr

if (arg2 != 0)
    do
        *(rax + (rbx_1 << 1)) = sub_142c70430(zx.d(*(rbx_1 + arg1)))
        *(rax + (rbx_1 << 1) + 1) = 0
        rbx_1 += 1
    while (rbx_1 u< arg2)

int64_t r8 = rax + (arg2 << 1)
char* rdx = nullptr

if (arg4 != 0)
    do
        *(r8 + (rdx << 1)) = rdx[arg3]
        *(r8 + (rdx << 1) + 1) = 0
        rdx = &rdx[1]
    while (rdx u< arg4)

void** rax_5 = sub_142c91ea0(&data_1436bb7c8, arg5, 0x10)

if (rax_5 != 0)
    sub_142c8ff50(rax_5)
    sub_142c91e30(rax_5, arg6)
else
    rdi_1 = (rax_5 + 0x1b).d

data_143ccb8a0(rax)
return zx.q(rdi_1)
