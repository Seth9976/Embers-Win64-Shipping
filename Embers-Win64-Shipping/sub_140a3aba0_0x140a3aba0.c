// 函数: sub_140a3aba0
// 地址: 0x140a3aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143db18d0

if (rbx == 0)
    sub_140a53c40()
    rbx = data_143db18d0

uint32_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    int64_t* rcx
    
    if ((arg3 & 0x20) != 0)
        rcx = *(rbx + 0xc0)
    
    if ((arg3 & 0x20) == 0 || rcx == 0)
        result = sub_140597df0(arg1, arg2)
    else
        result = (**rcx)(rcx, arg1, arg2)

if (not(test_bit(arg4, 0x10)))
    *(rbx + 0xcc) = 1

return result
