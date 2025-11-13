// 函数: sub_140929a20
// 地址: 0x140929a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int128_t var_30 = zx.o(0)
void** const var_38 = &data_142e1f860
int16_t* var_20
(*(*arg3 + 0x30))(arg3, &var_20)
void var_10
(*(*arg3 + 0x10))(arg3, &var_10)
var_38 = &data_142e1f860
void* rcx_7

if (*(arg1 + 0x1d0) == *(arg1 + 0x1fc))
label_140929b26:
    rcx_7 = nullptr
else
    int32_t var_18
    int32_t rcx_2
    int16_t* rdx_2
    
    if (var_18 == 0)
        rdx_2 = &data_142d40450
        rcx_2 = 0
    else
        rdx_2 = var_20
        rcx_2 = var_18 - 1
    
    void* rdi_1 = arg1 + 0x200
    void* rbx_1 = *(rdi_1 + 8)
    int64_t rcx_3 = sx.q(sub_1405969c0(rcx_2, rdx_2))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t rbx_2 = *(rdi_1 + ((rcx_3 & (sx.q(*(arg1 + 0x210)) - 1)) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_140929b26_1:
        rcx_7 = nullptr
    else
        int64_t rdx_3 = *(arg1 + 0x1c8)
        int64_t rdi_2
        
        while (true)
            rdi_2 = sx.q(rbx_2) * 0x48
            
            if ((**(rdi_2 + rdx_3))(rdi_2 + rdx_3, &var_38) != 0)
                break
            
            rdx_3 = *(arg1 + 0x1c8)
            rbx_2 = *(rdi_2 + rdx_3 + 0x40)
            
            if (rbx_2 == 0xffffffff)
                goto label_140929b26_2
        
        if (rbx_2 == 0xffffffff)
        label_140929b26_2:
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x1c8) + rdi_2

int64_t* rax_10 = rcx_7 + 0x30

if (rcx_7 == 0)
    rax_10 = nullptr

if (rax_10 != 0)
    int64_t* rax_11 = rax_10[1]
    
    if (rax_11 != 0)
        rax_11[1].d += 1
    
    void var_48
    
    if (arg2 == &var_48)
    label_140929ba8:
        
        if (rax_11 != 0)
            rax_11[1].d -= 1
            
            if (rax_11[1].d == 1)
                (**rax_11)(rax_11)
                int32_t temp2_1 = *(rax_11 + 0xc)
                *(rax_11 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rax_11 + 8))(rax_11, 1)
    else
        *arg2 = *rax_10
        int64_t* rbx_3 = arg2[1]
        
        if (rax_11 == rbx_3)
            goto label_140929ba8
        
        arg2[1] = rax_11
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)

int16_t* rcx_13 = var_20

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t* rcx_14 = var_30:8.q

if (rcx_14 != 0)
    int32_t temp0_1 = *(rcx_14 + 0xc)
    *(rcx_14 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_14 + 8))(rcx_14, 1)

return arg2
