// 函数: sub_142c7f570
// 地址: 0x142c7f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int512_t entry_zmm2

if (*(rdx + 0x5d9) != 0 || *(rdx + 0x428) != 0)
    int64_t r8_1 = arg1[0xe4]
    
    if (r8_1 != 0)
        int32_t result = gzprintf(&arg1[0xd3], "MDTM %s", r8_1, entry_zmm2)
        
        if (result != 0)
            return result
        
        arg1[0xea].d = 0x12
        return result

if (*(rdx + 0x5e8) != 0 && arg1[0xe4] != 0)
    int32_t rax_1 = 0x49
    
    if (*(rdx + 0x5db) != 0)
        rax_1 = 0x41
    
    if (sx.d(arg1[0xe8].b) != rax_1)
        *(*(rdx + 0x250) + 0x18) = 1
        return sub_142c7e640(arg1, *(rdx + 0x5db), 0x13, entry_zmm2) __tailcall

return sub_142c804f0(arg1) __tailcall
