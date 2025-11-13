// 函数: sub_140d35440
// 地址: 0x140d35440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
char* rax = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0)
int32_t* rdi = *(entry_rdx + 0x38)
void var_18
sub_140d3a3a0(&var_18, nullptr)
char* rax_3 = *(entry_rdx + 0x20)
int64_t var_10 = 0
uint32_t rcx_3 = zx.d(*rax_3)
*(entry_rdx + 0x20) = &rax_3[1]
int64_t result = (&data_143e1cd60)[zx.q(rcx_3)](*(entry_rdx + 0x18), entry_rdx, &var_18)

if (rdi != 0)
    result = sub_140d3a3a0(rdi, sub_140d3c6e0(&var_18))
    *(rdi + 8) = var_10

return result
