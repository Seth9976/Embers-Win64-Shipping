// 函数: sub_141db2c70
// 地址: 0x141db2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_140598750(arg1, &var_38)
int64_t rbp
rbp.b = 0
int64_t* r10 = arg3[1]
int32_t rdi = var_38
int64_t r8 = **arg3
int64_t* var_30
*var_30 = r8
var_30[1] = *r10
var_30[2].d = 0xffffffff
int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
int32_t r13_1 = (r8 u>> 0x20).d * 0x17 + r8.d

if (r10_2 == 1)
label_141db2d7d:
    
    if (sub_1407e9370(arg1, r10_2, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_4 = (arg1[9].d - 1) & r13_1
        *(var_30 + 0x14) = r8_4
        void* rcx_6 = *(r9_1 + 8)
        void* rax_10 = r9_1
        
        if (rcx_6 != 0)
            rax_10 = rcx_6
        
        var_30[2].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_4)) << 2))
        void* rcx_7 = *(r9_1 + 8)
        
        if (rcx_7 != 0)
            r9_1 = rcx_7
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_4)) << 2)) = rdi
else
    int32_t rbx_1
    
    if (r10_2 != 0)
        void* rcx = arg1[8]
        void* r8_1 = &arg1[7]
        
        if (rcx != 0)
            r8_1 = rcx
        
        rbx_1 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r13_1)) << 2))
    
    if (r10_2 == 0 || rbx_1 == 0xffffffff)
    label_141db2d36:
        rbx_1 = -1
    else
        int64_t rdx_4 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (*(rdx_4 + (rcx_1 << 3)) == r8)
                break
            
            rbx_1 = *(rdx_4 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_141db2d36
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_141db2d7d
    
    memmove(*arg1 + sx.q(rbx_1) * 0x18, var_30, 0x10)
    sub_1405c3640(arg1, rdi, 1)
    rdi = rbx_1

*arg2 = rdi

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
