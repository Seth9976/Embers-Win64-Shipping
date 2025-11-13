// 函数: sub_140d342e0
// 地址: 0x140d342e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
char* rax = *(entry_rdx + 0x20)
int32_t arg_10 = 0
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, &arg_10, &data_143e1cd60)
int64_t result = *(entry_rdx + 0x10)
*(entry_rdx + 0x20) = sx.q(arg_10) + *(result + 0x60)
return result
