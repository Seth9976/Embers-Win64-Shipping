// 函数: sub_140d35070
// 地址: 0x140d35070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
int32_t* rax = *(entry_rdx + 0x20)
int64_t rdi = sx.q(*rax)
*(entry_rdx + 0x20) = &rax[1]
char arg_10 = 0
uint32_t rcx = zx.d(rax[1].b)
*(entry_rdx + 0x20) = rax + 5
int512_t entry_zmm1
int64_t result =
    (&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, &arg_10, &data_143e1cd60)

if (arg_10 == 0)
    result = *(entry_rdx + 0x10)
    *(entry_rdx + 0x20) = rdi + *(result + 0x60)

return result
