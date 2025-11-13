// 函数: sub_14198ca80
// 地址: 0x14198ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_24 = 0x10
int64_t* rcx = data_143f0f180
void* rdi = nullptr
int32_t var_c6 = 0x80002
int16_t var_c2 = 0
int32_t var_28 = 1
int64_t var_a8 = 0.q
int64_t var_c0
(*(*rcx + 0x48))(rcx, &var_c0, &var_a8)

if (arg1 + 0x10 != &var_c0)
    int64_t* rbx_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_c0
    var_c0 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_6
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_6 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_8 = sub_140a20af0()
                    
                    if (rax_8 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_8) u>> 0xe << 3))
                            + (zx.q(rax_8) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_8)

int64_t result = sub_14081c9d0(&var_c0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
