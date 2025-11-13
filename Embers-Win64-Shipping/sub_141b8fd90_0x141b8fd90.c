// 函数: sub_141b8fd90
// 地址: 0x141b8fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10
sub_140d3a3a0(&arg_10, arg2)
int32_t* r14_1 = *(arg1 + 0x38)
int32_t* rbx_1 = r14_1
void* rbp_1 = &r14_1[sx.q(*(arg1 + 0x40)) * 2]

if (r14_1 != rbp_1)
    while (sub_14077a170(rbx_1, &arg_10) == 0)
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == rbp_1)
            goto label_141b8fe08

if (r14_1 == rbp_1 || ((rbx_1 - r14_1) s>> 3).d == 0xffffffff)
label_141b8fe08:
    int64_t rbx_4 = sx.q(*(arg1 + 0x40))
    int32_t rax_3 = (rbx_4 + 1).d
    *(arg1 + 0x40) = rax_3
    
    if (rax_3 s> *(arg1 + 0x44))
        sub_1405a4d70(arg1 + 0x38)
    
    *(*(arg1 + 0x38) + (rbx_4 << 3)) = arg_10

int64_t* rbx_5 = *(arg1 + 0x30)
int64_t* rax = rbx_5

if (rbx_5 != 0)
    int32_t rax_5 = rbx_5[1].d
    
    if (rax_5 == 0)
        rbx_5 = nullptr
    else
        rbx_5[1].d = rax_5 + 1
    
    rax = rbx_5

if (rax != 0)
    void* rsi_1 = *(arg1 + 0x28)
    
    if (rsi_1 != 0)
        int64_t* rcx_4 = *(arg2 + 0x4a0)
        int64_t* var_38
        
        if (rcx_4 == 0)
            rax = *(arg2 + 0x4a8)
            
            if (rax != 0)
                var_38 = rax
                void* rax_7 = *(arg2 + 0x4b0)
                void* var_30_2 = rax_7
                
                if (rax_7 != 0)
                    *(rax_7 + 8) += 1
                
                sub_141b8ff20(rsi_1, arg2, &var_38)
        else
            arg_10.b = 0
            int64_t* var_30_1 = &arg_10
            var_38 = sub_141b970e0
            void var_28
            sub_141befea0(rcx_4, &var_28, &var_38)
            sub_141b8ff20(rsi_1, arg2, &var_28)

if (rbx_5 == 0)
    return 

rbx_5[1].d -= 1

if (rbx_5[1].d != 1)
    return 

(**rbx_5)(rbx_5)
int32_t temp1_1 = *(rbx_5 + 0xc)
*(rbx_5 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_5 + 8))(rbx_5, 1)
