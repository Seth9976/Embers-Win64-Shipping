// 函数: sub_142441630
// 地址: 0x142441630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_1405947f0(&var_38, 7)
int32_t rbx = var_30.d + 7
var_30.d = rbx

if (rbx s> 0)
    sub_140594770(&var_38)
    rbx = var_30.d

int16_t* r15 = var_38
UnDecorator::getReferenceType(r15, u"UEDPIE", 0xe)
int64_t rdi = -1
int16_t* const rdx_1 = &data_142d40450

if (rbx != 0)
    rdx_1 = r15

int32_t rax = sub_140a23cf0(arg2, rdx_1, 1, 0, 0xffffffff)

if (rax s< 0)
label_14244197f:
    sub_140596d10(arg1, arg2)
else
    int32_t rbx_1
    
    if (rbx == 0)
        rbx_1 = 0
    else
        rbx_1 = rbx - 1
    
    int32_t r9_1 = arg2[1].d
    int32_t rbx_2 = rbx_1 + rax
    int32_t r14_1 = r9_1 - 1
    
    if (r9_1 == 0)
        r14_1 = 0
    
    if (rbx_2 s>= r14_1)
    label_14244197f_1:
        sub_140596d10(arg1, arg2)
    else
        int16_t* rdx_2 = *arg2
        
        if (rdx_2[sx.q(rbx_2)] != 0x5f)
        label_14244197f_2:
            sub_140596d10(arg1, arg2)
        else
            int32_t rbx_3 = rbx_2 + 1
            int16_t* rcx_4 = &rdx_2[sx.q(rbx_3)]
            
            while (true)
                if (rbx_3 s>= r14_1)
                    goto label_14244197f_2
                
                int16_t rax_3 = *rcx_4
                
                if (rax_3 == 0x5f)
                    if (rbx_3 s>= r14_1)
                        goto label_14244197f_2
                    
                    int64_t var_48 = 0
                    int16_t* const rax_4 = &data_142d40450
                    int32_t var_40_1 = 0
                    
                    if (r9_1 != 0)
                        rax_4 = rdx_2
                    
                    int32_t rcx_5 = 0
                    int32_t r12_1 = 0
                    int32_t var_3c_1 = 0
                    
                    if (rax s< r14_1)
                        r14_1 = rax
                    
                    if (rax_4 != 0 && *rax_4 != 0 && r14_1 s> 0)
                        if (r14_1 + 1 s> 0)
                            sub_1405947f0(&var_48, r14_1 + 1)
                            rcx_5 = var_3c_1
                            r12_1 = var_40_1
                        
                        r12_1 = r12_1 + 1 + r14_1
                        
                        if (r12_1 s> rcx_5)
                            sub_140594770(&var_48)
                        
                        int64_t r14_2 = var_48
                        UnDecorator::getReferenceType(r14_2, rax_4, r14_1 * 2)
                        *(r14_2 + (sx.q(r12_1) << 1) - 2) = 0
                    
                    int32_t rax_6 = arg2[1].d
                    int32_t rdx_6 = rax_6 - 1
                    
                    if (rax_6 == 0)
                        rdx_6 = -1
                    
                    int32_t rcx_9 = rax_6 - 1
                    
                    if (rax_6 == 0)
                        rdx_6 = 0
                    
                    int32_t rdx_7 = rdx_6 - rbx_3
                    
                    if (rax_6 == 0)
                        rcx_9 = -1
                    
                    if (rax_6 == 0)
                        rcx_9 = 0
                    
                    int16_t* const r9_2
                    
                    if (rax_6 == 0)
                        r9_2 = &data_142d40450
                    else
                        r9_2 = *arg2
                    
                    int32_t rax_7
                    
                    if (rdx_7 - 1 s>= 0)
                        rax_7 = rcx_9
                        
                        if (rdx_7 s<= rcx_9)
                            rax_7 = rdx_7 - 1
                    else
                        rax_7 = 0
                    
                    int32_t rbx_4 = 0
                    int16_t* r14_3 = nullptr
                    var_38 = nullptr
                    int32_t rax_9 = 0
                    var_30.d = 0
                    var_30:4.d = 0
                    int16_t* r13_1 = &r9_2[sx.q(rcx_9) - sx.q(rax_7)]
                    
                    if (r13_1 != 0 && *r13_1 != 0)
                        do
                            rdi += 1
                        while (r13_1[rdi] != 0)
                        
                        if (rdi.d + 1 s> 0)
                            sub_1405947f0(&var_38, rdi.d + 1)
                            rax_9 = var_30:4.d
                            rbx_4 = var_30.d
                            r14_3 = var_38
                        
                        rbx_4 += rdi.d + 1
                        var_30.d = rbx_4
                        
                        if (rbx_4 s> rax_9)
                            sub_140594770(&var_38)
                            rbx_4 = var_30.d
                            r14_3 = var_38
                        
                        UnDecorator::getReferenceType(r14_3, r13_1, (rdi.d + 1) * 2)
                    
                    if (r12_1 s> 1)
                        int32_t rbx_5
                        
                        if (rbx_4 == 0)
                            rbx_5 = 0
                        else
                            rbx_5 = rbx_4 - 1
                        
                        int32_t rax_10
                        
                        if (r12_1 == 0)
                            rax_10 = r12_1 + 1
                        
                        if (r12_1 != 0 || rbx_5 == 0)
                            rax_10 = 0
                        
                        int32_t rax_11 = rax_10 + rbx_5
                        var_38 = nullptr
                        var_30.d = r12_1
                        
                        if (r12_1 != 0 || rax_11 != 0)
                            sub_1405a4c70(&var_38, r12_1 + rax_11, 0)
                            memcpy(var_38, var_48, r12_1 * 2)
                        else
                            var_30:4.d = 0
                        
                        sub_140a20ba0(&var_38, r14_3, rbx_5)
                        *arg1 = var_38
                        arg1[1].d = var_30.d
                        *(arg1 + 0xc) = var_30:4.d
                    else
                        *arg1 = 0
                        arg1[1].d = rbx_4
                        
                        if (rbx_4 != 0)
                            sub_1405a4c70(arg1, rbx_4, 0)
                            memcpy(*arg1, r14_3, rbx_4 * 2)
                        else
                            *(arg1 + 0xc) = 0
                    
                    if (r14_3 != 0)
                        sub_140a74f90(r14_3)
                    
                    int64_t rax_15 = var_48
                    
                    if (rax_15 != 0)
                        sub_140a74f90(rax_15)
                    
                    break
                
                if (rax_3 - 0x30 u> 9)
                    goto label_14244197f_2
                
                rbx_3 += 1
                rcx_4 = &rcx_4[1]

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
