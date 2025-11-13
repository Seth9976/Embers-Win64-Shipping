// 函数: sub_141700b70
// 地址: 0x141700b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_18 = arg3
int32_t* rbp = arg3
void** result_2 = arg1
int64_t result

if (arg2 == 0)
    int32_t rcx_27 = *(arg1 + 0x14)
    void* r15_1 = &result_2[2]
    int32_t i_3 = *r15_1
    result = result_2[1]
    
    if (rcx_27 s>= 0)
        if (result != 0)
            result_2 = result
        
        if (i_3 != 0)
            int32_t i
            
            do
                void* rbx_1 = *result_2
                
                if (rbx_1 != 0)
                    int64_t rcx_28 = *(rbx_1 + 0x78)
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                    
                    int64_t rcx_29 = *(rbx_1 + 0x68)
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    int64_t rcx_30 = *(rbx_1 + 0x58)
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                    
                    int64_t rcx_31 = *(rbx_1 + 0x48)
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                    
                    result = j_sub_140a74f90(rbx_1)
                
                result_2 = &result_2[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        *r15_1 = 0
        return result
    
    void** result_3 = result_2
    
    if (result != 0)
        result_3 = result
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            void* rbx_2 = *result_3
            
            if (rbx_2 != 0)
                int64_t rcx_33 = *(rbx_2 + 0x78)
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                int64_t rcx_34 = *(rbx_2 + 0x68)
                
                if (rcx_34 != 0)
                    sub_140a74f90(rcx_34)
                
                int64_t rcx_35 = *(rbx_2 + 0x58)
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                int64_t rcx_36 = *(rbx_2 + 0x48)
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
                
                result = j_sub_140a74f90(rbx_2)
            
            result_3 = &result_3[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rcx_27 = *(result_2 + 0x14)
    
    *r15_1 = 0
    
    if (rcx_27 != 0)
        return sub_140809a30(result_2, 0)
else
    void* const r15 = arg2
    arg3.b = 1
    
    if (*(arg2 + 8) != 5)
        r15 = nullptr
    
    void* arg_10
    
    if (r15 == 0)
        sub_1417560a0(arg1, 1, arg3.b)
        void** result_13 = result_2[1]
        void** rax_1 = sub_1417354d0(&arg_10)
        void** result_7 = result_2
        
        if (result_13 != 0)
            result_7 = result_13
        
        if (result_7 != rax_1)
            void* rdi_3 = *result_7
            *result_7 = *rax_1
            *rax_1 = nullptr
            
            if (rdi_3 != 0)
                int64_t rcx_15 = *(rdi_3 + 0x78)
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                int64_t rcx_16 = *(rdi_3 + 0x68)
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                int64_t rcx_17 = *(rdi_3 + 0x58)
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                int64_t rcx_18 = *(rdi_3 + 0x48)
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                j_sub_140a74f90(rdi_3)
        
        void* rdi_4 = arg_10
        
        if (rdi_4 != 0)
            int64_t rcx_20 = *(rdi_4 + 0x78)
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int64_t rcx_21 = *(rdi_4 + 0x68)
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            int64_t rcx_22 = *(rdi_4 + 0x58)
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            int64_t rcx_23 = *(rdi_4 + 0x48)
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            j_sub_140a74f90(rdi_4)
        
        void** result_10 = result_2[1]
        void** result_6 = result_2
        
        if (result_10 != 0)
            result_6 = result_10
        
        result = *result_6
        *(result + 0x28) = arg2
    else
        int64_t rdi = sx.q(arg1[2].d)
        result = sub_1417560a0(arg1, *(r15 + 0x18), arg3.b)
        int32_t i_2 = 0
        
        if (result_2[2].d s> 0)
            int64_t rbp_1 = 0
            
            do
                if (rbp_1 s>= rdi)
                    void** result_12 = result_2[1]
                    void** rax = sub_1417354d0(&arg_10)
                    void** result_4 = result_2
                    
                    if (result_12 != 0)
                        result_4 = result_12
                    
                    void* rdx_1 = &result_4[rbp_1]
                    
                    if (rdx_1 != rax)
                        void* rdi_1 = *rdx_1
                        *rdx_1 = *rax
                        *rax = nullptr
                        
                        if (rdi_1 != 0)
                            int64_t rcx_2 = *(rdi_1 + 0x78)
                            
                            if (rcx_2 != 0)
                                sub_140a74f90(rcx_2)
                            
                            int64_t rcx_3 = *(rdi_1 + 0x68)
                            
                            if (rcx_3 != 0)
                                sub_140a74f90(rcx_3)
                            
                            int64_t rcx_4 = *(rdi_1 + 0x58)
                            
                            if (rcx_4 != 0)
                                sub_140a74f90(rcx_4)
                            
                            int64_t rcx_5 = *(rdi_1 + 0x48)
                            
                            if (rcx_5 != 0)
                                sub_140a74f90(rcx_5)
                            
                            j_sub_140a74f90(rdi_1)
                    
                    void* rdi_2 = arg_10
                    
                    if (rdi_2 != 0)
                        int64_t rcx_7 = *(rdi_2 + 0x78)
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        int64_t rcx_8 = *(rdi_2 + 0x68)
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        int64_t rcx_9 = *(rdi_2 + 0x58)
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        int64_t rcx_10 = *(rdi_2 + 0x48)
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        j_sub_140a74f90(rdi_2)
                
                void** result_9 = result_2[1]
                void** result_5 = result_2
                
                if (result_9 != 0)
                    result_5 = result_9
                
                i_2 += 1
                result = *(*(r15 + 0x10) + (rbp_1 << 3))
                void* rcx_12 = result_5[rbp_1]
                rbp_1 += 1
                *(rcx_12 + 0x28) = result
            while (i_2 s< result_2[2].d)
            
            rbp = arg_18
    
    if (*(arg2 + 0xc) != 0)
        void** result_11 = result_2[1]
        void** result_8 = result_2
        
        if (result_11 != 0)
            result_8 = result_11
        
        result = sx.q(result_2[2].d)
        void* rsi = &result_8[result]
        
        if (result_8 != rsi)
            do
                void* rdi_5 = *result_8
                int64_t* rcx_25 = *(rdi_5 + 0x28)
                
                if (rcx_25 != 0 && *(rcx_25 + 0xc) != 0)
                    void var_58
                    int32_t* rax_3 = (*(*rcx_25 + 0x28))(rcx_25, &var_58)
                    int64_t var_78
                    int64_t var_68
                    sub_14003bce0(rbp, rax_3, &rax_3[3], &var_78, &var_68)
                    *(rdi_5 + 0x30) = var_78
                    int64_t zmm0_1 = var_68
                    int32_t var_70
                    *(rdi_5 + 0x38) = var_70
                    int32_t result_1
                    result = zx.q(result_1)
                    *(rdi_5 + 0x3c) = zmm0_1
                    *(rdi_5 + 0x44) = result.d
                
                result_8 = &result_8[1]
            while (result_8 != rsi)

return result
