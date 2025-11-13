// 函数: sub_141c539c0
// 地址: 0x141c539c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t r15 = data_143f34a18
sub_140b34200("RegisterSubmixBufferListener", r15)
int64_t* var_80
int64_t* var_60
int64_t* var_50
int64_t* rcx_2
int32_t rdi

if (arg1[2].b == 0)
    int64_t rax_4 = sub_140d3c6e0(arg1 + 0x14)
    void var_48
    int64_t* rax_5 = sub_141c5eea0(*arg1, &var_48, rax_4)
    int64_t var_68 = 0
    sub_141c4d620(&var_60, &rax_5[1])
    
    if (var_60 != 0)
        var_68 = *rax_5
        *rax_5 = 0
    
    rcx_2 = &var_68
    rdi = 0xc
else
    int64_t* rcx = *(*arg1 + 0x7e0)
    int64_t rax_1 = *rcx
    int64_t* rax_2 = rcx[1]
    var_50 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 0xc) += 1
    
    int64_t var_88 = 0
    sub_141c4d620(&var_80, &var_50)
    int64_t rax_3 = var_88
    rcx_2 = &var_88
    rdi = 3
    
    if (var_80 != 0)
        rax_3 = rax_1
    
    var_88 = rax_3

void* var_98 = *rcx_2
int64_t* rax_7 = rcx_2[1]
rcx_2[1] = 0
int64_t* var_90 = rax_7
*rcx_2 = 0

if ((rdi.b & 8) != 0)
    int64_t* rcx_7 = var_60
    rdi &= 0xfffffff7
    
    if (rcx_7 != 0)
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d == 1)
            int64_t* rbx_2 = var_60
            (**rbx_2)(rbx_2)
            int32_t rax_10 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_10 == 1)
                int64_t* rcx_9 = var_60
                (*(*rcx_9 + 8))(rcx_9, 1)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    int64_t* var_40
    
    if (var_40 != 0)
        int32_t rax_12 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_12 == 1 && var_40 != 0)
            (*(*var_40 + 8))(var_40, 1)

if ((rdi.b & 2) != 0)
    int64_t* rcx_11 = var_80
    rdi &= 0xfffffffd
    
    if (rcx_11 != 0)
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d == 1)
            int64_t* rbx_3 = var_80
            (**rbx_3)(rbx_3)
            int32_t rax_16 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_16 == 1)
                int64_t* rcx_13 = var_80
                (*(*rcx_13 + 8))(rcx_13, 1)

if ((rdi.b & 1) != 0)
    int64_t* rcx_14 = var_50
    
    if (rcx_14 != 0)
        int32_t rax_18 = *(rcx_14 + 0xc)
        *(rcx_14 + 0xc) -= 1
        
        if (rax_18 == 1)
            int64_t* rcx_15 = var_50
            (*(*rcx_15 + 8))(rcx_15, 1)

if (arg1[2].b != 0)
label_141c53c86:
    
    if (var_98 != 0)
        goto label_141c53c94
else if (var_98 != 0)
label_141c53c94:
    arg_8.q = arg1[1]
    EnterCriticalSection(var_98 + 0x2f0)
    sub_1405a7050(var_98 + 0x2e0, &arg_8)
    
    if (var_98 != -0x2f0)
        LeaveCriticalSection(var_98 + 0x2f0)
else if (sub_140d3e110(arg1 + 0x14) != 0)
    int64_t rax_21
    int64_t r8_2
    rax_21, r8_2 = sub_140d3c6e0(arg1 + 0x14)
    int64_t* rcx_18 = *arg1
    r8_2.b = 1
    int64_t r9_1 = *rcx_18
    (*(r9_1 + 0x58))(rcx_18, rax_21, r8_2, r9_1, var_98)
    int64_t rax_22 = sub_140d3c6e0(arg1 + 0x14)
    void var_38
    int64_t* rax_23 = sub_141c5eea0(*arg1, &var_38, rax_22)
    void* var_78_1 = nullptr
    int64_t* var_70
    sub_141c4d620(&var_70, &rax_23[1])
    void* rcx_22
    
    if (var_70 == 0)
        rcx_22 = var_78_1
    else
        rcx_22 = *rax_23
        *rax_23 = 0
    
    var_98 = rcx_22
    int64_t var_78_2 = 0
    sub_1405aeff0(&var_90, &var_70)
    int64_t* rcx_24 = var_70
    
    if (rcx_24 != 0)
        rcx_24[1].d -= 1
        
        if (rcx_24[1].d == 1)
            int64_t* rbx_5 = var_70
            (**rbx_5)(rbx_5)
            int32_t rax_26 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_26 == 1)
                int64_t* rcx_26 = var_70
                (*(*rcx_26 + 8))(rcx_26, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        int32_t rax_28 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rax_28 == 1 && var_30 != 0)
            (*(*var_30 + 8))(var_30, 1)
    
    goto label_141c53c86

int64_t* rcx_31 = var_90

if (rcx_31 != 0)
    rcx_31[1].d -= 1
    
    if (rcx_31[1].d == 1)
        int64_t* rbx_7 = var_90
        (**rbx_7)(rbx_7)
        int32_t rsi_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_33 = var_90
            (*(*rcx_33 + 8))(rcx_33, zx.q(rsi_1))

return sub_140b38680("RegisterSubmixBufferListener", r15) __tailcall
