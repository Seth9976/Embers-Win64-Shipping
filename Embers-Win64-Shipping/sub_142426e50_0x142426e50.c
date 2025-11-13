// 函数: sub_142426e50
// 地址: 0x142426e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_48 = 1
int32_t* var_70
int64_t* var_88 = &var_70
int128_t var_58 = zx.o(0)
int128_t* var_90 = &var_58
int128_t var_44 = data_143dbb1e0
char var_30 = 0
int64_t var_28 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int32_t var_20 = 0
var_70 = nullptr
int64_t var_78
(*(*rcx_1 + 0x488))(rcx_1, &var_78, &data_143f02b98, 0x40, 1, var_90, var_88)

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
                    uint64_t rdx_1 = zx.q(rax_9)
                    void* const rax_10
                    
                    if (rax_9 != 0)
                        rax_10 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_10 = nullptr
                    
                    *(rax_10 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)

sub_1405d1550(&var_78)
int32_t* rax_15 = var_70
rax_15[1] = (data_1439c7a1c ^ data_142d3f780).d
*rax_15 = 0x3f800000
rax_15[2] = 0x3f800000
rax_15[3] = 0x3f800000
rax_15[5] = data_1439c7a1c.d
rax_15[4] = 0x3f800000
*(rax_15 + 0x18) = 0x3f800000
rax_15[9] = (data_1439c7a1c ^ data_142d3f780).d
rax_15[8] = 0xbf800000
rax_15[0xa] = 0
rax_15[0xb] = 0x3f800000
rax_15[0xd] = data_1439c7a1c.d
rax_15[0xc] = 0xbf800000
*(rax_15 + 0x38) = 0
int64_t* rcx_7 = data_143f0f180
int64_t result = (*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_b8)
return result
