// 函数: sub_14068b760
// 地址: 0x14068b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rbx = nullptr
*(arg2 + 0x18) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0

if (arg3 != arg4)
    void* rbp_1 = nullptr
    void* r14_1 = nullptr
    int64_t rdi_2 = arg4 - arg3
    
    if (arg4 != arg3)
        if (rdi_2 u> 0x7fffffffffffffff)
            sub_140610c20()
            noreturn
        
        if (rdi_2 u< 0x1000)
            rbx = j_sub_140a82f30(rdi_2)
        else
            if (rdi_2 + 0x27 u<= rdi_2)
                stdext::threads::_Throw_lock_error()
                noreturn
            
            int64_t rax_2 = j_sub_140a82f30(rdi_2 + 0x27)
            
            if (rax_2 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx = (rax_2 + 0x27) & 0xffffffffffffffe0
            *(rbx - 8) = rax_2
        
        rbp_1 = rbx + rdi_2
        memmove(rbx, arg3, rdi_2.d)
        r14_1 = arg4 - arg3 + rbx
    
    std::ctype<char>::tolower()
    int64_t* rcx_3 = *arg1
    void* var_78
    (*(*rcx_3 + 0x20))(rcx_3, &var_78, rbx, r14_1)
    int64_t var_60
    
    if (arg2 != &var_78)
        int64_t rdx_2 = *(arg2 + 0x18)
        int128_t var_68
        
        if (rdx_2 u< 0x10)
            *arg2 = var_78.o
            *(arg2 + 0x10) = var_68
        else
            void* rcx_4 = *arg2
            
            if (rdx_2 + 1 u>= 0x1000)
                void* r8_2 = *(rcx_4 - 8)
                
                if (rcx_4 - r8_2 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_4 = r8_2
            
            j_sub_140a74f90(rcx_4)
            *arg2 = var_78.o
            *(arg2 + 0x10) = var_68
    else if (var_60 u>= 0x10)
        void* rcx_6 = var_78
        void* rax_6 = rcx_6
        
        if (var_60 + 1 u>= 0x1000)
            rcx_6 = *(rcx_6 - 8)
        
        if (var_60 + 1 u>= 0x1000 && rax_6 - rcx_6 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        j_sub_140a74f90(rcx_6)
    
    if (rbx != 0)
        if (rbp_1 - rbx u< 0x1000)
            j_sub_140a74f90(rbx)
        else
            void* rcx_7 = *(rbx - 8)
            
            if (rbx - rcx_7 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
