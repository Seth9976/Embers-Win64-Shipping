// 函数: sub_141bd8b50
// 地址: 0x141bd8b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2

if (rcx != 0)
    void*** var_38
    sub_140f75630(rcx, &var_38)
    void*** rsi_1 = var_38
    void*** var_30
    
    if (rsi_1 == 0)
        void*** rax_1 = j_sub_140a82f30(0xb8)
        void*** rdi_1 = rax_1
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            void* rax_2 = *(arg1 + 0xa8)
            
            if (rax_2 == 0)
                rax_2 = sub_141ee69e0(arg1)
            
            *rdi_1 = &data_143080e20
            rdi_1[1] = 0
            rdi_1[2] = 0
            sub_140d3a3a0(&rdi_1[3], rax_2)
            rdi_1[4] = -1
            rdi_1[0x12].d = 0xffffffff
            *(rdi_1 + 0x94) = 0
            rdi_1[0x13].d = 0xffffffff
            *(rdi_1 + 0x9c) = 0
            rdi_1[0x14].d = 0xffffffff
            __builtin_memset(rdi_1 + 0xa4, 0, 0x14)
            memset(&rdi_1[6], 0, 0x88)
            rdi_1[7].d = 0x3f800000
        
        void*** rax_3 = j_sub_140a82f30(0x18)
        void*** rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            rax_3[1].d = 1
            *(rax_3 + 0xc) = 1
            *rbx_1 = &data_142d42ea8
            rbx_1[2] = rdi_1
        
        void*** var_20_1 = rbx_1
        var_38 = rdi_1
        int64_t* rdi_2 = var_30
        int64_t var_28 = 0
        
        if (rbx_1 == rdi_2)
        label_141bd8cd4:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp8_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
        else
            void*** var_20_2 = nullptr
            var_30 = rbx_1
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp9_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
                
                rbx_1 = var_20_2
                goto label_141bd8cd4
        
        var_28.o = var_38.o
        
        if (var_30 != 0)
            var_30[1].d += 1
        
        sub_140f8b110(*arg2, &var_28)
        rsi_1 = var_38
    
    if (var_30 != 0)
        var_30[1].d += 1
    
    int64_t rax_9 = sub_140d3c6e0(&rsi_1[3])
    void* rax = *(arg1 + 0xa8)
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    if (rax_9 == rax)
        void* arg_10
        sub_140d3a3a0(&arg_10, arg1)
        int32_t* r14_1 = rsi_1[1]
        int32_t* rbx_3 = r14_1
        void* rbp_1 = &r14_1[sx.q(rsi_1[2].d) * 2]
        
        if (r14_1 != rbp_1)
            while (sub_14077a170(rbx_3, &arg_10).b == 0)
                rbx_3 = &rbx_3[2]
                
                if (rbx_3 == rbp_1)
                    goto label_141bd8da8
        
        if (r14_1 == rbp_1 || ((rbx_3 - r14_1) s>> 3).d == 0xffffffff)
        label_141bd8da8:
            int64_t rbx_6 = sx.q(rsi_1[2].d)
            int32_t rax_11 = (rbx_6 + 1).d
            rsi_1[2].d = rax_11
            
            if (rax_11 s> *(rsi_1 + 0x14))
                sub_1405a4d70(&rsi_1[1])
            
            rsi_1[1][rbx_6] = arg_10
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*var_30)[1](var_30, 1)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp5_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*var_30)[1](var_30, 1)

int64_t* rbx_8 = arg2[1]

if (rbx_8 == 0)
    return 

rbx_8[1].d -= 1

if (rbx_8[1].d != 1)
    return 

(**rbx_8)(rbx_8)
int32_t temp1_1 = *(rbx_8 + 0xc)
*(rbx_8 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_8 + 8))
