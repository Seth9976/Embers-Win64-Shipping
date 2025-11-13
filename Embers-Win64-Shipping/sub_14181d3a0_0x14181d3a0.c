// 函数: sub_14181d3a0
// 地址: 0x14181d3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax != 0)
    rcx = rax

int64_t var_68
int64_t* rax_3 = (*arg2)(&var_68, (*(*rcx + 8))(rcx))
int64_t rsi = *rax_3
*rax_3 = 0
int32_t r14 = rax_3[1].d
int32_t r15 = *(rax_3 + 0xc)
rax_3[1] = 0
int128_t zmm0 = *(rax_3 + 0x14)
int64_t rcx_2 = var_68
char rbx_1 = rax_3[2].b

if (rcx_2 != 0)
    arg5 = sub_140a74f90(rcx_2)

CRITICAL_SECTION* rbp_1 = *arg1
void var_40

if (rbp_1 + 0x80 != &var_40)
    int64_t rcx_3 = *(rbp_1 + 0x80)
    
    if (rcx_3 != 0)
        arg5 = sub_140a74f90(rcx_3)
    
    *(rbp_1 + 0x80) = rsi
    rsi = 0
    *(rbp_1 + 0x88) = r14
    *(rbp_1 + 0x8c) = r15

*(rbp_1 + 0x90) = rbx_1
*(rbp_1 + 0x94) = zmm0

if (rsi != 0)
    arg5 = sub_140a74f90(rsi)

return sub_1405fc0f0(rbp_1, arg5, arg3, arg4)
