// 函数: sub_14242e620
// 地址: 0x14242e620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* rcx = *(arg1 + 0xb8)
int32_t rbp = arg2
int64_t result

if (rcx == 0)
    result = 0
else
    int32_t rdi_1 = rcx[3]
    
    if (rdi_1 == 0)
        result = 0
    else
        uint32_t rax_2 = zx.d(*(arg1 + 0x60))
        uint32_t var_70 = 0
        uint32_t var_74 = 0
        uint32_t var_78 = 0
        int32_t rax_5 = rcx[8] - arg2
        
        if (rax_5 s<= 0)
            rax_5 = 0
        
        sub_141998290(*rcx, rcx[1], rcx[2] & 0x3fffffff, rdi_1, rax_5.b, &var_70, &var_74, &var_78)
        void* rax_6 = *(arg1 + 0xb8)
        char rcx_2 = (data_1439c7a34).b
        uint64_t r9_2 = zx.q(var_78)
        int32_t var_6c
        __builtin_memset(&var_6c, 0, 0x14)
        int64_t* rcx_3 = data_143f0f180
        int32_t var_30_1 = *(rax_6 + 0x10)
        
        if (rbp s<= 1)
            rbp = 1
        
        int32_t var_58_1 = 1
        int128_t var_54_1 = data_143dbb1e0
        int32_t var_44_1 = (1 << rcx_2) - 1
        char var_40_1 = 0
        int64_t var_38_1 = 0
        uint32_t* var_98_1
        var_98_1.d = ((((rax_2 & 2) | 0x4000) * 2) | (rax_2 & 1)) << 4
        uint32_t* var_a0_1
        var_a0_1.d = rbp
        int32_t var_a8_1
        var_a8_1.b = rdi_1.b
        int128_t var_68
        result = (*(*rcx_3 + 0x1d8))(rcx_3, zx.q(var_70), zx.q(var_74), r9_2, var_a8_1, var_a0_1, 
            var_98_1, &var_68, &var_6c)

__security_check_cookie(rax_1 ^ &var_c8)
return result
