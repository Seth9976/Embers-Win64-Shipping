// 函数: sub_140b08770
// 地址: 0x140b08770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int64_t var_38
int64_t var_28
int64_t* rcx_1
int32_t rdi

if (arg3 == 0)
    int64_t rax_1 = *arg2
    rcx_1 = &var_38
    *arg2 = 0
    rdi = 2
    var_38 = rax_1
    int32_t var_30_1 = arg2[1].d
    int32_t var_2c_1 = *(arg2 + 0xc)
    arg2[1] = 0
else
    rcx_1 = sub_140b187e0(&var_28, arg2)
    rdi = 1

*arg1 = 0
*arg1 = *rcx_1
*rcx_1 = 0
arg1[1].d = rcx_1[1].d
*(arg1 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rdi.b & 2) != 0)
    int64_t rcx_2 = var_38
    rdi &= 0xfffffffd
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rdi.b & 1) != 0)
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int32_t rax_7 = sub_140a23cf0(arg1, &data_142d404c4, 0, 1, 0xffffffff)

if (rax_7 != 0xffffffff)
    if (arg3 != 0)
    label_140b0889b:
        int32_t rax_13 = arg1[1].d
        int32_t rcx_8 = rax_13 - 1
        
        if (rax_13 == 0)
            rcx_8 = -1
        
        int32_t rdi_1 = rax_13 - 1
        
        if (rax_13 == 0)
            rcx_8 = 0
        
        if (rax_13 == 0)
            rdi_1 = -1
        
        int32_t r10_1
        
        if (rax_7 s>= 0)
            r10_1 = rcx_8
            
            if (rax_7 s< rcx_8)
                r10_1 = rax_7
        else
            r10_1 = 0
        
        if (rax_13 == 0)
            rdi_1 = 0
        
        int32_t rdi_2 = rdi_1 - r10_1
        int32_t rcx_9 = rcx_8 - r10_1
        
        if (rcx_8 - r10_1 s>= 0)
            if (rcx_9 s< rdi_2)
                rdi_2 = rcx_9
            
            if (rdi_2 != 0)
                int32_t rcx_11 = rax_13 - rdi_2
                
                if (rcx_11 != r10_1)
                    int64_t r9_1 = *arg1
                    memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_2 + r10_1) << 1), 
                        (rcx_11 - r10_1) * 2)
                    rax_13 = arg1[1].d
                
                arg1[1].d = rax_13 - rdi_2
                sub_1405a50a0(arg1)
    else
        int32_t rdx = arg1[1].d
        int64_t r8 = *arg1
        int32_t rcx_5 = rdx - 1
        
        if (rdx == 0)
            rcx_5 = 0
        
        void* rax_8 = r8 + (sx.q(rcx_5) << 1)
        
        if (rax_8 == r8)
            goto label_140b0889b
        
        while (true)
            int16_t rcx_7 = *(rax_8 - 2)
            rax_8 -= 2
            
            if (rcx_7 == 0x2f)
                break
            
            if (rcx_7 == 0x5c)
                break
            
            if (rax_8 == r8)
                goto label_140b0889b
        
        int32_t rax_10 = ((rax_8 - r8) s>> 1).d
        
        if (rax_10 == 0xffffffff || rax_7 s> rax_10)
            goto label_140b0889b

return arg1
