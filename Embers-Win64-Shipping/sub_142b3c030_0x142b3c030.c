// 函数: sub_142b3c030
// 地址: 0x142b3c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = *(arg1 + 0x28)
int32_t arg_8 = 0
char** rax = sub_142a641c0(nullptr, rdx, &arg_8)
int32_t arg_10 = 0
void* rax_1 = sub_142a63c50(rax, "NumberElements/minimumGroupingDigits", &arg_10, &arg_8)
int16_t rdi

if (arg_8 s> 0 || arg_10 != 1)
    rdi = 1
else
    rdi = *rax_1 - 0x30

if (rax != 0)
    sub_142a5f860(rax)

return zx.q(rdi)
