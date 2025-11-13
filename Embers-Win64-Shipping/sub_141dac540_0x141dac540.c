// 函数: sub_141dac540
// 地址: 0x141dac540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x60]
int64_t rbp = arg1[0x5f]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_78 = *arg2
void* rax_1 = arg2[1]
void* var_70 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 1, 1, &var_78)
int32_t var_30 = 6
void** const var_38 = &data_142dd6130
char var_28 = 1
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *arg3
    rax_3 = (*(*rcx + 0x40))(rcx)

if (arg4 != 0 && rax_3 == 0xcc)
    int64_t* rcx_1 = *arg2
    
    if (rcx_1 != 0)
        int32_t rax_5 = (*(*rcx_1 + 0x28))(rcx_1)
        arg1[0x6b].d += rax_5
    
    int32_t var_30_1 = 0
    goto label_141dac65f

int64_t var_68 = *arg3
void* rax_7 = arg3[1]
void* var_60_1 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

int64_t var_58 = rbp
int64_t* var_50_1 = rbx

if (rbx != 0)
    rbx[1].d += 1

if (sub_141daeec0(arg1, &var_58, &var_68, 0, arg5) == 0)
    (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
label_141dac65f:
    
    if (arg1[0x55].d != 0)
        int64_t* rcx_4 = arg1[0x54]
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (arg1[0x55].d == 0)
                rcx_5 = nullptr
            else
                rcx_5 = arg1[0x54]
            
            (*(*rcx_5 + 0x50))(rcx_5, &var_38)
    
    void var_48
    
    if (&var_48 != &arg1[0x54] && arg1[0x55].d != 0)
        int64_t* rcx_6 = arg1[0x54]
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t rcx_7 = arg1[0x54]
            
            if (rcx_7 != 0)
                arg1[0x54] = sub_140a84c80(rcx_7, 0, 0)
            
            arg1[0x55].d = 0

int32_t result = 0x42d5a028
var_38 = &data_142d5a028

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi_2 = arg3[1]

if (rdi_2 != 0)
    result = rdi_2[1].d
    rdi_2[1].d -= 1
    
    if (result == 1)
        result = (**rdi_2)(rdi_2)
        int32_t rbx_2 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rbx_2 == 1)
            return (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_2))

return result
