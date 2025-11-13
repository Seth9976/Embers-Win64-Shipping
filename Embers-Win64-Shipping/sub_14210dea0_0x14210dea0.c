// 函数: sub_14210dea0
// 地址: 0x14210dea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg1[0x2a].b)
uint64_t rbp
rbp.b = 1

if (rax.b u> 6 || not(test_bit(0x4b, rax)))
    rbp.b = 0
else if (sub_142110b90(arg1, arg2) == 0 && (arg1[0x3f].b & 0x40) == 0)
    if (test_bit(*(arg1 + 0x21c), arg2))
        rbp.b = 0
    else
        uint32_t rax_3
        
        if (data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            rbp = zx.q((*(*arg1 + 0x2d0))(arg1, zx.q(arg2)))
        else
            void** rax_4 = j_sub_140a82f30(0x10)
            void** rbx_1 = rax_4
            
            if (rax_4 == 0)
                rbx_1 = nullptr
            else
                *rax_4 = arg1
                rax_4[1].d = arg2
            
            void*** rax_5 = j_sub_140a82f30(0x18)
            
            if (rax_5 != 0)
                rax_5[1].d = 1
                *rax_5 = &data_1432d4590
                *(rax_5 + 0xc) = 1
                rax_5[2] = rbx_1
            
            rbp.b = 0
            
            if (rax_5 != 0)
                rax_5[1].d += 1
            
            void*** rax_6 = sub_140a84c80(0, 0x30, 0)
            void*** var_58 = rax_6
            void*** rbx_2 = rax_6
            
            if (rax_6 != 0)
                *rbx_2 = &data_1432d44d0
                rbx_2[1] = rbx_1
                rbx_2[2] = rax_5
                
                if (rax_5 != 0)
                    *(rax_5 + 0xc) += 1
                    rbx_2 = var_58
                
                rbx_2[3] = sub_142116ba0
                rbx_2[5] = sub_140a387b0()
                *rbx_2 = &data_1432d4528
            
            if (rax_5 != 0)
                rax_5[1].d -= 1
                
                if (rax_5[1].d == 1)
                    (**rax_5)(rax_5)
                    int32_t rax_10 = *(rax_5 + 0xc)
                    *(rax_5 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*rax_5)[1](rax_5, 1)
                
                rbx_2 = var_58
            
            void var_38
            int64_t* rax_12 = sub_140958da0(&var_38, nullptr, 0xff)
            int64_t* rdi_3 = *rax_12 + 0x10
            *rdi_3 = 0
            rdi_3[1].d = 0
            
            if (&var_58 != rdi_3 && rbx_2 != 0)
                void** r8_2 = *rbx_2
                r8_2[8](rbx_2, rdi_3, r8_2)
            
            rdi_3[2].d = 0x102
            void* rcx_5 = *rax_12
            int64_t* r14_2 = *(rcx_5 + 0x30)
            
            if (r14_2 != 0)
                r14_2[9].d += 1
                rbx_2 = var_58
            
            sub_140978a40(rcx_5, rax_12[1], rax_12[2].d, 1)
            
            if (r14_2 != 0)
                r14_2[9].d -= 1
                
                if (r14_2[9].d == 1)
                    sub_140a2f6e0(r14_2)
                
                rbx_2 = var_58
            
            if (rbx_2 != 0)
                (*rbx_2)[7](rbx_2, 0)
                void*** rax_15 = sub_140a84c80(rbx_2, 0, 0)
                var_58 = rax_15
                
                if (rax_15 != 0)
                    sub_140a74f90(rax_15)
            
            if (rax_5 != 0)
                rax_5[1].d -= 1
                
                if (rax_5[1].d == 1)
                    (**rax_5)(rax_5)
                    int32_t rsi_2 = *(rax_5 + 0xc)
                    *(rax_5 + 0xc) -= 1
                    
                    if (rsi_2 == 1)
                        (*rax_5)[1](rax_5, zx.q(rsi_2))

return zx.q(rbp.b)
