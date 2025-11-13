// 函数: sub_141bdb6a0
// 地址: 0x141bdb6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if (*(arg1 + 0x138) != 0)
    int64_t var_18
    sub_141bab3c0(arg2, &var_18)
    int64_t* var_10
    
    if (var_18 != 0)
        char rax_1 = *(arg1 + 0x108)
        int64_t* rdi_1
        int64_t* rdi_2
        
        if (rax_1 u<= 1)
            var_18.o = var_18.o
            
            if (var_10 != 0)
                var_10[1].d += 1
            
            rdi_2 = *(arg1 + 0x140)
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            sub_140e213d0(*(arg1 + 0x138), &var_18)
        label_141bdb7a9:
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp3_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            rdi_1 = var_10
        label_141bdb7d2:
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else
            if (rax_1 == 2)
                var_18.o = var_18.o
                
                if (var_10 != 0)
                    var_10[1].d += 1
                
                rdi_2 = *(arg1 + 0x140)
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                sub_140f5bb40(*(arg1 + 0x138), &var_18)
                goto label_141bdb7a9
            
            if (rax_1 == 3)
                var_18.o = var_18.o
                
                if (var_10 != 0)
                    var_10[1].d += 1
                
                rdi_1 = *(arg1 + 0x140)
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                sub_140e215b0(*(arg1 + 0x138), &var_18)
                goto label_141bdb7d2
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

sub_141bd9010(arg1 + 0x148, arg2, 0)
