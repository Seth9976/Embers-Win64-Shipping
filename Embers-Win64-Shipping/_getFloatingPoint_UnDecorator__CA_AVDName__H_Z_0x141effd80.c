// 函数: ?getFloatingPoint@UnDecorator@@CA?AVDName@@H@Z
// 地址: 0x141effd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char var_30 = 0
int32_t var_48 = 1
char rcx = (data_1439c7a34).b
int128_t var_58
int128_t* var_70 = &var_58
var_58 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
void* rdi = nullptr
int128_t var_44 = data_143dbb1e0
int32_t var_34 = (1 << rcx) - 1
int64_t var_28 = 0
int32_t var_20 = 0
int64_t var_68
(*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98, 0x20, 1, var_70)

if (arg1 + 0x10 != &var_68)
    int64_t* rbx_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_68
    var_68 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_7
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
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
                    int32_t rax_9 = sub_140a20af0()
                    
                    if (rax_9 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_9) u>> 0xe << 3))
                            + (zx.q(rax_9) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_9)

int64_t result = sub_1405d1550(&var_68)
__security_check_cookie(rax_1 ^ &var_98)
return result
