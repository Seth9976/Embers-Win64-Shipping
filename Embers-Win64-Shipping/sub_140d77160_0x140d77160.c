// 函数: sub_140d77160
// 地址: 0x140d77160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (OpenClipboard(GetActiveWindow()) == 0)
    int16_t* const var_b8_1 = &data_142d40450
    uint64_t count = &data_142d40450
    
    if (*arg1 != &data_142d40450)
        int32_t var_dc_1 = 0
        sub_140d79fc0(arg1, var_dc_1)
        int32_t var_80_1 = arg1[1].d
        int32_t rax_79 = arg1[1].d + var_dc_1
        arg1[1].d = rax_79
        count = zx.q(*(arg1 + 0xc))
        
        if (rax_79 s> count.d)
            count = sub_140594770(arg1)
        
        if (var_dc_1 != 0)
            count = sx.q(var_dc_1) << 1
            __builtin_memcpy(*arg1, var_b8_1, count)
    
    return count

int64_t var_108_1 = 0
char var_138_1 = 0
HANDLE hMem = GetClipboardData(0xd)
char var_138_2 = 1

if (hMem == 0)
    hMem = GetClipboardData(1)
    var_138_2 = 0

if (hMem != 0)
    int16_t* rax_23 = GlobalLock(hMem)
    
    if (zx.d(var_138_2) == 0)
        int32_t var_134_1 = 0
        
        while (sx.d(*(rax_23 + sx.q(var_134_1))) != 0)
            var_134_1 += 1
        
        int64_t var_100
        RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
            &var_100)
        int32_t var_f8_1 = 0
        int32_t var_f4_1 = 0
        int32_t var_8c_1 = var_f8_1
        int32_t rcx_17 = var_f8_1 + var_134_1 + 1
        
        if (rcx_17 s> 0)
            sub_140594770(&var_100)
        
        for (int32_t i = 0; i s< rcx_17; i += 1)
            char var_130 = *(rax_23 + sx.q(i))
            int16_t var_11c
            sub_1405a7220(&var_11c, 1, &var_130, 1, 0x3f)
            *(var_100 + (sx.q(i) << 1)) = var_11c
        
        sub_1406c6290(arg1, &var_100)
        sub_1405e8840(&var_100)
    else if (*arg1 != rax_23)
        int32_t var_e8_1
        
        if (rax_23 == 0 || zx.d(*rax_23) == 0)
            var_e8_1 = 0
        else
            int64_t var_a0_1 = -1
            
            do
                var_a0_1 += 1
            while (rax_23[var_a0_1] != 0)
            
            var_e8_1 = var_a0_1.d + 1
        
        sub_140d79fc0(arg1, var_e8_1)
        int32_t var_84_1 = arg1[1].d
        int32_t rax_41 = arg1[1].d + var_e8_1
        arg1[1].d = rax_41
        
        if (rax_41 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        if (var_e8_1 != 0)
            __builtin_memcpy(*arg1, rax_23, sx.q(var_e8_1) << 1)
    
    GlobalUnlock(hMem)
else
    int16_t* const var_d0_1 = &data_142d40450
    
    if (*arg1 != &data_142d40450)
        int32_t var_f0_1 = 0
        sub_140d79fc0(arg1, var_f0_1)
        int32_t var_90_1 = arg1[1].d
        int32_t rax_15 = arg1[1].d + var_f0_1
        arg1[1].d = rax_15
        
        if (rax_15 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        if (var_f0_1 != 0)
            __builtin_memcpy(*arg1, var_d0_1, sx.q(var_f0_1) << 1)

return CloseClipboard()
