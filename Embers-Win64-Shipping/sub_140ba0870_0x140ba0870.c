// 函数: sub_140ba0870
// 地址: 0x140ba0870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
void* rbx = nullptr
int64_t result = 0

if (rsi != 0)
    int32_t rcx = *(rsi + 8)
    void* (* var_38)()
    char arg_8
    void arg_10
    
    if (((rcx u>> 4).b & 1) != 0)
        void* rax_3 = sub_140d212b0(arg1)
        int32_t r8_1 = data_143e1d9b4
        int64_t r10_1 = data_143e1d9a0
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rdx_4
        
        if (rax_4 s>= r8_1)
            rdx_4 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_2
            rdx_4 = *(r10_1 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        if (((*(rdx_4 + 8) u>> 0x19).b & 1) == 0)
            int32_t rax_13 = *(*(rax_3 + 0x40) + 0xc)
            void* const rdx_8
            
            if (rax_13 s>= r8_1)
                rdx_8 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_13)
                uint32_t rdx_6 = zx.d(temp2_1)
                int32_t rax_15 = temp3_1 + rdx_6
                rdx_8 =
                    *(r10_1 + (sx.q(rax_15 s>> 0x10) << 3)) + sx.q(zx.d(rax_15.w) - rdx_6) * 0x18
            
            if (((*(rdx_8 + 8) u>> 0x19).b & 1) == 0)
                void* r14_1 = arg1[1]
                char* var_30_1 = &arg_8
                arg_8 = 0
                var_38 = j_sub_140b98ce0
                void* rax_22 = sub_140a756e0(&var_38, &data_1439a98a8)
                
                if (rax_22 != 0)
                    rbx = rax_22 - 0x108
                
                if (sub_140b996f0(&arg_10, rbx, rax_3, r14_1) == 0)
                    return sub_140b9a2b0(rbx, r14_1, arg1)
    else if (((rcx u>> 0x16).b & 1) != 0)
        void* const rsi_2 = *(rsi + 0x20)
        void* rax_25
        int64_t rax_26
        void* rdx_11
        
        if (rsi_2 != 0)
            rax_25 = sub_140bdf2e0()
            rdx_11 = *(rsi_2 + 0x10)
            rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rsi_2 == 0 || rax_26.d s> *(rdx_11 + 0x38)
                || *(*(rdx_11 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
            rsi_2 = nullptr
        
        void* r8_5 = *(rsi_2 + 0x40)
        
        if (r8_5 == 0)
        label_140ba0ad9:
            void* rsi_3 = arg1[1]
            
            if (rsi_3 != 0)
                int32_t rcx_21 = *(rsi_3 + 8)
                
                if (((rcx_21 u>> 0xa).b & 1) != 0)
                label_140ba0b04:
                    arg_8 = 0
                    char* var_30_4 = &arg_8
                    var_38 = &data_140b9beb0
                    void* rax_45 = sub_140a756e0(&var_38, &data_1439a98a4)
                    
                    if (rax_45 != 0)
                        rbx = rax_45 - 0x108
                    
                    return sub_140b9a2b0(rbx, rsi_3, arg1)
                
                if (((rcx_21 u>> 0x13).b & 1) != 0 && ((rcx_21 u>> 0x15).b & 1) == 0)
                    goto label_140ba0b04
        else
            int32_t rax_28 = *(r8_5 + 0xc)
            void* const rax_35
            
            if (rax_28 s>= data_143e1d9b4)
                rax_35 = nullptr
            else
                int16_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(rax_28)
                uint32_t rdx_13 = zx.d(temp4_1)
                int32_t rax_30 = temp5_1 + rdx_13
                rax_35 = *(data_143e1d9a0 + (sx.q(rax_30 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_30.w) - rdx_13) * 0x18
            
            if (((*(rax_35 + 8) u>> 0x19).b & 1) != 0)
                goto label_140ba0ad9
            
            void* r14_2 = *(r8_5 + 0x118)
            char* var_30_2 = &arg_8
            arg_8 = 0
            var_38 = j_sub_140b98ce0
            void* rax_38 = sub_140a756e0(&var_38, &data_1439a98a8)
            void* rdx_15 = rax_38 - 0x108
            
            if (rax_38 == 0)
                rdx_15 = nullptr
            
            if (sub_140b996f0(&arg_10, rdx_15, rsi_2, r14_2) != 0)
                goto label_140ba0ad9
            
            arg_8 = 0
            char* var_30_3 = &arg_8
            var_38 = &data_140b9beb0
            void* rax_40 = sub_140a756e0(&var_38, &data_1439a98a4)
            void* rcx_20 = rax_40 - 0x108
            
            if (rax_40 == 0)
                rcx_20 = nullptr
            
            int64_t result_1 = sub_140b9a2b0(rcx_20, r14_2, arg1)
            result = result_1
            
            if (result_1 == 0)
                goto label_140ba0ad9

return result
