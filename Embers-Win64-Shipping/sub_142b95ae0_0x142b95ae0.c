// 函数: sub_142b95ae0
// 地址: 0x142b95ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 8)
int32_t r9 = 0

if (*(arg2 + 0x60) != 0x62697473)
    void* var_48
    
    if ((*(*(arg2 + 0xf0) + 0x30) & 0x100000) != 0)
        int32_t r14_1 = *(arg2 + 0x18)
        int64_t var_30_1 = 0
        
        if (rbx != 0 && r14_1 u< *(rbx + 0x10) && (*(rbx + 8) & 8) != 0)
            int64_t r10_1 = *(*(rbx + 0x2d0) + 0x108)
            
            if (r10_1 != 0)
                void var_38
                var_48 = &var_38
                int32_t arg_10
                int32_t arg_20
                
                if (r10_1(rbx, zx.q(r14_1), &arg_20, &arg_10, var_48) != 0)
                    int32_t rax_4
                    int512_t zmm0_1
                    rax_4, zmm0_1 = sub_142b93ea0(rbx, nullptr)
                    
                    if (rax_4 == 0)
                        int64_t r15_1 = *(rbx + 0x2d0)
                        int32_t rbp_1
                        
                        while (true)
                            int32_t rax_6
                            rax_6, zmm0_1 = sub_142b92f00(rbx, arg_20, 
                                (*(*(arg2 + 0xf0) + 0x30) & 0xffefffff) | 4, zmm0_1)
                            rbp_1 = rax_6
                            
                            if (rax_6 != 0)
                                break
                            
                            int32_t rax_7 =
                                (*(r15_1 + 0x110))(rbx, zx.q(arg_10), arg2, *(rbx + 0x78), var_48)
                            rbp_1 = rax_7
                            
                            if (rax_7 != 0)
                                break
                            
                            if (r14_1 u< *(rbx + 0x10) && (*(rbx + 8) & 8) != 0)
                                int64_t r10_2 = *(*(rbx + 0x2d0) + 0x108)
                                
                                if (r10_2 != 0)
                                    var_48 = &var_38
                                    
                                    if (r10_2(rbx, zx.q(r14_1), &arg_20, &arg_10, var_48) != 0)
                                        continue
                            
                            __builtin_strncpy(arg2 + 0x60, "stib", 4)
                            break
                        
                        sub_142b918d0(*(rbx + 0x78))
                        
                        if (rbp_1 == 0)
                            return 0
                    
                    __builtin_strncpy(arg2 + 0x60, "ltuo", 4)
    
    int32_t rdx_4 = *(arg2 + 0x60)
    void* const rbx_1 = nullptr
    void* const i_1
    
    if (rdx_4 != 0x6f75746c)
        i_1 = nullptr
        
        if (arg1 != 0)
            for (void* i = *(arg1 + 0x118); i != 0; i = *(i + 8))
                void* i_3 = *(i + 0x10)
                
                if (*(i_3 + 0x20) == rdx_4)
                    rbx_1 = i
                    i_1 = i_3
                    break
    else
        i_1 = *(arg1 + 0x128)
        rbx_1 = *(arg1 + 0x118)
    
    r9 = 7
    
    while (i_1 != 0)
        int32_t rax_11 = (*(i_1 + 0x70))(i_1, arg2, zx.q(arg3), 0, var_48)
        r9 = rax_11
        
        if (rax_11 == 0)
            break
        
        if (rax_11.b != 0x13)
            break
        
        i_1 = nullptr
        
        if (arg1 != 0)
            void* j = *(arg1 + 0x118)
            
            if (rbx_1 != 0)
                j = *(rbx_1 + 8)
            
            rbx_1 = nullptr
            
            for (; j != 0; j = *(j + 8))
                void* i_2 = *(j + 0x10)
                
                if (*(i_2 + 0x20) == *(arg2 + 0x60))
                    rbx_1 = j
                    i_1 = i_2
                    break

return zx.q(r9)
