// 函数: sub_142413460
// 地址: 0x142413460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result

if (data_1439c7a17 != 0)
    char rax_1 = *(arg1 + 0xc)
    uint32_t rax_2
    
    if (rax_1 != 4)
        rax_2 = zx.d(rax_1)
    else
        rax_2 = data_1439c7a08
    
    char rcx = (data_1439c7a34).b
    uint64_t r9_1 = zx.q(*(arg1 + 0x18))
    void* rdi_1 = nullptr
    char var_30_1 = 0
    int32_t var_48_1 = 1
    int128_t var_58 = zx.o(0)
    int64_t* rcx_1 = data_143f0f180
    int32_t var_34_1 = (1 << rcx) - 1
    int64_t var_28_1 = 0
    int32_t rdx_3 = 0x10008
    
    if (rax_2 s< 3)
        rdx_3 = 0
    
    int128_t var_44_1 = data_143dbb1e0
    int32_t var_20_1 = 0
    void var_70
    (*(*rcx_1 + 0x580))(rcx_1, &var_70, &data_143f02b98, r9_1, *(arg1 + 0x1c), *(arg1 + 0x20), 0xa, 
        1, rdx_3, &var_58)
    sub_1405d1600(arg1 + 0x10, &var_70)
    sub_14081c9d0(&var_70)
    char result_2 = *(arg1 + 0xc)
    
    if (result_2 != 4)
        result = zx.q(result_2)
    else
        result = zx.q(data_1439c7a08)
    
    if (result.d s>= 3)
        int64_t* rcx_4 = data_143f0f180
        int64_t var_78
        (*(*rcx_4 + 0x5a0))(rcx_4, &var_78, &data_143f02b98, *(arg1 + 0x10), 0)
        
        if (arg1 + 0x48 != &var_78)
            int64_t* rbx_1 = *(arg1 + 0x48)
            *(arg1 + 0x48) = var_78
            var_78 = 0
            
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
                                rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_10) u>> 0xe << 3))
                                    + (zx.q(rax_10) & 0x3fff) * 0x18
                            
                            *(rdi_1 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rax_10)
        
        result = sub_1405d1550(&var_78)

__security_check_cookie(result_1 ^ &var_c8)
return result
