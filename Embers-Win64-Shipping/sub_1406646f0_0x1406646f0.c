// 函数: sub_1406646f0
// 地址: 0x1406646f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
int128_t var_18 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int128_t* rax_3 = *(arg2 + 0x38)
int128_t* rdx_4 = &var_18
int64_t rcx_2 = arg_10

if (rax_3 != 0)
    rdx_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void* result = sub_140663480(rcx_2, rdx_4)
int64_t* rcx_3 = var_18:8.q
*arg3 = result

if (rcx_3 != 0)
    result = zx.q(*(rcx_3 + 0xc))
    *(rcx_3 + 0xc) -= 1
    
    if (result.d == 1 && rcx_3 != 0)
        return (*(*rcx_3 + 8))(rcx_3, 1)

return result
