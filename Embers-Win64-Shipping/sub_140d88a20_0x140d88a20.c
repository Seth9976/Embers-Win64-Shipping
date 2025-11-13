// 函数: sub_140d88a20
// 地址: 0x140d88a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xa4)

if ((result & 1) != 0)
    return result

void* rdx = *(arg1 + 8)
result |= 1
bool r8 = false
*(arg1 + 0xa4) = result

if (*(rdx + 0x1b) != 0)
    int32_t rdx_1 = *(rdx + 0x1c)
    r8 = rdx_1 == 1
    
    if ((result & 2) != 0 && rdx_1 == 2)
        r8 = true

enum SHOW_WINDOW_CMD rdx_3 = zx.d(r8) + 4

if ((result & 2) != 0)
    result &= 0xfd
    *(arg1 + 0xa4) = result
    
    if ((result & 4) != 0)
        return ShowWindow(*(arg1 + 0x28), (zx.d(r8) ^ 1) + 6) __tailcall
    
    if ((result & 8) != 0)
        rdx_3 = SW_SHOWMAXIMIZED

return ShowWindow(*(arg1 + 0x28), rdx_3) __tailcall
