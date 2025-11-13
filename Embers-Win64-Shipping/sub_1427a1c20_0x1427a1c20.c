// 函数: sub_1427a1c20
// 地址: 0x1427a1c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rbx = arg2[2]
sub_140d19010(rbx, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8.q = 0
void* result = sub_140d2dfc0(sub_1427c0910(), rbx, 0, 0, 0, 0, 0, 0, 0)
int64_t r8 = *result
(*(r8 + 0x290))(result, *arg2, r8)
void* rcx_3 = *(arg1 + 0x28)
int64_t* var_70
int64_t* rax_1
int64_t* rbx_1
int32_t rsi
int64_t* rdi_1

if (rcx_3 == 0)
    int64_t* rax_2 = j_sub_140a82f30(0x20)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        rax_2[1].d = 1
        *rax_2 = &data_1432ad958
        *(rax_2 + 0xc) = 1
        rax_2[3] = 0
        rax_2[2] = &data_1434b71b8
        rax_2[3].d = 0x1fffe
    
    var_70 = rax_2
    rdi_1 = var_70
    rcx_3 = &rax_2[2]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rbx_1 = nullptr
    rsi = 6
    rax_1 = rdi_1
else
    rbx_1 = *(arg1 + 0x30)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rdi_1 = nullptr
    rsi = 1
    rax_1 = rbx_1

void* var_68 = rcx_3
int64_t* var_60 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

(*(*result + 0x298))(result, &var_68)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp4_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_70 + 8))(var_70, 1)

if ((rsi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rax_10 = *(arg1 + 0x40)
int64_t var_58
int64_t var_48

if (rax_10 != 0)
    var_58 = rax_10
    void* rcx_11 = arg1 + 0x60
    void* rax_11 = *(arg1 + 0x50)
    var_48 = 0
    
    if (rax_11 != 0)
        rcx_11 = rax_11
    
    (**rcx_11)(rcx_11, &var_48)
    (*(*result + 0x2a0))(result, &var_58)

int64_t rax_14 = *(arg1 + 0x80)

if (rax_14 != 0)
    var_58 = rax_14
    void* rcx_13 = arg1 + 0xa0
    void* rax_15 = *(arg1 + 0x90)
    var_48 = 0
    
    if (rax_15 != 0)
        rcx_13 = rax_15
    
    (**rcx_13)(rcx_13, &var_48)
    (*(*result + 0x2a8))(result, &var_58)

return result
