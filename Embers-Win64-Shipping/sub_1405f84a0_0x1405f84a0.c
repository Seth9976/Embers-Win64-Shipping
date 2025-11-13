// 函数: sub_1405f84a0
// 地址: 0x1405f84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void** var_88 = arg2
void* rdx = *(arg1 + 0x68)

if (rdx == 0 || *(rdx + 0x60) != *(arg1 + 0x10) || *(rdx + 0x64) != *(arg1 + 0x14))
    int128_t var_68 = zx.o(0)
    int32_t var_58_1 = 1
    int128_t var_54_1 = data_143dbb1e0
    int32_t var_44_1 = (1 << (data_1439c7a34).b) - 1
    char var_40_1 = 0
    void* rbp_1 = nullptr
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int64_t* rcx_2 = data_143f0f180
    (*(*rcx_2 + 0x560))(rcx_2, &var_88, &data_143f02b98, zx.q(*(arg1 + 0x10)), *(arg1 + 0x14), 
        *(arg1 + 0x70), 1, 1, 0x4100, &var_68)
    
    if (arg1 + 0x68 != &var_88)
        int64_t* rbx_1 = *(arg1 + 0x68)
        *(arg1 + 0x68) = var_88
        var_88 = nullptr
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_8
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_8 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
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
                        int32_t rax_10 = sub_140a20af0()
                        
                        if (rax_10 != 0)
                            rbp_1 = *(&data_143cf0bf8 + (zx.q(rax_10 u>> 0xe) << 3))
                                + (zx.q(rax_10) & 0x3fff) * 0x18
                        
                        *(rbp_1 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rax_10)
    
    sub_1405d1550(&var_88)
    void* rax_14 = *(arg1 + 0x68)
    *arg2 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
else
    *arg2 = rdx
    
    if (rdx != 0)
        *(rdx + 8) += 1

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
