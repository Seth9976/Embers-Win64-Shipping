// 函数: sub_141bb0660
// 地址: 0x141bb0660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1 + 0x28)

if (rax == 0)
label_141bb07ef:
    __builtin_memcpy(arg2, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
        0x11)
    *(arg2 + 0x18) = 0
    arg2[2].q = 0
else
    bool cond:0_1 = *(arg1 + 0x61) == 0
    char arg_8 = 0
    
    if (cond:0_1 || *(arg1 + 0x60) == 0)
        int128_t var_48
        __builtin_memcpy(&var_48, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
        int128_t var_30_1 = zx.o(0)
        
        if (sub_141b72aa0(rax, arg1 + 0x30, &var_48, &arg_8) == 0)
            int64_t* rsi_1 = var_30_1:8.q
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp1_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
            
            goto label_141bb0793
        
        if (&arg_8 != arg1 + 0x60)
            *(arg1 + 0x60) = 0x100
        
        char var_38
        arg2[1].b = var_38
        *arg2 = var_48
        *(arg2 + 0x18) = var_30_1.q
        void* rax_4 = var_30_1:8.q
        arg2[2].q = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
            int64_t* rdi_2 = var_30_1:8.q
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp3_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
    else
    label_141bb0793:
        bool cond:1_1 = *(arg1 + 0x61) == 0
        arg_8 = 1
        
        if (not(cond:1_1) && *(arg1 + 0x60) == 0)
            goto label_141bb07ef
        
        int128_t var_58 = zx.o(0)
        
        if (sub_141b727e0(rax, arg1 + 0x30, &var_58, &arg_8) == 0)
            goto label_141bb07ef
        
        if (&arg_8 != arg1 + 0x60)
            *(arg1 + 0x60) = 0x101
        
        *arg2 = var_58
        arg2[1].b = 0
        *(arg2 + 0x18) = 0
        arg2[2].q = 0

return arg2
