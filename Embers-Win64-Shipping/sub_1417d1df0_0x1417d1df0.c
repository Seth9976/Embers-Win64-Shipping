// 函数: sub_1417d1df0
// 地址: 0x1417d1df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*(arg1 + 0x18) = arg2[1].d
char rcx = (data_1439c7a34).b
int32_t var_58 = 1
void* rdi = nullptr
int128_t var_68 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int128_t var_54 = data_143dbb1e0
int32_t var_44 = (1 << rcx) - 1
int32_t rax_5 = arg2[1].d
int64_t var_80
int64_t* var_90 = &var_80
int128_t* var_98 = &var_68
char var_40 = 0
int64_t var_38 = 0
int32_t var_30 = 0
var_80 = 0
int64_t var_88
(*(*rcx_1 + 0x490))(rcx_1, &var_88, &data_143f02b98, 4, rax_5 << 2, 1, var_98, var_90)

if (arg1 + 0x10 != &var_88)
    int64_t* rbx_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_88
    var_88 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_9
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_9 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
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
                    int32_t rax_11 = sub_140a20af0()
                    
                    if (rax_11 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_11) u>> 0xe << 3))
                            + (zx.q(rax_11) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_11)

sub_14081c9d0(&var_88)
memcpy(var_80, *arg2, arg2[1].d << 2)
int64_t* rcx_8 = data_143f0f180
int64_t result = (*(*rcx_8 + 0x118))(rcx_8, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_c8)
return result
