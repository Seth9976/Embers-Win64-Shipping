// 函数: sub_141dadd40
// 地址: 0x141dadd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = *arg2
void* rax_1 = arg2[1]
void* var_50 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, zx.q(*(arg1 + 0x258)), 0x12, &var_58)
int64_t* rbx = nullptr
void** const var_48 = &data_1432388e8
int32_t var_40 = 6
uint64_t var_38 = 0
int64_t var_30 = 0
int64_t var_28 = 0

if (arg4 != 0)
    int64_t* rcx = *arg3
    
    if ((*(*rcx + 0x40))(rcx) == 0xcc)
        int32_t var_40_1 = 0
        
        if (&var_38 != arg6)
            int32_t rdi_1 = arg6[1].d
            int64_t rsi_1 = *arg6
            int32_t r8 = var_30:4.d
            var_30.d = rdi_1
            
            if (rdi_1 != 0 || r8 != 0)
                sub_1405a4c70(&var_38, rdi_1, r8)
                memcpy(var_38, rsi_1, rdi_1 * 2)

if (arg5[1].d != 0)
    rbx = *arg5

(*(*rbx + 0x48))(rbx, &var_48)
uint64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rbx_1 = arg2[1]
var_48 = &data_142d5a028

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
        int32_t rdi_2 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_2))

uint64_t result = sub_140745b20(arg5)
int64_t rcx_10 = *arg6

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
