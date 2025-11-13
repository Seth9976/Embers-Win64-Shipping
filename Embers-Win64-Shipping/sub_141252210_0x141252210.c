// 函数: sub_141252210
// 地址: 0x141252210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t r15 = arg1[8].d
int32_t r14_1 = r15 & arg3
int64_t rcx = arg1[6]
int32_t rax_6 = (*(arg1 + 0x44) + 1 + arg3) & r15
int64_t var_158 = rcx
uint64_t rdi = zx.q(r15)
int32_t* result

while (true)
    int64_t r15_1 = sx.q(r14_1) << 2
    
    if (arg3 == *(r15_1 + rcx))
        uint64_t* rsi_2 = sx.q(*(arg1[4] + r15_1)) * 0xf8 + *arg1
        
        if (*(arg4 + 0xc0) == rsi_2[0x18].d && *(arg4 + 0xe1) == *(rsi_2 + 0xe1)
                && sub_1412710d0(arg4, rsi_2) != 0)
            void* rax_12 = arg4 + 0x78
            int32_t i_3 = *(rax_12 + 0x38)
            void* rdi_1 = &rsi_2[0xf]
            
            if (i_3 == *(rdi_1 + 0x38))
                void* rcx_3 = *(rdi_1 + 0x30)
                void* rdx_1 = *(rax_12 + 0x30)
                
                if (rcx_3 != 0)
                    rdi_1 = rcx_3
                
                if (rdx_1 != 0)
                    rax_12 = rdx_1
                
                if (i_3 != 0)
                    int64_t r10_2 = rdi_1 - rax_12
                    int32_t i
                    
                    do
                        int32_t rdx_2 = *rax_12
                        int32_t r8 = *rdi_1
                        
                        if (((rdx_2.b ^ r8.b) & 0xf) != 0)
                            goto label_1412523f6
                        
                        if (((rdx_2 ^ r8) & 0xfffffff0) != 0)
                            goto label_1412523f6
                        
                        if (*(rax_12 + 4) != *(r10_2 + rax_12 + 4))
                            goto label_1412523f6
                        
                        rdi_1 += 0xc
                        rax_12 += 0xc
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                if (*(arg4 + 0xe0) == rsi_2[0x1c].b && *(arg4 + 0xb8) == rsi_2[0x17]
                        && *(arg4 + 0xc4) == *(rsi_2 + 0xc4))
                    int32_t rcx_7 = *(arg4 + 0xc8)
                    
                    if (rcx_7 == rsi_2[0x19].d && *(arg4 + 0xcc) == *(rsi_2 + 0xcc))
                        if (rcx_7 == 0)
                        label_1412523db:
                            
                            if (*(arg4 + 0xd0) == rsi_2[0x1a] && *(arg4 + 0xd8) == rsi_2[0x1b].d)
                                goto label_14125257e
                        else
                            if (*(arg4 + 0xd0) == rsi_2[0x1a].d
                                && *(arg4 + 0xd4) == *(rsi_2 + 0xd4))
                            label_14125257e:
                                *arg6 = 1
                                result = arg2
                                *result = *(r15_1 + arg1[4])
                                break
                            
                            if (rcx_7 == 0)
                                goto label_1412523db
            
        label_1412523f6:
            rdi = zx.q(arg1[8].d)
        
        rcx = var_158
    
    r14_1 = (r14_1 + 1) & rdi.d
    
    if (r14_1 == rax_6)
        if ((sx.q(arg1[1].d) - sx.q(arg1[3].d)) * 5 u>= zx.q((rdi * 3).d))
            int64_t r14_3 = arg1[4]
            __builtin_memset(&arg1[4], 0, 0x20)
            int64_t rsi_3 = arg1[6]
            uint64_t r15_2 = zx.q(arg1[8].d)
            *(arg1 + 0x44) = 0
            int32_t rax_22 = ((r15_2 << 1) + 1).d
            arg1[8].d = rax_22
            
            if (rax_22 + 1 s> *(arg1 + 0x2c))
                sub_1405dadb0(&arg1[4], rax_22 + 1)
                rax_22 = arg1[8].d
            
            int32_t rax_24 = rax_22 + 1 + arg1[5].d
            arg1[5].d = rax_24
            
            if (rax_24 s> *(arg1 + 0x2c))
                sub_1405a4cf0(&arg1[4])
            
            int32_t rax_25 = arg1[8].d
            
            if (rax_25 + 1 s> *(arg1 + 0x3c))
                sub_1405dadb0(&arg1[6], rax_25 + 1)
                rax_25 = arg1[8].d
            
            int64_t rdi_2 = sx.q(arg1[7].d)
            int32_t rax_26 = rax_25 + 1 + rdi_2.d
            arg1[7].d = rax_26
            
            if (rax_26 s> *(arg1 + 0x3c))
                sub_1405a4cf0(&arg1[6])
            
            int64_t rcx_16
            int64_t rdi_4
            
            if (rax_25 != 0xffffffff)
                rdi_4, rcx_16 = __memfill_u32(arg1[6] + (rdi_2 << 2), 0x80000000, zx.q(rax_25 + 1))
            int32_t i_1 = 0
            
            do
                int64_t i_2 = sx.q(i_1)
                int32_t r8_1 = *(rsi_3 + (i_2 << 2))
                
                if (r8_1 != 0x80000000)
                    sub_141270e40(arg1, *(r14_3 + (i_2 << 2)), r8_1)
                
                i_1 += 1
            while (i_1 u<= r15_2.d)
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
            
            if (r14_3 != 0)
                sub_140a74f90(r14_3)
        
        int64_t rsi_4
        
        if (arg1[3].d s<= 0)
            rsi_4 = zx.q(arg1[1].d)
            void var_138
            sub_14125be70(&var_138, arg4)
            int64_t rdi_8 = sx.q(arg1[1].d)
            int32_t rcx_25 = *arg5
            int32_t rax_33 = (rdi_8 + 1).d
            arg1[1].d = rax_33
            
            if (rax_33 s> *(arg1 + 0xc))
                sub_1412955f0(arg1)
            
            void* rdi_10 = rdi_8 * 0xf8 + *arg1
            sub_14125be70(rdi_10, &var_138)
            *(rdi_10 + 0xe8) = rcx_25
            *(rdi_10 + 0xf0) = arg3
            int64_t var_90
            
            if (var_90 != 0)
                sub_140a74f90(var_90)
            
            int16_t var_c6
            int64_t var_118
            
            if (var_c6 u> 0x50)
                j_sub_140a74f90(var_118)
            int16_t var_c6_1 = 0
            int64_t var_118_1 = 0
            int64_t var_128
            
            if (var_128 != 0)
                sub_140a74f90(var_128)
        else
            int64_t rdi_5 = sx.q(arg1[3].d)
            rsi_4 = sx.q(*(arg1[2] + (rdi_5 << 2) - 4))
            arg1[3].d = (rdi_5 - 1).d
            sub_1405dac90(&arg1[2])
            void* rdi_7 = rsi_4 * 0xf8 + *arg1
            sub_14125be70(rdi_7, arg4)
            *(rdi_7 + 0xe8) = *arg5
            *(rdi_7 + 0xf0) = arg3
        
        sub_141270e40(arg1, rsi_4.d, arg3)
        *arg6 = 0
        result = arg2
        *result = rsi_4.d
        break

__security_check_cookie(rax_1 ^ &var_178)
return result
