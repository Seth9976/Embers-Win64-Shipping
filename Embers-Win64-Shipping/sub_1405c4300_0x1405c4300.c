// 函数: sub_1405c4300
// 地址: 0x1405c4300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3e110(&arg1[2]) != 0 && *arg1 != 0)
    void* rax_1 = arg1[1]
    
    if (rax_1 != 0 && *(rax_1 + 8) s> 0)
        void* rax_2 = sub_140d3c6e0(&arg1[2])
        int64_t* rdi_1 = arg1[1]
        int64_t rcx_2 = 0
        
        if (rdi_1 != 0)
            int32_t rax_3 = rdi_1[1].d
            char rdx
            
            if (rax_3 != 0)
                rdx = 1
                rdi_1[1].d = rax_3 + 1
            else
                rdx = 0
            
            if (rdx == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                rcx_2 = *arg1
        
        void* result = sub_1405b4ff0(rcx_2, rax_2, arg2, arg3, arg1[3].d)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                int64_t rdx_2 = *rdi_1
                (*rdx_2)(rdi_1, rdx_2)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        return result

return nullptr
