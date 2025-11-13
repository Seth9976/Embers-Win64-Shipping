// 函数: sub_141bae350
// 地址: 0x141bae350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1 + 0x28)

if (rax != 0)
    char rcx_1 = *(arg1 + 0x61)
    char arg_8 = 0
    void* rsi_1
    
    if (rcx_1 == 0 || *(arg1 + 0x60) == 0)
        rsi_1 = arg1 + 0x30
        int128_t var_48 = zx.o(0)
        
        if (sub_141b727e0(rax, rsi_1, &var_48, &arg_8) == 0)
            rcx_1 = *(arg1 + 0x61)
            goto label_141bae3e0
        
        if (&arg_8 != arg1 + 0x60)
            *(arg1 + 0x60) = 0x100
        
        *arg2 = var_48
    else
        rsi_1 = arg1 + 0x30
    label_141bae3e0:
        arg_8 = 1
        
        if (rcx_1 == 0 || *(arg1 + 0x60) != 0)
            int128_t* var_20_1 = nullptr
            int64_t* var_18_1 = nullptr
            int128_t var_38
            __builtin_memcpy(&var_38, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
            
            if (sub_141b72aa0(rax, rsi_1, &var_38, &arg_8) != 0)
                if (&arg_8 != arg1 + 0x60)
                    *(arg1 + 0x60) = 0x101
                
                int128_t zmm0_1
                
                if (var_20_1 == 0)
                    zmm0_1 = var_38
                else
                    zmm0_1 = *var_20_1
                
                *arg2 = zmm0_1
            
            if (var_18_1 != 0)
                var_18_1[1].d -= 1
                
                if (var_18_1[1].d == 1)
                    (**var_18_1)(var_18_1)
                    int32_t temp1_1 = *(var_18_1 + 0xc)
                    *(var_18_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_18_1 + 8))(var_18_1, 1)

return arg2
