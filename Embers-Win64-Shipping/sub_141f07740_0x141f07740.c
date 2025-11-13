// 函数: sub_141f07740
// 地址: 0x141f07740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi_1

if (arg1[0x3e] == 0)
    rsi_1 = nullptr
else
    void* rax_1 = sub_142452380()
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = arg1[0x3e]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rsi_1 + 0x38) || *(*(rsi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi_1 = nullptr

void* const rdx_1

if (*(arg2 + 0xa8) == 0)
    rdx_1 = nullptr
else
    void* rax_4 = sub_142452380()
    
    if (rax_4 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = *(arg2 + 0xa8)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rdx_1 = nullptr

if (rsi_1 == rdx_1)
    arg1[0x41] = *(arg2 + 0xb0)

int64_t result = arg1[0x3f]

if (result == 0)
    result = (*(*arg1 + 0x520))(arg1, rdx_1)
else
    int64_t rsi_2 = *(result + 0x10)
    
    if (arg1[0x3e] == 0)
        rdx_1 = nullptr
    else
        result = sub_142452380()
        
        if (result == 0)
            rdx_1 = nullptr
        else
            rdx_1 = arg1[0x3e]
            void* r8_1 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s> *(rdx_1 + 0x38))
                rdx_1 = nullptr
            else
                int64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) != r8_1)
                    rdx_1 = nullptr
    
    if (rsi_2 != rdx_1)
        result = (*(*arg1 + 0x520))(arg1, rdx_1)

if (arg1[0x3f] != 0)
    bool rdx_2 = sub_140b5b8a0(arg1[0x41].d, 0) == 0
    
    if ((*(arg1 + 0x20c) != 0 | rdx_2) != 0)
        void* rcx_4 = arg1[0x3f]
        
        if (rcx_4 != 0 && *(rcx_4 + 0x18) != arg1[0x41])
            int16_t* var_18
            sub_140b63b70(&arg1[0x41], &var_18)
            int64_t* rcx_6 = arg1[0x3f]
            int16_t* const rsi_3 = &data_142d40450
            int16_t* const rdx_4 = &data_142d40450
            int32_t var_10
            
            if (var_10 != 0)
                rdx_4 = var_18
            
            if ((*(*rcx_6 + 0x138))(rcx_6, rdx_4, 0, 2) != 0)
                int64_t* rcx_7 = arg1[0x3f]
                
                if (var_10 != 0)
                    rsi_3 = var_18
                
                (*(*rcx_7 + 0x138))(rcx_7, rsi_3, 0, 5)
            
            int16_t* rcx_8 = var_18
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
    
    int64_t* rcx_9 = *(arg2 + 0xc8)
    
    if (rcx_9 != 0)
        sub_141eb98e0(rcx_9, arg1[0x3f], arg3)
    
    result = arg1[0x3f]
    int64_t* rbp_1 = *(result + 0x130)
    
    if (rbp_1 != 0)
        void* i = *(arg2 + 0xb8)
        
        for (void* rsi_6 = (sx.q(*(arg2 + 0xc0)) << 6) + i; i != rsi_6; i += 0x40)
            result = sub_140d3c6e0(i)
            
            if (result != 0)
                int64_t* rdi_1 = *(result + 0x130)
                
                if (rdi_1 != 0)
                    sub_141dbed20(result, &data_143a2de54)
                    sub_141f32b40(rdi_1, rbp_1, &data_143a2de48, *(i + 8))
                    sub_141f49090(rdi_1, i + 0x10, 0, 0, 0)
                    result = sub_1405c6ac0(rdi_1, 0, 0)

return result
