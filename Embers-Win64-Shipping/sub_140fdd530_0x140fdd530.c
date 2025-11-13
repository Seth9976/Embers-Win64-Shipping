// 函数: sub_140fdd530
// 地址: 0x140fdd530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e2b8b6 != 0 && *(arg1 + 9) != 0)
    if (data_143f01c92 != 0 && sub_140a80f40() != 0 && sub_141976800() != 0)
        sub_141989210()
    
    int32_t var_28
    uint32_t rbx_1 = GFSDK_Aftermath_GetDeviceStatus(&var_28)
    
    if (data_143f01c92 != 0 && sub_140a80f40().b != 0 && sub_1419768f0().b != 0)
        _initp_eh_hooks()
    
    if (rbx_1 != 1)
        void* rcx_10 = *(arg1 + 0x70)
        
        if (rcx_10 != 0)
            sub_140ffd7d0(rcx_10)
            data_143e2b8b6 = 0
    else if (var_28 != 0)
        data_143dbb3e0 = rbx_1.b
        void* rcx_3 = *(arg1 + 0x70)
        int64_t rax_3 = *(rcx_3 + 0x158)
        int64_t var_20 = rax_3
        
        if (rax_3 == 0)
            goto label_140fdd696
        
        sub_140fe52e0()
        int32_t* var_18
        int32_t rax_4 = GFSDK_Aftermath_GetData(zx.q(rbx_1), &var_20, &var_18)
        sub_140fe5320()
        
        if (rax_4 != 1)
            rcx_3 = *(arg1 + 0x70)
        label_140fdd696:
            
            if (rcx_3 != 0)
                sub_140ffd7d0(rcx_3)
                data_143e2b8b6 = 0
        else
            int32_t var_10
            uint32_t i_2 = var_10 u>> 2
            
            if (i_2 != 0)
                int32_t* r10_1 = var_18
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    if (*(arg1 + 0x90) - *(arg1 + 0xbc) != 0)
                        void* r8_2 = arg1 + 0xc0
                        void* rdx_2 = *(r8_2 + 8)
                        int64_t r9_1 = sx.q(*r10_1)
                        
                        if (rdx_2 != 0)
                            r8_2 = rdx_2
                        
                        int32_t j = *(r8_2 + (((sx.q(*(arg1 + 0xd0)) - 1) & r9_1) << 2))
                        
                        if (j != 0xffffffff)
                            int64_t rdx_3 = *(arg1 + 0x88)
                            
                            do
                                int64_t rcx_9 = sx.q(j) << 5
                                
                                if (*(rcx_9 + rdx_3) == r9_1.d)
                                    break
                                
                                j = *(rcx_9 + rdx_3 + 0x18)
                            while (j != 0xffffffff)
                    
                    r10_1 = &r10_1[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        sub_140b19e60()
        void* rdx_4 = data_1439a8bd0
        (*(rdx_4 + 0x50))(&data_1439a8bd0, rdx_4)
        int64_t rax_6
        rax_6.b = 0
        return rax_6

uint32_t rax
rax.b = 1
return rax
