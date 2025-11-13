// 函数: sub_1426df780
// 地址: 0x1426df780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)

if (arg3 s< 0 || rbp.d s>= arg1[1].d || arg1[2] == 0)
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
else
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 == 0)
        *arg2 = data_143dbb1f8.q
        arg2[1].d = data_143dbb200
    else
        void* rdx = arg1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30 || rdx == 0)
            *arg2 = data_143dbb1f8.q
            arg2[1].d = data_143dbb200
        else
            void* rax_4 = sub_14273b020()
            void* const rdx_1
            
            if (arg1[2] == 0)
                rdx_1 = nullptr
            else
                void* rax_5 = sub_14273b6f0()
                
                if (rax_5 == 0)
                    rdx_1 = nullptr
                else
                    rdx_1 = arg1[2]
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> *(rdx_1 + 0x38)
                            || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rdx_1 = nullptr
            
            if (rax_4 == 0)
                *arg2 = data_143dbb1f8.q
                arg2[1].d = data_143dbb200
            else
                int64_t rax_8 = sx.q(*(rax_4 + 0x38))
                
                if (rax_8.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_8 << 3)) != rax_4 + 0x30)
                    *arg2 = data_143dbb1f8.q
                    arg2[1].d = data_143dbb200
                else
                    int64_t* rbx_2
                    
                    if (arg1[2] == 0)
                        rbx_2 = nullptr
                    else
                        void* rax_10 = sub_14273b6f0()
                        
                        if (rax_10 == 0)
                            rbx_2 = nullptr
                        else
                            rbx_2 = arg1[2]
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s> rbx_2[7].d
                                    || *(rbx_2[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                rbx_2 = nullptr
                    
                    int64_t* rcx_5 = rbx_2[0x23]
                    
                    if (rcx_5 == 0)
                        (*(*rbx_2 + 0x390))(rbx_2)
                        rcx_5 = rbx_2[0x23]
                    
                    int64_t r9_1 = *rcx_5
                    (*(r9_1 + 0x278))(rcx_5, arg2, 
                        (sx.q(*(*arg1 + (rbp << 3) + 4) * 2) s>> 1) + arg1[3], r9_1)

return arg2
