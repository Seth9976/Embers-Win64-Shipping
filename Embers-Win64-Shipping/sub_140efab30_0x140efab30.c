// 函数: sub_140efab30
// 地址: 0x140efab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((arg2[0xd].b & 1) != 0)
    int32_t i_4 = 0
    arg2[8].d = 0
    
    if (*(arg2 + 0x44) != 0)
        result = sub_1405c5660(&arg2[7], 0)
    
    arg2[0xd].b &= 0xfe
    int32_t i = 0
    
    if (arg2[6].d s> 0)
        int64_t rbx_1 = 0
        
        do
            void* r15_1 = arg2[5]
            uint64_t* rcx_2 = r15_1 + 0x10 + rbx_1
            rcx_2[1].d = 0
            
            if (*(rcx_2 + 0xc) != 0)
                result = sub_1405c5570(rcx_2, 0)
            
            uint64_t* rcx_4 = r15_1 + 0x20 + rbx_1
            rcx_4[1].d = 0
            
            if (*(rcx_4 + 0xc) != 0)
                result = sub_1405c5570(rcx_4, 0)
            
            i += 1
            rbx_1 += 0x30
        while (i s< arg2[6].d)
    
    if (not((zx.o(0)).d f>= *(arg1 + 0x90)))
        if (*(arg1 + 0xd0) == 0)
            void*** var_78
            void**** rax = sub_140a6eae0(&var_78)
            int64_t* rbx_2 = rax[1]
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            void var_68
            
            if (arg1 + 0xd0 == &var_68)
            label_140efac44:
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            else
                *(arg1 + 0xd0) = *rax
                int64_t* r15_2 = *(arg1 + 0xd8)
                
                if (rbx_2 == r15_2)
                    goto label_140efac44
                
                *(arg1 + 0xd8) = rbx_2
                
                if (r15_2 != 0)
                    r15_2[1].d -= 1
                    
                    if (r15_2[1].d == 1)
                        (**r15_2)(r15_2)
                        int32_t temp5_1 = *(r15_2 + 0xc)
                        *(r15_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*r15_2 + 8))(r15_2, 1)
            
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp4_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
        
        int64_t* rcx_12 = *(arg1 + 0xd0)
        (*(*rcx_12 + 0x20))(rcx_12, *arg2)
        int64_t* rcx_13 = *(arg1 + 0xd0)
        int32_t arg_10 = 0
        int32_t i_3 = (*(*rcx_13 + 0x50))(rcx_13)
        int32_t i_2 = i_3
        
        if (i_3 != 0xffffffff)
            int32_t i_1
            
            do
                void var_58
                int64_t* rax_8 = sub_140ef9010(arg1, &var_58, &arg_10, arg2, i_4, i_2)
                int64_t rbx_4 = sx.q(arg2[8].d)
                int32_t rcx_15 = (rbx_4 + 1).d
                arg2[8].d = rcx_15
                
                if (rcx_15 s> *(arg2 + 0x44))
                    sub_1405c4ec0(&arg2[7])
                
                int64_t rax_9 = arg2[7]
                int64_t rdx_3 = rbx_4 * 5
                *(rax_9 + (rdx_3 << 3)) = *rax_8
                *(rax_9 + (rdx_3 << 3) + 0x10) = *(rax_8 + 0x10)
                i_4 = i_2
                *(rax_9 + (rdx_3 << 3) + 0x20) = rax_8[4]
                int64_t* rcx_17 = *(arg1 + 0xd0)
                i_1 = (*(*rcx_17 + 0x50))(rcx_17)
                i_2 = i_1
            while (i_1 != 0xffffffff)
        
        int64_t* rcx_18 = *(arg1 + 0xd0)
        return (*(*rcx_18 + 0x28))(rcx_18)

return result
