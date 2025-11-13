// 函数: png_set_tRNS
// 地址: 0x1403cdbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rsi_1 = arg2

if (arg2 == 0)
    return 

void* rbx_1 = arg1
uint32_t rax

if (arg3 != 0)
    png_free_data(rbx_1, rsi_1, 0x2000, 0)
    int64_t rax_1
    rax_1, arg1, arg2 = png_malloc(rbx_1, 0x100)
    *(rsi_1 + 0x68) = rax_1
    *(rbx_1 + 0x2e8) = rax_1
    
    if (arg4 - 1 u<= 0xff)
        rax, arg1, arg2 = memcpy(*(rsi_1 + 0x68), arg3, arg4)

if (arg5 == 0)
    *(rsi_1 + 0x22) = arg4.w
    
    if (arg4 != 0)
        *(rsi_1 + 8) |= 0x10
        *(rsi_1 + 0xed) |= 0x20
    
    return 

arg1.b = *(rsi_1 + 0x24)
arg2.b = *(rsi_1 + 0x25)
int32_t rax_2 = 1 << arg1.b

if (arg2.b == 2)
    if (rax_2 s< zx.d(*(arg5 + 2)) || rax_2 s< zx.d(*(arg5 + 4)) || rax_2 s< zx.d(*(arg5 + 6)))
        png_warning(rbx_1, "tRNS chunk has out-of-range samples for bit_depth")
else if (arg2.b == 0 && rax_2 s< zx.d(arg5[1].w))
    png_warning(rbx_1, "tRNS chunk has out-of-range samples for bit_depth")

*(rsi_1 + 0x78) = arg5[1].w
*(rsi_1 + 0x70) = *arg5
rax = 1

if (arg4 != 0)
    rax = arg4

*(rsi_1 + 0x22) = rax.w
*(rsi_1 + 8) |= 0x10
*(rsi_1 + 0xed) |= 0x20
