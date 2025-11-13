// 函数: sub_141915f50
// 地址: 0x141915f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9

if (arg4 != 0)
    (*(*arg4 + 0x48))(arg4)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    r9 = (*(*arg4 + 0x48))(arg4)
else
    r9 = nullptr

uint32_t rdx = zx.d(*(arg2 + 0x2c))
int32_t r8 = 0

if (rdx == 0)
    r8 = data_1439c7494
else if (rdx == 1)
    r8 = data_1439c74a0 + data_1439c749c + data_1439c7494
else if (rdx == 2)
    r8 = data_1439c74a4 + data_1439c74a0 + data_1439c749c + data_1439c7494
else if (rdx != 3 && rdx == 4)
    r8 = data_1439c749c + data_1439c7494

int64_t r10 = sx.q(r8 + arg3) * 0x28
int64_t result = *(arg1 + 0x138)

if (r9 == 0)
    __builtin_memset(r10 + result, 0, 0x18)
    *(r10 + result + 0x18) = 0xffffffff
    *(r10 + result + 0x1c) = 1
    *(r10 + result + 0x20) = 0
else
    int32_t r8_7 = *(arg4 + 0x34)
    int32_t rdx_4 = *(r9 + 0x10)
    int32_t rcx_3 = *(r9 + 0x14)
    *(r10 + result) = r9
    *(r10 + result + 8) = 0
    *(r10 + result + 0x10) = rcx_3
    *(r10 + result + 0x14) = rdx_4
    *(r10 + result + 0x18) = 0xffffffff
    
    if (r8_7 s< 0 || r8_7 == 1)
        *(r10 + result + 0x20) = r8_7
        *(r10 + result + 0x1c) = 0
    else
        *(r10 + result + 0x20) = r8_7
        *(r10 + result + 0x1c) = 1

return result
