// 函数: sub_140a581b0
// 地址: 0x140a581b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (TlsGetValue(*(arg1 + 0x40)) != 0 || arg2 == 0)
    int64_t* rcx_11 = *(arg1 + 8)
    return (*(*rcx_11 + 0x30))(rcx_11, arg2)

void* rbx = data_143db5340
int64_t rax_1 = TlsGetValue(*(rbx + 0x40))
TlsSetValue(*(rbx + 0x40), rax_1 + 1)
sub_140a58a00(arg1)
EnterCriticalSection(arg1 + 0x18)
int64_t* rcx_5 = *(arg1 + 8)
int64_t arg_8 = 0
int64_t r9 = *rcx_5
(*(r9 + 0x40))(rcx_5, arg2, &arg_8, r9)
int64_t* rcx_6 = *(arg1 + 8)
int64_t r8_1 = *rcx_6
(*(r8_1 + 0x30))(rcx_6, arg2, r8_1)
sub_140a5ad50(arg1, arg2, arg_8.d)

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

void* rbx_2 = data_143db5340
int64_t rax_3 = TlsGetValue(*(rbx_2 + 0x40))
return TlsSetValue(*(rbx_2 + 0x40), rax_3 - 1)
