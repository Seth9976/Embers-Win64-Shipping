// 函数: sub_142916a60
// 地址: 0x142916a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (sub_1406938b0(arg1) != 0x72)
    if (sub_1429167f0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) != 0)
        return 1
else
    uint64_t r14_2 = arg3 u>> 1
    uint64_t r13_1 = (zx.q(arg3.d) & 1) + r14_2
    
    if (sub_1429167f0(&data_143505b10, arg2, r13_1, arg4, arg5, arg6, arg7, arg8) != 0)
        int64_t rax_3 = sub_1428a6730(arg8)
        
        if (rax_3 != 0)
            if (sub_1429167f0(&data_1434e9110, r14_2 + arg2, r13_1, arg4, arg5, arg6, rax_3, arg8)
                    != 0)
                void* i = nullptr
                
                if (arg8 != 0)
                    if (arg8 u>= 0x40 && (arg7 u> arg8 - 1 + rax_3 || arg7 - 1 + arg8 u< rax_3))
                        int128_t* rax_9 = arg7
                        int128_t* rdx_8 = rax_3 - arg7
                        
                        do
                            int128_t zmm0_1 = *rax_9
                            i += 0x40
                            int128_t zmm1_1 = *(rdx_8 + rax_9)
                            rax_9 = &rax_9[4]
                            rax_9[-4] = zmm1_1 ^ zmm0_1
                            rax_9[-3] ^= *(rdx_8 + rax_9 - 0x30)
                            rax_9[-2] ^= *(rdx_8 + rax_9 - 0x20)
                            rax_9[-1] ^= *(rdx_8 + rax_9 - 0x10)
                        while (i u< (arg8 & 0xffffffffffffffc0))
                    
                    if (i u< arg8)
                        void* rax_10 = i + arg7
                        void* i_2 = arg8 - i
                        void* i_1
                        
                        do
                            *rax_10 ^= *(rax_10 + rax_3 - arg7)
                            rax_10 += 1
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                
                sub_1428a6890(rax_3, arg8, "crypto\kdf\tls1_prf.c", 0x10f)
                return 1
            
            sub_1428a6890(rax_3, arg8, "crypto\kdf\tls1_prf.c", 0x10a)
        else
            sub_1428a5670((rax_3 + 0x34).d, (rax_3 + 0x6f).d, (rax_3 + 0x41).d, 
                "crypto\kdf\tls1_prf.c", 0x105)

return 0
