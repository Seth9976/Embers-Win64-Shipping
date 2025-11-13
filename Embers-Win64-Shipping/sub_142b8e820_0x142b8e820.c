// 函数: sub_142b8e820
// 地址: 0x142b8e820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    if ((*(arg1 + 0x1c90) & 0xffe0) == 0)
        if (sub_142b8f260(arg1, arg2, arg3) != 0)
            *(arg1 + 0x1c7c) = *(arg1 + 0x1c70)
            sub_142b8e960(arg1, arg2, arg3)
            
            if (sub_142b8e520(arg1, arg3) != 0)
                if (*(arg1 + 0x1c80) == 0)
                label_142b8e8dd:
                    int32_t* rdi
                    
                    if (sub_142b8df10(arg1, arg3) == 0)
                    label_142b8e8fa:
                        rdi.b = 0
                    else
                        if (sub_142b8e0b0(arg1, arg3) == 0)
                            goto label_142b8e8fa
                        
                        rdi.b = 1
                    
                    pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(arg1 + 0x1c18)
                    pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(arg1 + 0x1c38)
                    return zx.q(rdi.b)
                
                *(arg1 + 0x1c7c) = *(arg1 + 0x1c74)
                sub_142b8f390(arg1)
                sub_142b8e960(arg1, arg2, arg3)
                
                if (sub_142b8e520(arg1, arg3) != 0)
                    if (*(arg1 + 0x1c80) != 0)
                        goto label_142b8e8fa
                    
                    goto label_142b8e8dd
    else
        *arg3 = 0x1b

return 0
