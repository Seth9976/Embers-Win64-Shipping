// 函数: sub_140d435a0
// 地址: 0x140d435a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] != 0)
    return 

int64_t* rsi_1 = nullptr
int64_t* r14_1 = arg1[2]
int64_t var_48 = *arg1
int64_t* var_40_1 = nullptr
int64_t* var_38_1 = r14_1

if (r14_1 != 0)
    r14_1[1].d += 1

int32_t arg_8
sub_140d446e0(&data_1439ae200, &arg_8, &var_48)
int64_t rax_2 = sx.q(arg_8)
void* const rax_5

if (rax_2.d == 0xffffffff)
    rax_5 = nullptr
else
    rax_5 = rax_2 * 0x30 + data_1439ae200

int64_t* rcx = rax_5 + 0x18

if (rax_5 == 0)
    rcx = nullptr

int64_t rbx_2
int64_t* rdi_1

if (rcx != 0)
    rsi_1 = rcx[1]
    rbx_2 = *rcx
    rdi_1 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp3_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
else
    var_48.o = zx.o(0)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp2_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    rdi_1 = var_40_1
    rbx_2 = var_48

if (&arg1[1] == &var_48)
label_140d43702:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
else
    arg1[1] = rbx_2
    int64_t* rbx_3 = arg1[2]
    
    if (rsi_1 == rbx_3)
        goto label_140d43702
    
    arg1[2] = rsi_1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
