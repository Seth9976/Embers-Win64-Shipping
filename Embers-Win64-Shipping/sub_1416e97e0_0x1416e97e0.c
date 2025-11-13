// 函数: sub_1416e97e0
// 地址: 0x1416e97e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* r14 = arg1
int64_t* rcx = *arg3
(*(*rcx + 0x20))(rcx)
int32_t* rdi = *(r14 + 0x10)
void* rsi_1 = sx.q(*(r14 + 0x18)) * 0x1c + rdi
int64_t result
int32_t var_f8

if (rdi == rsi_1)
label_1416e98ad:
    int64_t rdi_1 = *(r14 + 0x70)
    int64_t rsi_3 = sx.q(*(r14 + 0x78)) * 0x34 + rdi_1
    
    if (rdi_1 == rsi_3)
    label_1416e9930:
        
        if (*(r14 + 0x94) == 0)
            float zmm1 = *arg2 f- *(r14 + 0x20)
            float zmm2 = arg2[1] f- *(r14 + 0x24)
            float zmm3 = arg2[2] f- *(r14 + 0x28)
            int32_t rax_9 = int.d(zmm1 f/ *(r14 + 0x44))
            float zmm0 = zmm2 f/ *(r14 + 0x48)
            int32_t var_f4 = rax_9
            int32_t rcx_3 = int.d(zmm0)
            int32_t var_f0_1 = rcx_3
            int32_t rdx_2 = int.d(zmm3 f/ *(r14 + 0x4c))
            int32_t var_ec_1 = rdx_2
            
            if (not(zmm1 >= 0f))
                var_f4 = rax_9 - 1
            
            if (not(zmm2 >= 0f))
                int32_t var_f0_2 = rcx_3 - 1
            
            if (not(zmm3 >= 0f))
                int32_t var_ec_2 = rdx_2 - 1
            
            int32_t var_c0
            sub_1417a90d0(r14 + 0x20, &var_c0, &var_f4)
            zmm1 = arg2[3] f- *(r14 + 0x20)
            zmm2 = arg2[4] f- *(r14 + 0x24)
            zmm3 = arg2[5] f- *(r14 + 0x28)
            int32_t rax_13 = int.d(zmm1 f/ *(r14 + 0x44))
            zmm0 = zmm2 f/ *(r14 + 0x48)
            var_f4 = rax_13
            int32_t rdx_4 = int.d(zmm0)
            int32_t var_f0_3 = rdx_4
            int32_t rcx_5 = int.d(zmm3 f/ *(r14 + 0x4c))
            int32_t var_ec_3 = rcx_5
            
            if (not(zmm1 >= 0f))
                var_f4 = rax_13 - 1
            
            if (not(zmm2 >= 0f))
                int32_t var_f0_4 = rdx_4 - 1
            
            if (not(zmm3 >= 0f))
                int32_t var_ec_4 = rcx_5 - 1
            
            int32_t i_3
            sub_1417a90d0(r14 + 0x20, &i_3, &var_f4)
            uint64_t rbx_6 = zx.q(var_c0)
            int64_t r9_1 = 0
            int32_t i = i_3
            int32_t r11_1 = 0
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x2c)
            int32_t rdi_2 = 0
            void* r10_1 = nullptr
            int32_t rsi_4 = 0
            int32_t var_7c_1 = 0x80
            int32_t var_78_1 = 0xffffffff
            int32_t var_74_1 = 0
            void* var_68_1 = nullptr
            int32_t var_60_1 = 0
            int32_t var_e8_1 = rbx_6.d
            int64_t var_a0
            
            if (rbx_6.d s<= i)
                int32_t var_d8
                int32_t rcx_7 = var_d8
                int32_t var_dc
                int32_t rax_17 = var_dc
                
                do
                    int32_t var_bc
                    int32_t r8_2 = var_bc
                    var_f8 = r8_2
                    
                    if (r8_2 s<= rax_17)
                        do
                            int32_t var_b8
                            int32_t r12_1 = var_b8
                            
                            if (r12_1 s<= rcx_7)
                                do
                                    uint64_t* rax_25 = (sx.q(
                                        (*(r14 + 0x54) * rbx_6.d + r8_2) * *(r14 + 0x58) + r12_1) << 4)
                                        + *(r14 + 0x60)
                                    rbx_6 = *rax_25
                                    int64_t r15_2 = sx.q(rax_25[1].d) * 0x34 + rbx_6
                                    
                                    if (rbx_6 != r15_2)
                                        do
                                            int64_t rcx_8 = sx.q(*(rbx_6 + 0x18))
                                            
                                            if (r11_1 == rdi_2)
                                            label_1416e9b82:
                                                int32_t var_e4 = rcx_8.d
                                                void var_b0
                                                sub_140998ff0(&var_a8, &var_b0, &var_e4, nullptr)
                                                void* rdx_10 = -0x18 - arg2 + rbx_6
                                                int64_t rcx_10 = 0
                                                void* rax_31 = &arg2[3]
                                                
                                                while (true)
                                                    if (*(rax_31 - 0xc) f>
                                                            *(rdx_10 + rax_31 + 0x18))
                                                        goto label_1416e9bf2
                                                    
                                                    if (*rax_31 f< *(rdx_10 + rax_31 + 0xc))
                                                        goto label_1416e9bf2
                                                    
                                                    rcx_10 += 1
                                                    rax_31 += 4
                                                    
                                                    if (rcx_10 s>= 3)
                                                        int64_t* rcx_11 = *arg3
                                                        var_e4 = *(rbx_6 + 0x18)
                                                        
                                                        if ((*(*rcx_11 + 8))(rcx_11, &var_e4) == 0)
                                                            r10_1 = var_68_1
                                                            rbx_6.b = 0
                                                            goto label_1416e9c55
                                                        
                                                    label_1416e9bf2:
                                                        rsi_4 = var_60_1
                                                        r10_1 = var_68_1
                                                        rdi_2 = var_74_1
                                                        r11_1 = var_a0.d
                                                        r9_1 = var_a8
                                                        break
                                            else
                                                void var_70
                                                void* rax_28 = &var_70
                                                
                                                if (r10_1 != 0)
                                                    rax_28 = r10_1
                                                
                                                int32_t rax_29 =
                                                    *(rax_28 + ((sx.q(rsi_4 - 1) & rcx_8) << 2))
                                                
                                                if (rax_29 == 0xffffffff)
                                                    goto label_1416e9b82
                                                
                                                while (true)
                                                    int64_t r8_3 = sx.q(rax_29) * 3
                                                    
                                                    if (*(r9_1 + (r8_3 << 2)) == rcx_8.d)
                                                        break
                                                    
                                                    rax_29 = *(r9_1 + (r8_3 << 2) + 4)
                                                    
                                                    if (rax_29 == 0xffffffff)
                                                        goto label_1416e9b82
                                                
                                                if (rax_29 == 0xffffffff)
                                                    goto label_1416e9b82
                                            
                                            rbx_6 += 0x34
                                        while (rbx_6 != r15_2)
                                        
                                        rcx_7 = var_d8
                                        r8_2 = var_f8
                                        r14 = arg1
                                    
                                    rbx_6 = zx.q(var_e8_1)
                                    r12_1 += 1
                                while (r12_1 s<= rcx_7)
                                
                                rax_17 = var_dc
                            
                            r8_2 += 1
                            var_f8 = r8_2
                        while (r8_2 s<= rax_17)
                        
                        i = i_3
                    
                    rbx_6 = zx.q(rbx_6.d + 1)
                    var_e8_1 = rbx_6.d
                while (rbx_6.d s<= i)
            
            rbx_6.b = 1
        label_1416e9c55:
            int32_t var_60_2 = 0
            
            if (r10_1 != 0)
                sub_140a74f90(r10_1)
            
            bool cond:3_1 = var_a0:4.d == 0
            var_a0.d = 0
            
            if (not(cond:3_1))
                sub_140638cc0(&var_a8, 0)
            
            int32_t var_78_2 = 0xffffffff
            int32_t var_74_2 = 0
            int64_t var_98
            sub_14059a8e0(&var_98, 0)
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t rcx_16 = var_a8
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            result = zx.q(rbx_6.b)
        else
            result.b = 1
    else
        int32_t* rbx_5 = rdi_1 - arg2
        
        while (true)
            int64_t i_1 = 0
            result = &arg2[3]
            
            do
                if (*(result - 0xc) f> *(rbx_5 + result))
                    goto label_1416e991f
                
                if (*result f< *(rbx_5 + result - 0xc))
                    goto label_1416e991f
                
                i_1 += 1
                result += 4
            while (i_1 s< 3)
            
            int64_t* rcx_2 = *arg3
            var_f8 = *(arg2 + rbx_5 + 0x18)
            
            if ((*(*rcx_2 + 8))(rcx_2, &var_f8).b == 0)
                break
            
        label_1416e991f:
            rdi_1 += 0x34
            rbx_5 = &rbx_5[0xd]
            
            if (rdi_1 == rsi_3)
                r14 = arg1
                goto label_1416e9930
        
        result.b = 0
else
    int32_t* rbx_3 = rdi - arg2 + 4
    
    while (true)
        int64_t i_2 = 0
        void* rax_4 = &arg2[3]
        
        do
            if (*(rax_4 - 0xc) f> *(rbx_3 + rax_4))
                goto label_1416e98a0
            
            if (*rax_4 f< *(rbx_3 + rax_4 - 0xc))
                goto label_1416e98a0
            
            i_2 += 1
            rax_4 += 4
        while (i_2 s< 3)
        
        int64_t* rcx_1 = *arg3
        var_f8 = *rdi
        
        if ((*(*rcx_1 + 8))(rcx_1, &var_f8).b == 0)
            break
        
    label_1416e98a0:
        rdi = &rdi[7]
        rbx_3 = &rbx_3[7]
        
        if (rdi == rsi_1)
            goto label_1416e98ad
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_118)
return result
