// 函数: sub_14185ebe0
// 地址: 0x14185ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax != 0)
    rcx = rax

int64_t var_28
int64_t* rax_3 = (*arg2)(&var_28, (*(*rcx + 8))(rcx))
int64_t rdi = *rax_3
*rax_3 = 0
int32_t rbp = rax_3[1].d
int32_t r14 = *(rax_3 + 0xc)
rax_3[1] = 0
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    arg5 = sub_140a74f90(rcx_2)

CRITICAL_SECTION* rsi_1 = *arg1
void var_18

if (rsi_1 + 0x80 != &var_18)
    int64_t rcx_3 = *(rsi_1 + 0x80)
    
    if (rcx_3 != 0)
        arg5 = sub_140a74f90(rcx_3)
    
    *(rsi_1 + 0x80) = rdi
    *(rsi_1 + 0x88) = rbp
    *(rsi_1 + 0x8c) = r14
else if (rdi != 0)
    arg5 = sub_140a74f90(rdi)

return sub_1405fc0f0(rsi_1, arg5, arg3, arg4)
