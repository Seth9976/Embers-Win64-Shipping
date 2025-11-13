// 函数: sub_141befea0
// 地址: 0x141befea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int64_t* rcx

if (arg1[0x1b] != 0)
    rcx = arg1[0x1c]

int64_t var_48
int64_t* var_40
void var_38
int64_t* var_30
int64_t rbp
int64_t* rdi

if (arg1[0x1b] == 0 || rcx == 0 || rcx[1].d s<= 0)
    int64_t* rax_4 = (*(*arg1 + 0x2a8))(arg1, &var_38)
    int64_t* rcx_2 = rax_4[1]
    rbp = *rax_4
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
    
    rdi = nullptr
    var_48 = rbp
    
    if (rcx_2 != 0)
        rdi = rcx_2
    
    var_40 = rdi
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    arg1[0x1b] = rbp
    int64_t* rcx_5 = arg1[0x1c]
    
    if (rdi != rcx_5)
        if (rdi != 0)
            *(rdi + 0xc) += 1
            rcx_5 = arg1[0x1c]
        
        if (rcx_5 != 0)
            int32_t temp2_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        arg1[0x1c] = rdi
    
    r13.b = 1
else
    rbp = 0
    
    if (rcx != 0)
        int32_t rax_1 = rcx[1].d
        
        if (rax_1 == 0)
            rcx = nullptr
        else
            rcx[1].d = rax_1 + 1
            rbp = arg1[0x1b]
    
    rdi = nullptr
    var_48 = rbp
    
    if (rcx != 0)
        rdi = rcx
    
    var_40 = rdi

void* rax_8 = sub_141c122a0()
void* rdx_1 = arg1[2]
int64_t rax_9 = sx.q(*(rax_8 + 0x38))

if (rax_9.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
    int64_t* rbx_2 = arg1[0x1e]
    
    if (rbx_2 == 0)
        goto label_141bf0060
    
    int32_t rax_11 = rbx_2[1].d
    int64_t* r14_1
    bool cond:3_1
    
    if (rax_11 == 0)
        rbx_2 = nullptr
    label_141bf0060:
        var_48.o = var_48.o
        
        if (rdi != 0)
            rdi[1].d += 1
        
        void* rax_17 = sub_141c122a0()
        void* rdx_2 = arg1[2]
        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
        int64_t* rax_20
        
        if (rax_18.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
            rax_20 = nullptr
        else
            rax_20 = arg1
        
        int64_t rdx_3 = *(arg3 + 8)
        int64_t* arg_8 = rax_20
        int64_t* rax_21 = (*arg3)(&var_38, rdx_3, &arg_8, &var_48)
        rbp = *rax_21
        int64_t* r15_1 = rax_21[1]
        rax_21[1] = 0
        *rax_21 = 0
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp8_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp12_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        int64_t* r14_4 = rbx_2
        int64_t* rax_26
        
        if (r15_1 == rbx_2)
            rax_26 = r14_4
            
            if (r15_1 != 0)
                r15_1[1].d -= 1
                
                if (r15_1[1].d == 1)
                    (**r15_1)(r15_1)
                    int32_t temp16_1 = *(r15_1 + 0xc)
                    *(r15_1 + 0xc) -= 1
                    rax_26 = r14_4
                    
                    if (temp16_1 == 1)
                        (*(*r15_1 + 8))(r15_1, 1)
                        rax_26 = r14_4
        else
            rbx_2 = r15_1
            rax_26 = r15_1
            
            if (r14_4 != 0)
                r14_4[1].d -= 1
                
                if (r14_4[1].d == 1)
                    (**r14_4)(r14_4)
                    int32_t temp17_1 = *(r14_4 + 0xc)
                    *(r14_4 + 0xc) -= 1
                    rax_26 = r15_1
                    
                    if (temp17_1 == 1)
                        (*(*r14_4 + 8))(r14_4, 1)
                        rax_26 = r15_1
        
        arg1[0x1d] = rbp
        int64_t* rcx_19 = arg1[0x1e]
        
        if (rax_26 != rcx_19)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_19 = arg1[0x1e]
            
            if (rcx_19 != 0)
                int32_t temp18_1 = *(rcx_19 + 0xc)
                *(rcx_19 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rcx_19 + 8))(rcx_19, 1)
            
            arg1[0x1e] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        r14_1 = rdi
        
        if (rbx_2 != rdi)
            goto label_141bf0019
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            cond:3_1 = rbx_2[1].d != 1
            goto label_141bf01f6
    else
        rbx_2[1].d = rax_11 + 1
        rbp = arg1[0x1d]
        
        if (rbp == 0)
            goto label_141bf0060
        
        r14_1 = rdi
        rbx_2[1].d = rax_11 + 2
        int64_t rax_15
        int64_t* rcx_8
        
        if (rbx_2 == rdi)
            cond:3_1 = rax_11 != 0xffffffff
            rbx_2[1].d = rax_11 + 1
        label_141bf01f6:
            
            if (not(cond:3_1))
                (**rbx_2)(rbx_2)
                int32_t temp9_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    rax_15 = *rbx_2
                    rcx_8 = rbx_2
                label_141bf0211:
                    (*(rax_15 + 8))(rcx_8, 1)
        else
        label_141bf0019:
            rdi = rbx_2
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp11_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        rax_15 = *r14_1
                        rcx_8 = r14_1
                        goto label_141bf0211
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp13_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

if (r13.b != 0)
    (*(*arg1 + 0x298))(arg1)
    (*(*arg1 + 0x2b0))(arg1)

*arg2 = rbp
arg2[1] = rdi

if (rdi != 0)
    int32_t rax_37 = rdi[1].d
    rdi[1].d = rax_37
    
    if (rax_37 == 0)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
