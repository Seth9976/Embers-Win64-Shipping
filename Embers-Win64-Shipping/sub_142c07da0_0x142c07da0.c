// 函数: sub_142c07da0
// 地址: 0x142c07da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_21 = *(arg1 + 0xc)
bool cond:16_1

if (rax_21 u> 0x4d616e64)
    if (rax_21 u> 0x53696e64)
        if (rax_21 u> 0x54616d6c)
            if (rax_21 u<= 0x54686169)
                if (rax_21 == 0x54686169)
                    return &data_1436a5e00
                
                if (rax_21 == 0x54617674)
                    goto label_142c0818e
                
                if (rax_21 == 0x54656c75)
                    goto label_142c08154
                
                if (rax_21 == 0x54666e67)
                    goto label_142c0818e
                
                cond:16_1 = rax_21 != 0x54676c67
                goto label_142c0818c
            
            if (rax_21 == 0x54696274 || rax_21 == 0x54697268)
                goto label_142c0818e
            
            cond:16_1 = rax_21 != 0x5a616e62
        label_142c0818c:
            
            if (not(cond:16_1))
                goto label_142c0818e
        else
            if (rax_21 != 0x54616d6c)
                if (rax_21 u> 0x53796c6f)
                    if (rax_21 == 0x53797263)
                        goto label_142c08100
                    
                    if (rax_21 == 0x54616762 || rax_21 == 0x54616b72)
                        goto label_142c0818e
                    
                    cond:16_1 = rax_21 != 0x54616c65
                    goto label_142c0818c
                
                if (rax_21 == 0x53796c6f)
                    goto label_142c0818e
                
                if (rax_21 == 0x53696e68)
                    goto label_142c08154
                
                if (rax_21 == 0x536f6764)
                    goto label_142c08100
                
                if (rax_21 == 0x536f796f)
                    goto label_142c0818e
                
                cond:16_1 = rax_21 != 0x53756e64
                goto label_142c0818c
            
        label_142c08154:
            int32_t rax_16 = *(arg1 + 0x50)
            
            if (rax_16 != 0x44464c54 && rax_16 != 0x6c61746e)
                if (rax_16.b != 0x33)
                    return &data_1436a4d40
                
                return &data_1436a60b0
    else if (rax_21 == 0x53696e64)
    label_142c0818e:
        int32_t rax_19 = *(arg1 + 0x50)
        
        if (rax_19 != 0x44464c54 && rax_19 != 0x6c61746e)
            return &data_1436a60b0
    else if (rax_21 u> 0x4e6b6f6f)
        if (rax_21 u> 0x526a6e67)
            if (rax_21 == 0x526f6867)
                goto label_142c08100
            
            if (rax_21 == 0x53617572 || rax_21 == 0x53687264)
                goto label_142c0818e
            
            cond:16_1 = rax_21 != 0x53696464
            goto label_142c0818c
        
        if (rax_21 == 0x526a6e67)
            goto label_142c0818e
        
        if (rax_21 == 0x4f727961)
            goto label_142c08154
        
        if (rax_21 == 0x50686167 || rax_21 == 0x50686c70)
            goto label_142c08100
        
        if (rax_21 == 0x51616167)
            return &data_1436a5d30
    else
        if (rax_21 == 0x4e6b6f6f)
            goto label_142c08100
        
        if (rax_21 u<= 0x4d6f6e67)
            if (rax_21 == 0x4d6f6e67 || rax_21 == 0x4d616e69)
                goto label_142c08100
            
            if (rax_21 == 0x4d617263)
                goto label_142c0818e
            
            if (rax_21 == 0x4d6c796d)
                goto label_142c08154
            
            cond:16_1 = rax_21 != 0x4d6f6469
            goto label_142c0818c
        
        if (rax_21 == 0x4d746569)
            goto label_142c0818e
        
        if (rax_21 != 0x4d796d72)
            if (rax_21 == 0x4e616e64)
                goto label_142c0818e
            
            cond:16_1 = rax_21 != 0x4e657761
            goto label_142c0818c
        
        int32_t rax_10 = *(arg1 + 0x50)
        
        if (rax_10 != 0x44464c54 && rax_10 != 0x6c61746e && rax_10 != 0x6d796d72)
            return &data_1436a5cc0
else if (rax_21 == 0x4d616e64)
label_142c08100:
    
    if ((*(arg1 + 0x50) != 0x44464c54 || rax_21 == 0x41726162) && (*(arg1 + 8) & 0xfffffffe) == 4)
        return &data_1436a0af0
else
    if (rax_21 u<= 0x47756a72)
        if (rax_21 == 0x47756a72)
            goto label_142c08154
        
        if (rax_21 u> 0x42756864)
            if (rax_21 u> 0x4475706c)
                if (rax_21 == 0x45677970 || rax_21 == 0x476f6e67 || rax_21 == 0x476f6e6d)
                    goto label_142c0818e
                
                cond:16_1 = rax_21 != 0x4772616e
                goto label_142c0818c
            
            if (rax_21 == 0x4475706c || rax_21 == 0x43616b6d || rax_21 == 0x4368616d)
                goto label_142c0818e
            
            if (rax_21 == 0x44657661)
                goto label_142c08154
            
            cond:16_1 = rax_21 != 0x446f6772
            goto label_142c0818c
        
        if (rax_21 == 0x42756864)
            goto label_142c0818e
        
        if (rax_21 u> 0x4261746b)
            if (rax_21 == 0x42656e67)
                goto label_142c08154
            
            if (rax_21 == 0x42686b73 || rax_21 == 0x42726168)
                goto label_142c0818e
            
            cond:16_1 = rax_21 != 0x42756769
            goto label_142c0818c
        
        if (rax_21 == 0x4261746b)
            goto label_142c0818e
        
        if (rax_21 == 0x41646c6d)
            goto label_142c08100
        
        if (rax_21 == 0x41686f6d)
            goto label_142c0818e
        
        if (rax_21 == 0x41726162)
            goto label_142c08100
        
        cond:16_1 = rax_21 != 0x42616c69
        goto label_142c0818c
    
    if (rax_21 u> 0x4b686f6a)
        if (rax_21 u> 0x4c657063)
            if (rax_21 == 0x4c696d62 || rax_21 == 0x4d61686a)
                goto label_142c0818e
            
            cond:16_1 = rax_21 != 0x4d616b61
            goto label_142c0818c
        
        if (rax_21 == 0x4c657063)
            goto label_142c0818e
        
        if (rax_21 == 0x4b6e6461)
            goto label_142c08154
        
        if (rax_21 == 0x4b746869 || rax_21 == 0x4c616e61)
            goto label_142c0818e
        
        if (rax_21 == 0x4c616f6f)
            return &data_1436a5e00
    else
        if (rax_21 == 0x4b686f6a)
            goto label_142c0818e
        
        switch (rax_21 == 0x4a617661 || rax_21 == 0x4b616c69)
            case 0x47757275
                goto label_142c08154
            case 0x48616e67
                return &data_1436a18b0
            case 0x48616e6f
                goto label_142c0818e
            case 0x48656272
                return &data_1436a1930
            case 0x486d6e67
                goto label_142c0818e
            case 0x4a617661, 0x4b616c69, 0x4b686172
                goto label_142c0818e
            case 0x4b686d72
                return &data_1436a54b0
return &data_1436a0a20
