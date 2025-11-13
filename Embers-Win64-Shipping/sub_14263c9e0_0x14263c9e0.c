// 函数: sub_14263c9e0
// 地址: 0x14263c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int64_t* rcx = arg1[1]
    
    if (rcx != 0)
        int64_t rsi
        rsi.b = 1
        
        if (arg5 == 1)
            void* rax_2 = (*(*rcx + 0x18))(rcx, 0)
            
            if (rax_2 != 0)
                rsi.b = *(rax_2 + 0xf0) == 3
        
        void* result = nullptr
        
        if (rsi.b != 0)
            int64_t rdx = *arg1
            int64_t* rcx_1
            
            if (rdx == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[1]
            
            if (rdx == 0)
                rcx_1 = nullptr
            
            if (rcx_1 != 0)
                result = sub_142639220(rcx_1, 0)
                
                if (result != 0)
                    int32_t rcx_2 = arg2[1].d
                    *(result + 0x88) = *arg2
                    int64_t zmm0 = *arg3
                    *(result + 0x90) = rcx_2
                    int32_t rcx_3 = arg3[1].d
                    *(result + 0x94) = zmm0
                    *(result + 0x9c) = rcx_3
                    *(result + 0xa0) = arg4
        
        return result

return nullptr
