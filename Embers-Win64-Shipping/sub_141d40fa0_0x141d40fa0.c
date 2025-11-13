// 函数: sub_141d40fa0
// 地址: 0x141d40fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t result = __security_cookie ^ &var_e8
int64_t result_1 = result
int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    result = (*(*rcx + 0x20))(rcx)
    uint32_t rcx_1 = zx.d(result.b)
    
    if (result.b == 0)
        result = sub_141d37940(arg1)
    else if (rcx_1 == 1)
        int64_t* rcx_6 = *(arg1 + 0x30)
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x30))(rcx_6)
            void** i = *(arg1 + 0x40)
            result = sx.q(*(arg1 + 0x48))
            
            for (void* r12_1 = &i[result]; i != r12_1; i = &i[1])
                void* rdi_1 = *i
                int64_t var_b8 = 0
                int128_t* var_a8_1 = nullptr
                int128_t var_98
                
                while (true)
                    result = *(rdi_1 + 0x3c8)
                    void* rcx_7 = *result
                    
                    if (rcx_7 == 0)
                        break
                    
                    int128_t zmm2
                    int128_t zmm3
                    int128_t zmm4_1
                    int128_t zmm5_1
                    
                    if (&var_b8 != rcx_7 + 0x10)
                        zmm2 = var_b8.o
                        zmm3 = var_a8_1.o
                        zmm4_1 = var_98
                        int128_t var_88
                        zmm5_1 = var_88
                        var_b8.o = *(rcx_7 + 0x10)
                        var_a8_1.o = *(rcx_7 + 0x20)
                        var_98 = *(rcx_7 + 0x30)
                        var_88 = *(rcx_7 + 0x40)
                        *(rcx_7 + 0x10) = zmm2
                        *(rcx_7 + 0x20) = zmm3
                        *(rcx_7 + 0x30) = zmm4_1
                        *(rcx_7 + 0x40) = zmm5_1
                    
                    void* rbx_1 = *(rdi_1 + 0x3c8)
                    *(rdi_1 + 0x3c8) = rcx_7
                    int64_t var_78 = 0
                    int128_t* var_68_1 = nullptr
                    
                    if (rcx_7 + 0x10 != &var_78)
                        zmm5_1 = *(rcx_7 + 0x10)
                        zmm2 = *(rcx_7 + 0x20)
                        zmm3 = *(rcx_7 + 0x30)
                        zmm4_1 = *(rcx_7 + 0x40)
                        *(rcx_7 + 0x10) = var_78.o
                        *(rcx_7 + 0x20) = var_68_1.o
                        int128_t var_58
                        *(rcx_7 + 0x30) = var_58
                        int128_t var_48
                        *(rcx_7 + 0x40) = var_48
                        var_78.o = zmm5_1
                        var_68_1.o = zmm2
                        var_58 = zmm3
                        var_48 = zmm4_1
                        
                        if (zmm5_1.q != 0)
                            int128_t* rcx_8 = &var_58
                            
                            if (var_68_1 != 0)
                                rcx_8 = var_68_1
                            
                            (*(*rcx_8 + 0x10))(rcx_8)
                    
                    if (rbx_1 != 0)
                        if (*(rbx_1 + 0x10) != 0)
                            void* rax_8 = *(rbx_1 + 0x20)
                            void* rcx_9 = rbx_1 + 0x30
                            
                            if (rax_8 != 0)
                                rcx_9 = rax_8
                            
                            (*(*rcx_9 + 0x10))(rcx_9)
                        
                        j_sub_140a74f90(rbx_1)
                    
                    int128_t* rcx_11 = &var_98
                    void* var_c8 = rdi_1
                    
                    if (var_a8_1 != 0)
                        rcx_11 = var_a8_1
                    
                    var_b8((*(*rcx_11 + 8))(rcx_11), &var_c8)
                
                if (var_b8 != 0)
                    int128_t* rcx_13 = &var_98
                    
                    if (var_a8_1 != 0)
                        rcx_13 = var_a8_1
                    
                    result = (*(*rcx_13 + 0x10))(rcx_13)
            
            int64_t* rcx_14 = *(arg1 + 0x30)
            
            if (rcx_14 != 0)
                result = (**rcx_14)(rcx_14, 1)
            
            *(arg1 + 0x30) = 0
    else if (rcx_1 == 2)
        int64_t* rcx_3 = *(arg1 + 0x30)
        
        if (rcx_3 != 0)
            result = (**rcx_3)(rcx_3, 1)
            *(arg1 + 0x30) = 0

__security_check_cookie(result_1 ^ &var_e8)
return result
