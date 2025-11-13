// 函数: sub_142c687e0
// 地址: 0x142c687e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*(arg1 + 0x403) = 0
*(rbx + 0x220) &= 0xfffffffd

if (*(rbx + 0x2b8) == 0 && *(rbx + 0x438) != 3)
    int64_t rax_1 = *(rbx + 0x2c0)
    int512_t entry_zmm2
    
    if (rax_1 == 0)
        int64_t rax_4 = *(rbx + 0x318)
        
        if (rax_4 == 0)
            int32_t rax_7
            int64_t entry_r8
            
            if (*(rbx + 0x4e80) == fread)
                rax_7, entry_r8 = fseek(*(rbx + 0x4e88), 0, 0)
            
            if (*(rbx + 0x4e80) != fread || rax_7 == 0xffffffff)
                sub_142c64760(rbx, "necessary data rewind wasn't possible", entry_r8, entry_zmm2)
                return 0x41
        else
            int32_t rax_5 = rax_4(rbx, 1, *(rbx + 0x378))
            int512_t zmm2 =
                sub_142c64850(rbx, "the ioctl callback returned %d\n", zx.q(rax_5), entry_zmm2)
            
            if (rax_5 != 0)
                sub_142c64760(rbx, "ioctl callback returned error %d", zx.q(rax_5), zmm2)
                return 0x41
    else
        int32_t rax_2 = rax_1(*(rbx + 0x350), 0, 0)
        
        if (rax_2 != 0)
            sub_142c64760(rbx, "seek callback returned error %d", zx.q(rax_2), entry_zmm2)
            return 0x41

return 0
