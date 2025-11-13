// 函数: sub_141ca01f0
// 地址: 0x141ca01f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t var_98 = 0
int64_t var_90 = 0
int32_t arg_8 = 0
int64_t* rax_1 = (*(*rcx + 0x48))(rcx)
int64_t r9 = *rax_1
(*(r9 + 0x58))(rax_1, &var_98, 0, r9, var_98, var_90)
int32_t i = 0

if (var_90.d s> 0)
    do
        void* var_88 = nullptr
        int64_t var_80_1 = 0
        void* rsi_3 = sx.q(i) * 0x50 + var_98
        int64_t var_78
        char rax_4 = sub_140ba1330(sub_140b63b70(rsi_3 + 8, &var_78), 0, &var_88, 1)
        int64_t rcx_4 = var_78
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        if (rax_4 != 0)
            int64_t var_38
            int64_t* rax_5 = sub_140b19c30(&var_38, &var_88, 1)
            int16_t* const rdx_3 = &data_142d40450
            
            if (data_143e1a418 != 0)
                rdx_3 = data_143e1a410
            
            int16_t* const rcx_6
            
            if (rax_5[1].d == 0)
                rcx_6 = &data_142d40450
            else
                rcx_6 = *rax_5
            
            if (sub_140a54510(rcx_6, rdx_3) == 0)
                int64_t var_48
                int64_t* rax_7 = sub_140b63b70(rsi_3 + 0x18, &var_48)
                int64_t var_68
                int64_t var_58
                int64_t* rax_9 = sub_140baa460(&var_68, sub_140b63b70(rsi_3 + 8, &var_58))
                int16_t* rdx_7
                
                if (rax_7[1].d == 0)
                    rdx_7 = &data_142d40450
                else
                    rdx_7 = *rax_7
                
                int16_t* const rcx_10
                
                if (rax_9[1].d == 0)
                    rcx_10 = &data_142d40450
                else
                    rcx_10 = *rax_9
                
                sub_140a54510(rcx_10, rdx_7)
                int64_t rcx_11 = var_68
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t rcx_12 = var_58
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                int64_t rcx_13 = var_48
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
            
            int64_t rcx_14 = var_38
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        
        void* rcx_15 = var_88
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        i += 1
    while (i s< var_90.d)

return sub_141c94120(&var_98)
