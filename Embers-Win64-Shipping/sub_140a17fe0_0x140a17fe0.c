// 函数: sub_140a17fe0
// 地址: 0x140a17fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
int64_t* arg_20 = nullptr

if ((*(*rcx + 0x28))(rcx, arg2, &arg_20) s>= 0)
    int64_t* rcx_1 = arg_20
    int32_t arg_8 = 0
    
    if ((*(*rcx_1 + 0x108))(rcx_1, &arg_8) s>= 0)
        int64_t* rcx_2 = arg_20
        int32_t arg_18 = 1
        
        if ((*(*rcx_2 + 0x118))(rcx_2, &arg_18) s>= 0)
            int32_t rax_6 = arg_8
            bool z_1
            
            if (rax_6 == 1)
                if (0 == *(arg1 + 0x20))
                    *(arg1 + 0x20) = 0
                    z_1 = true
                else
                    *(arg1 + 0x20)
                    z_1 = false
                
                goto label_140a1809b
            
            if (rax_6 == 0x65)
                int32_t rax_13 = arg_18
                
                if (rax_13 s< 0)
                    if (rax_13 == 0xc00d36fa)
                        *(arg1 + 0x40) = 1
                    
                    goto label_140a180b3
                
            label_140a1809d:
                int64_t* rcx_3 = *(arg1 + 0x10)
                
                if ((*(*rcx_3 + 0x20))(rcx_3, arg1, 0) s< 0)
                    goto label_140a180b3
            else
                if (rax_6 != 0x6a)
                    if (rax_6 != 0xd3)
                        z_1 = rax_6 == 0x138
                    label_140a1809b:
                        
                        if (z_1)
                            goto label_140a180b3
                        
                        goto label_140a1809d
                    
                    bool z_2
                    
                    if (0 == *(arg1 + 0x20))
                        *(arg1 + 0x20) = 0
                        z_2 = true
                    else
                        *(arg1 + 0x20)
                        z_2 = false
                    
                    if (z_2)
                        *(arg1 + 0x20)
                        *(arg1 + 0x20) = 1
                    
                    goto label_140a1809d
                
            label_140a180b3:
                *(arg1 + 0x20)
                *(arg1 + 0x20) = 1
                *(arg1 + 0x24)
                *(arg1 + 0x24) = 1

int64_t* rcx_4 = arg_20

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

return 0
