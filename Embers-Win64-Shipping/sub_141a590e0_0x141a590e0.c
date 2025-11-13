// 函数: sub_141a590e0
// 地址: 0x141a590e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_158
int64_t rax_2 = __security_cookie ^ &var_158
uint128_t zmm0 = zx.o(*arg4)
int32_t r8 = arg4[1].d
void* rdi_1 = arg1
uint64_t var_128 = arg6
uint64_t var_118_1 = zmm0.q
int32_t var_110_1 = r8
void* rax
int32_t* rdx

if (arg2 == 2)
    int32_t* rax_3 = *(arg1 + 0xc0)
    rdx = arg1
    
    if (rax_3 != 0)
        rdx = rax_3
    
    rax = &rdx[sx.q(*(arg1 + 0xc8)) * 6]

if (arg2 != 2 || rdx == rax)
label_141a591ab:
    void* rsi_1 = rdi_1 + 0xd0
    void* rax_5 = *(rsi_1 + 0x40)
    void* r8_1 = rsi_1
    
    if (rax_5 != 0)
        r8_1 = rax_5
    
    void* rcx_2 = r8_1
    void* rdx_1 = r8_1 + (sx.q(*(rsi_1 + 0x48)) << 3)
    int32_t rcx_7
    
    if (r8_1 != rdx_1)
        while (*rcx_2 != arg3)
            rcx_2 += 8
            
            if (rcx_2 == rdx_1)
                goto label_141a591ed
        
        rcx_7 = ((rcx_2 - r8_1) s>> 3).d
    
    uint128_t var_e8
    int128_t var_d8
    char var_c8
    
    if (r8_1 == rdx_1 || rcx_7 == 0xffffffff)
    label_141a591ed:
        (*(*arg5 + 0x10))(arg5, &var_e8)
        
        if ((var_c8 & 1) != 0)
            int64_t r14_2 = sx.q(*(rsi_1 + 0x48))
            int32_t rax_7 = (r14_2 + 1).d
            *(rsi_1 + 0x48) = rax_7
            
            if (rax_7 s> *(rsi_1 + 0x4c))
                sub_1407752f0(rsi_1, r14_2.d)
            
            void* rax_8 = *(rsi_1 + 0x40)
            
            if (rax_8 != 0)
                rsi_1 = rax_8
            
            char var_a0
            char rcx_5 = (var_a0 & 0xfe) | 2
            char var_a0_1 = rcx_5
            *(rsi_1 + (r14_2 << 3)) = arg3
            uint128_t var_c0
            int128_t zmm1
            
            if ((var_c8 & 1) == 0)
                int128_t var_b0
                zmm1 = var_b0
                zmm0 = var_c0
            else
                zmm0 = var_e8
                char rax_9 = var_c8 & 0xfe
                zmm1 = var_d8
                var_c8 = rax_9
                rcx_5 = (rcx_5 ^ ((rax_9 ^ rcx_5) & 2)) | 1
                var_a0_1 = rcx_5
                var_c0 = zmm0
                int128_t var_b0_1 = zmm1
            
            int32_t r8_3 = 0
            char var_70
            char rdx_7 = var_70 & 0xfe
            int32_t var_98 = 0
            char var_70_1 = rdx_7 | 2
            uint128_t var_90
            int128_t var_80
            
            if ((rcx_5 & 1) != 0)
                rcx_5 &= 0xfe
                var_a0_1 = rcx_5
                var_70_1 = (((rcx_5 ^ rdx_7) & 2) ^ rdx_7) | 1
                var_90 = zmm0
                var_80 = zmm1
            
            int64_t rsi_2 = sx.q(*(rdi_1 + 0x128))
            char var_48
            char rax_18 = (var_48 & 0xfe) | 2
            int32_t rax_19 = (rsi_2 + 1).d
            *(rdi_1 + 0x128) = rax_19
            
            if (rax_19 s> *(rdi_1 + 0x12c))
                sub_1407755b0(rdi_1 + 0x120)
                r8_3 = var_98
            
            int32_t* rcx_16 = rsi_2 * 0x58 + *(rdi_1 + 0x120)
            *rcx_16 = r8_3
            char rax_20 = (rcx_16[0xa].b & 0xfe) | 2
            rcx_16[0xa].b = rax_20
            
            if ((var_70_1 & 1) != 0)
                rcx_16[0xa].b = rax_20 | 1
                char rax_21 = var_70_1 & 0xfe
                char var_70_2 = rax_21
                rcx_16[0xa].b &= 0xfd
                rcx_16[0xa].b |= rax_21 & 2
                *(rcx_16 + 8) = var_90
                *(rcx_16 + 0x18) = var_80
            
            char rax_22 = (rcx_16[0x14].b & 0xfe) | 2
            rcx_16[0x14].b = rax_22
            
            if ((rax_18 & 1) != 0)
                rcx_16[0x14].b = rax_22 | 1
                char rax_23 = rax_18 & 0xfe
                char var_48_2 = rax_23
                rcx_16[0x14].b &= 0xfd
                rcx_16[0x14].b |= rax_23 & 2
                uint128_t var_68
                *(rcx_16 + 0x30) = var_68
                int128_t var_58
                *(rcx_16 + 0x40) = var_58
            
            sub_141a32310(&var_98)
            
            if ((var_a0_1 & 1) != 0)
                uint128_t* rcx_18 = &var_c0
                
                if ((var_a0_1 & 2) == 0)
                    rcx_18 = var_c0.q
                
                (**rcx_18)(rcx_18, 0)
                
                if ((var_a0_1 & 2) == 0)
                    sub_140a74f90(var_c0.q)
            
            if (arg2 == 2)
                uint64_t rdx_9 = var_128
                int64_t rcx_20 = sx.q(*(rdi_1 + 0x128)) * 0x58
                uint64_t var_f8 = *arg4
                int64_t rax_27 = *(rdi_1 + 0x120)
                *(rcx_20 + rax_27 - 0x58) += 1
                int32_t var_f0_1 = arg4[1].d
                sub_141a466b0(&var_f8, rdx_9)
            
            (*(*arg5 + 8))(arg5)
            rax = zx.q(var_c8)
            
            if ((rax.b & 1) != 0)
                uint128_t* rcx_23 = &var_e8
                
                if ((rax.b & 2) == 0)
                    rcx_23 = var_e8.q
                
                rax.b &= 0xfe
                char var_c8_2 = rax.b
                (**rcx_23)(rcx_23, 0)
                
                if ((var_c8_2 & 2) == 0)
                    sub_140a74f90(var_e8.q)
            
            if (arg2 == 2)
                goto label_141a5950d
    else if (arg2 == 2)
        int32_t* rbx_3 = sx.q(rcx_7) * 0x58 + *(rdi_1 + 0x120)
        
        if (*rbx_3 != 0)
        label_141a59340:
            zmm0 = zx.o(*arg4)
            int32_t rax_16 = arg4[1].d
            *rbx_3 += 1
            var_128 = zmm0.q
            int32_t var_120_1 = rax_16
            sub_141a466b0(&var_128, arg6)
        label_141a5950d:
            int64_t rbx_5 = sx.q(*(rdi_1 + 0xc8))
            int32_t rax_31 = (rbx_5 + 1).d
            *(rdi_1 + 0xc8) = rax_31
            
            if (rax_31 s> *(rdi_1 + 0xcc))
                sub_141a63ee0(rdi_1, rbx_5.d)
            
            rax = *(rdi_1 + 0xc0)
            int64_t rcx_26 = rbx_5 * 3
            
            if (rax != 0)
                rdi_1 = rax
            
            *(rdi_1 + (rcx_26 << 3)) = var_118_1.o
            *(rdi_1 + (rcx_26 << 3) + 0x10) = arg3
        else
            (*(*arg5 + 0x10))(arg5, &var_e8)
            char rdx_5 = var_c8
            
            if ((rdx_5 & 1) != 0)
                char rax_12 = rbx_3[0x14].b
                
                if ((rax_12 & 1) != 0)
                    void* rcx_9 = &rbx_3[0xc]
                    
                    if ((arg2 & rax_12) == 0)
                        rcx_9 = *(rbx_3 + 0x30)
                    
                    rbx_3[0x14].b = rax_12 & 0xfe
                    (**rcx_9)(rcx_9, 0)
                    
                    if ((rbx_3[0x14].b & 2) == 0)
                        sub_140a74f90(*(rbx_3 + 0x30))
                    
                    rdx_5 = var_c8
                
                if ((rdx_5 & 1) != 0)
                    rdx_5 &= 0xfe
                    rbx_3[0x14].b = (((rdx_5 ^ rbx_3[0x14].b) & 2) ^ rbx_3[0x14].b) | 1
                    *(rbx_3 + 0x30) = var_e8
                    *(rbx_3 + 0x40) = var_d8
                    
                    if ((rdx_5 & 1) != 0)
                        uint128_t* rcx_11 = &var_e8
                        
                        if ((rdx_5 & 2) == 0)
                            rcx_11 = var_e8.q
                        
                        (**rcx_11)(rcx_11, 0)
                        
                        if ((rdx_5 & 2) == 0)
                            sub_140a74f90(var_e8.q)
                
                goto label_141a59340
else
    while (*(rdx + 0x10) != arg3 || rdx[1] != var_118_1:4.d || *rdx != var_118_1.d || rdx[2] != r8)
        rdx = &rdx[6]
        
        if (rdx == rax)
            goto label_141a591ab

__security_check_cookie(rax_2 ^ &var_158)
