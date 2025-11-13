// 函数: sub_140b3dfe0
// 地址: 0x140b3dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143de71a8)
int32_t i_1 = arg1[1].d
int32_t rbp = data_143de71d8

if (i_1 != 0)
    int64_t* rdi_1 = *arg1 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != rbp)
    sub_1405a5410(arg1, rbp)

int32_t rax_5 = data_143de71d8
int64_t rbp_1 = sx.q(rax_5 - 1)

if (rax_5 - 1 s>= 0)
    int64_t r15_2 = rbp_1 << 4
    int64_t temp3_1
    
    do
        int64_t* rsi = data_143de71d0
        int64_t* rbx_2 = *(rsi + r15_2 + 8)
        
        if (rbx_2 != 0)
            int32_t rax_7 = 0
            bool z_1
            
            if (0 == rbx_2[1].d)
                rbx_2[1].d = 0
                z_1 = true
            else
                rax_7 = rbx_2[1].d
                z_1 = false
            
            if (not(z_1))
                bool z_3
                
                do
                    bool z_2
                    
                    if (rax_7 == rbx_2[1].d)
                        rbx_2[1].d = rax_7 + 1
                        z_2 = true
                    else
                        rbx_2[1].d
                        z_2 = false
                    
                    if (z_2)
                        if (rbx_2 != 0)
                            int64_t rsi_1 = *(rsi + r15_2)
                            
                            if (rsi_1 == 0)
                                rbx_2[1].d -= 1
                                
                                if (rbx_2[1].d == 1)
                                    (**rbx_2)(rbx_2)
                                    int32_t rax_15 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (rax_15 == 1)
                                        (*(*rbx_2 + 8))(rbx_2, 1)
                            else
                                int64_t rdi_2 = sx.q(arg1[1].d)
                                int32_t rax_9 = (rdi_2 + 1).d
                                arg1[1].d = rax_9
                                
                                if (rax_9 s> *(arg1 + 0xc))
                                    sub_1405a4f90(arg1)
                                
                                int64_t* rax_12 = (rdi_2 << 4) + *arg1
                                *rax_12 = rsi_1
                                rax_12[1] = rbx_2
                        
                        break
                    
                    rax_7 = 0
                    
                    if (0 == rbx_2[1].d)
                        rbx_2[1].d = 0
                        z_3 = true
                    else
                        rax_7 = rbx_2[1].d
                        z_3 = false
                while (not(z_3))
        
        r15_2 -= 0x10
        temp3_1 = rbp_1
        rbp_1 -= 1
    while (temp3_1 - 1 s>= 0)

return LeaveCriticalSection(&data_143de71a8) __tailcall
