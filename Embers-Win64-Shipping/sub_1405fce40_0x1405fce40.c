// 函数: sub_1405fce40
// 地址: 0x1405fce40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int128_t var_20 = zx.o(0)
void* rdi

if (sub_1405fcbb0(arg1 + 0x18, &var_20) == 0 || var_20.q == 0)
    rdi.b = 0
else
    sub_1405fcef0(arg1 + 0x18)
    *(arg1 + 8) -= 1
    rdi.b = 1

void* rcx_2 = var_20:8.q

if (rcx_2 != 0)
    int32_t rax_1 = *(rcx_2 + 8)
    *(rcx_2 + 8) -= 1
    
    if (rax_1 == 1)
        int64_t* rbx_1 = var_20:8.q
        int64_t rdx_1 = *rbx_1
        (*rdx_1)(rbx_1, rdx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_4 = var_20:8.q
            int64_t r8_1 = *rcx_4
            (*(r8_1 + 8))(rcx_4, zx.q(rsi_1), r8_1)

return zx.q(rdi.b)
