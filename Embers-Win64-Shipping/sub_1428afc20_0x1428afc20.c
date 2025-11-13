// 函数: sub_1428afc20
// 地址: 0x1428afc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbx = 0
int64_t result = 0

if (arg1 != 0)
    int32_t r8_1 = 0
    
    if (sub_1428a5c60(&data_143fecb10, sub_1428afe40) != 0)
        r8_1 = data_143fecb14
    
    if (r8_1 != 0)
        sub_1428a5c40(data_143fecb00)
        int64_t* rcx_1 = data_143fecaf8
        int64_t var_20_1 = arg1
        int32_t var_28 = arg2 & 0xffff7fff
        int64_t* rax_2 = sub_1428a8d10(rcx_1, &var_28)
        
        if (rax_2 != 0)
            while (true)
                int32_t rcx_2 = rbx
                
                if (*(rax_2 + 4) == 0 || (arg2 & 0x8000) != 0)
                    result = rax_2[2]
                    break
                
                rbx += 1
                
                if (rcx_2 s>= 0xa)
                    break
                
                int64_t var_20_2 = rax_2[2]
                rax_2 = sub_1428a8d10(data_143fecaf8, &var_28)
                
                if (rax_2 == 0)
                    break
                
                continue
        
        sub_1428a5d00(data_143fecb00)
        return result

return 0
