// 函数: sub_140966fa0
// 地址: 0x140966fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg5

if (rcx == 0 || rcx s> 0x400)
    rcx = 0x400

int32_t rax = arg6

if (rax == 0)
    rax = 0x1c

int32_t var_a8 = rax
int32_t var_b0 = rcx
int64_t result = (*(*arg1 + 0x2e0))(arg1, arg2)

if (*(arg1 + 0x1acc) != 1)
    *(arg1 + 0x1acc) = 2
    return result

arg5.b = 0
int64_t* rax_2 = (*(*arg2 + 0x378))(arg2)
int64_t r8 = *rax_2
void var_98
int64_t* rax_3 = (*(r8 + 0x90))(rax_2, &var_98, r8)
int64_t* rbx = rax_3[1]

if (rbx != 0)
    rbx[1].d += 1

void var_88

if (&arg1[0x22] == &var_88)
label_1409670a4:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    arg1[0x22] = *rax_3
    int64_t* rdi_1 = arg1[0x23]
    
    if (rbx == rdi_1)
        goto label_1409670a4
    
    arg1[0x23] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp4_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_90 + 8))(var_90, 1)

int16_t* const rdi_2 = &data_142d40450
int64_t* rcx_10 = arg1[0x22]
int16_t* const rdx_2

if (*(arg4 + 0x18) == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *(arg4 + 0x10)

(*(*rcx_10 + 0x10))(rcx_10, rdx_2, &arg5)

if (arg5.b == 0)
label_140967159:
    int64_t* rax_13 = (*(*arg2 + 0x378))(arg2)
    
    if (*(arg4 + 0x18) != 0)
        rdi_2 = *(arg4 + 0x10)
    
    var_b0.q = *(arg3 + 0x20)
    int64_t var_78
    (*(*rax_13 + 0x40))(rax_13, &var_78, rdi_2, 0, 0x89, var_b0, 0)
    int32_t var_48
    void* var_40
    int32_t var_38
    
    if (var_48 == 0 && var_38 s> 0)
        int64_t* rcx_15 = *(var_40 + 0x18)
        int64_t* rax_17 = (*(*rcx_15 + 0x98))(rcx_15, &var_98)
        int64_t* rbx_3 = rax_17[1]
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (&arg1[0x22] == &var_88)
        label_14096721b:
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp8_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
        else
            arg1[0x22] = *rax_17
            int64_t* rdi_3 = arg1[0x23]
            
            if (rbx_3 == rdi_3)
                goto label_14096721b
            
            arg1[0x23] = rbx_3
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp11_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        
        if (var_90 != 0)
            var_90[1].d -= 1
            
            if (var_90[1].d == 1)
                (**var_90)(var_90)
                int32_t temp10_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_90 + 8))(var_90, 1)
        
        arg5.b = 1
    
    sub_14094ab00(&var_40)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_25 = var_78
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
else
    int64_t* rcx_11 = arg1[0x22]
    void arg_8
    
    if (*(arg3 + 0x20) != *(*(*rcx_11 + 0xa0))(rcx_11, &arg_8) || arg5.b == 0)
        goto label_140967159

int64_t* rcx_26 = arg1[0x22]
(*(*rcx_26 + 0x28))(rcx_26, zx.q(*(arg4 + 0x20)))

if (arg5.b != 0)
    return (*(*arg1 + 0x298))(arg1)

sub_14213f9e0(arg1)
return 0
