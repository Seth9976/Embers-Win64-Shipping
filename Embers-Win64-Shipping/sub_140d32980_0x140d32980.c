// 函数: sub_140d32980
// 地址: 0x140d32980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
char* rax = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0)
int64_t* rsi = *(entry_rdx + 0x30)
int64_t rdi = *(entry_rdx + 0x38)
int128_t var_28
sub_140d3a3a0(&var_28, nullptr)
char* rax_3 = *(entry_rdx + 0x20)
int64_t var_20 = 0
uint32_t rcx_3 = zx.d(*rax_3)
*(entry_rdx + 0x20) = &rax_3[1]
int64_t result = (&data_143e1cd60)[zx.q(rcx_3)](*(entry_rdx + 0x18), entry_rdx, &var_28)

if (rsi == 0 || rdi == 0)
    return result

int64_t rax_6 = *rsi
int128_t var_18 = var_28
return (*(rax_6 + 0x140))(rsi, &var_18, 0, rdi)
