// 函数: sub_142bc5a10
// 地址: 0x142bc5a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rax_2 = *(arg1 + 8)
int32_t rdi = arg3 - 1
void* var_60 = rax_2

if (arg3 == 0)
    rdi = arg3

int32_t result

if (rax_2 == 0 || rdi u>= *(rax_2 + 0x218))
    result = 6
else
    if ((arg4.b & 9) != 0)
        goto label_142bc5a87
    
    result = sub_142bc7c10(arg1, arg2, rdi, (arg4 u>> 0x16).b & 1, arg5)
    
    if (result != 0)
        rax_2 = var_60
    label_142bc5a87:
        
        if (not(test_bit(arg4, 0xe)))
            void* rcx_2 = (zx.q(rdi) << 4) + *(rax_2 + 0x228)
            __builtin_strncpy(arg1 + 0x60, "ltuo", 4)
            int32_t i = 0
            *(arg1 + 0x98) = 0
            int32_t rbx_1 = *(rcx_2 + 8)
            int32_t rdi_1 = *(rcx_2 + 0xc)
            int64_t* rsi_1 = *(rax_2 + 0xa0)
            void* var_50 = rcx_2
            int32_t r14_1 = *(rax_2 + 0x110)
            int512_t zmm1 = sub_142b92d20(*(arg1 + 0x120))
            *(arg1 + 0x110) = 0
            result = sub_142bc6550(arg1 + 0xf8, rsi_1, r14_1, rdi_1, zmm1, rbx_1)
            
            if (result == 0)
                void* rcx_5 = *(arg1 + 0x120)
                int32_t rdx_1
                rdx_1.b = not.b(arg4.b)
                rdx_1.b &= 1
                *(arg1 + 0x98) = *(rcx_5 + 0x18)
                *(arg1 + 0xa8) = *(rcx_5 + 0x28)
                void* rcx_6 = arg2
                *(arg1 + 0xb8) = *(rcx_5 + 0x38)
                int32_t rax_5 = (*(arg1 + 0xb8) & 0xfffffffe) | 4
                *(arg1 + 0xb8) = rax_5
                
                if (rcx_6 != 0 && *(rcx_6 + 0x1a) u< 0x18)
                    *(arg1 + 0xb8) = rax_5 | 0x100
                
                void* rax_7 = var_50
                *(arg1 + 0x40) = 0
                *(arg1 + 0x4c) = 0
                int32_t r8_2 = *(var_60 + 0x18c)
                int32_t r9_2 = *(var_60 + 0x188)
                uint32_t rax_8 = *(rax_7 + 4)
                
                if (r8_2 != r9_2)
                    rax_8 = sub_142b93dd0(rax_8, r9_2, r8_2)
                    rcx_6 = arg2
                
                if ((*(var_60 + 0x1a0) & 1) == 0)
                    *(arg1 + 0x40) = rax_8
                else
                    *(arg1 + 0x4c) = rax_8
                
                *(arg1 + 0x50) = *(arg1 + 0x40)
                *(arg1 + 0x54) = *(arg1 + 0x4c)
                *(arg1 + 0x44) = 0
                
                if (rdx_1.b != 0)
                    int32_t rdi_2 = *(rcx_6 + 0x1c)
                    int32_t rsi_2 = *(rcx_6 + 0x20)
                    int32_t* rbx_3 = *(arg1 + 0xa0)
                    
                    if (0 s< *(arg1 + 0x9a))
                        do
                            int32_t rax_11 = sub_142b93e80(*rbx_3, rdi_2)
                            int32_t rcx_9 = rbx_3[1]
                            *rbx_3 = rax_11
                            rbx_3[1] = sub_142b93e80(rcx_9, rsi_2)
                            rbx_3 = &rbx_3[2]
                            i += 1
                        while (i s< sx.d(*(arg1 + 0x9a)))
                    
                    int32_t rax_14 = sub_142b93e80(*(arg1 + 0x40), rdi_2)
                    int32_t rcx_11 = *(arg1 + 0x4c)
                    *(arg1 + 0x40) = rax_14
                    *(arg1 + 0x4c) = sub_142b93e80(rcx_11, rsi_2)
                
                sub_142b94c20(arg1 + 0x98, &var_50)
                int32_t rcx_13 = var_50.d
                *(arg1 + 0x38) = rcx_13
                int32_t var_48
                *(arg1 + 0x30) = var_48 - rcx_13
                int32_t var_44
                int32_t rax_19 = var_44 - var_50:4.d
                *(arg1 + 0x34) = rax_19
                *(arg1 + 0x3c) = var_44 - rax_19
        else
            result = 6

__security_check_cookie(rax_1 ^ &var_98)
return result
