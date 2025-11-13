// 函数: sub_141dab9e0
// 地址: 0x141dab9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *arg2
void* rax_1 = arg2[1]
void* var_40 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 2, 5, &var_48)
int32_t var_50 = 6
void** const var_58 = &data_142d5a028
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *arg3
    rax_3 = (*(*rcx + 0x40))(rcx)

int64_t* rdi

if (arg4 == 0 || rax_3 != 0xc8)
    rdi = nullptr
    arg1[0x29].d = 0
    
    if (*(arg1 + 0x14c) != 0)
        sub_1405c5510(&arg1[0x28], 0)
    
    int64_t var_20_1 = 0
    int64_t var_18_1 = 0
    void** const var_28 = &data_142dd6130
    var_20_1.d = 6
    var_18_1.b = 0
    
    if (arg1[0x55].d != 0)
        int64_t* rcx_4 = arg1[0x54]
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (arg1[0x55].d == 0)
                rcx_5 = nullptr
            else
                rcx_5 = arg1[0x54]
            
            (*(*rcx_5 + 0x50))(rcx_5, &var_28)
    
    void var_38
    
    if (&var_38 != &arg1[0x54] && arg1[0x55].d != 0)
        int64_t* rcx_6 = arg1[0x54]
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t rcx_7 = arg1[0x54]
            
            if (rcx_7 != 0)
                arg1[0x54] = sub_140a84c80(rcx_7, 0, 0)
            
            arg1[0x55].d = 0
    
    (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
else
    int64_t* rcx_1 = *arg3
    rdi = nullptr
    int32_t var_50_1 = 0
    sub_141d93690(&arg1[0x13], (*(*rcx_1 + 0x30))(rcx_1))

if (arg5[1].d != 0)
    int64_t* rcx_9 = *arg5
    
    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
        if (arg5[1].d != 0)
            rdi = *arg5
        
        (*(*rdi + 0x50))(rdi, &var_58)

int64_t* rbx_2 = arg2[1]
var_58 = &data_142d5a028

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return sub_140745b20(arg5)
