// 函数: sub_140bc3640
// 地址: 0x140bc3640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x18)

if (((rdx u>> 0x10).b & 1) == 0 && *(arg1 + 8) == 0xffffffff && ((rdx u>> 3).b & 1) == 0)
    rdx.b = not.b(rdx.b)
    uint8_t rax_1
    
    if ((rdx.b & 1) != 0)
        rax_1 = Concurrency::details::are_vista_sync_apis_available()
    
    if ((rdx.b & 1) == 0 || rax_1 == 0)
        return 0

return 1
