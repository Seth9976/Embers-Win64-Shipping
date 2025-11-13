// 函数: sub_140a220d0
// 地址: 0x140a220d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx
int64_t* arg_10 = rdx
int64_t rdi = arg1[1]
int64_t rbx = *arg1
void var_28
int64_t* rax = sub_140a22b60(&var_28, nullptr, 0xff)
void* rcx_1 = *rax
*(rcx_1 + 0x10) = rbx
*(rcx_1 + 0x18) = rdi
*(rcx_1 + 0x20) = 0
void* rcx_2 = *rax
int64_t* rbx_1 = *(rcx_2 + 0x30)

if (rbx_1 != 0)
    rbx_1[9].d += 1

uint64_t result = sub_140a322a0(rcx_2, rax[1], rax[2].d, 1)

if (rbx_1 == 0)
    return result

return sub_140a2f7d0(rbx_1)
