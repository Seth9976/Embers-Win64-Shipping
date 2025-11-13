// 函数: sub_1408516f0
// 地址: 0x1408516f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rdi = *(arg1 + 8)
int32_t rsi = arg4
void* var_68 = rdi

if (rdi != 0)
    void* rbp_2 = *(arg6 + 0x1a0)
    
    if (rbp_2 != 0)
        result = sub_14082fe30(rdi)
        void* const* result_1 = result
        
        if (result != 0 && result[0x16].d != 0 && data_14396fefc != 0 && data_1439c7a0c != 0)
            int64_t* rcx_1 = *(rdi + 0x20)
            uint64_t rdx = zx.q(*(arg1 + 0xac))
            int32_t i = 0
            int64_t arg_8 = 0
            int64_t* rax_1 = (*(*rcx_1 + 0x40))(rcx_1, rdx, &arg_8)
            int64_t rdx_1 = *rax_1
            int32_t rax_2 = (*(rdx_1 + 0x1d8))(rax_1, rdx_1)
            char rdx_2 = *(arg1 + 0x1f4)
            
            if (rdx_2 == 0)
                rdx_2 = 0
            else if (rax_2 - 5 u<= 1 || rax_2 == 2)
                if (rdx_2 - 3 u> 1)
                    rdx_2 = 0
                else
                    rdx_2 = 1
            else if ((*(arg1 + 0x200) & 4) != 0 || rdx_2 - 3 u> 1)
                rdx_2 = 0
            else
                rdx_2 = 1
            
            void* rax_3 = *(arg1 + 0x1b0)
            void* rcx_4 = arg1 + 0xb0
            
            if (rax_3 != 0)
                rcx_4 = rax_3
            
            *(rcx_4 + 0xfc) &= rdx_2
            void var_58
            result = sub_14084bb90(arg1, &var_58, rdi, arg5[0x1c])
            arg_8.d = 0xffffffff
            
            if (*(arg1 + 0xa4) == 1)
                result = sub_14081faa0(rbp_2 + 0x30, result_1[9].d, *(arg1 + 0xa8), 0)
                arg_8.d = result.d
            
            if (arg2[1].d s> 0)
                int32_t rbx_1 = 1
                int64_t* r15_1 = nullptr
                
                do
                    if ((rsi & rbx_1) != 0)
                        void* rbp_3 = *(r15_1 + *arg2)
                        void*** rax_5 = sub_1408410b0(arg5)
                        sub_14085be30(arg1, &rax_5[1], rdi, &var_58, rbp_3, arg6)
                        void var_60
                        sub_1405d1600(&rax_5[0x36], sub_14084c890(arg1, &var_60, rbp_3, arg3, arg6))
                        sub_1405d1550(&var_60)
                        int32_t rax_9 = sub_14081f8e0(arg5, 1)
                        void*** var_70_1 = rax_5
                        int64_t* rdi_3 =
                            zx.q(rax_9 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_9 s/ 0x66) << 3))
                        void* var_80_1
                        var_80_1.d = arg_8.d
                        sub_14084c520(arg1, rbp_3, arg3, arg6, var_68, var_80_1.d, rdi_3)
                        result = sub_1422dd2a0(arg5, i, rdi_3)
                        rdi = var_68
                        rsi = arg4
                    
                    i += 1
                    rbx_1 = rol.d(rbx_1, 1)
                    r15_1 = &r15_1[1]
                while (i s< arg2[1].d)

return result
