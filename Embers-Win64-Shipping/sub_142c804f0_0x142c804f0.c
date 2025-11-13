// 函数: sub_142c804f0
// 地址: 0x142c804f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(*(*arg1 + 0x250) + 0x18)
int64_t r8_1

if (rax_1 == 1)
    r8_1 = arg1[0xe4]

int32_t result
int512_t entry_zmm2

if (rax_1 == 1 && r8_1 != 0)
    result = gzprintf(&arg1[0xd3], "SIZE %s", r8_1, entry_zmm2)
    
    if (result != 0)
        return result
    
    arg1[0xea].d = 0x17
    return result

if (rax_1 == 0 || arg1[0xe4] == 0)
    return sub_142c7fec0(arg1) __tailcall

result = gzprintf(&arg1[0xd3], "REST %d", 0, entry_zmm2)

if (result != 0)
    return result

arg1[0xea].d = 0x1a
return result
