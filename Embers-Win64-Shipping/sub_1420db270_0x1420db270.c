// 函数: sub_1420db270
// 地址: 0x1420db270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(**arg1 + arg2)
void* rdi = *(*(arg1[1] + 0x98) + (result << 3))

if (rdi != 0)
    int32_t rax_2 = *(rdi + 0xc)
    void* const rax_8
    
    if (rax_2 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        int64_t* rbx_1 = arg1[2]
        int64_t* var_28 = nullptr
        int32_t var_1c_1 = 0
        void* rbx_2 = *rbx_1
        int32_t result_1 = 0
        void* rsi_1
        
        if (rbx_2 == 0)
            rsi_1 = nullptr
        else
            void* rax_10 = sub_142459c10()
            
            if (rax_10 == 0)
                rsi_1 = nullptr
            else
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (rax_11.d s> *(rbx_2 + 0x38))
                    rsi_1 = nullptr
                else
                    rsi_1 = rbx_2
                    
                    if (*(*(rbx_2 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                        rsi_1 = nullptr
        
        int64_t* r8_2 = &var_28
        
        if (rsi_1 != sub_142459c10())
            sub_1417ea690(rdi, rbx_2, r8_2)
        else
            sub_1417ea490(rdi, rbx_2, r8_2)
        
        int64_t* rdi_1 = var_28
        result = sx.q(result_1)
        void* rbp_1 = &rdi_1[result]
        
        if (rdi_1 != rbp_1)
            int64_t arg_8 = 0
            
            do
                int64_t* rsi_2 = *rdi_1
                void* rax_14
                int64_t rax_15
                void* rdx_6
                
                if (rsi_2 != 0)
                    rax_14 = sub_142577430()
                    rdx_6 = rsi_2[2]
                    rax_15 = sx.q(*(rax_14 + 0x38))
                
                if (rsi_2 == 0 || rax_15.d s> *(rdx_6 + 0x38)
                        || *(*(rdx_6 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                    rsi_2 = nullptr
                
                void* r8_3
                r8_3.b = 1
                result, r8_3 = (*(*rsi_2 + 0x6a8))(rsi_2, 0, r8_3)
                
                if (result != 0)
                    result, r8_3 = sub_142219150(result, *(*(arg1[1] + 0xb8) + 0x1f8))
                
                rdi_1 = &rdi_1[1]
            while (rdi_1 != rbp_1)
            
            rdi_1 = var_28
        
        if (rdi_1 != 0)
            return sub_140a74f90(rdi_1)

return result
