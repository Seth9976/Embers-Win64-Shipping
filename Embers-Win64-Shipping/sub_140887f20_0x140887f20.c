// 函数: sub_140887f20
// 地址: 0x140887f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
void* var_28
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rbp]), &var_28, &data_143ce6c80, 0)
void* rsi = var_28
void* r9 = nullptr

if (rsi != 0)
    int64_t rdx_1 = sx.q(*(rsi + 0x10c))
    void* var_20
    int64_t* rbx_1 = *(var_20 + 0x10)
    int64_t rdi_1 = rdx_1 << 3
    int64_t rax_2 = rbx_1[3]
    
    if (*(rdi_1 + rax_2) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_2 = rbx_1[3]
    
    r9 = *(rdi_1 + rax_2)

int32_t var_38 = arg7
return sub_140885ec0(rsi, arg1, rbp.d, r9, arg3, arg4, arg5, arg6)
