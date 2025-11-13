// 函数: sub_140d76b40
// 地址: 0x140d76b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int64_t var_38 = *(rdx + 0x10)
void* rax_1 = *(rdx + 0x18)
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void var_28
sub_140d6efb0(&var_28, 0)
sub_140597060(&var_38)
uint32_t rdx_1 = zx.d(sub_140d70060(&var_28))
uint32_t** result = arg1[2]
**result = rdx_1
int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
