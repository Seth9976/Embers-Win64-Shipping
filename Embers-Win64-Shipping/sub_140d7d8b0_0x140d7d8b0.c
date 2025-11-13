// 函数: sub_140d7d8b0
// 地址: 0x140d7d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1405e21c0(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void*** rsi = nullptr
void* const rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (rax << 5) + *arg1

int64_t* rbx = rdx_3 + 0x10

if (rdx_3 == 0)
    rbx = nullptr

int64_t result

if (rbx == 0)
    int64_t* rcx_2 = *arg2
    int64_t* var_28
    void*** arg_18
    
    if ((*(*rcx_2 + 0x98))(rcx_2) == 0)
        void*** rax_8 = j_sub_140a82f30(0x38)
        
        if (rax_8 != 0)
            var_28 = *arg2
            void* rcx_9 = arg2[1]
            void* var_20_3 = rcx_9
            
            if (rcx_9 != 0)
                *(rcx_9 + 8) += 1
            
            rsi = sub_140d72210(rax_8, arg1, &var_28)
        
        arg_18 = rsi
        void**** var_20_4 = &arg_18
        var_28 = arg2
        sub_140d6f500(arg1, &arg_8, &var_28, nullptr)
    else
        void*** rax_4 = j_sub_140a82f30(0x40)
        void*** r15_1 = rax_4
        
        if (rax_4 == 0)
            r15_1 = nullptr
        else
            int64_t* rbx_1 = arg2[1]
            int64_t* rsi_1 = *arg2
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            var_28 = rsi_1
            int64_t* var_20_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            sub_140d72210(r15_1, arg1, &var_28)
            *r15_1 = &data_142ebfc98
            r15_1[5] = &data_142ebfca0
            r15_1[6] = &data_142ebfcd8
            r15_1[7] = &data_142ebfd20
            (*(*rsi_1 + 0x98))(rsi_1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        arg_18 = r15_1
        void**** var_20_2 = &arg_18
        var_28 = arg2
        sub_140d6f500(arg1, &arg_8, &var_28, nullptr)
    result = *((sx.q(arg_8) << 5) + *arg1 + 0x10)
else
    int64_t* rcx_1 = *rbx + 0x28
    (*(*rcx_1 + 8))(rcx_1)
    result = *rbx

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t rdx_8 = *rbx_2
        (*rdx_8)(rbx_2, rdx_8)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_5 = *rbx_2
            (*(r8_5 + 8))(rbx_2, 1, r8_5)

return result
