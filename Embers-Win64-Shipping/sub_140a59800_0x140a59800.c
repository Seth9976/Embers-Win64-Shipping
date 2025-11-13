// 函数: sub_140a59800
// 地址: 0x140a59800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (TlsGetValue(*(arg1 + 0x40)) != 0)
    int64_t* rcx_1 = *(arg1 + 8)
    return (*(*rcx_1 + 0x10))(rcx_1, arg2, zx.q(arg3))

void* rbx = data_143db5340
int64_t rax_3 = TlsGetValue(*(rbx + 0x40))
TlsSetValue(*(rbx + 0x40), rax_3 + 1)
sub_140a58a00(arg1)
EnterCriticalSection(arg1 + 0x18)
int64_t* rcx_6 = *(arg1 + 8)
int64_t r9 = *rcx_6
int64_t result = (*(r9 + 0x10))(rcx_6, arg2, zx.q(arg3), r9)
int64_t* rcx_7 = *(arg1 + 8)
int64_t arg_8 = arg2
int64_t r9_1 = *rcx_7
char rax_5 = (*(r9_1 + 0x40))(rcx_7, result, &arg_8, r9_1)
int32_t r8_3 = arg_8.d

if (rax_5 == 0)
    r8_3 = arg2.d

sub_140a5aec0(arg1, result, r8_3)

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

void* rbx_2 = data_143db5340
int64_t rax_6 = TlsGetValue(*(rbx_2 + 0x40))
TlsSetValue(*(rbx_2 + 0x40), rax_6 - 1)
return result
