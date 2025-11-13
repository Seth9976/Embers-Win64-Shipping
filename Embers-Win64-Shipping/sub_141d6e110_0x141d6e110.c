// 函数: sub_141d6e110
// 地址: 0x141d6e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = arg2
int64_t* result = std::operator!=<char,struct std::char_traits<char> >(&arg1[0x10e])

if (result.b == 0)
    result = sub_140d3c6e0(&arg1[0x10e])
    
    if (result[0x31] != 0)
        result = sub_142029890(*(sub_140d3c6e0(&arg1[0x10e]) + 0x188), 0)
        int64_t* result_3 = result
        
        if (result != 0)
            int64_t rdx_1 = *result
            void* rax_1 = (*(rdx_1 + 0x698))(result, rdx_1)
            int64_t* rax_2 = sub_141a3c860(result_2)
            
            if (rax_2 != 0)
                int64_t* result_4 = rax_2[0x14]
                
                if (result_4 != result_2)
                    result_2 = result_4
            
            sub_140d3a3a0(&arg1[0x116], rax_2)
            result = (*(*arg1 + 0x18))(arg1)
            
            if (result.b != 0)
                if (result_2 != rax_1)
                    void* const rbp_1 = *arg3
                    
                    if (rbp_1 == 0)
                        rbp_1 = nullptr
                    else
                        void* rax_5 = sub_142452380()
                        void* rdx_3 = *(rbp_1 + 0x10)
                        result = sx.q(*(rax_5 + 0x38))
                        
                        if (result.d s> *(rdx_3 + 0x38))
                            rbp_1 = nullptr
                        else
                            int64_t* result_1 = result
                            result = *(rdx_3 + 0x30)
                            
                            if (result[result_1] != rax_5 + 0x30)
                                rbp_1 = nullptr
                    
                    if (result_2 != 0)
                        void* rax_6 = sub_142452380()
                        void* rdx_4 = result_2[2]
                        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                        
                        if (rax_7.d s> *(rdx_4 + 0x38)
                            || *(*(rdx_4 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                        label_141d6e27b:
                            result_2 = nullptr
                        
                        char arg_8 = 0
                        
                        if (result_2 != 0)
                        label_141d6e2ac:
                            void* rax_9 = sub_14226dd50(result_3)
                            
                            if (sub_140d3e110(arg1 + 0x88c) == 0)
                                sub_140d3a3a0(arg1 + 0x88c, rax_1)
                            
                            int32_t arg_20
                            
                            if (arg1[0x113].b == 0 && rax_9 != 0 && &arg_20 != arg1 + 0x894)
                                *(arg1 + 0x894) = zx.d(*(rax_9 + 0x94))
                                arg1[0x113].b = 1
                            
                            int32_t var_3c
                            int32_t var_3c_1 = var_3c & 0xfffffffe
                            bool cond:0_1 = *(arg3 + 0x11) == 0
                            int32_t zmm1_1 = 0x40000000
                            int32_t var_48 = zx.o(0).d
                            char var_44_1 = 1
                            int32_t var_40_1 = 0x40000000
                            
                            if (not(cond:0_1))
                                uint64_t rax_12 = zx.q(arg3[2].b)
                                
                                if (rax_12.d u> 0xf)
                                    zmm1_1 = 0x3f800000
                                    arg_20 = 0
                                else
                                    switch (rax_12)
                                        case 0, 1, 2, 3
                                            zmm1_1 = 0x3f800000
                                            arg_20 = 0
                                        case 4
                                            arg_20 = 2
                                        case 5
                                            arg_20 = 3
                                        case 6
                                            arg_20 = 4
                                        case 7
                                            zmm1_1 = 0x40400000
                                            arg_20 = 2
                                        case 8
                                            zmm1_1 = 0x40400000
                                            arg_20 = 3
                                        case 9
                                            zmm1_1 = 0x40400000
                                            arg_20 = 4
                                        case 0xa
                                            zmm1_1 = 0x40800000
                                            arg_20 = 2
                                        case 0xb
                                            zmm1_1 = 0x40800000
                                            arg_20 = 3
                                        case 0xc
                                            zmm1_1 = 0x40800000
                                            arg_20 = 4
                                        case 0xd
                                            zmm1_1 = 0x40a00000
                                            arg_20 = 2
                                        case 0xe
                                            zmm1_1 = 0x40a00000
                                            arg_20 = 3
                                        case 0xf
                                            zmm1_1 = 0x40a00000
                                            arg_20 = 4
                                
                                char var_44_2 = arg_20.b
                                result = result_3[0x57]
                                var_48 = (*(arg3 + 0xc)).d
                                int32_t var_40_2 = zmm1_1
                            
                            if (cond:0_1 || result == 0 || result_2 == 0
                                    || result[0x288] != result_2)
                                var_48.o = var_48.o
                                result = (*(*result_3 + 0xd10))(result_3, zmm1_1, &var_48)
                            
                            if (rax_9 != 0 && arg1[0x111].b != 0)
                                if (arg_8 == 0)
                                    result = zx.q(*(arg1 + 0x889))
                                    *(rax_9 + 0x94) = result.b
                                else if (arg1[0x113].b != 0)
                                    result = zx.q(*(arg1 + 0x894))
                                    *(rax_9 + 0x94) = result.b
                            
                            if (rax_2 != 0)
                                result = (*(*rax_2 + 0x530))(rax_2)
                            
                            void* rcx_19 = result_3[0x57]
                            
                            if (rcx_19 != 0)
                                *(rcx_19 + 0x2710) &= 0xffffffbf
                                *(rcx_19 + 0x2710) |=
                                    sbb.d(result.d, result.d, result_2 != 0) & 0x40
                                result = result_3[0x57]
                                result[0x4e2].d |= 0x400
                            
                            if (arg1[0x10d].d s> 0)
                                arg_8.q = rax_2
                                return sub_1405a9f90(&arg1[0x10c], &arg_8)
                        else
                            result = sub_140d3c6e0(arg1 + 0x88c)
                            arg_8 = 1
                            result_2 = result
                            
                            if (result != rax_1)
                                goto label_141d6e2ac
                    else if (rbp_1 == 0 || rbp_1 == rax_1)
                        goto label_141d6e27b
                else if (arg3[1].b != 0)
                    result = result_3[0x57]
                    
                    if (result != 0)
                        result[0x4e2].d |= 0x400
                    
                    if (rax_2 != 0)
                        return (*(*rax_2 + 0x530))(rax_2)

return result
