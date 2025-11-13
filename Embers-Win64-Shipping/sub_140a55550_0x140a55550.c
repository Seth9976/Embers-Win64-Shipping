// 函数: sub_140a55550
// 地址: 0x140a55550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int64_t rax = *rcx
enum WIN32_ERROR result

if (arg3 == 0)
    if ((*(rax + 0x80))(rcx).b == 0)
        int64_t* rcx_2 = *(arg1 + 8)
        (*(*rcx_2 + 0x98))(rcx_2, arg2, 0)
        int64_t* rcx_3 = *(arg1 + 8)
        result = (*(*rcx_3 + 0x80))(rcx_3, arg2)
        goto label_140a555b4
else
    (*(rax + 0x100))(rcx, arg4, arg1)
    int64_t* rcx_1 = *(arg1 + 8)
    result = (*(*rcx_1 + 0xe8))(rcx_1, arg2)
label_140a555b4:
    
    if (result.b == 0 && *(arg1 + 0x10) == 0)
        *(arg1 + 0x10) = GetLastError()

result.b = 1
return result
