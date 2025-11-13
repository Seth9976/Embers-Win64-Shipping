// 函数: sub_140e64120
// 地址: 0x140e64120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3[1]
int64_t* r14 = *arg3

if (rdi != 0)
    rdi[1].d += 1
    
    if (rdi != 0)
        rdi[1].d += 1
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp3_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi + 8))(rdi, 1)

bool cond:0_1

if (r14 == 0)
label_140e6422b:
    *arg2 = nullptr
    arg2[1] = 0
    
    if (rdi != 0)
        rdi[1].d -= 1
        cond:0_1 = rdi[1].d != 1
    label_140e64243:
        
        if (not(cond:0_1))
            (**rdi)(rdi)
            int32_t temp5_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi + 8))(rdi, 1)
else
    while ((*(*r14 + 0x208))(r14) == 0)
        int64_t* rcx_3 = &r14[0x4d]
        r14 = nullptr
        int64_t* rbx_1 = rcx_3[1]
        
        if (rbx_1 != 0)
            int32_t rax_5 = rbx_1[1].d
            
            if (rax_5 == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rax_5 + 1
                
                if (rbx_1 != 0)
                    r14 = *rcx_3
        
        int64_t* rsi_1 = rdi
        
        if (rbx_1 != rdi)
            rdi = rbx_1
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp9_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
        else if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (r14 == 0)
            goto label_140e6422b
    
    *arg2 = r14
    arg2[1] = rdi
    
    if (rdi != 0)
        int32_t rax_15 = rdi[1].d
        cond:0_1 = rax_15 != 0
        rdi[1].d = rax_15
        goto label_140e64243
int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
