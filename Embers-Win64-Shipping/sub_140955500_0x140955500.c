// 函数: sub_140955500
// 地址: 0x140955500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = arg1[0x5f]
char rax_3

if (rcx != 0)
    rax_3 = (*(*rcx + 0x28))(rcx)

int64_t* result

if (rcx == 0 || rax_3 == 0)
    result = sub_14096af60(arg1)
else
    *(arg1 + 0x36a) = 1
    sub_140955ce0(arg1, 0)
    
    if (*(arg1 + 0x369) == 0)
        result = sub_14096af60(arg1)
    else
        (*(*arg1 + 0x6e0))(arg1, &arg1[0x5e])
        int64_t* result_1 = nullptr
        int32_t var_90_1 = 0
        void* const var_88_1 = &data_14096afe0
        int32_t var_80_1 = 0
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_5 != 0)
            *rax_5 = &data_142e33ea8
            sub_140d3a3a0(&rax_5[1], arg1)
            *(rax_5 + 0x10) = var_88_1.o
            rax_5[5] = sub_140a387b0()
            *rax_5 = &data_142e33f00
            sub_140956c30(rax_5, &result_1)
        else if (var_90_1 != 0)
            int64_t* result_2 = result_1
            
            if (result_2 != 0)
                (*(*result_2 + 0x38))(result_2, 0)
                int64_t* result_3 = result_1
                
                if (result_3 != 0)
                    result_1 = sub_140a84c80(result_3, 0, 0)
        
        if (rax_5 != 0)
            (*rax_5)[7](rax_5, 0)
            int64_t rax_10 = sub_140a84c80(rax_5, 0, 0)
            
            if (rax_10 != 0)
                sub_140a74f90(rax_10)
        
        void* rax_12 = (*(*arg1 + 0x150))(arg1)
        void* rcx_9 = *(rax_12 + 0x188)
        void* rdi_2
        
        if (rcx_9 == 0)
            rdi_2 = *(rax_12 + 0x300)
        else
            rdi_2 = *(rcx_9 + 0xc0)
        
        int64_t var_78 = 0
        int32_t var_70_1 = 0
        
        if (var_90_1 != 0)
            int64_t* result_4 = result_1
            
            if (result_4 != 0)
                (*(*result_4 + 0x40))(result_4, &var_78)
        
        void var_68
        sub_140d3a3a0(&var_68, nullptr)
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        void* var_48_1 = nullptr
        sub_1423e6200(rdi_2, &arg1[0x6e], &var_78, 0x40a00000, 0, 0xbf800000)
        
        if (var_58_1 != 0)
            void var_38
            void* rcx_12 = &var_38
            
            if (var_48_1 != 0)
                rcx_12 = var_48_1
            
            (*(*rcx_12 + 0x10))(rcx_12)
        
        result = sub_140745b20(&var_78)
        
        if (var_90_1 == 0)
            result = result_1
        label_140955728:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            int64_t* result_5 = result_1
            
            if (result_5 != 0)
                (*(*result_5 + 0x38))(result_5, 0)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_90_2 = 0
                goto label_140955728

__security_check_cookie(rax_1 ^ &var_c8)
return result
