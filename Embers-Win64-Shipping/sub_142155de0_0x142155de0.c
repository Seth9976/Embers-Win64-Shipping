// 函数: sub_142155de0
// 地址: 0x142155de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[4].d

if (result s<= 0 || *(arg1 + 0x14) s>= result)
    result.b = 0
else
    void* rax = sub_140d3c6e0(&arg1[7])
    void* rbp_1 = rax
    
    if (rax == 0)
        rbp_1 = sub_14202bfe0(sub_140d3c6e0(&arg1[8]))
    
    char rbx_1 = arg1[2].b
    arg1[2].b = 1
    int64_t* rax_3 = sub_140d3c6e0(&arg1[8])
    result = (*(*rax_3 + 0x300))(rax_3, (sx.q(*(arg1 + 0x14)) << 4) + arg1[3], rbp_1, &arg1[5])
    arg1[2].b = rbx_1
    
    if (result.b == 0)
        result.b = 0
    else
        int64_t* rbx_2 = arg1[1]
        int64_t rsi_1 = 0
        
        if (rbx_2 != 0)
            result = rbx_2[1].d
            
            if (result != 0)
                rbx_2[1].d = result + 1
                result.b = 1
            
            if (result.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                rsi_1 = *arg1
        
        void* rbp_2 = *(rbp_1 + 0xf0)
        
        if (rbp_2 == 0)
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            result.b = 0
        else
            sub_140d3a3a0(&arg1[9], rbp_2)
            int64_t var_18 = rsi_1
            int64_t* var_10_1 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            void arg_8
            int64_t* rax_4 = sub_1421358c0(&data_143a2dc50, &arg_8, sub_14214dd80, &var_18)
            var_18 = rsi_1
            int64_t* var_10_2 = rbx_2
            arg1[0xa] = *rax_4
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t* rax_5 = sub_142135760(rbp_2 + 0x9c0, &arg_8, sub_14214ddd0, &var_18)
            var_18 = rsi_1
            int64_t* var_10_3 = rbx_2
            arg1[0xb] = *rax_5
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t* rax_7 = sub_142135760(rbp_2 + 0x9d8, &arg_8, sub_14214de20, &var_18)
            var_18 = rsi_1
            int64_t* var_10_4 = rbx_2
            arg1[0xb] = *rax_7
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            sub_1421558a0(rbp_2, &var_18)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            result.b = 1

return result
