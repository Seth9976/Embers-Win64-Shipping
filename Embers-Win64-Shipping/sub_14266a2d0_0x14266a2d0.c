// 函数: sub_14266a2d0
// 地址: 0x14266a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int64_t* result = (*(*arg1 + 0x150))()

if (result != 0)
    if ((arg1[0xd].b & 0x10) == 0)
        result, zmm6 = sub_1420e6500(result)
    
    if ((arg1[0xd].b & 0x10) != 0 || result.b == 0)
        if (arg1[0x17].d s> 0)
            zmm6 = sub_142661370(arg1, &arg1[0x16])
            int32_t rax_1 = *(arg1 + 0xbc)
            arg1[0x17].d = 0
            
            if (rax_1 s< 0 && rax_1 != 0)
                sub_1405a5220(&arg1[0x16], 0)
        
        if (arg1[0x15].d s> 0)
            (*(*arg1 + 0x330))(arg1)
        
        if (arg1[0x4a].d - *(arg1 + 0x27c) s> 0)
            void* var_38 = &arg1[0x49]
            void* var_30_1 = &arg1[0x6a]
            zmm6 = sub_142662ef0(&var_38)
        
        if (arg1[0x73].b == 0)
            if ((arg1[0xe].b & 1) != 0)
                zmm6 = sub_14266c4d0(arg1)
            
            (*(*arg1 + 0x3b8))(arg1, zmm6)
            
            if ((*(arg1 + 0x39a) & 0x10) == 0)
                int64_t rdi_1 = 0
                int64_t* rbx_1 = arg1[0x12]
                uint64_t r14_2 = sx.q(arg1[0x13].d) << 3 u>> 3
                
                if (rbx_1 u> &rbx_1[arg1[0x13]])
                    r14_2 = 0
                
                if (r14_2 != 0)
                    do
                        int64_t* rcx_8 = *rbx_1
                        
                        if (rcx_8 != 0)
                            (*(*rcx_8 + 0x6b0))(rcx_8, zmm6)
                        
                        rbx_1 = &rbx_1[1]
                        rdi_1 += 1
                    while (rdi_1 != r14_2)
        
        if (arg1[0x39].d s> 0)
            sub_14266b190(arg1, &arg1[0x38])
            int32_t rax_10 = *(arg1 + 0x1cc)
            void* rdi_2 = arg1[0x38]
            int32_t i_2 = arg1[0x39].d
            
            if (rax_10 s< 0)
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        int64_t* rbx_3 = *(rdi_2 + 0xb0)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t rax_17 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (rax_17 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        sub_140745b20(rdi_2 + 0x90)
                        sub_142645530(rdi_2)
                        rdi_2 += 0xc0
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rax_10 = *(arg1 + 0x1cc)
                
                arg1[0x39].d = 0
                
                if (rax_10 != 0)
                    sub_1408099b0(&arg1[0x38], 0)
            else
                if (i_2 != 0)
                    int32_t i_1
                    
                    do
                        int64_t* rbx_2 = *(rdi_2 + 0xb0)
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t rax_13 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (rax_13 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        sub_140745b20(rdi_2 + 0x90)
                        sub_142645530(rdi_2)
                        rdi_2 += 0xc0
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                arg1[0x39].d = 0
        
        result = sub_140d3e110(&arg1[0x1f])
        
        if (result.b != 0)
            int64_t* rax_19 = sub_140d3c6e0(&arg1[0x1f])
            int64_t rdx_3 = *rax_19
            return (*(rdx_3 + 0x260))(rax_19, rdx_3)

return result
