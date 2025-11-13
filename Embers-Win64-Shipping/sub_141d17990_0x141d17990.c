// 函数: sub_141d17990
// 地址: 0x141d17990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_140a9e570(arg1, &var_38)
int32_t* r10 = arg3[1]
int64_t r8 = **arg3
int64_t* var_30
*var_30 = r8
var_30[1].d = *r10
*(var_30 + 0xc) = 0xffffffff
int32_t r13_1 = sub_140b5ead0(r8.d) + r8:4.d
int64_t rbp
rbp.b = 0
int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi = var_38

if (r10_2 == 1)
label_141d17a9f:
    
    if (sub_140aa4c70(arg1, r10_2, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13_1
        var_30[2].d = rax_10
        void* rdx_6 = *(r9_1 + 8)
        int64_t r8_5 = sx.q(rax_10)
        void* rax_11 = r9_1
        
        if (rdx_6 != 0)
            rax_11 = rdx_6
        
        *(var_30 + 0xc) = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_13 = *(r9_1 + 8)
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi
else
    int32_t rbx_1
    
    if (r10_2 != 0)
        void* rdx_1 = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx_1 != 0)
            r9 = rdx_1
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & sx.q(r13_1)) << 2))
    
    if (r10_2 == 0 || rbx_1 == 0xffffffff)
    label_141d17a58:
        rbx_1 = -1
    else
        int64_t r8_4 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rbx_1) * 5
            
            if (*(r8_4 + (rdx_2 << 2)) == *var_30)
                break
            
            rbx_1 = *(r8_4 + (rdx_2 << 2) + 0xc)
            
            if (rbx_1 == 0xffffffff)
                goto label_141d17a58
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_141d17a9f
    
    memmove(*arg1 + sx.q(rbx_1) * 0x14, var_30, 0xc)
    sub_1405c3870(arg1, rdi, 1)
    rdi = rbx_1

*arg2 = rdi

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
