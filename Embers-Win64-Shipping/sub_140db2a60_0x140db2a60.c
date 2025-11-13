// 函数: sub_140db2a60
// 地址: 0x140db2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int64_t var_38 = arg1
int64_t* var_30 = arg4
int16_t rdi = *(arg2 + (r12 << 1))

if (sub_140ab3c60(rdi) != 0 || rdi == 0x200b)
    int64_t* rax_23 = sub_140d98800(arg5)
    int64_t* rbx_4 = arg4[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (rax_23 == &var_38)
    label_140db2dbc:
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp1_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    else
        *rax_23 = *arg4
        int64_t* rsi_1 = rax_23[1]
        
        if (rbx_4 == rsi_1)
            goto label_140db2dbc
        
        rax_23[1] = rbx_4
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp3_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    
    *(rax_23 + 0x14) = r12.d
    rax_23[2].d = 0
    int64_t* rax_24
    rax_24.b = 1
    rax_23[3] = 0
    *(rax_23 + 0x24) = 0
    rax_23[4].d = 0x10100
    return rax_24

int32_t arg_8
int16_t arg_18

if (rdi == 9)
    arg_8 = 0
    arg_18 = 0
    sub_140d96cc0(&var_38, &arg_8, &arg_18)
    int32_t rax_2 = arg5[1].d & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    if (4 - rax_2 s> 0)
        int64_t* rax_5 = sub_140d98800(arg5)
        int64_t* rbx_1 = arg4[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (rax_5 == &var_38)
        label_140db2b4e:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp8_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        else
            *rax_5 = *arg4
            int64_t* r14_1 = rax_5[1]
            
            if (rbx_1 == r14_1)
                goto label_140db2b4e
            
            rax_5[1] = rbx_1
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp11_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
        
        rax_5[2].d = arg_8
        int16_t rcx_8 = (4 - rax_2).w * arg_18
        *(rax_5 + 0x14) = r12.d
        *(rax_5 + 0x1a) = 0
        *(rax_5 + 0x1e) = 0x1000000
        *(rax_5 + 0x22) = 1
        rax_5[3].w = rcx_8
        *(rax_5 + 0x24) = 0
    
    rax_2.b = 1
    return rax_2

int32_t rax_10

if (rdi == 0x2009 || rdi == 0x202f)
    int64_t* rdx_1 = *arg4
    int64_t* rbx_2 = rdx_1[1]
    
    if (rbx_2 != 0)
        int32_t rax_11 = rbx_2[1].d
        
        if (rax_11 != 0)
            rbx_2[1].d = rax_11 + 1
            rax_11.b = 1
        
        if (rax_11.b == 0)
            rbx_2 = nullptr
    
    int64_t* rcx_9 = nullptr
    
    if (rbx_2 != 0)
        rcx_9 = *rdx_1
    
    if (rcx_9 != 0)
        rax_10 = sub_142b91fc0(*rcx_9)
    
    if (rcx_9 == 0 || rax_10 == 0)
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        arg_8 = 0
        arg_18 = 0
        sub_140d96cc0(&var_38, &arg_8, &arg_18)
        int64_t* rax_16 = sub_140d98800(arg5)
        int64_t* rbx_3 = arg4[1]
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (rax_16 == &var_38)
        label_140db2ce8:
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp15_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
        else
            *rax_16 = *arg4
            int64_t* rdi_2 = rax_16[1]
            
            if (rbx_3 == rdi_2)
                goto label_140db2ce8
            
            rax_16[1] = rbx_3
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp17_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        int32_t rcx_21 = sx.d(arg_18)
        rax_16[2].d = arg_8
        *(rax_16 + 0x14) = r12.d
        *(rax_16 + 0x1a) = 0
        *(rax_16 + 0x1e) = 0x1000000
        *(rax_16 + 0x22) = 1
        rax_16[3].w = (rcx_21 * 2 s/ 3).w
        uint16_t rax_22
        rax_22.b = 1
        *(rax_16 + 0x24) = 0
        return rax_22
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

rax_10.b = 0
return rax_10
