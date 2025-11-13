// 函数: sub_1419e1190
// 地址: 0x1419e1190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x88]

if (rax != 0)
    int64_t* rax_1 = *(rax + 0x50)
    
    if (rax_1 != 0 && rax_1[1].d != 0 && *(**rax_1 + 0xec) != 0)
        void*** result = j_sub_140a82f30(0x660)
        
        if (result == 0)
            arg1[0x93] = result
            return result
        
        sub_14237f650(result, arg1, 0)
        *result = &data_143012bc8
        result[0xc8] = 0
        result[0xc9].d = 0
        result[0xca] = 0
        result[0xcb] = 0x3f800000
        arg1[0x93] = result
        return result

return 0
