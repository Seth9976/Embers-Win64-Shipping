// 函数: sub_142910f00
// 地址: 0x142910f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 != 0)
    int64_t j = 0
    
    for (int64_t i = 0; i != 7; )
        char rax_1 = arg2[i]
        i += 1
        
        if (rax_1 != data_1434e7b58[0xb][i])
            int64_t rcx_2 = 0
            
            while (true)
                char rax_5 = arg2[rcx_2]
                rcx_2 += 1
                
                if (rax_5 != *(rcx_2 + 0x1434e8c1b))
                    break
                
                if (rcx_2 == 4)
                    return sub_1428bcf80(arg1, zx.q((rcx_2 + 2).d), arg3) __tailcall
            
            do
                char rax_7 = arg2[j]
                j += 1
                
                if (rax_7 != *(j + 0x14351e6ff))
                    return 0xfffffffe
            while (j != 7)
            
            return sub_1428bce00(arg1, (j - 1).d, arg3) __tailcall
    
    int32_t* rax_2 = sub_14289b930(arg3)
    
    if (rax_2 != 0)
        j.b = sub_1428d6160(arg1[5], nullptr, nullptr, rax_2, arg1[1]) != 0
        return zx.q(j.d)

return 0
