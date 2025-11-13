// 函数: sub_140da7f20
// 地址: 0x140da7f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xc0)

if (*(arg1 + 0x90) == 0 && *(arg1 + 0x120) != 0)
    void* rbp_1 = nullptr
    int64_t var_50_1 = 0
    int64_t var_58_1 = 0
    int64_t* rax_1 = sub_140da81b0(arg1)
    int64_t* r14_1 = rax_1
    void* rdi_1 = rax_1[3]
    char rax_4
    
    if (rdi_1 == 0)
        rax_4 = *(rax_1 + 0x11)
    else
        void* rax_3 = sub_140d21950(rdi_1, sub_140e28000())
        int64_t rdx_1 = *rax_3
        rax_4 = (*(rdx_1 + 0x20))(rax_3, rdx_1)
        rdi_1 = r14_1[3]
    
    char r13_1
    
    if (rdi_1 == 0)
        r13_1 = r14_1[2].b
    else
        void* rax_6 = sub_140d21950(rdi_1, sub_140e28000())
        int64_t rdx_3 = *rax_6
        char rax_7 = (*(rdx_3 + 0x18))(rax_6, rdx_3)
        rdi_1 = r14_1[3]
        r13_1 = rax_7
    
    if (rdi_1 != 0)
        void* rax_9 = sub_140d21950(rdi_1, sub_140e28000())
        int64_t rdx_5 = *rax_9
        r14_1 = (*(rdx_5 + 0x10))(rax_9, rdx_5)
    
    void*** rax_11 = j_sub_140a82f30(0x58)
    void*** rsi_1 = rax_11
    void var_48
    
    if (rax_11 == 0)
        rsi_1 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        int64_t arg_10 = 0
        *rsi_1 = &data_142ec7ab8
        sub_140d94140(&rsi_1[2], &arg_10, sub_140596d10(&var_48, r14_1), r13_1, rax_4)
    
    if (rsi_1 != -0x10)
        rbp_1 = &rsi_1[4]
    
    int64_t* rdi_2 = rsi_1
    int64_t* rsi_2 = rdi_2
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
        rdi_2 = rsi_1
    
    if (arg1 + 0x90 == &var_48)
    label_140da8102:
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d != 1)
                rdi_2 = rsi_1
            else
                (**rsi_2)(rsi_2)
                int32_t temp2_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rdi_2 = rsi_1
                else
                    (*(*rsi_2 + 8))(rsi_2, 1)
                    rdi_2 = rsi_1
    else
        *(arg1 + 0x90) = rbp_1
        int64_t* r14_2 = *(arg1 + 0x98)
        
        if (rsi_2 == r14_2)
            goto label_140da8102
        
        *(arg1 + 0x98) = rsi_2
        
        if (r14_2 != 0)
            r14_2[1].d -= 1
            
            if (r14_2[1].d != 1)
                rdi_2 = rsi_1
            else
                (**r14_2)(r14_2)
                int32_t temp5_1 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rdi_2 = rsi_1
                else
                    (*(*r14_2 + 8))(r14_2, 1)
                    rdi_2 = rsi_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp4_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

*arg2 = *(arg1 + 0x90)
void* rax_21 = *(arg1 + 0x98)
arg2[1] = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

if (arg1 != -0xc0)
    LeaveCriticalSection(arg1 + 0xc0)

return arg2
