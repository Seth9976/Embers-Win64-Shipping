// 函数: sub_142277a30
// 地址: 0x142277a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
int64_t* arg_8 = rbx
int32_t* rdi = *arg2
void* rbp = &rdi[sx.q(arg2[1].d) * 5]
int64_t result

if (rdi == rbp)
label_142277af3:
    result.b = 1
else
    while (true)
        if (sub_140b5f8e0(*rdi).b != 0)
            void var_28
            sub_140a96170(&var_28)
            int64_t var_38
            result = sub_140bacf70(sub_140b63b70(rdi, &var_38), 1, &var_28)
            int64_t rcx_5 = var_38
            rbx.b = result.b == 0
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t* var_20
            
            if (rbx.b == 0)
                if (var_20 != 0)
                    var_20[1].d -= 1
                    
                    if (var_20[1].d == 1)
                        (**var_20)(var_20)
                        int32_t rax_3 = *(var_20 + 0xc)
                        *(var_20 + 0xc) -= 1
                        
                        if (rax_3 == 1)
                            (*(*var_20 + 8))(var_20, 1)
                
                rdi = &rdi[5]
                
                if (rdi == rbp)
                    goto label_142277af3
                
                continue
            else if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t rsi_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*var_20 + 8))(var_20, zx.q(rsi_1))
        
        result.b = 0
        break

return result
