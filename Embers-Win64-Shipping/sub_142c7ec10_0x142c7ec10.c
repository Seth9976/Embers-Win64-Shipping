// 函数: sub_142c7ec10
// 地址: 0x142c7ec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0

if (*(arg1 + 0x729) != 0)
    int32_t rax_1
    int512_t entry_zmm2
    int512_t zmm2
    rax_1, zmm2 = gzprintf(&arg1[0xd3], &data_1434ccff0, "QUIT", entry_zmm2)
    
    if (rax_1 != 0)
        int64_t rax_2 = sub_142c558d0(rax_1)
        sub_142c64760(*arg1, "Failure sending QUIT command: %s", rax_2, zmm2)
        *(arg1 + 0x729) = 0
        sub_142c65340(arg1, 1)
        arg1[0xea].d = 0
        return zx.q(rax_1)
    
    arg1[0xea].d = 0x22
    
    if (arg1[0xea].d != 0)
        int32_t i
        
        do
            i, zmm2 = sub_142c8f150(&arg1[0xd3], 1, zmm2)
            i_1 = i
            
            if (i != 0)
                break
        while (arg1[0xea].d != i)

return zx.q(i_1)
