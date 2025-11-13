// 函数: sub_142a42a70
// 地址: 0x142a42a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp

if (arg1 != 0 && arg2 != 0 &&
        (data_1440153a8 == 0 || arg1 u< data_1440153a8 || arg1 u>= data_1440153b0 + data_1440153a8))
    rbp.b = VirtualFree(arg1, 0, MEM_RELEASE) == 0
    
    if (arg3 != 0)
        sub_142a43f80(arg4 + 0x60, arg2)
    
    sub_142a43f80(arg4 + 0x40, arg2)

int64_t result

if (arg1 == 0 || arg2 == 0 || (data_1440153a8 != 0 && arg1 u>= data_1440153a8
        && arg1 u< data_1440153b0 + data_1440153a8) || rbp.b == 0)
    result.b = 1
else
    sub_142a43740("munmap failed: %s, addr 0x%8li, size %lu\n", strerror(zx.q(*_errno())))
    result.b = 0

return result
