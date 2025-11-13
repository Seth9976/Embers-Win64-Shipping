// 函数: sub_140eae5c0
// 地址: 0x140eae5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x280))() == 0)
    *(arg1 + 0x3f9) = 0
else
    void* rbp_1 = nullptr
    *(arg1 + 0x3f9) = 1
    int64_t* r14_1 = arg1[0x7a]
    void* r15_1 = nullptr
    
    if (r14_1 != 0)
        int32_t rax_2 = r14_1[1].d
        
        if (rax_2 == 0)
            r14_1 = nullptr
        else
            r14_1[1].d = rax_2 + 1
            
            if (r14_1 != 0)
                r15_1 = arg1[0x79]
    
    if (arg1[0x7c].b != 0 && r15_1 != 0)
        int64_t var_28
        
        if (arg2 == 1)
            int64_t* rbx_1 = arg1[2]
            int64_t rcx = 0
            
            if (rbx_1 != 0)
                int32_t rax_4 = rbx_1[1].d
                
                if (rax_4 != 0)
                    rbx_1[1].d = rax_4 + 1
                    rax_4.b = 1
                
                if (rax_4.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx = arg1[1]
            
            var_28 = rcx
            int64_t* var_20_1 = rbx_1
            
            if (rbx_1 != 0)
                int32_t rax_5 = rbx_1[1].d
                rbx_1[1].d = rax_5
                
                if (rax_5 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rdi_1 = arg1[0x7e]
            
            if (rdi_1 != 0)
                int32_t rax_8 = rdi_1[1].d
                
                if (rax_8 != 0)
                    rdi_1[1].d = rax_8 + 1
                    rax_8.b = 1
                
                if (rax_8.b == 0)
                    rdi_1 = nullptr
                
                if (rdi_1 != 0)
                    rbp_1 = arg1[0x7d]
            
            sub_140ec7070(*(rbp_1 + 0xd8), &var_28)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp7_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp10_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            sub_140e21770(r15_1)
        else if (arg2 == 0)
            *(arg1 + 0x3fa) = 1
            sub_140e19c60(r15_1)
            int64_t* rbx_2 = arg1[2]
            int64_t rcx_10 = 0
            
            if (rbx_2 != 0)
                int32_t rax_13 = rbx_2[1].d
                
                if (rax_13 != 0)
                    rbx_2[1].d = rax_13 + 1
                    rax_13.b = 1
                
                if (rax_13.b == 0)
                    rbx_2 = nullptr
                
                if (rbx_2 != 0)
                    rcx_10 = arg1[1]
            
            var_28 = rcx_10
            int64_t* var_20_2 = rbx_2
            
            if (rbx_2 != 0)
                int32_t rax_14 = rbx_2[1].d
                rbx_2[1].d = rax_14
                
                if (rax_14 == 0)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t* rdi_2 = arg1[0x7e]
            
            if (rdi_2 != 0)
                int32_t rax_17 = rdi_2[1].d
                
                if (rax_17 != 0)
                    rdi_2[1].d = rax_17 + 1
                    rax_17.b = 1
                
                if (rax_17.b == 0)
                    rdi_2 = nullptr
                
                if (rdi_2 != 0)
                    rbp_1 = arg1[0x7d]
            
            sub_140ec7070(*(rbp_1 + 0xd8), &var_28)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp9_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp11_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp1_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
                return sub_140ec4530(arg1) __tailcall

return sub_140ec4530(arg1) __tailcall
