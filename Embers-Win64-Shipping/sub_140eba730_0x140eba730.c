// 函数: sub_140eba730
// 地址: 0x140eba730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr
int64_t var_30 = 0
sub_140ebda30(arg3, &var_38)
int32_t i_2 = var_30.d
int32_t r10 = 0
int64_t* r15 = var_38

if (i_2 s<= 0)
label_140eba804:
    *arg1 = 0
    arg1[1] = 0
    
    if (i_2 != 0)
        int64_t* rdi_2 = &r15[1]
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 = &rdi_2[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
else
    int32_t rax_1 = arg2[1].d
    int64_t* rdi_1 = r15
    int32_t var_28_1 = rax_1
    var_38.o = *arg2
    int32_t r8 = var_30.d
    
    while (true)
        void* rdx_1 = *rdi_1
        int64_t* rbp_1 = *(rdx_1 + 0x3a8)
        int64_t* rcx_1 = rbp_1
        void* r9_3 = &rbp_1[sx.q(*(rdx_1 + 0x3b0)) * 2]
        
        if (rbp_1 != r9_3)
            while (true)
                if ((*(rcx_1 + 0xc) & var_30:4.d) != 0 && *rcx_1 == var_38)
                    if (rax_1.b != 0 && r8 == 0xffffffff)
                        break
                    
                    if (r8 == rcx_1[1].d)
                        break
                
                rcx_1 = &rcx_1[2]
                
                if (rcx_1 == r9_3)
                    goto label_140eba7f8
            
            if (((rcx_1 - rbp_1) s>> 4).d != 0xffffffff)
                int64_t rcx_8 = sx.q(r10) * 2
                *arg1 = r15[rcx_8]
                void* rax_7 = r15[rcx_8 + 1]
                arg1[1] = rax_7
                
                if (rax_7 != 0)
                    *(rax_7 + 8) += 1
                
                if (i_2 != 0)
                    void* rdi_3 = &r15[1]
                    int32_t i_1
                    
                    do
                        int64_t* rbx_3 = *rdi_3
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp5_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        rdi_3 += 0x10
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                break
        
    label_140eba7f8:
        r10 += 1
        rdi_1 = &rdi_1[2]
        
        if (r10 s>= i_2)
            goto label_140eba804

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
