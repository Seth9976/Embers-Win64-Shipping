// 函数: sub_140e7af60
// 地址: 0x140e7af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *(arg2 + 8)
char rdi = *(arg2 + 0xa)
int64_t var_28 = *(arg2 + 0x18)
int64_t var_20 = *(arg2 + 0x20)
void* rax_2 = *(arg2 + 0x28)
void* rbx = arg1
void* var_18 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1.b = (r8 & 0xc0) != 0
rax_2.b = (r8 & 3) != 0
int16_t r9
r9.b = (r8 & 0x30) != 0
r8.b = (r8 & 0xc) != 0
return sub_140e5afe0(rbx, &var_28, r8.b, r9.b, arg3, rax_2.b, arg1.b, rdi)
