// 函数: sub_1409fa3d0
// 地址: 0x1409fa3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_14090a150(arg1, &var_38)
int64_t r15
r15.b = 0
int32_t* r10 = arg3[1]
int32_t rdi = var_38
int32_t* var_30
*var_30 = **arg3
var_30[1] = *r10
var_30[2] = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp = sx.q(*var_30)

if (r9_1 == 1)
label_1409fa4c7:
    
    if (sub_1409ffd20(arg1, r9_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t r8_4 = (arg1[9].d - 1) & rbp.d
        var_30[3] = r8_4
        void* rcx_7 = *(r9_2 + 8)
        void* rax_6 = r9_2
        
        if (rcx_7 != 0)
            rax_6 = rcx_7
        
        var_30[2] = *(rax_6 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_4)) << 2))
        void* rcx_8 = *(r9_2 + 8)
        
        if (rcx_8 != 0)
            r9_2 = rcx_8
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_4)) << 2)) = rdi
else
    int32_t rbx_1
    
    if (r9_1 != 0)
        void* rcx = arg1[8]
        void* r8_1 = &arg1[7]
        
        if (rcx != 0)
            r8_1 = rcx
        
        rbx_1 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (r9_1 == 0 || rbx_1 == 0xffffffff)
    label_1409fa484:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) * 2
            
            if (*(rcx_1 + (rax_3 << 3)) == rbp.d)
                break
            
            rbx_1 = *(rcx_1 + (rax_3 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_1409fa484
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1409fa4c7
    
    memmove((sx.q(rbx_1) << 4) + *arg1, var_30, 8)
    sub_140906230(arg1, rdi, 1)
    rdi = rbx_1

*arg2 = rdi

if (arg4 != 0)
    *arg4 = r15.b

return arg2
