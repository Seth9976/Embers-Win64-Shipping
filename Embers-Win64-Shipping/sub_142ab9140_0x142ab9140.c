// 函数: sub_142ab9140
// 地址: 0x142ab9140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x28)
int32_t r9 = *(arg1 + 0x24)
bool r8 = *(arg1 + 0x50)
int64_t* rcx = *(arg1 + 0x18)
int32_t rax_1 = *(arg1 + 0x54)
int32_t arg_8 = 0
sub_142ac08a0(rcx, 1, r8, r9, rax_1, rax, arg1 + 0x60)
void* rdi_1 = arg1 + 8

if (arg1 == 8)
    rdi_1 = nullptr

int32_t rax_2 = sub_142abc280(arg1 + 0x60, rdi_1, &arg_8)
sub_142ac08a0(*(arg1 + 0x18), 0, *(arg1 + 0x50), *(arg1 + 0x24), *(arg1 + 0x54), *(arg1 + 0x28), 
    arg1 + 0x60)
return zx.q(sub_142abc280(arg1 + 0x60, rdi_1, &arg_8) + rax_2)
