// 函数: sub_140a5a3c0
// 地址: 0x140a5a3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg3

if (TlsGetValue(*(arg1 + 0x40)) != 0)
    int64_t* rcx_1 = *(arg1 + 8)
    return (*(*rcx_1 + 0x20))(rcx_1, arg2, r15, zx.q(arg4))

void* rbx = data_143db5340
int64_t rax_3 = TlsGetValue(*(rbx + 0x40))
TlsSetValue(*(rbx + 0x40), rax_3 + 1)
sub_140a58a00(arg1)
int64_t arg_8 = 0
EnterCriticalSection(arg1 + 0x18)
int64_t* rcx_6 = *(arg1 + 8)
int64_t r9_1 = *rcx_6
(*(r9_1 + 0x40))(rcx_6, arg2, &arg_8, r9_1)
int64_t* rcx_7 = *(arg1 + 8)
int64_t result = (*(*rcx_7 + 0x20))(rcx_7, arg2, r15, zx.q(arg4))
int64_t* rcx_8 = *(arg1 + 8)
int64_t var_28 = r15
int64_t r9_3 = *rcx_8

if ((*(r9_3 + 0x40))(rcx_8, result, &var_28, r9_3, var_28) != 0)
    r15 = var_28

if (arg2 == 0)
    sub_140a5aec0(arg1, result, r15.d)
else if (arg2 != result)
    sub_140a5ad50(arg1, arg2, arg_8.d)
    
    if (result != 0)
        sub_140a5aec0(arg1, result, r15.d)

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

void* rbx_2 = data_143db5340
int64_t rax_6 = TlsGetValue(*(rbx_2 + 0x40))
TlsSetValue(*(rbx_2 + 0x40), rax_6 - 1)
return result
