// 函数: sub_14094e620
// 地址: 0x14094e620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_140d3e110(arg1) != 0)
    if (arg2[6].d != 0)
        int64_t* rax_11 = sub_140d3c6e0(arg1)
        *(rax_11 + 0x1acc) = 7
        sub_14213f9e0(rax_11)
    else
        void* r13_1 = nullptr
        int32_t rdx = 0
        void* i = arg2[7]
        int32_t i_5 = 0
        void* rbp_1 = i + sx.q(arg2[8].d) * 0x28
        void* var_38 = nullptr
        int32_t var_2c_1 = 0
        
        for (; i != rbp_1; i += 0x28)
            int64_t i_7 = sx.q(i_5)
            i_5 = (i_7 + 1).d
            
            if (i_5 s> rdx)
                sub_1405a4f90(&var_38)
                rdx = var_2c_1
                r13_1 = var_38
            
            int64_t rcx_4 = i_7 * 2
            *(r13_1 + (rcx_4 << 3)) = *(i + 0x18)
            void* rax_3 = *(i + 0x20)
            *(r13_1 + (rcx_4 << 3) + 8) = rax_3
            
            if (rax_3 != 0)
                *(rax_3 + 8) += 1
        
        void* rax_4 = sub_140d3c6e0(arg1)
        
        if (rax_4 + 0x1ab8 != &var_38)
            int32_t i_4 = *(rax_4 + 0x1ac0)
            
            if (i_4 != 0)
                int64_t* rsi_2 = *(rax_4 + 0x1ab8) + 8
                int32_t i_1
                
                do
                    int64_t* rbx_1 = *rsi_2
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp6_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rsi_2 = &rsi_2[2]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            int32_t r8_1 = *(rax_4 + 0x1ac4)
            *(rax_4 + 0x1ac0) = i_5
            
            if (i_5 != 0 || r8_1 != 0)
                sub_1405a4be0(rax_4 + 0x1ab8, i_5, r8_1)
                int64_t* rdx_3 = *(rax_4 + 0x1ab8)
                int32_t i_6 = i_5
                void* rcx_9 = r13_1
                
                if (i_5 != 0)
                    int32_t i_2
                    
                    do
                        *rdx_3 = *rcx_9
                        void* rax_8 = *(rcx_9 + 8)
                        rdx_3[1] = rax_8
                        
                        if (rax_8 != 0)
                            *(rax_8 + 8) += 1
                        
                        rdx_3 = &rdx_3[2]
                        rcx_9 += 0x10
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
            else
                *(rax_4 + 0x1ac4) = i_5
        
        *(rax_4 + 0x1acc) = 4
        
        if (i_5 != 0)
            int64_t* rsi_3 = r13_1 + 8
            int32_t i_3
            
            do
                int64_t* rbx_2 = *rsi_3
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp4_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rsi_3 = &rsi_3[2]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
    
    result = sub_14094ab00(&arg2[7])
else
    result = sub_14094ab00(&arg2[7])

int64_t rcx_16 = arg2[4]

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = arg2[2]

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = *arg2

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
