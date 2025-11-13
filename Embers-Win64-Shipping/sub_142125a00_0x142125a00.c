// 函数: sub_142125a00
// 地址: 0x142125a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t rcx
int64_t rbx

if (rax == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax = data_143de5480
    rcx.b = cond:0_1

if (*(rcx + arg1 + 0x13a) != 0)
    return sub_14210f630(0) __tailcall

if (rax != 0)
    GetCurrentThreadId()

int64_t rcx_2

if (rax == 0 || data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

*(rcx_2 + arg1 + 0x13a) = 1
int64_t* rcx_3 = *(arg1 + 0xd0)
int64_t result

if (rcx_3 == 0)
    result = sub_14210f630(rcx_3.d)
else
    result = (*(*rcx_3 + 0x268))(rcx_3)

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

*(rbx + arg1 + 0x13a) = 0
return result
