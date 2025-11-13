// 函数: sub_142638c50
// 地址: 0x142638c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = *arg2
int32_t rax = arg2[1]
int64_t* rdi = arg1
int32_t arg_20 = r13
int64_t var_68 = 0
int64_t var_60 = 0
int64_t r15 = arg4
sub_142633840(&var_68, 0x400)
int64_t var_58 = 0
int64_t var_50 = 0
sub_142633840(&var_58, 0x400)
int64_t rdx = sx.q(arg2[2])
int64_t count = rdx * 2
int64_t rbx = count + r15
int64_t var_98 = rbx
int64_t var_88 = r15 + (sx.q((rdx * 2).d) << 1)
int64_t var_90 = r15 + (sx.q((rdx * 3).d) << 1)
memset(r15, 0, count)
memset(rbx, 0, sx.q(arg2[2]) * 2)
int16_t rbp = 1
int16_t r14 = (arg2[6].w + 1) & 0xfffe

if (arg3 s> 0)
    int32_t rbx_1 = arg3
    
    if (r13 s< arg3)
        rbx_1 = r13
    
    int32_t rdi_1 = arg3
    
    if (rax s< arg3)
        rdi_1 = rax
    
    sub_142637270(0, rbx_1, 0, rax, 0x8001, arg2, r15)
    sub_142637270(r13 - rbx_1, r13, 0, rax, 0x8002, arg2, r15)
    sub_142637270(0, r13, 0, rdi_1, 0x8003, arg2, r15)
    sub_142637270(0, r13, rax - rdi_1, rax, 0x8004, arg2, r15)
    rbx = var_98
    rbp = 5
    rdi = arg1
    arg2[5] = arg3

if (r14 != 0)
    while (true)
        int16_t rax_5 = r14
        r14 -= 2
        
        if (rax_5 u< 2)
            r14 = 0
        
        if (*(rdi + 9) != 0)
            (*(*rdi + 0x20))(rdi, 0x17)
        
        int64_t r12_1 = var_88
        
        if (sub_142636820(8, r14, arg2, r15, rbx, r12_1, var_90, &var_68) != r15)
            var_88 = r15
            r15 = r12_1
            var_98 = var_90
            var_90 = rbx
        
        if (*(rdi + 9) != 0)
            (*(*rdi + 0x28))(rdi, 0x17)
            
            if (*(rdi + 9) != 0)
                (*(*rdi + 0x20))(rdi, 0x18)
        
        int32_t rdx_6 = 0
        int32_t arg_10 = 0
        
        if (rax s> 0)
            int32_t r8_5 = rax
            int32_t* rax_14 = nullptr
            int64_t rcx_13 = sx.q(r13) << 2
            int64_t var_70_1 = rcx_13
            int32_t* var_78_1 = nullptr
            
            do
                int32_t r12_2 = 0
                
                if (r13 s> 0)
                    int32_t* rcx_14 = rax_14
                    int32_t* var_80_1 = rax_14
                    
                    do
                        int32_t rcx_15 = *(rcx_14 + *(arg2 + 0x40))
                        int32_t rax_17 = rcx_15 & 0xffffff
                        uint64_t rdi_2 = zx.q(rax_17)
                        uint64_t r13_1 = zx.q(rax_17 + (rcx_15 u>> 0x18))
                        
                        if (rdi_2 u< r13_1)
                            uint64_t rbx_2 = zx.q(rdi_2.d)
                            
                            do
                                if (*(*(arg2 + 0x50) + (rbx_2 << 1)) u>= r14
                                        && *(r15 + (rbx_2 << 1)) == 0
                                        && *(rbx_2 + *(arg2 + 0x58)) != 0)
                                    int64_t var_c8_1
                                    var_c8_1.w = rbp
                                    char rax_21 = sub_142636cc0(r12_2, rdx_6, rdi_2.d, r14, 
                                        var_c8_1.w, arg2, r15, var_98, &var_68)
                                    rdx_6 = arg_10
                                    
                                    if (rax_21 != 0)
                                        rbp += 1
                                
                                rdi_2 = zx.q(rdi_2.d + 1)
                                rbx_2 += 1
                            while (rbx_2 s< r13_1)
                        
                        r12_2 += 1
                        r13 = arg_20
                        rcx_14 = &var_80_1[1]
                        var_80_1 = rcx_14
                    while (r12_2 s< r13)
                    
                    rax_14 = var_78_1
                    rcx_13 = var_70_1
                    r8_5 = rax
                
                rdx_6 += 1
                rax_14 += rcx_13
                arg_10 = rdx_6
                var_78_1 = rax_14
            while (rdx_6 s< r8_5)
            
            rdi = arg1
        
        if (*(rdi + 9) != 0)
            (*(*rdi + 0x28))(rdi, 0x18)
        
        if (r14 == 0)
            break
        
        rbx = var_98

sub_142636820(0x40, 0, arg2, r15, var_98, var_88, var_90, &var_68)
int64_t rcx_20 = var_58
*(arg2 + 0x1a) = rbp
sub_1426324c0(rcx_20)
sub_1426324c0(var_68)
int64_t result
result.b = 1
return result
