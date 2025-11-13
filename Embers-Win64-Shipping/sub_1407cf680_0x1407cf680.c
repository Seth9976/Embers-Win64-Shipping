// 函数: sub_1407cf680
// 地址: 0x1407cf680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg3 + 8)
void* result

if (rbx != 0)
    int64_t* rbx_2 = *(rbx + 0x50)
    int32_t rdx_3 = *(arg3 + 0x17c)
    uint32_t rax_6 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_6 s>= rdx_3)
        rdx_3 = rax_6
    
    int32_t rax_7 = sub_1423647f0(rbx_2, rdx_3)
    int64_t* rbx_4 = *(*rbx_2 + (sx.q(rax_7) << 3))
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    char rdi_1 = *(rbx_4 + 0xf1)
    char r15_1 = rbx_4[0x1e].b
    int64_t* rax_8 = sub_140a84c80(0, 0x20, 0)
    void*** rdi_2 = rax_8
    int64_t* rax_15
    
    if (rdi_1 == 0)
        if (r15_1 == 0)
            int64_t* var_38 = rax_8
            
            if (rax_8 != 0)
                rax_8[1] = arg1
                *rax_8 = &data_142dd3728
                rax_8[3] = sub_140a387b0()
                *rax_8 = &data_142dd3780
            
            void*** rax_30 = rdi_2
            
            if (&var_38 != arg4)
                if (rdi_2 != 0)
                    (*(*rax_8 + 0x40))(rax_8, arg4)
                    rax_30 = rdi_2
                else if (arg4[1].d != 0)
                    void* rcx_25 = *arg4
                    
                    if (rcx_25 != 0)
                        (*(*rcx_25 + 0x38))(rcx_25, 0)
                        void* rcx_26 = *arg4
                        rax_30 = rdi_2
                        
                        if (rcx_26 != 0)
                            *arg4 = sub_140a84c80(rcx_26, 0, 0)
                            rax_30 = rdi_2
                        
                        arg4[1].d = 0
            
            if (rax_30 != 0)
                (*(*rax_8 + 0x38))(rax_8, 0)
                rax_15 = sub_140a84c80(rax_8, 0, 0)
                var_38 = rax_15
            label_1407cfaa5:
                
                if (rax_15 != 0)
                    sub_140a74f90(rax_15)
        else
            int64_t* var_48 = rax_8
            
            if (rax_8 != 0)
                rax_8[1] = arg1
                *rax_8 = &data_142dd3728
                rax_8[3] = sub_140a387b0()
                *rax_8 = &data_142dd3780
            
            void*** rax_24 = rdi_2
            
            if (&var_48 != arg4)
                if (rdi_2 != 0)
                    (*(*rax_8 + 0x40))(rax_8, arg4)
                    rax_24 = rdi_2
                else if (arg4[1].d != 0)
                    void* rcx_20 = *arg4
                    
                    if (rcx_20 != 0)
                        (*(*rcx_20 + 0x38))(rcx_20, 0)
                        void* rcx_21 = *arg4
                        rax_24 = rdi_2
                        
                        if (rcx_21 != 0)
                            *arg4 = sub_140a84c80(rcx_21, 0, 0)
                            rax_24 = rdi_2
                        
                        arg4[1].d = 0
            
            if (rax_24 != 0)
                (*(*rax_8 + 0x38))(rax_8, 0)
                rax_15 = sub_140a84c80(rax_8, 0, 0)
                var_48 = rax_15
                goto label_1407cfaa5
    else if (r15_1 == 0)
        int64_t* var_58 = rax_8
        
        if (rax_8 != 0)
            rax_8[1] = arg1
            *rax_8 = &data_142dd3678
            rax_8[3] = sub_140a387b0()
            *rax_8 = &data_142dd36d0
        
        void*** rax_18 = rdi_2
        
        if (&var_58 != arg4)
            if (rdi_2 != 0)
                (*(*rax_8 + 0x40))(rax_8, arg4)
                rax_18 = rdi_2
            else if (arg4[1].d != 0)
                void* rcx_15 = *arg4
                
                if (rcx_15 != 0)
                    (*(*rcx_15 + 0x38))(rcx_15, 0)
                    void* rcx_16 = *arg4
                    rax_18 = rdi_2
                    
                    if (rcx_16 != 0)
                        *arg4 = sub_140a84c80(rcx_16, 0, 0)
                        rax_18 = rdi_2
                    
                    arg4[1].d = 0
        
        if (rax_18 != 0)
            (*(*rax_8 + 0x38))(rax_8, 0)
            rax_15 = sub_140a84c80(rax_8, 0, 0)
            var_58 = rax_15
            goto label_1407cfaa5
    else
        int64_t* var_68 = rax_8
        
        if (rax_8 != 0)
            rdi_2[1] = arg1
            *rdi_2 = &data_142dd3678
            rdi_2[3] = sub_140a387b0()
            *rdi_2 = &data_142dd36d0
        
        void*** rax_11 = rdi_2
        
        if (&var_68 != arg4)
            if (rdi_2 != 0)
                (*(*rax_8 + 0x40))(rax_8, arg4)
                rax_11 = rdi_2
            else if (arg4[1].d != 0)
                void* rcx_10 = *arg4
                
                if (rcx_10 != 0)
                    (*(*rcx_10 + 0x38))(rcx_10, 0)
                    void* rcx_11 = *arg4
                    rax_11 = rdi_2
                    
                    if (rcx_11 != 0)
                        *arg4 = sub_140a84c80(rcx_11, 0, 0)
                        rax_11 = rdi_2
                    
                    arg4[1].d = 0
        
        if (rax_11 != 0)
            (*(*rax_8 + 0x38))(rax_8, 0)
            rax_15 = sub_140a84c80(rax_8, 0, 0)
            var_68 = rax_15
            goto label_1407cfaa5
    result = zx.q(rbx_4[1].d)
    rbx_4[1].d -= 1
    
    if (result.d == 1)
        return (**rbx_4)(rbx_4, 1)
else
    void*** rax = sub_140a84c80(0, zx.q((rbx + 0x20).d), 0)
    
    if (rax != 0)
        rax[1] = arg1
        *rax = &data_142dd35c8
        rax[3] = sub_140a387b0()
        *rax = &data_142dd3620
    
    void var_28
    result = &var_28
    
    if (&var_28 != arg4)
        if (rax != 0)
            result = (*rax)[8](rax, arg4)
        else if (arg4[1].d != 0)
            void* rcx_1 = *arg4
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x38))(rcx_1, 0)
                void* rcx_2 = *arg4
                
                if (rcx_2 != 0)
                    result = sub_140a84c80(rcx_2, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result) __tailcall

return result
