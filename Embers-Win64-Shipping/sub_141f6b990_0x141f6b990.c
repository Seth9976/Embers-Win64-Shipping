// 函数: sub_141f6b990
// 地址: 0x141f6b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char result_1 = *(arg1 + 0xc)
uint32_t result

if (result_1 != 4)
    result = zx.d(result_1)
else
    result = data_1439c7a08

if (result s>= 3 || data_1439c7a69 != 0)
    char rcx = (data_1439c7a34).b
    uint64_t r9_1 = zx.q(*(arg1 + 0x50))
    void* rdi_1 = nullptr
    int128_t var_78 = zx.o(0)
    int64_t* rcx_1 = data_143f0f180
    int32_t var_54_1 = (1 << rcx) - 1
    wchar16 const* const var_48_1 = u"SkyTextureCube"
    int32_t var_68_1 = 1
    int128_t var_64_1 = data_143dbb1e0
    char var_50_1 = 0
    int32_t var_40_1 = 0
    void* const var_b8
    (*(*rcx_1 + 0x5e8))(rcx_1, &var_b8, &data_143f02b98, r9_1, *(arg1 + 0x58), *(arg1 + 0x54), 0, 
        &var_78)
    
    if (arg1 + 0x60 != &var_b8)
        int64_t* rbx_1 = *(arg1 + 0x60)
        *(arg1 + 0x60) = var_b8
        var_b8 = nullptr
        
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
                        uint64_t rdx_2 = zx.q(rax_10)
                        void* const rax_11
                        
                        if (rax_10 != 0)
                            rax_11 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                        else
                            rax_11 = nullptr
                        
                        *(rax_11 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_2.d)
    
    sub_1405d1550(&var_b8)
    sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0x60))
    int64_t* rcx_8 = data_143f0f180
    int32_t var_94_1 = 0x7f7fffff
    int32_t var_a0 = 0x1010102
    int64_t var_9c_1 = 0
    int64_t var_90_1 = 0
    char var_88_1 = 0
    int64_t var_b0
    (*(*rcx_8 + 0x28))(rcx_8, &var_b0, &var_a0)
    
    if (arg1 + 0x18 != &var_b0)
        int64_t* rbx_2 = *(arg1 + 0x18)
        *(arg1 + 0x18) = var_b0
        var_b0 = 0
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                char rax_18
                
                if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_18 = sub_1405949a0()
                
                if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_18 != 0))
                    (**rbx_2)(rbx_2, 1)
                else
                    bool z_2
                    
                    if (0 == *(rbx_2 + 0xc))
                        *(rbx_2 + 0xc) = 1
                        z_2 = true
                    else
                        *(rbx_2 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        int32_t rax_20 = sub_140a20af0()
                        
                        if (rax_20 != 0)
                            rdi_1 = *((zx.q(rax_20) u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_20) & 0x3fff) * 0x18
                        
                        *(rdi_1 + 8) = rbx_2
                        sub_1405a42f0(&data_143f02390, rax_20)
    
    result = sub_1405d1550(&var_b0)

__security_check_cookie(rax_1 ^ &var_f8)
return result
