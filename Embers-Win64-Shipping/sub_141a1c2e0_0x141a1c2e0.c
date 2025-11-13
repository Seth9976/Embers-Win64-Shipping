// 函数: sub_141a1c2e0
// 地址: 0x141a1c2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    uint32_t rax = sub_140a80f40()
    int64_t* rbx_1 = *arg1
    
    if (rax.b == 0)
        int64_t* rdi_1 = arg1[1]
        int64_t* var_40_1 = rdi_1
        
        if (sub_140a80f40() == 0)
            uint32_t rax_8
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_8.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_8.b == 0))
                void var_38
                void** rax_12 = sub_141a1d360(&var_38, nullptr, 0xff)
                *(*rax_12 + 0x10) = rbx_1.o
                void* rcx_14 = *rax_12
                int32_t r8_1 = rax_12[2].d
                int64_t* rdx_4 = rax_12[1]
                int64_t* rbx_3 = *(rcx_14 + 0x28)
                int64_t* arg_10 = rbx_3
                void* rdi_2 = &rbx_3[9]
                
                if (rbx_3 != 0)
                    *rdi_2 += 1
                    rbx_3 = arg_10
                
                sub_140a064d0(rcx_14, rdx_4, r8_1, 1)
                
                if (rbx_3 != 0)
                    rax = *rdi_2
                    *rdi_2 -= 1
                    
                    if (rax == 1)
                        sub_140a2f6e0(arg_10)
            else
                if (rbx_1 != 0)
                    (**rbx_1)(rbx_1, 1)
                
                if (rdi_1 != 0)
                    int64_t* rcx_9 = *rdi_1
                    
                    if (rcx_9 != 0)
                        (*(*rcx_9 + 0x30))(rcx_9)
                        int64_t* rcx_10 = *rdi_1
                        
                        if (rcx_10 != 0)
                            (**rcx_10)(rcx_10, 1)
                    
                    j_sub_140a74f90(rdi_1)
        else
            if (rbx_1 != 0)
                (**rbx_1)(rbx_1, 1)
            
            if (rdi_1 != 0)
                int64_t* rcx_5 = *rdi_1
                
                if (rcx_5 != 0)
                    (*(*rcx_5 + 0x30))(rcx_5)
                    int64_t* rcx_6 = *rdi_1
                    
                    if (rcx_6 != 0)
                        (**rcx_6)(rcx_6, 1)
                
                j_sub_140a74f90(rdi_1)
    else
        if (rbx_1 != 0)
            (**rbx_1)(rbx_1, 1)
        
        int64_t* rbx_2 = arg1[1]
        
        if (rbx_2 != 0)
            int64_t* rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x30))(rcx_1)
                int64_t* rcx_2 = *rbx_2
                
                if (rcx_2 != 0)
                    (**rcx_2)(rcx_2, 1)
            
            j_sub_140a74f90(rbx_2)

int64_t* rbx_4 = arg1[3]

if (rbx_4 == 0)
    return 

rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return 

(**rbx_4)(rbx_4)
int32_t rsi_1 = *(rbx_4 + 0xc)
*(rbx_4 + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rbx_4 + 8))(rbx_4, zx.q(rsi_1))
