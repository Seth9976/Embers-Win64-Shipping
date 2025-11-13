// 函数: sub_140b085b0
// 地址: 0x140b085b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
uint64_t var_38
int64_t var_28
int64_t* rax
int32_t rdi

if (arg3 == 0)
    int32_t rdi_1 = arg2[1].d
    int64_t rbp_1 = *arg2
    var_38 = 0
    int32_t var_30_1 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_38, rdi_1, 0)
        memcpy(var_38, rbp_1, rdi_1 * 2)
    else
        int32_t var_2c_1 = 0
    
    rax = &var_38
    rdi = 2
else
    rax = sub_140b18970(&var_28, arg2)
    rdi = 1

sub_140596d10(arg1, rax)

if ((rdi.b & 2) != 0)
    uint64_t rcx_4 = var_38
    rdi &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rdi.b & 1) != 0)
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int32_t rax_1 = sub_140a23cf0(arg1, &data_142d404c4, 0, 1, 0xffffffff)

if (rax_1 != 0xffffffff)
    if (arg3 != 0)
    label_140b086dc:
        int32_t rax_7 = arg1[1].d
        int32_t rcx_10 = rax_7 - 1
        
        if (rax_7 == 0)
            rcx_10 = -1
        
        int32_t rdi_2 = rax_7 - 1
        
        if (rax_7 == 0)
            rcx_10 = 0
        
        if (rax_7 == 0)
            rdi_2 = -1
        
        int32_t r10_1
        
        if (rax_1 s>= 0)
            r10_1 = rcx_10
            
            if (rax_1 s< rcx_10)
                r10_1 = rax_1
        else
            r10_1 = 0
        
        if (rax_7 == 0)
            rdi_2 = 0
        
        int32_t rdi_3 = rdi_2 - r10_1
        int32_t rcx_11 = rcx_10 - r10_1
        
        if (rcx_10 - r10_1 s>= 0)
            if (rcx_11 s< rdi_3)
                rdi_3 = rcx_11
            
            if (rdi_3 != 0)
                int32_t rcx_13 = rax_7 - rdi_3
                
                if (rcx_13 != r10_1)
                    int64_t r9_1 = *arg1
                    memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_3 + r10_1) << 1), 
                        (rcx_13 - r10_1) * 2)
                    rax_7 = arg1[1].d
                
                arg1[1].d = rax_7 - rdi_3
                sub_1405a50a0(arg1)
    else
        int32_t rdx_3 = arg1[1].d
        int64_t r8_2 = *arg1
        int32_t rcx_7 = rdx_3 - 1
        
        if (rdx_3 == 0)
            rcx_7 = 0
        
        void* rax_2 = r8_2 + (sx.q(rcx_7) << 1)
        
        if (rax_2 == r8_2)
            goto label_140b086dc
        
        while (true)
            int16_t rcx_9 = *(rax_2 - 2)
            rax_2 -= 2
            
            if (rcx_9 == 0x2f)
                break
            
            if (rcx_9 == 0x5c)
                break
            
            if (rax_2 == r8_2)
                goto label_140b086dc
        
        int32_t rax_4 = ((rax_2 - r8_2) s>> 1).d
        
        if (rax_4 == 0xffffffff || rax_1 s> rax_4)
            goto label_140b086dc

return arg1
