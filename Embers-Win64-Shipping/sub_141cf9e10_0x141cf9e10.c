// 函数: sub_141cf9e10
// 地址: 0x141cf9e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1

if (*(rax + 0x2c0) == 0 || *(arg1 + 0xc) == 0)
    return sub_141d0a5f0(rax, arg2, arg3, arg1[1].d)

int32_t rbx_1 = arg1[1].d
void var_28
int64_t* rax_1 = sub_141cfec40(&var_28, nullptr, 0xff)
void* rcx_1 = *rax_1
*(rcx_1 + 0x18) = arg3
*(rcx_1 + 0x10) = arg2
*(rcx_1 + 0x20) = rbx_1
void* rcx_2 = *rax_1
int32_t r8 = rax_1[2].d
int64_t* rdx = rax_1[1]
int64_t* rbx_2 = *(rcx_2 + 0x30)
int64_t* arg_20 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_20

int32_t result = sub_141d10970(rcx_2, rdx, r8, 1)

if (rbx_2 != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_20)

return result
