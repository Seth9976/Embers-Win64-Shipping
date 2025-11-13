// 函数: sub_1428c6c20
// 地址: 0x1428c6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t rdi = *arg3
int32_t rbp = arg4
int64_t* r14 = arg1

if (test_bit(rdi, 0xc))
    int64_t* var_38 = arg1
    r14 = &var_38

uint64_t rbx = 0
int32_t rsi_2

if ((rdi.b & 0x18) == 0)
    if (arg4 == 0xffffffff)
        rbp = -1
        rsi_2 = 0
    else
        rsi_2 = arg5 & 0xc0
    
    goto label_1428c6cab

if (arg4 == 0xffffffff)
    rbp = arg3[1]
    rsi_2 = rdi & 0xc0
label_1428c6cab:
    int32_t r12_1 = arg5 & 0xffffff3f
    int32_t rax_2
    rax_2.b = test_bit(rdi & r12_1, 0xb)
    char var_58_1 = rax_2.b
    int32_t r13_1
    r13_1.b = rax_2.b != 0
    
    if ((rdi.b & 6) == 0)
        int64_t rax_16 = *(arg3 + 0x18)
        
        if ((rdi.b & 0x10) == 0)
            return sub_1428c6210(r14, arg2, rax_16(), rbp, rsi_2 | r12_1)
        
        int32_t rax_18 = sub_1428c6210(r14, nullptr, rax_16(), 0xffffffff, r12_1)
        
        if (rax_18 == 0)
            return 0
        
        int32_t rax_19 = sub_1428f30c0(r13_1 + 1, rax_18, rbp)
        uint64_t rbx_1 = zx.q(rax_19)
        
        if (arg2 != 0 && rax_19 != 0xffffffff)
            sub_1428f3130(arg2, r13_1 + 1, rax_18, rbp, rbx_1, rsi_2.b)
            sub_1428c6210(r14, arg2, (*(arg3 + 0x18))(), 0xffffffff, r12_1)
            
            if (var_58_1 != 0)
                sub_1428f3110(arg2)
        
        return zx.q(rbx_1.d)
    
    int32_t* rax_3 = *r14
    
    if (rax_3 == 0)
        return 0
    
    int32_t rcx = 0
    int32_t var_4c_1
    
    if ((rdi.b & 2) == 0)
        var_4c_1 = 0
    else
        rcx.b = (rdi.b & 4) != 0
        rcx += 1
        var_4c_1 = rcx
    
    int32_t var_54_1
    char var_50_1
    
    if (rbp == 0xffffffff || (rdi.b & 0x10) != 0)
        var_50_1 = 0
        int32_t rdx
        rdx.b = rcx != 0
        var_54_1 = rdx + 0x10
    else
        var_54_1 = rbp
        var_50_1 = rsi_2.b
    
    int32_t r14_1 = 0
    
    if (sub_142898c70(rax_3) s> 0)
        int32_t rax_9
        
        do
            int64_t var_30 = sub_142898ea0(rax_3, r14_1)
            int32_t rax_8 = sub_1428c6210(&var_30, nullptr, (*(arg3 + 0x18))(), 0xffffffff, r12_1)
            
            if (rax_8 == 0xffffffff)
                return 0xffffffff
            
            if (rbx.d s> 0x7fffffff - rax_8)
                return 0xffffffff
            
            rbx = zx.q(rbx.d + rax_8)
            r14_1 += 1
            rax_9 = sub_142898c70(rax_3)
        while (r14_1 s< rax_9)
    
    int32_t rax_10 = sub_1428f30c0(r13_1 + 1, rbx.d, var_54_1)
    
    if (rax_10 != 0xffffffff)
        int32_t rdi_1 = rdi & 0x10
        int32_t r14_2
        
        if (rdi_1 == 0)
            r14_2 = rax_10
        else
            r14_2 = sub_1428f30c0(r13_1 + 1, rax_10, rbp)
        
        if (arg2 != 0 && r14_2 != 0xffffffff)
            if (rdi_1 != 0)
                sub_1428f3130(arg2, r13_1 + 1, rax_10, rbp, rbx, rsi_2.b)
            
            sub_1428f3130(arg2, r13_1 + 1, rbx.d, var_54_1, rbx, var_50_1)
            sub_1428c6980(rax_3, arg2, rbx.d, (*(arg3 + 0x18))(), var_4c_1, r12_1)
            
            if (var_58_1 != 0)
                sub_1428f3110(arg2)
                
                if (rdi_1 != 0)
                    sub_1428f3110(arg2)
        
        return zx.q(r14_2)

return 0xffffffff
