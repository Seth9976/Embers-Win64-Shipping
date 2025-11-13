// 函数: sub_140d34280
// 地址: 0x140d34280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
char* rax = *(entry_rdx + 0x20)
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
int64_t result = (&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0, &data_143e1cd60)
int64_t* rcx_2 = *(entry_rdx + 0x30)

if (rcx_2 != 0 && *(entry_rdx + 0x38) != 0)
    jump(*(*rcx_2 + 0x150))

return result
