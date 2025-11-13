// 函数: sub_141bf2530
// 地址: 0x141bf2530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141efce60(arg1, arg2)
(*(*arg1 + 0x8b0))(arg1)
uint64_t result = arg1[0x94]

if (result != 0 || arg1[0x95] != result || arg1[0xa9].b == result.b)
    if (arg1[0x86].b != 1)
        result = (*(*arg1 + 0x8e8))(arg1)
        
        if (result.b != 0)
            int64_t zmm0_1 = (zx.o(0)).q
            
            if (not(0.0 f== arg1[0x8a]))
                zmm0_1 = sub_141babb20(arg1) f- arg1[0x8a]
            
            int512_t zmm1
            zmm1.o = zx.o(0)
            zmm1.d = fconvert.s(zmm0_1)
            result = (*(*arg1 + 0x8f0))(arg1, zmm1)
            
            if (arg1[0x94] == 0 && arg1[0x95] == 0)
                arg1[0xa9].b = 1
    else if (result != 0 || arg1[0x95] != result)
        uint64_t result_2 = arg1[0x15]
        
        if (result_2 == 0)
            result = sub_141ee69e0(arg1)
            result_2 = result
        
        uint64_t result_3 = arg1[0x8e]
        
        if (result_3 == 0)
            result = arg1[0x15]
            
            if (result == 0)
                result = sub_141ee69e0(arg1)
                
                if (result == 0)
                    goto label_141bf2a30
                
                goto label_141bf2650
            
        label_141bf2650:
            result = sub_142029870(*(result + 0x188))
            result_3 = result
            
            if (result == 0 || *(result_3 + 0x30) == 0)
                goto label_141bf2a30
            
            goto label_141bf266d
        
        if (*(result_3 + 0x30) == 0)
        label_141bf2a30:
            
            if (arg1[0xa2].b != 0)
                return sub_141bdbcc0(arg1)
        else
        label_141bf266d:
            int64_t rdx_1 = *arg1
            result = (*(rdx_1 + 0x448))(arg1, rdx_1)
            
            if (result.b == 0)
                goto label_141bf2a30
            
            result = arg1[0x14]
            
            if ((*(result + 0x58) & 0x20) != 0)
                goto label_141bf2a30
            
            if (arg1[0xa2].b == 0)
                result = sub_14243ade0(result_2)
                
                if (result.b != 0)
                    result = sub_142436920(result_2)
                    uint64_t result_1 = result
                    
                    if (result != 0)
                        int64_t* rsi_1 = nullptr
                        int64_t* r14_1 = *(result + 0xf0)
                        
                        if (r14_1 != 0)
                            result = zx.q(r14_1[1].d)
                            
                            if (result.d == 0)
                                r14_1 = nullptr
                            else
                                result = zx.q(result.d + 1)
                                r14_1[1].d = result.d
                            
                            if (r14_1 != 0)
                                int64_t* r13_1 = *(result_1 + 0xe8)
                                
                                if (r13_1 != 0)
                                    int128_t var_50
                                    sub_1420f36a0(&var_50, result_3, result_2)
                                    void (* var_40)(int128_t** arg1, int64_t* arg2)
                                    (*(*r13_1 + 0x40))(r13_1, &var_40, result_3, arg1 + 0x514)
                                    void (* r15_1)(int128_t** arg1, int64_t* arg2) = var_40
                                    void (* var_60)(int128_t** arg1, int64_t* arg2)
                                    int64_t* var_38
                                    
                                    if (r15_1 == 0)
                                        void (* rax_4)(int128_t** arg1, int64_t* arg2) =
                                            j_sub_140a82f30(zx.q((r15_1 + 0x48).d))
                                        r15_1 = rax_4
                                        
                                        if (rax_4 == 0)
                                            r15_1 = nullptr
                                        else
                                            *(rax_4 + 8) = 0
                                            *(rax_4 + 0x10) = 0
                                            *r15_1 = &data_143080d98
                                            sub_1420f36f0(r15_1 + 0x18)
                                            __builtin_memset(r15_1 + 0x28, 0, 0x20)
                                            *(r15_1 + 0x18) = var_50
                                        
                                        int64_t* rax_5 = j_sub_140a82f30(0x18)
                                        int64_t* rbx_1 = rax_5
                                        
                                        if (rax_5 == 0)
                                            rbx_1 = nullptr
                                        else
                                            rax_5[1].d = 1
                                            *(rax_5 + 0xc) = 1
                                            *rbx_1 = &data_142d42e98
                                            rbx_1[2] = r15_1
                                        
                                        void** rbp_1 = r15_1 + 8
                                        
                                        if (r15_1 == 0)
                                            rbp_1 = nullptr
                                        
                                        if (rbp_1 != 0)
                                            void* rax_6
                                            
                                            if (*rbp_1 != 0)
                                                rax_6 = rbp_1[1]
                                            
                                            if (*rbp_1 == 0 || rax_6 == 0 || *(rax_6 + 8) s<= 0)
                                                if (rbx_1 != 0)
                                                    rbx_1[1].d += 1
                                                
                                                *rbp_1 = r15_1
                                                int64_t* rcx_14 = rbp_1[1]
                                                
                                                if (rbx_1 != rcx_14)
                                                    if (rbx_1 != 0)
                                                        *(rbx_1 + 0xc) += 1
                                                        rcx_14 = rbp_1[1]
                                                    
                                                    if (rcx_14 != 0)
                                                        int32_t temp10_1 = *(rcx_14 + 0xc)
                                                        *(rcx_14 + 0xc) -= 1
                                                        
                                                        if (temp10_1 == 1)
                                                            (*(*rcx_14 + 8))(rcx_14, 1)
                                                    
                                                    rbp_1[1] = rbx_1
                                                
                                                if (rbx_1 != 0)
                                                    rbx_1[1].d -= 1
                                                    
                                                    if (rbx_1[1].d == 1)
                                                        (**rbx_1)(rbx_1)
                                                        int32_t temp9_1 = *(rbx_1 + 0xc)
                                                        *(rbx_1 + 0xc) -= 1
                                                        
                                                        if (temp9_1 == 1)
                                                            (*(*rbx_1 + 8))(rbx_1, 1)
                                        
                                        var_60 = r15_1
                                        int64_t* var_58_1 = rbx_1
                                        
                                        if (rbx_1 != 0)
                                            rbx_1[1].d += 1
                                        
                                        (*(*r13_1 + 0x48))(r13_1, result_3, arg1 + 0x514, &var_60, 
                                            *(arg1 + 0x51c))
                                        
                                        if (rbx_1 != 0)
                                            rbx_1[1].d += 1
                                            
                                            if (rbx_1 != 0)
                                                rbx_1[1].d -= 1
                                                rsi_1 = rbx_1
                                                
                                                if (rbx_1[1].d == 1)
                                                    (**rbx_1)(rbx_1)
                                                    int32_t temp7_1 = *(rbx_1 + 0xc)
                                                    *(rbx_1 + 0xc) -= 1
                                                    
                                                    if (temp7_1 == 1)
                                                        (*(*rbx_1 + 8))(rbx_1, 1)
                                    else if (var_38 != 0)
                                        var_38[1].d += 1
                                        
                                        if (var_38 != 0)
                                            rsi_1 = var_38
                                    
                                    void* rcx_20 = arg1[0x94]
                                    arg1[0xa2].b = 1
                                    
                                    if (rcx_20 != 0 && sub_140d23de0(rcx_20) != 0)
                                        void* rax_14 = arg1[0x94]
                                        void* rbx_2 = *(rax_14 + 0x1a8)
                                        *(rax_14 + 0x218) = var_50
                                        
                                        if (rbx_2 != 0)
                                            int128_t* var_68 = &var_50
                                            void (* rax_15)(int128_t** arg1, int64_t* arg2) =
                                                *(rbx_2 + 0x28)
                                            
                                            if (rax_15 != 0)
                                                var_60 = rax_15
                                                sub_141b96fb0(&var_68, &var_60)
                                                void* rcx_22 = *(rbx_2 + 0x28)
                                                var_60 = sub_141b96fb0
                                                int128_t** var_58_2 = &var_68
                                                sub_141ba8640(rcx_22, &var_60)
                                    
                                    result = sub_141b8fd90(r15_1, arg1)
                                    
                                    if (var_38 != 0)
                                        var_38[1].d -= 1
                                        
                                        if (var_38[1].d == 1)
                                            result = (**var_38)(var_38)
                                            int32_t temp4_1 = *(var_38 + 0xc)
                                            *(var_38 + 0xc) -= 1
                                            
                                            if (temp4_1 == 1)
                                                result = (*(*var_38 + 8))(var_38, 1)
                                    
                                    if (rsi_1 != 0)
                                        rsi_1[1].d -= 1
                                        
                                        if (rsi_1[1].d == 1)
                                            result = (**rsi_1)(rsi_1)
                                            int32_t temp5_1 = *(rsi_1 + 0xc)
                                            *(rsi_1 + 0xc) -= 1
                                            
                                            if (temp5_1 == 1)
                                                result = (*(*rsi_1 + 8))(rsi_1, 1)
                        
                        if (r14_1 != 0)
                            r14_1[1].d -= 1
                            
                            if (r14_1[1].d == 1)
                                result = (**r14_1)(r14_1)
                                int32_t temp1_1 = *(r14_1 + 0xc)
                                *(r14_1 + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    return (*(*r14_1 + 8))(r14_1, 1)

return result
