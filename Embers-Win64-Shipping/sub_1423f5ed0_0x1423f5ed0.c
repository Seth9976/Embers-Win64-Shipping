// 函数: sub_1423f5ed0
// 地址: 0x1423f5ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_48 = 1
int128_t* var_70
int64_t* var_88 = &var_70
int128_t var_58 = zx.o(0)
int128_t* var_90 = &var_58
int128_t var_44 = data_143dbb1e0
void* rdi = nullptr
char var_30 = 0
int64_t var_28 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int32_t var_20 = 0
var_70 = nullptr
int64_t var_78
(*(*rcx_1 + 0x488))(rcx_1, &var_78, &data_143f02b98, 0x20, 1, var_90, var_88)

if (arg1 + 0x10 != &var_78)
    int64_t* rbx_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_78
    var_78 = 0
    
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

sub_1405d1550(&var_78)
int128_t* rax_14 = var_70
int128_t zmm1 = data_142d3f670
int512_t zmm0_1
zmm0_1.o = zx.o(0)
*rax_14 = zx.o(0)
rax_14[1] = zmm1
int64_t result = (*(*data_143f0f180 + 0x138))(zmm0_1, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_b8)
return result
