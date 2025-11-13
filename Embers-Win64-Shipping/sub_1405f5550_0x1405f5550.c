// 函数: sub_1405f5550
// 地址: 0x1405f5550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_10 = -2
uint32_t rax

if (sub_1405fdfb0(arg1, arg2).b != 0)
    int64_t* arg_18 = nullptr
    int64_t* arg_20 = nullptr
    int64_t* var_18 = nullptr
    rax = sub_1405f6730(arg1, arg2, &arg_20, &arg_18, &var_18)
    int64_t* rbx_1 = arg_20
    int64_t* rdi_1 = var_18
    
    if (rax.b != 0)
        rax = (*(*rdi_1 + 0xb8))(rdi_1, 2, rbx_1)
        
        if (rax s>= 0)
            (*(*rdi_1 + 0x10))(rdi_1)
            
            if (rbx_1 != 0)
                (*(*rbx_1 + 0x10))(rbx_1)
            
            int64_t* rcx_4 = arg_18
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
            
            int64_t rax_3
            rax_3.b = 1
            return rax_3
        
        if (rax == 0x80004005)
            (*(*rdi_1 + 0x10))(rdi_1)
            
            if (rbx_1 != 0)
                (*(*rbx_1 + 0x10))(rbx_1)
            
            int64_t* rcx_7 = arg_18
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x10))(rcx_7)
            
            int64_t rax_7
            rax_7.b = 0
            return rax_7
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x10))(rdi_1)
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x10))(rbx_1)
    
    int64_t* rcx_10 = arg_18
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x10))(rcx_10)

rax.b = 0
return rax
