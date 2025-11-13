// 函数: sub_1426d59d0
// 地址: 0x1426d59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[1]
void* rdi = nullptr

if (rax != 0)
label_1426d5a13:
    int64_t rax_2
    
    if (arg1[2] == 0)
        rax_2 = sub_1423de540(data_143f5b298, rax, 0)
        arg1[2] = rax_2
    
    if (arg1[2] != 0 || rax_2 != 0)
        void* rsi_1 = arg1[2]
        
        if (rsi_1 != 0)
            void* rsi_2 = *(rsi_1 + 0x138)
            
            if (rsi_2 != 0)
                void* rax_3 = sub_14272b250()
                void* rdx_1 = *(rsi_2 + 0x10)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                    rdi = *(rsi_2 + 0xa8)
        
        if (rdi != 0)
            void* var_38
            sub_1426e7cf0(rdi, &var_38, arg1, arg2)
            void* rsi_3 = var_38
            int64_t* var_30
            int32_t rdi_1
            
            if (rsi_3 != 0)
                sub_1407473e0(rsi_3 + 0x60, arg3)
                int64_t rbp_1 = sx.q(*(rdi + 0x48))
                int32_t rax_7 = (rbp_1 + 1).d
                *(rdi + 0x48) = rax_7
                
                if (rax_7 s> *(rdi + 0x4c))
                    sub_1405a4f90(rdi + 0x40)
                
                void** rax_10 = (rbp_1 << 4) + *(rdi + 0x40)
                *rax_10 = rsi_3
                rax_10[1] = var_30
                
                if (var_30 != 0)
                    var_30[1].d += 1
                
                rdi_1 = *(rsi_3 + 0x30)
            else
                rdi_1 = (rsi_3 - 1).d
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    int64_t rdx_5 = *var_30
                    (*rdx_5)(var_30, rdx_5)
                    int32_t temp1_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_2 = *var_30
                        (*(r8_2 + 8))(var_30, 1, r8_2)
            
            return zx.q(rdi_1)
else
    int64_t* rcx
    
    if (arg3[1].d != 0)
        rcx = *arg3
    
    if (arg3[1].d == 0 || rcx == 0)
        rax = nullptr
    else
        rax = (**rcx)(rcx)
    
    arg1[1] = rax
    
    if (rax != 0)
        goto label_1426d5a13

return 0xffffffff
