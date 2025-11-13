// 函数: sub_14292ac70
// 地址: 0x14292ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rdi = 0
int64_t* rbx = nullptr

if (sub_140687ad0(arg1) != 0)
    int64_t* rax_3 = sub_1428cd3c0(&data_1435376e0, arg4)
    rbx = rax_3
    
    if (rax_3 != 0)
        int32_t rax_4 = sub_142890ee0(arg1)
        int32_t* rdx_1 = rbx[4]
        int64_t rsi_1 = sx.q(rax_4)
        int64_t var_90
        int32_t rax_5
        
        if (rdx_1 != 0)
            rax_5 = sub_1428e48c0(&var_90, rdx_1)
        
        void var_88
        int64_t var_98
        
        if (rdx_1 != 0 && (rax_5 == 0 || var_90 != rsi_1))
            sub_1428a5670(6, 0xb4, 0x7b, "crypto\asn1\p5_scrypt.c", 0xf6)
        else if (sub_1428e48c0(&var_98, rbx[1]) == 0)
        label_14292ae42:
            sub_1428a5670(6, 0xb4, 0xab, "crypto\asn1\p5_scrypt.c", 0x100)
        else
            int64_t var_a0
            
            if (sub_1428e48c0(&var_a0, rbx[2]) == 0)
                goto label_14292ae42
            
            int64_t var_a8
            
            if (sub_1428e48c0(&var_a8, rbx[3]) == 0)
                goto label_14292ae42
            
            int64_t rax_9 = var_a8
            int64_t var_c0
            __builtin_memset(&var_c0, 0, 0x14)
            int32_t var_d8
            var_d8.q = var_98
            int128_t* var_b8
            int32_t var_b0
            
            if (sub_14294fcb0(nullptr, 0, 0, 0, var_d8, var_a0, rax_9, var_c0, var_b8, var_b0) == 0)
                goto label_14292ae42
            
            int32_t* rax_13 = *rbx
            var_d8.q = var_98
            
            if (sub_14294fcb0(arg2, arg3, *(rax_13 + 8), *rax_13, var_d8, var_a0, var_a8, 0, 
                    &var_88, rsi_1.d) != 0)
                uint32_t* var_d0_2
                var_d0_2.d = arg5
                var_d8.q = 0
                rdi = sub_142892480(arg1, nullptr, nullptr, &var_88, var_d8, var_d0_2.d)
        
        if (rsi_1 != 0)
            sub_1428b8960(&var_88, rsi_1)
    else
        sub_1428a5670((rax_3 + 6).d, 0xb4, (rax_3 + 0x72).d, "crypto\asn1\p5_scrypt.c", 0xe9)
else
    sub_1428a5670(6, 0xb4, 0x83, "crypto\asn1\p5_scrypt.c", 0xe0)

sub_1428c3d60(rbx, &data_1435376e0)
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rdi)
