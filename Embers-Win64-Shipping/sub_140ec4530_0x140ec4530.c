// 函数: sub_140ec4530
// 地址: 0x140ec4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68
int64_t* result = sub_140ebdf00(arg1, &var_68)
int64_t* var_60
int32_t i_1 = var_60.d
int64_t* r13 = var_68

if (i_1 s> 0)
    int64_t* rdi_1 = r13
    void* r14_3 = &r13[sx.q(i_1) * 2]
    
    if (r13 != r14_3)
        do
            int64_t* rbx_1 = rdi_1[1]
            int64_t* rsi_1 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            result = (*(*rsi_1 + 0x240))(rsi_1)
            
            if (result.d != 0)
            label_140ec462c:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
            else
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                void* rcx_1 = rsi_1[0x83]
                int128_t zmm0_1 = zx.o(0)
                char var_48_1 = 1
                int128_t var_58_1 = zmm0_1
                int64_t var_40 = 0
                *(rcx_1 + 0x48) = zmm0_1
                *(rcx_1 + 0x58) = 1
                int32_t var_38_1 = 0
                sub_1407473e0(rcx_1 + 0x60, &var_40)
                result = sub_140745b20(&var_40)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp8_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    goto label_140ec462c
            
            rdi_1 = &rdi_1[2]
        while (rdi_1 != r14_3)
    
    if (*(arg1 + 0x3c8) != 0)
        result = *(arg1 + 0x3d0)
        
        if (result != 0 && result[1].d s> 0)
            int64_t* rax_5 = sub_140ebac50(arg1, &var_68, 1)
            int64_t* rbx_2 = rax_5[1]
            void* rsi_2 = *rax_5
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    (**var_60)(var_60)
                    int32_t temp7_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
            
            sub_140ed5d70(rsi_2, 1)
            int64_t* rax_8 = sub_140ebac50(arg1, &var_68, 0)
            int64_t* rdi_3 = rax_8[1]
            void* r14_4 = *rax_8
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    (**var_60)(var_60)
                    int32_t temp11_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
            
            result = sub_140ed5d70(r14_4, 0)
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    result = (**rdi_3)(rdi_3)
                    int32_t temp13_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        result = (*(*rdi_3 + 8))(rdi_3, 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp14_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)

if (i_1 != 0)
    void* rdi_4 = &r13[1]
    int32_t i
    
    do
        int64_t* rbx_3 = *rdi_4
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_4 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
