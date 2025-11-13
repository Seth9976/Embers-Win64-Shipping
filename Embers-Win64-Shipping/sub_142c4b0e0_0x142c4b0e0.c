// 函数: sub_142c4b0e0
// 地址: 0x142c4b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 s< 0)
    return 0

int64_t rbx = -1

do
    rbx += 1
while (*(arg1 + (rbx << 1)) != 0)

if (arg2 u< rbx)
    rbx = arg2

HLOCAL hMem = LocalAlloc(LMEM_ZEROINIT, (rbx + 1) * 2)

if (hMem == 0)
    return hMem

if (sub_142c4b3f0(hMem, rbx + 1, arg1, arg2) s>= 0)
    return hMem

LocalFree(hMem)
return nullptr
