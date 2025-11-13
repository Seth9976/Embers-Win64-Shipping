// 函数: sub_140bc3750
// 地址: 0x140bc3750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e1a820
char rax_1
int64_t r9
rax_1, r9 = (*(*rcx + 0x68))(rcx)

if (rax_1 != 0)
    sub_140af98a0("Unknown", 0x267, Cannot Cancel Async Loading while async loading is suspended.", 
        r9)
    sub_140afbb40()

int64_t* rcx_1 = data_143e1a820
int64_t result = (*(*rcx_1 + 0x38))(rcx_1)

if (data_143de5432 != 0)
    return result

return sub_140cb0ba0(0, 1) __tailcall
