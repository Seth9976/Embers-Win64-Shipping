// 函数: sub_140d354f0
// 地址: 0x140d354f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
char* rax = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0)
char* rax_3 = *(entry_rdx + 0x20)
int64_t* rsi = *(entry_rdx + 0x30)
int64_t rdi = *(entry_rdx + 0x38)
int64_t var_28 = 0
int64_t var_20 = 0
uint32_t rcx_2 = zx.d(*rax_3)
*(entry_rdx + 0x20) = &rax_3[1]
int64_t result = (&data_143e1cd60)[zx.q(rcx_2)](*(entry_rdx + 0x18), entry_rdx, &var_28)

if (rsi != 0 && rdi != 0)
    int64_t var_18 = var_28
    int32_t var_10_1 = var_20.d
    int32_t var_c_1 = var_20:4.d
    int64_t var_20_1 = 0
    var_28 = 0
    result = (*(*rsi + 0x138))(rsi, rdi, &var_18)

int64_t rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
