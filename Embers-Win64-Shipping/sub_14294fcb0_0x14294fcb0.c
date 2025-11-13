// 函数: sub_14294fcb0
// 地址: 0x14294fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int32_t var_68 = 0

if (arg6 != 0)
    int64_t i_1 = arg7
    
    if (i_1 != 0 && arg5 u>= 2 && (arg5 & (arg5 - 1)) == 0)
        int32_t var_88_1
        
        if (i_1 u<= divu.dp.q(0x3fffffff, arg6))
            int64_t rcx_1 = arg6 << 4
            
            if (rcx_1 u> 0x3f || arg5 u< 1 << rcx_1.b)
                int64_t rbp_2 = (arg6 * i_1) << 7
                int32_t var_88_2
                
                if (rbp_2 u> 0x7fffffff)
                    var_88_2 = 0xcb
                else if (arg5 + 2 u<= divu.dp.q(0x1ffffffffffffff, arg6))
                    int64_t r8_2 = ((arg5 + 2) * arg6) << 7
                    
                    if (rbp_2 u<= not.q(r8_2))
                        int64_t rcx_2 = 0x2000000
                        int64_t r14_1 = r8_2 + rbp_2
                        
                        if (arg8 != 0)
                            rcx_2 = arg8
                        
                        if (r14_1 u> rcx_2)
                            sub_1428a5670(6, 0xb5, 0xac, "crypto\evp\pbe_scrypt.c", 0xe8)
                            return 0
                        
                        if (arg9 == 0)
                            return 1
                        
                        int128_t* rax_10 = sub_1428a6730(r14_1)
                        int128_t* r15_1 = rax_10
                        
                        if (rax_10 == 0)
                            sub_1428a5670((rax_10 + 6).d, 0xb5, (rax_10 + 0x41).d, 
                                "crypto\evp\pbe_scrypt.c", 0xf2)
                            return 0
                        
                        int64_t r12_2 = arg6 << 7
                        void* r13_1 = &rax_10[arg6 * i_1 * 8]
                        int32_t var_88_3 = 1
                        int32_t rax_13 = sub_14292a4d0(arg1, arg2, arg3, arg4, 1, &data_1434e91b0, 
                            rbp_2.d, r15_1)
                        int32_t rax_14
                        
                        if (rax_13 != 0)
                            if (i_1 != 0)
                                int128_t* r14_2 = r15_1
                                int64_t i
                                
                                do
                                    var_88_3.q = r12_2 + r13_1
                                    sub_1429504b0(r14_2, arg6, arg5, r13_1, 1, r12_2 * 2 + r13_1)
                                    r14_2 = &r14_2[arg6 * 8]
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                                r15_1 = rax_10
                            
                            rax_14 = sub_14292a4d0(arg1, arg2, r15_1, rbp_2.d, 1, &data_1434e91b0, 
                                arg10, arg9)
                        
                        if (rax_13 == 0 || rax_14 == 0)
                            sub_1428a5670(6, 0xb5, 0xb5, "crypto\evp\pbe_scrypt.c", 0x105)
                        else
                            var_68 = 1
                        
                        sub_1428a6890(r15_1, r14_1, "crypto\evp\pbe_scrypt.c", 0x107)
                        return zx.q(var_68)
                    
                    var_88_2 = 0xdc
                else
                    var_88_2 = 0xd5
                
                sub_1428a5670(6, 0xb5, 0xac, "crypto\evp\pbe_scrypt.c", var_88_2)
                return 0
            
            var_88_1 = 0xb9
        else
            var_88_1 = 0xae
        
        sub_1428a5670(6, 0xb5, 0xac, "crypto\evp\pbe_scrypt.c", var_88_1)

return 0
