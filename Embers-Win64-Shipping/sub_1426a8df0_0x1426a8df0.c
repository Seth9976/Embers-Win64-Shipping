// 函数: sub_1426a8df0
// 地址: 0x1426a8df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 0xf)

if ((result.b & 1) == 0)
    int64_t* rcx = *(arg1 + 0xa0)
    
    if (rcx != 0)
        result = (*(*rcx + 0x150))(rcx)
        uint64_t result_1 = result
        
        if (result != 0)
            int64_t arg_8
            sub_140d3a3a0(&arg_8, arg2)
            void* rcx_2 = *(result_1 + 0x188)
            int64_t* rcx_3
            
            if (rcx_2 == 0)
                rcx_3 = result_1 + 0x308
            else
                rcx_3 = *(rcx_2 + 0xc8)
            
            result = sub_1420eb770(rcx_3, arg_8)
            void* rcx_4 = *(result_1 + 0x188)
            void* rcx_5
            
            if (rcx_4 == 0)
                rcx_5 = *(result_1 + 0x300)
            else
                rcx_5 = *(rcx_4 + 0xc0)
            
            if (arg2 != 0)
                return sub_1423e5e50(rcx_5, arg2)

return result
