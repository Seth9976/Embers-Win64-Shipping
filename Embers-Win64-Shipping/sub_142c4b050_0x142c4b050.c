// 函数: sub_142c4b050
// 地址: 0x142c4b050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int64_t rbx = -1

do
    rbx += 1
while (*(arg1 + (rbx << 1)) != 0)

HLOCAL hMem = LocalAlloc(LMEM_ZEROINIT, (rbx + 1) * 2)

if (hMem == 0)
    return hMem

if (sub_142c4b4a0(hMem, rbx + 1, arg1) s>= 0)
    return hMem

LocalFree(hMem)
return nullptr
