// 函数: sub_141bbe1d0
// 地址: 0x141bbe1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rbx = *(arg1 + 0x40)
int64_t var_a8

if (rbx != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x768) s> 0)
        int64_t rdi_1 = 0
        
        do
            uint64_t rsi_1 = *(arg2 + 0x760)
            
            if (*(rdi_1 + rsi_1 + 8) != 0)
                int64_t* rcx = *(rdi_1 + rsi_1)
                
                if (rcx != 0 && *(*(*rcx + 0x30))(rcx, &var_a8) == rbx)
                    if (*(rdi_1 + rsi_1 + 8) != 0)
                        int64_t* rcx_1 = *(rdi_1 + rsi_1)
                        
                        if (rcx_1 != 0)
                            (*(*rcx_1 + 0x38))(rcx_1, 0)
                            int64_t rcx_2 = *(rdi_1 + rsi_1)
                            
                            if (rcx_2 != 0)
                                *(rdi_1 + rsi_1) = sub_140a84c80(rcx_2, 0, 0)
                            
                            *(rdi_1 + rsi_1 + 8) = 0
                    
                    sub_140599630(arg2 + 0x760, 0)
                    break
            
            i += 1
            rdi_1 += 0x10
        while (i s< *(arg2 + 0x768))

uint64_t result = sub_140d3c6e0(arg1 + 0x38)

if (result != 0)
    void* rcx_5 = *(result + 0x188)
    var_a8 = 0
    void* rdi_2
    
    if (rcx_5 == 0)
        rdi_2 = *(result + 0x300)
    else
        rdi_2 = *(rcx_5 + 0xc0)
    
    int64_t* rax_6 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_6 != 0)
        *rax_6 = &data_142d57800
        sub_140d3a3a0(&rax_6[1], arg1)
        rax_6[2] = sub_141bbe400
        rax_6[4] = sub_140a387b0()
        *rax_6 = &data_142d57858
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x40))(rax_6, &var_98)
    
    void var_88
    sub_140d3a3a0(&var_88, nullptr)
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    void* var_68_1 = nullptr
    sub_1423e6200(rdi_2, &var_a8, &var_98, 0x3a83126f, 0, 0xbf800000)
    
    if (var_78_1 != 0)
        void var_58
        void* rcx_10 = &var_58
        
        if (var_68_1 != 0)
            rcx_10 = var_68_1
        
        (*(*rcx_10 + 0x10))(rcx_10)
    
    result = sub_140745b20(&var_98)
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x38))(rax_6, 0)
        result = sub_140a84c80(rax_6, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_d8)
return result
