// 函数: sub_1426dff30
// 地址: 0x1426dff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2

if (arg2 == 0)
    _vfprintf_p_l(arg1, u"unknown", u"EnvQueryGenerator")
    return arg1

void* rax_1 = sub_140bdf2e0()
void* rdx = *(rbx + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = rdx

uint8_t rax_5 = (*(rbx + 0xcc) u>> 0x12).b
int64_t arg_10 = *(rbx + 0x18)
int64_t* rcx_2 = &arg_10
int64_t rcx_20

if ((rax_5 & 1) == 0)
    int64_t var_48
    sub_140b63b70(rcx_2, &var_48)
    int32_t rax_14 = sub_140a23cf0(&var_48, &data_142d99650, 0, 0, 0xffffffff)
    
    if (rax_14 != 0xffffffff)
        int32_t rdx_5 = 0x7fffffff
        
        if (sx.q(rax_14 + 1) + 0x7fffffff s<= 0x7fffffff)
            rdx_5 = rax_14 - -0x80000000
        
        int32_t var_40
        int32_t rax_17 = var_40
        int32_t rbx_1 = 0
        int32_t rcx_9 = rax_17 - 1
        
        if (rax_17 == 0)
            rcx_9 = 0
        
        int32_t r10_2
        
        if (rdx_5 s>= 0)
            r10_2 = rcx_9
            
            if (rdx_5 s< rcx_9)
                r10_2 = rdx_5
        else
            r10_2 = 0
        
        int32_t rcx_10 = rcx_9 - r10_2
        int32_t rdi_3 = rax_17 - 1
        
        if (rax_17 == 0)
            rdi_3 = 0
        
        int32_t rdi_4 = rdi_3 - r10_2
        
        if (rcx_10 s>= 0)
            if (rcx_10 s< rdi_4)
                rdi_4 = rcx_10
            
            if (rdi_4 != 0)
                int32_t rcx_12 = rax_17 - rdi_4
                
                if (rcx_12 != r10_2)
                    int64_t r9_3 = var_48
                    memmove(r9_3 + (sx.q(r10_2) << 1), r9_3 + (sx.q(rdi_4 + r10_2) << 1), 
                        (rcx_12 - r10_2) * 2)
                    rax_17 = var_40
                
                rax_17 -= rdi_4
                var_40 = rax_17
        
        if (rax_17 != 0)
            rbx_1 = rax_17 - 1
        
        if (rax_14 + 1 s>= 0)
            if (rax_14 + 1 s< rbx_1)
                rbx_1 = rax_14 + 1
            
            if (rbx_1 != 0)
                if (rax_17 != rbx_1)
                    int64_t rcx_18 = var_48
                    memmove(rcx_18, rcx_18 + (sx.q(rbx_1) << 1), (rax_17 - rbx_1) * 2)
                    rax_17 = var_40
                
                int32_t var_40_1 = rax_17 - rbx_1
    
    sub_140aae420(arg1, &var_48)
    rcx_20 = var_48
else
    int64_t var_38
    sub_140b63b70(rcx_2, &var_38)
    int32_t var_30
    int32_t rcx_3 = var_30
    int32_t r10_1 = rcx_3 - 1
    
    if (rcx_3 == 0)
        r10_1 = 0
    
    if (r10_1 - 2 s< 0)
        r10_1 = 0
    else if (r10_1 - 2 s< r10_1)
        r10_1 -= 2
    
    int32_t rdi_1 = rcx_3 - 1
    
    if (rcx_3 == 0)
        rdi_1 = 0
    
    int32_t rdi_2 = rdi_1 - r10_1
    
    if (rdi_2 s> 2)
        rdi_2 = 2
    
    if (rdi_2 != 0)
        int32_t rax_8 = rcx_3 - rdi_2
        
        if (rax_8 != r10_1)
            int64_t r9_2 = var_38
            memmove(r9_2 + (sx.q(r10_1) << 1), r9_2 + (sx.q(rdi_2 + r10_1) << 1), 
                (rax_8 - r10_1) * 2)
            rcx_3 = var_30
        
        rcx_3 -= rdi_2
    
    int64_t var_28 = var_38
    int32_t var_20_1 = rcx_3
    int32_t var_2c
    int32_t var_1c_1 = var_2c
    var_30.q = 0
    var_38 = 0
    sub_140aae2f0(arg1, &var_28)
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    rcx_20 = var_38

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return arg1
