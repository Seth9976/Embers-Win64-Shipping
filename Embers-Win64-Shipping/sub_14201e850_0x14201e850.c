// 函数: sub_14201e850
// 地址: 0x14201e850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_142452380()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= arg2[7].d && *(arg2[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4
            int64_t rax_5
            void* rdx_1
            
            if (arg1 != 0)
                rax_4 = sub_14255d000()
                rdx_1 = arg1[2]
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            int64_t* rsi_1
            
            if (arg1 == 0 || rax_5.d s> *(rdx_1 + 0x38)
                    || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rsi_1 = nullptr
                
                if (arg1 != 0)
                    void* rax_7 = sub_142452380()
                    void* rdx_2 = arg1[2]
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                        rsi_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
            else
                rsi_1 = arg1
            
            void* rax_11
            uint128_t zmm6_1
            rax_11, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)
            
            if (rax_11 != 0)
                void var_38
                sub_142427eb0(&var_38)
                char var_f
                char var_f_1 = var_f | 4
                int64_t var_28_1 = arg4
                char r9
                char var_10_1 = r9
                int64_t* var_20_1 = rsi_1
                float zmm7[0x4]
                float zmm9[0x4]
                void* result = sub_1420eeee0(rax_11, arg2, arg3, &var_38, zmm6_1, zmm7, zmm9)
                
                if (result != 0)
                    void* rax_12 = sub_142452380()
                    void* rcx_8 = *(result + 0x10)
                    int64_t rdx_5 = sx.q(*(rax_12 + 0x38))
                    
                    if (rdx_5.d s<= *(rcx_8 + 0x38)
                            && *(*(rcx_8 + 0x30) + (rdx_5 << 3)) == rax_12 + 0x30)
                        return result

return nullptr
