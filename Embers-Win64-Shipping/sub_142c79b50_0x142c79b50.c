// 函数: sub_142c79b50
// 地址: 0x142c79b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
void* rax = *(rcx + 0x250)
int64_t r8 = *(rax + 0x18)

if (r8 == 0)
    int512_t entry_zmm2
    sub_142c64760(rcx, "Cannot FETCH without a UID.", r8, entry_zmm2)
    return 3

int64_t rcx_1 = *(rax + 0x28)
*(rax + 0x20)
int32_t result

if (rcx_1 == 0)
    result = sub_142c79fe0(arg1)
else
    int64_t var_18_1 = rcx_1
    result = sub_142c79fe0(arg1)

if (result == 0)
    arg1[0xe1].d = 9

return result
