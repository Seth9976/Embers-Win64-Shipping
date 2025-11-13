// 函数: sub_142c4bf50
// 地址: 0x142c4bf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SetLastError(NO_ERROR)
uint32_t uSize = GetSystemDirectoryW(nullptr, 0)
HLOCAL result = LocalAlloc(LMEM_ZEROINIT, zx.q(uSize) * 2)

if (result == 0)
    return result

uint32_t rax = GetSystemDirectoryW(result, uSize)

if (rax != 0 && uSize u>= rax)
    return result

LocalFree(result)
return nullptr
