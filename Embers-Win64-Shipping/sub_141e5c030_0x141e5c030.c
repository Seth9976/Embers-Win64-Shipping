// 函数: sub_141e5c030
// 地址: 0x141e5c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int64_t rbp = *(arg1 + 0x10)
int64_t var_28 = 0
int32_t var_20 = 0

if (arg1 + 0x38 != &var_28 && *(arg1 + 0x40) != 0)
    int64_t* rcx_2 = *(arg1 + 0x38)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2, &var_28)

int64_t var_18 = *(arg1 + 0x28)
void* rax_3 = *(arg1 + 0x30)
void* var_10 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t rdi = sx.q(*(arg1 + 0x20))
int64_t rbx_1 = *(arg1 + 0x18)
uint64_t var_38 = 0
int32_t var_30 = rdi.d

if (rdi.d != 0)
    sub_1405a4be0(&var_38, rdi.d, 0)
    memcpy(var_38, rbx_1, (rdi << 4).d)
else
    int32_t var_2c_1 = 0

return rbp(rax, &var_38, &var_18, &var_28)
