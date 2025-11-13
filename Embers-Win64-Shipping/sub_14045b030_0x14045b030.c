// 函数: sub_14045b030
// 地址: 0x14045b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 1
int128_t* result

for (void* i = &data_143e1eef8; i s< &data_143e1efe8; i += 0x18)
    int16_t* var_38
    sub_140a2e390(&var_38, u"Touch%d", zx.q(rsi))
    int16_t* const rdx_1 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        rdx_1 = var_38
    
    int64_t var_28
    sub_140b58260(&var_28, rdx_1, 1)
    *(i - 8) = var_28
    int128_t var_20
    result = &var_20
    var_20 = zx.o(0)
    
    if (i != &var_20)
        *i = 0
        int64_t* rbx_1 = *(i + 8)
        
        if (rbx_1 != 0)
            *(i + 8) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rbx_2 = var_20:8.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    int16_t* rcx_7 = var_38
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    rsi += 1

return result
