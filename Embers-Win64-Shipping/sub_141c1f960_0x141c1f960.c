// 函数: sub_141c1f960
// 地址: 0x141c1f960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
void* entry_rdx

if (*(entry_rdx + 0x20) == 0)
    int64_t* r8_1 = *(entry_rdx + 0x80)
    *(entry_rdx + 0x80) = r8_1[4]
    sub_140d30490(entry_rdx, &var_18, r8_1)
else
    sub_140d30460(entry_rdx, *(entry_rdx + 0x18), &var_18)

int64_t* arg_20 = nullptr

if (*(entry_rdx + 0x20) == 0)
    int64_t* r8_3 = *(entry_rdx + 0x80)
    *(entry_rdx + 0x80) = r8_3[4]
    sub_140d30490(entry_rdx, &arg_20, r8_3)
else
    sub_140d30460(entry_rdx, *(entry_rdx + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(entry_rdx + 0x20) == 0)
    int64_t* r8_6 = *(entry_rdx + 0x80)
    *(entry_rdx + 0x80) = r8_6[4]
    sub_140d30490(entry_rdx, &arg_10, r8_6)
else
    sub_140d30460(entry_rdx, *(entry_rdx + 0x18), &arg_10)

int64_t rax_4 = *(entry_rdx + 0x20)
int64_t* rdx_6 = arg_20
int64_t* rcx_3 = var_18
int64_t rdi
rdi.b = rax_4 != 0
bool cond:1 = arg_10 != 0
*(entry_rdx + 0x20) = rdi + rax_4
int128_t entry_zmm1
return sub_141be2e40(rcx_3, rdx_6, cond:1, entry_zmm1)
