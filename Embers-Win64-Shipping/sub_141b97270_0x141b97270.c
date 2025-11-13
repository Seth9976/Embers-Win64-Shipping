// 函数: sub_141b97270
// 地址: 0x141b97270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg2

if (rbx == 0)
    return 

void* rax_1 = sub_141c04a00()
void* rdx = *(rbx + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t* rdi_1 = *arg1
int64_t rbx_1 = *(rbx + 0x18)
int64_t rsi_1 = sx.q(rdi_1[1].d)
int32_t rax_2 = (rsi_1 + 1).d
rdi_1[1].d = rax_2

if (rax_2 s> *(rdi_1 + 0xc))
    sub_1405a4d70(rdi_1)

*(*rdi_1 + (rsi_1 << 3)) = rbx_1
