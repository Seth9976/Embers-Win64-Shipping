// 函数: sub_142641e80
// 地址: 0x142641e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_143456178
__builtin_memset(&arg1[0x2c], 0, 0x20)
arg1[0x2a] = arg2[0x14]
void* rax_2 = sub_140d21950(arg2, sub_1426a0c60())
void* const rbx_1 = arg1[0x2a]
void* rcx_1 = rax_2
arg1[0x2b] = rax_2

if (rax_2 == 0)
    if (rbx_1 == 0)
        rcx_1 = nullptr
        rbx_1 = nullptr
    else
        void* rax_4 = sub_140d21950(rbx_1, sub_1426a0c60())
        rbx_1 = arg1[0x2a]
        rcx_1 = rax_4
    
    arg1[0x2b] = rcx_1

if (rbx_1 != 0 && rcx_1 != 0)
    void* rax_5 = *(rbx_1 + 0x130)
    int128_t* rax_6
    
    if (rax_5 == 0)
        rax_6 = &data_143dbb0c0
    else
        rax_6 = rax_5 + 0x1c0
    
    int128_t zmm1_1 = rax_6[1]
    int128_t var_48 = *rax_6
    int128_t zmm0_1 = rax_6[2]
    int64_t** var_78 = nullptr
    int32_t var_70_1 = 0
    int128_t var_38_1 = zmm1_1
    int128_t var_28_1 = zmm0_1
    (*(*rcx_1 + 0x10))(zmm0_1, &var_78)
    int32_t r14_1 = 0
    
    if (var_70_1 s> 0)
        int64_t rbx_2 = 0
        
        do
            int64_t* rsi_1 = var_78
            
            if (*(rsi_1 + rbx_2) != 0)
                void* rax_8 = sub_142549b60()
                
                if (rax_8 != 0)
                    void* rdx_3 = *(rsi_1 + rbx_2)
                    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                    
                    if (rax_9.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30 && rdx_3 != 0)
                        int64_t** rsi_2 = var_78
                        int64_t* rdx_4
                        
                        if (*(rsi_2 + rbx_2) == 0)
                            rdx_4 = nullptr
                        else
                            void* rax_11 = sub_142549b60()
                            
                            if (rax_11 == 0)
                                rdx_4 = nullptr
                            else
                                rdx_4 = *(rsi_2 + rbx_2)
                                int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                                
                                if (rax_12.d s> rdx_4[7].d
                                        || *(rdx_4[6] + (rax_12 << 3)) != rax_11 + 0x30)
                                    rdx_4 = nullptr
                        
                        sub_142669ba0(arg1, &var_48, sub_141dc9e00(rdx_4))
                        int64_t** rsi_3 = var_78
                        int64_t* rdx_6
                        
                        if (*(rsi_3 + rbx_2) == 0)
                            rdx_6 = nullptr
                        else
                            void* rax_15 = sub_142549b60()
                            
                            if (rax_15 == 0)
                                rdx_6 = nullptr
                            else
                                rdx_6 = *(rsi_3 + rbx_2)
                                int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                                
                                if (rax_16.d s> rdx_6[7].d
                                        || *(rdx_6[6] + (rax_16 << 3)) != rax_15 + 0x30)
                                    rdx_6 = nullptr
                        
                        sub_142669e40(arg1, &var_48, sub_141dcb460(rdx_6))
            
            r14_1 += 1
            rbx_2 += 8
        while (r14_1 s< var_70_1)
    
    int64_t* rcx_10 = arg1[0x2b]
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x20)
    int64_t var_58
    
    if ((*(*rcx_10 + 0x18))(rcx_10, &var_58, &var_68) != 0)
        sub_142669ba0(arg1, &var_48, &var_58)
        sub_142669e40(arg1, &var_48, &var_68)
    
    int64_t rcx_13 = var_68
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = var_58
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t** rcx_15 = var_78
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

return arg1
