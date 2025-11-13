// 函数: sub_142639f40
// 地址: 0x142639f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int64_t* r14_1 = *(arg1 + 8)
    
    if (r14_1 != 0 && arg2 != 0)
        void* rax_1 = sub_14263d1a0()
        
        if (rax_1 != 0)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= arg2[7].d && *(arg2[6] + (rax_2 << 3)) == rax_1 + 0x30)
                void* rax_4 = sub_140cde0b0()
                sub_140d19010(rax_4, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                void* result = sub_140d2dfc0(sub_14263d250(), rax_4, 0, 0, 0, 0, 0, 0, 0)
                
                if (result != 0)
                    sub_14263aa00(result, r14_1, arg3)
                    *(result + 0x30) = arg4
                    sub_142639ae0(result, arg2)
                
                return result

return 0
