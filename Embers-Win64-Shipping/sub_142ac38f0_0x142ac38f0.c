// 函数: sub_142ac38f0
// 地址: 0x142ac38f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2 & 0xfffffff
void* const result
int32_t rcx

if ((arg2 & 0xf0000000) != 0x30000000)
    rcx = 0
    result = nullptr
else if (rax != 0)
    int32_t* rax_2 = *(arg1 + 8) + (zx.q(rax) << 2)
    rcx = *rax_2
    result = &rax_2[1]
else
    rcx = 0
    result = &data_143655c0c

if (arg3 != 0)
    *arg3 = rcx

return result
