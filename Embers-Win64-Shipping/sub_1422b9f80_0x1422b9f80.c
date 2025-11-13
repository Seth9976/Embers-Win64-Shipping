// 函数: sub_1422b9f80
// 地址: 0x1422b9f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= arg4)
    return 

int64_t* arg_10 = arg2
int32_t r14_1 = arg3
int16_t r8 = arg6
int64_t r10_1 = arg1
uint64_t* rsi_1 = arg8
int64_t rdi_1 = arg5
int32_t r15_1 = 0

do
    void* rbp_3 = (sx.q(r14_1) << 5) + *(r10_1 + 0x38)
    
    if (*(rbp_3 + 0x1c) != 0)
        int64_t rbx_8 = sx.q(rsi_1[1].d)
        int16_t rbp_4 = *(rbp_3 + 0x14) + r8
        int32_t rax_18 = (rbx_8 + 1).d
        rsi_1[1].d = rax_18
        
        if (rax_18 s> *(rsi_1 + 0xc))
            sub_140594770(rsi_1)
        
        *(*rsi_1 + (rbx_8 << 1)) = rbp_4
    else
        int64_t rax_1 = *arg2
        int64_t* r12_2 = sx.q(*(rbp_3 + 0xc)) + rdi_1
        int64_t rbx_1 = *r12_2
        int64_t var_58 = 0
        int32_t var_50_1 = 0
        uint32_t r13_1 = zx.d(*(rbp_3 + 8))
        int32_t i = 0
        void* rdx = *(rax_1 + zx.q(*(rbp_3 + 0x14)) * 0x10 - 8)
        int32_t var_68_1 = *(rdx + 8)
        
        if (r12_2[1].d s<= 0)
            goto label_1422ba17c
        
        do
            sub_1422b9f80(r10_1, rdx, zx.q(r14_1 + 1), zx.q(r13_1 - 1), 
                sx.q(zx.d(*(rbp_3 + 0xa)) * i) + rbx_1, r15_1, arg7, &var_58, var_68_1)
            r15_1 += var_68_1
            i += 1
            r10_1 = arg1
        while (i s< r12_2[1].d)
        
        rdi_1 = arg5
        rsi_1 = arg8
        int64_t rbx_5
        
        if (var_50_1 == 0)
            r8 = arg6
            r15_1 = 0
        label_1422ba17c:
            
            if (arg7 != 0)
                int64_t rbx_6 = sx.q(rsi_1[1].d)
                int16_t r14_5 = *(rbp_3 + 0x14) + r8
                int32_t rax_13 = (rbx_6 + 1).d
                rsi_1[1].d = rax_13
                
                if (rax_13 s> *(rsi_1 + 0xc))
                    sub_140594770(rsi_1)
                
                *(*rsi_1 + (rbx_6 << 1)) = r14_5
                int64_t rbx_7 = sx.q(rsi_1[1].d)
                int32_t rax_15 = (rbx_7 + 1).d
                rsi_1[1].d = rax_15
                
                if (rax_15 s> *(rsi_1 + 0xc))
                    sub_140594770(rsi_1)
                
                *(*rsi_1 + (rbx_7 << 1)) = 0
                rbx_5 = sx.q(rsi_1[1].d)
                int32_t rax_17 = (rbx_5 + 1).d
                rsi_1[1].d = rax_17
                
                if (rax_17 s> *(rsi_1 + 0xc))
                    sub_140594770(rsi_1)
                
                *(*rsi_1 + (rbx_5 << 1)) = 0
        else
            int64_t rbx_2 = sx.q(rsi_1[1].d)
            int16_t r14_3 = *(rbp_3 + 0x14) + arg6
            int32_t rax_6 = (rbx_2 + 1).d
            rsi_1[1].d = rax_6
            
            if (rax_6 s> *(rsi_1 + 0xc))
                sub_140594770(rsi_1)
            
            *(*rsi_1 + (rbx_2 << 1)) = r14_3
            int64_t rbx_3 = sx.q(rsi_1[1].d)
            int32_t rax_8 = (rbx_3 + 1).d
            rsi_1[1].d = rax_8
            
            if (rax_8 s> *(rsi_1 + 0xc))
                sub_140594770(rsi_1)
            
            *(*rsi_1 + (rbx_3 << 1)) = var_50_1.w
            
            if (var_50_1 != 0)
                int32_t rax_10 = rsi_1[1].d
                int32_t rdx_4 = rax_10 + var_50_1
                
                if (rdx_4 s> *(rsi_1 + 0xc))
                    sub_1405947f0(rsi_1, rdx_4)
                    rax_10 = rsi_1[1].d
                
                memcpy(*rsi_1 + (sx.q(rax_10) << 1), var_58, var_50_1 * 2)
                rsi_1[1].d += var_50_1
            
            rbx_5 = sx.q(rsi_1[1].d)
            int32_t rax_12 = (rbx_5 + 1).d
            rsi_1[1].d = rax_12
            
            if (rax_12 s> *(rsi_1 + 0xc))
                sub_140594770(rsi_1)
            
            r15_1 = 0
            *(*rsi_1 + (rbx_5 << 1)) = 0
        int64_t rcx_13 = var_58
        r14_1 = zx.d(*(rbp_3 + 8)) - 1
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    r10_1 = arg1
    r14_1 += 1
    r8 = arg6
    arg2 = arg_10
while (r14_1 s< arg4)
