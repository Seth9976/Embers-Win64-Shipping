// 函数: sub_1419ef0c0
// 地址: 0x1419ef0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f20900(arg1)
void* result = arg1[4]

if (result != 0)
    if (*(result + 0x50c) != 0)
        int32_t rax = arg1[0x89].d
        
        if (rax s> *(arg1 + 0x45c))
            sub_1405c5570(&arg1[0x8a], rax)
            rax = arg1[0x89].d
        
        int32_t i = 0
        
        if (rax s> 0)
            int64_t** r14_1 = nullptr
            
            do
                void* rax_1 = sub_142121cc0(*(r14_1 + arg1[0x88]), arg1)
                int64_t rbp_1 = sx.q(arg1[0x8b].d)
                int32_t rcx_3 = (rbp_1 + 1).d
                arg1[0x8b].d = rcx_3
                
                if (rcx_3 s> *(arg1 + 0x45c))
                    sub_1405a4d70(&arg1[0x8a])
                
                i += 1
                r14_1 = &r14_1[1]
                *(arg1[0x8a] + (rbp_1 << 3)) = rax_1
            while (i s< arg1[0x89].d)
    
    int64_t* rcx_6 = arg1[4]
    result = (*(*rcx_6 + 0x150))(rcx_6)
    
    if (result != 0)
        result = sub_1419ede00(arg1[4])
        
        if (result != 0)
            return sub_1419efb50(result, arg1) __tailcall

return result
