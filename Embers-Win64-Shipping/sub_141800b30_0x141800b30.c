// 函数: sub_141800b30
// 地址: 0x141800b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t r12 = sx.q(arg3)
int64_t var_178
void var_168

if (r12.d u<= 6)
    switch (r12)
        case 0
            uint64_t rsi_1 = 0x3ff
            
            if (arg5 u<= 0x3ff)
                rsi_1 = arg5
            
            uint64_t rax_2 = memchr(arg4, 0, rsi_1)
            void* rdx_1 = nullptr
            void* var_68_1 = nullptr
            
            if (rax_2 != 0)
                rsi_1 = zx.q(rax_2.d - arg4.d)
            
            int32_t rbx_1
            void* rdi_2
            
            if (arg4 == 0)
                rbx_1 = 0
                int64_t var_60_2 = 0
                int32_t var_58_2 = 0
                rdi_2 = nullptr
            else
                int32_t rcx_5 = 0
                
                if (rsi_1.d s> 0 && arg4[sx.q(rsi_1.d) - 1] == 0)
                    rcx_5 = 1
                    rsi_1 = zx.q(rsi_1.d - 1)
                
                int32_t rdi_1 = rcx_5 + rsi_1.d
                int32_t var_58_1 = rsi_1.d
                
                if (rdi_1 u> 0x80 && rdi_1 != 0)
                    void* rax_4 = sub_140a84c80(0, sx.q(rdi_1) * 2, 0)
                    rdx_1 = rax_4
                    var_68_1 = rax_4
                
                void* rcx_6 = &var_168
                
                if (rdx_1 != 0)
                    rcx_6 = rdx_1
                
                sub_1405a7220(rcx_6, rdi_1, arg4, rdi_1, 0x3f)
                rbx_1 = var_58_1
                rdi_2 = rcx_6
            
            var_178 = 0
            int32_t rdx_5 = 0
            int32_t var_170_1 = 0
            int32_t rcx_7 = 0
            int32_t var_16c_1 = 0
            
            if (rdi_2 != 0 && *rdi_2 != 0 && rbx_1 s> 0)
                if (rbx_1 + 1 s> 0)
                    sub_1405947f0(&var_178, rbx_1 + 1)
                    rcx_7 = var_16c_1
                    rdx_5 = var_170_1
                
                int32_t rax_7 = rbx_1 + 1 + rdx_5
                var_170_1 = rax_7
                
                if (rax_7 s> rcx_7)
                    sub_140594770(&var_178)
                
                UnDecorator::getReferenceType(var_178, rdi_2, rbx_1 * 2)
                *(var_178 + (sx.q(var_170_1) << 1) - 2) = 0
            
            sub_140a306e0(&var_178, &data_142d576a0, &data_142d40450, 0)
            sub_140a306e0(&var_178, &data_142e51e14, &data_142d40450, 0)
            
            if (*(arg1 + 0x450) s> 0)
                void* rbx_5 = ((sx.q(*(arg1 + 0x12c)) + 0x13) << 4) + arg1
                
                if (rbx_5 != &var_178)
                    int64_t rcx_14 = *rbx_5
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    *rbx_5 = var_178
                    var_178 = 0
                    *(rbx_5 + 8) = var_170_1
                    *(rbx_5 + 0xc) = var_16c_1
                    var_170_1.q = 0
                
                *(arg1 + 0x450)
                *(arg1 + 0x12c) = mods.dp.d(sx.q(*(arg1 + 0x12c) + 1), *(arg1 + 0x450))
            
            int64_t rcx_15 = var_178
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)
        case 2
            int32_t rsi_2 = 0x3ff
            int32_t rcx_17 = 0
            
            if (arg5 u<= 0x3ff)
                rsi_2 = arg5.d
            
            if (rsi_2 - 4 s>= 0)
                int64_t i = 0
                
                do
                    if (arg4[i] == 0xd && arg4[i + 1] == 0xa && arg4[i + 2] == 0xd
                            && arg4[i + 3] == 0xa)
                        rsi_2 = rcx_17
                        break
                    
                    rcx_17 += 1
                    i += 1
                while (i s<= sx.q(rsi_2 - 4))
            
            if (rsi_2 s<= 0)
            label_141800e0e:
                void* rdx_13 = nullptr
                void* var_68_2 = nullptr
                int32_t rbx_6
                void* rdi_5
                
                if (arg4 == 0)
                    rbx_6 = 0
                    int64_t var_60_4 = 0
                    int32_t var_58_4 = 0
                    rdi_5 = nullptr
                else
                    int32_t rcx_20 = 0
                    
                    if (rsi_2 s> 0 && arg4[sx.q(rsi_2) - 1] == 0)
                        rcx_20 = 1
                        rsi_2 -= 1
                    
                    int32_t rdi_4 = rcx_20 + rsi_2
                    
                    if (rdi_4 u> 0x80 && rdi_4 != 0)
                        void* rax_20 = sub_140a84c80(0, sx.q(rdi_4) * 2, 0)
                        rdx_13 = rax_20
                        var_68_2 = rax_20
                    
                    void* rcx_21 = &var_168
                    
                    if (rdx_13 != 0)
                        rcx_21 = rdx_13
                    
                    sub_1405a7220(rcx_21, rdi_4, arg4, rdi_4, 0x3f)
                    rbx_6 = rsi_2
                    rdi_5 = rcx_21
                
                var_178 = 0
                int32_t rdx_15 = 0
                int32_t var_170_2 = 0
                int32_t rcx_22 = 0
                int32_t var_16c_2 = 0
                
                if (rdi_5 != 0 && *rdi_5 != 0 && rbx_6 s> 0)
                    if (rbx_6 + 1 s> 0)
                        sub_1405947f0(&var_178, rbx_6 + 1)
                        rcx_22 = var_16c_2
                        rdx_15 = var_170_2
                    
                    int32_t rax_23 = rbx_6 + 1 + rdx_15
                    
                    if (rax_23 s> rcx_22)
                        sub_140594770(&var_178)
                    
                    UnDecorator::getReferenceType(var_178, rdi_5, rbx_6 * 2)
                    *(var_178 + (sx.q(rax_23) << 1) - 2) = 0
                
                sub_140a306e0(&var_178, &data_142d576a0, &data_142d40450, 0)
                sub_140a306e0(&var_178, &data_142e51e14, &data_142d40450, 0)
                int64_t rcx_29 = var_178
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                
                if (var_68_2 != 0)
                    sub_140a74f90(var_68_2)
            else
                int64_t rdi_3 = 0
                
                while (true)
                    uint32_t _C = zx.d(arg4[rdi_3])
                    
                    if (isprint(_C) == 0 && isspace(_C) == 0)
                        break
                    
                    rdi_3 += 1
                    
                    if (rdi_3 s>= sx.q(rsi_2))
                        goto label_141800e0e

if ((r12 - 1).d u<= 5)
    *(arg1 + 0x114) = 0
    *(arg1 + 0x118) = 1

__security_check_cookie(rax_1 ^ &var_1a8)
return 0
