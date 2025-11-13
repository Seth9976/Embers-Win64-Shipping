// 函数: sub_14292a4d0
// 地址: 0x14292a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x98)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char* const rsi = arg1
int128_t* rbx = arg8
int32_t var_a4 = arg4
int64_t var_a0 = arg3
uint64_t rdi = zx.q(arg2)
int32_t r13 = 1
int32_t rax_2 = sub_1428916c0(arg6)
int64_t r12 = sx.q(rax_2)
int64_t result

if (rax_2 s< 0)
    result = 0
else
    int64_t* rax_3 = sub_1428be080()
    
    if (rax_3 == 0)
        result = 0
    else
        if (rsi == 0)
            rsi = &data_1437020ab
            rdi = 0
        else if (rdi.d == 0xffffffff)
            rdi = -1
            
            do
                rdi += 1
            while (rsi[rdi] != 0)
        
        if (sub_1428be280(rax_3, rsi, rdi.d, arg6, nullptr) == 0)
            sub_1428be000(rax_3)
            result = 0
        else
            int64_t* rax_5 = sub_1428be080()
            
            if (rax_5 == 0)
                sub_1428be000(rax_3)
                result = 0
            else
                int32_t rax_6 = arg7
                
                if (rax_6 == 0)
                label_14292a7e6:
                    sub_1428be000(rax_5)
                    sub_1428be000(rax_3)
                    result = 1
                else
                    while (true)
                        char var_a5_1 = r13.b
                        int32_t rdi_1 = rax_6
                        
                        if (rax_6 s> r12.d)
                            rdi_1 = r12.d
                        
                        uint8_t var_a8_1 = (r13 u>> 0x18).b
                        uint8_t var_a7_1 = (r13 u>> 0x10).b
                        uint8_t var_a6_1 = (r13 u>> 8).b
                        void var_98
                        
                        if (sub_1428bdee0(rax_5, rax_3) != 0 && sub_1428be4d0(rax_5) != 0
                                && sub_1428be4d0(rax_5) != 0
                                && sub_1428be1d0(rax_5, &var_98, nullptr) != 0)
                            int64_t r14_1 = sx.q(rdi_1)
                            memcpy(rbx, &var_98, r14_1.d)
                            int32_t rbp_1 = 1
                            
                            if (arg5 s> 1)
                                do
                                    if (sub_1428bdee0(rax_5, rax_3) == 0)
                                        goto label_14292a7fd
                                    
                                    if (sub_1428be4d0(rax_5) == 0)
                                        goto label_14292a7fd
                                    
                                    if (sub_1428be1d0(rax_5, &var_98, nullptr) == 0)
                                        goto label_14292a7fd
                                    
                                    void* i = nullptr
                                    
                                    if (rdi_1 s> 0 && rdi_1 u>= 0x40)
                                        int64_t rcx_10 = sx.q(rdi_1 - 1)
                                        
                                        if (rbx u> &var_98 + rcx_10 || rcx_10 + rbx u< &var_98)
                                            int32_t rcx_12 = rdi_1 & 0x8000003f
                                            
                                            if (rcx_12 s< 0)
                                                rcx_12 = ((rcx_12 - 1) | 0xffffffc0) + 1
                                            
                                            int128_t* rax_24 = rbx
                                            
                                            do
                                                int128_t zmm0_1 = *rax_24
                                                i += 0x40
                                                int128_t zmm1_1 = *(&var_98 - rbx + rax_24)
                                                rax_24 = &rax_24[4]
                                                rax_24[-4] = zmm1_1 ^ zmm0_1
                                                void var_88
                                                rax_24[-3] ^= *(&var_88 - rbx + rax_24 - 0x40)
                                                void var_78
                                                rax_24[-2] ^= *(&var_78 - rbx + rax_24 - 0x40)
                                                void var_68
                                                rax_24[-1] ^= *(&var_68 - rbx + rax_24 - 0x40)
                                            while (i s< sx.q(rdi_1 - rcx_12))
                                    
                                    if (i s< r14_1)
                                        void* rax_25 = i + rbx
                                        void* i_2 = r14_1 - i
                                        void* i_1
                                        
                                        do
                                            *rax_25 ^= *(&var_98 - rbx + rax_25)
                                            rax_25 += 1
                                            i_1 = i_2
                                            i_2 -= 1
                                        while (i_1 != 1)
                                    
                                    rbp_1 += 1
                                while (rbp_1 s< arg5)
                            
                            rbx += r14_1
                            rax_6 = arg7 - rdi_1
                            r13 += 1
                            arg7 = rax_6
                            
                            if (rax_6 == 0)
                                goto label_14292a7e6
                            
                            continue
                        
                    label_14292a7fd:
                        sub_1428be000(rax_5)
                        break
                    
                    sub_1428be000(rax_3)
                    result = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result
