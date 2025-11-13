// 函数: sub_141b9f840
// 地址: 0x141b9f840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= arg2[7].d && *(arg2[6] + (rax_2 << 3)) == rax_1 + 0x30)
            int64_t arg_10
            void* result
            
            if (arg3 != 0)
                arg_10 = 0
                result = sub_141ba2150(arg3, arg2, 0)
            label_141b9f8b0:
                
                if (result != 0)
                    void* rax_4 = sub_141c122a0()
                    void* rdx_2 = *(result + 0x10)
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                        return result
                
                return nullptr
            
            void* rax_11
            int64_t rax_12
            void* rdx_5
            
            if (arg1 != 0)
                void* rax_7 = sub_14256a090()
                void* rdx_3 = arg1[2]
                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_8.d s<= *(rdx_3 + 0x38)
                        && *(*(rdx_3 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                    arg_10 = 0
                    return sub_141b707c0(arg1, arg2, 0)
                
                rax_11 = sub_141c122a0()
                rdx_5 = arg1[2]
                rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (arg1 != 0 && rax_12.d s<= *(rdx_5 + 0x38)
                    && *(*(rdx_5 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                arg_10 = 0
                result = sub_141ba2820(arg1, arg2, 0)
                goto label_141b9f8b0
            
            void* rax_14 = sub_1423de540(data_143f5b298, arg1, 1)
            
            if (rax_14 != 0)
                arg_10 = 0
                return sub_141b70820(rax_14, arg2, 0)

return nullptr
