// 函数: sub_1429d5a70
// 地址: 0x1429d5a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2.b
*(arg1 + 0x24) = not.b(arg2.b) & 1
void* rax_1 = arg1[1]
*(arg1 + 0x25) = (arg2 u>> 1).b & 1
int64_t rdi
rdi.b = ((*(rax_1 + 0x1d0) - *(rax_1 + 0x1c8)) s>> 3).d s> 0
sub_1429d5110(arg1)
sub_1429d3f50(arg1)
sub_1429d41d0(arg1)
sub_1429d56e0(arg1)
int32_t arg_8
int32_t rax_2 = arg_8
int32_t rax_4

if ((arg_10 & 4) == 0)
    rax_4 = rax_2 | 0x3f
else
    rax_4 = (rax_2 & 0xffffffc1) | 1

arg_8 = rax_4

if (rdi.b != 0)
    arg_8 = rax_4 | 0x10

sub_1429d6190(arg1, &arg_8)
int64_t result = sub_1429d6160(arg1)

if (rdi.b == 0)
    return result

return sub_1429d5f80(arg1)
