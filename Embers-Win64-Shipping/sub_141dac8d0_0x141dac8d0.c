// 函数: sub_141dac8d0
// 地址: 0x141dac8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = *arg2
void* rax_1 = arg2[1]
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, zx.q(*(arg1 + 0x258)), 0xf, &var_38)
int64_t* rbx = nullptr
int32_t var_20 = 6
int64_t var_18 = 0
void** const var_28 = &data_1432388d8
int64_t var_10 = 0

if (arg4 != 0)
    int64_t* rcx = *arg3
    
    if ((*(*rcx + 0x40))(rcx) == 0xc8)
        int64_t* rcx_1 = *arg3
        int64_t* rax_5 = (*(*rcx_1 + 0x30))(rcx_1)
        
        if (&var_18 != rax_5)
            uint32_t count = rax_5[1].d
            int32_t r8 = var_10:4.d
            int64_t rbp_1 = *rax_5
            var_10.d = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&var_18, count, r8)
                memcpy(var_18, rbp_1, count)
            else
                var_10:4.d = 0
        
        int32_t var_20_1 = 0

if (arg5[1].d != 0)
    int64_t* rcx_4 = *arg5
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        if (arg5[1].d != 0)
            rbx = *arg5
        
        (*(*rbx + 0x50))(rbx, &var_28)

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rbx_1 = arg2[1]
var_28 = &data_142d5a028

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

return sub_140745b20(arg5)
