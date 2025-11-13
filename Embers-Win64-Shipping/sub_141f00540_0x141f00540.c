// 函数: sub_141f00540
// 地址: 0x141f00540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rdi
rdi.b = 0
uint128_t* rbx = arg2
int64_t rbp = sx.q(arg4)

if (arg1[0x2f].d s> 0)
    arg2 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)

uint64_t r12

if (arg1[0x2f].d s<= 0 || arg2 == 0)
    r12.b = 1
else
    r12.b = arg2[0x35].b u>> 2
    r12.b &= 1

uint64_t result

if ((*(arg1 + 0x209) & 1) != 0)
    if (data_143a2d74c != 0)
        goto label_141f005f0
    
    result = zx.q(rdi.b)
else if (r12.b != 0 || data_143a2d74c == 0)
    result = zx.q(rdi.b)
else
label_141f005f0:
    void* r15_1 = arg1[0x14]
    
    if (r15_1 == 0 || *(r15_1 + 0x130) != arg1)
        result = zx.q(rdi.b)
    else if (data_143a2d750 == 0)
        if (arg3[1].d == 0)
            arg2.b = 1
            
            if ((*(*arg1 + 0x538))(arg1, arg2) != 0)
                rdi = 0
                
                if (arg1[0x54].d s> 0)
                    int64_t r14_2 = 0
                    
                    do
                        void* rax_22 = sub_140d3c6e0(sx.q(rdi.d) * 0x8c + arg1[0x53] + 0x74)
                        
                        if (rax_22 != 0 && *(rax_22 + 0xa0) == r15_1)
                            int64_t rbp_3 = sx.q(rbx[0x1b].d)
                            int128_t* r12_1 = arg1[0x53]
                            int32_t rax_23 = (rbp_3 + 1).d
                            rbx[0x1b].d = rax_23
                            
                            if (rax_23 s> *(rbx + 0x1b4))
                                sub_141f229d0(rbx, rbp_3.d)
                            
                            uint128_t* rax_24 = *(rbx + 0x1a8)
                            uint128_t* rdx_9 = rbx
                            
                            if (rax_24 != 0)
                                rdx_9 = rax_24
                            
                            int64_t rcx_17 = rbp_3 * 0x8c
                            *(rdx_9 + rcx_17) = *(r12_1 + r14_2)
                            *(rdx_9 + rcx_17 + 0x10) = *(r12_1 + r14_2 + 0x10)
                            *(rdx_9 + rcx_17 + 0x20) = *(r12_1 + r14_2 + 0x20)
                            *(rdx_9 + rcx_17 + 0x30) = *(r12_1 + r14_2 + 0x30)
                            *(rdx_9 + rcx_17 + 0x40) = *(r12_1 + r14_2 + 0x40)
                            *(rdx_9 + rcx_17 + 0x50) = *(r12_1 + r14_2 + 0x50)
                            *(rdx_9 + rcx_17 + 0x60) = *(r12_1 + r14_2 + 0x60)
                            *(rdx_9 + rcx_17 + 0x70) = *(r12_1 + r14_2 + 0x70)
                            *(rdx_9 + rcx_17 + 0x80) = *(r12_1 + r14_2 + 0x80)
                            *(rdx_9 + rcx_17 + 0x88) = *(r12_1 + r14_2 + 0x88)
                        
                        rdi = zx.q(rdi.d + 1)
                        r14_2 += 0x8c
                    while (rdi.d s< arg1[0x54].d)
                
                rdi.b = 1
        
        result = zx.q(rdi.b)
    else
        char var_f8 = var_f8
        int64_t var_f0_1 = 0
        void var_c8
        sub_141eb54c0(&var_c8, 0, &var_f8, 0, nullptr)
        rdi = sx.q(arg3[1].d)
        int32_t rdx = rbx[0x1b].d + rdi.d
        
        if (rdx s> *(rbx + 0x1b4))
            sub_141dd6010(rbx, rdx)
        
        int64_t var_88
        int64_t var_68
        
        if (rbp.d s>= rdi.d)
        label_141f00803:
            rdi.b = 1
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            result = zx.q(rdi.b)
        else
            int64_t r14_1 = rbp
            int64_t var_f0_2 = rdi
            int64_t r15_2 = rbp * 0x8c
            
            while (true)
                uint128_t* rbp_2 = *arg3 + r15_2
                int64_t rax_7 = sub_140d3c6e0(rbp_2 + 0x74)
                
                if (rax_7 != 0)
                    result = zx.q(*(rax_7 + 0x209))
                    
                    if ((result.b & 1) != 0 || r12.b == 0)
                        if ((result.b & 2) != 0)
                        label_141f00836:
                            
                            if (var_68 != 0)
                                sub_140a74f90(var_68)
                            
                            if (var_88 != 0)
                                sub_140a74f90(var_88)
                            
                            result.b = 0
                            break
                        
                        void* rax_8 = sub_142591550()
                        void* rdx_1 = *(rax_7 + 0x10)
                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                        
                        if (rax_9.d s<= *(rdx_1 + 0x38)
                                && *(*(rdx_1 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                            goto label_141f00836
                        
                        void* rax_10 = sub_142591550()
                        void* rdx_2 = arg1[2]
                        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                        
                        if (rax_11.d s<= *(rdx_2 + 0x38)
                                && *(*(rdx_2 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
                            goto label_141f00836
                        
                        void* var_108_2 = &var_c8
                        int32_t var_d0_1 = arg5[1].d
                        int64_t rax_14 = *rax_7
                        uint64_t var_d8 = *arg5
                        
                        if ((*(rax_14 + 0x838))(rax_7, arg1, &var_d8, arg6, var_108_2) != 0)
                            rdi = sx.q(rbx[0x1b].d)
                            int32_t rax_16 = (rdi + 1).d
                            rbx[0x1b].d = rax_16
                            
                            if (rax_16 s> *(rbx + 0x1b4))
                                sub_141f229d0(rbx, rdi.d)
                            
                            uint128_t* rax_17 = *(rbx + 0x1a8)
                            uint128_t* rdx_5 = rbx
                            
                            if (rax_17 != 0)
                                rdx_5 = rax_17
                            
                            int64_t rcx_8 = rdi * 0x8c
                            *(rdx_5 + rcx_8) = *rbp_2
                            *(rdx_5 + rcx_8 + 0x10) = rbp_2[1]
                            *(rdx_5 + rcx_8 + 0x20) = rbp_2[2]
                            *(rdx_5 + rcx_8 + 0x30) = rbp_2[3]
                            *(rdx_5 + rcx_8 + 0x40) = rbp_2[4]
                            *(rdx_5 + rcx_8 + 0x50) = rbp_2[5]
                            *(rdx_5 + rcx_8 + 0x60) = rbp_2[6]
                            *(rdx_5 + rcx_8 + 0x70) = rbp_2[7]
                            *(rdx_5 + rcx_8 + 0x80) = rbp_2[8].q
                            *(rdx_5 + rcx_8 + 0x88) = *(rbp_2 + 0x88)
                
                r14_1 += 1
                r15_2 += 0x8c
                
                if (r14_1 s>= var_f0_2)
                    goto label_141f00803

__security_check_cookie(rax_1 ^ &var_128)
return result
