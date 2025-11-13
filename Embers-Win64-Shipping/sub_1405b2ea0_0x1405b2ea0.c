// 函数: sub_1405b2ea0
// 地址: 0x1405b2ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t* rsi = arg3
void* result = nullptr

if (arg3 != 0)
    void* rax_1 = sub_1405c7870()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rsi[7].d && *(rsi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_1405c7870()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rsi[7].d || *(rsi[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rsi = nullptr
            
            int32_t rcx_2 = *(arg1 + 8)
            int32_t rax_8 = rcx_2 & 0x69
            int32_t r14_1 = rax_8 | 0x20
            rcx_2.b &= 0x30
            
            if (rcx_2.b == 0)
                r14_1 = rax_8
            
            if (rsi == 0)
                rsi = sub_1405c7870()
            
            uint64_t arg_18 = 0
            
            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* result_4 = sub_140d2dfc0(rsi, arg1, arg_18, r14_1, 0, 0, 0, 0, 0)
            result = result_4
            *(result_4 + 0x2c) = arg2
            void* rax_11 = sub_1405c7920()
            void* rcx_5 = *(result + 0x10)
            int64_t rdx_3 = sx.q(*(rax_11 + 0x38))
            void* result_1
            void** result_3
            
            if (rdx_3.d s> *(rcx_5 + 0x38) || *(*(rcx_5 + 0x30) + (rdx_3 << 3)) != rax_11 + 0x30)
                result_1 = nullptr
                void* rax_13 = sub_1405c79e0()
                void* rdx_6 = *(result + 0x10)
                int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                void* result_2
                
                if (rax_14.d s> *(rdx_6 + 0x38)
                        || *(*(rdx_6 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    result_2 = nullptr
                    void* rax_16 = sub_1405c7aa0()
                    void* rdx_9 = *(result + 0x10)
                    int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                    
                    if (rax_17.d s<= *(rdx_9 + 0x38)
                            && *(*(rdx_9 + 0x30) + (rax_17 << 3)) == rax_16 + 0x30)
                        result_3 = result
                        void*** var_38 = &result_3
                        int32_t* var_30_1 = &arg_20
                        sub_1405a7a30(arg1 + 0x3d0, &arg_18, &var_38, nullptr)
                        
                        if ((*(arg1 + 8) & 0x30) == 0)
                            sub_1405aa240(arg1 + 0x270, arg1 + 0x3d0, arg1 + 0x440)
                else
                    result_2 = result
                    result_3 = &result_2
                    int32_t* var_40_2 = &arg_20
                    sub_1405a7a30(arg1 + 0x380, &arg_18, &result_3, nullptr)
                    
                    if ((*(arg1 + 8) & 0x30) == 0)
                        sub_1405aa240(arg1 + 0x260, arg1 + 0x380, arg1 + 0x430)
            else
                result_1 = result
                result_3 = &result_1
                int32_t* var_40_1 = &arg_20
                sub_1405a7a30(arg1 + 0x330, &arg_18, &result_3, nullptr)
                
                if ((*(arg1 + 8) & 0x30) == 0)
                    sub_1405aa240(arg1 + 0x250, arg1 + 0x330, arg1 + 0x420)

return result
