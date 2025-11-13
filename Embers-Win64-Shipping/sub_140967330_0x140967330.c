// 函数: sub_140967330
// 地址: 0x140967330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1acc) = 1
int32_t rcx = arg4

if (rcx == 0 || rcx s> 0x400)
    rcx = 0x400

int32_t rax = arg5

if (rax == 0)
    rax = 0x1c

int32_t var_38 = rax
int32_t var_40 = rcx
int32_t var_48 = arg3
(*(*arg1 + 0x2e0))(arg1)
int64_t var_28
int64_t* rax_3 = (*(*arg2 + 0x98))(arg2, &var_28)
int64_t* rbx = rax_3[1]

if (rbx != 0)
    rbx[1].d += 1

void var_18

if (&arg1[0x22] == &var_18)
label_140967401:
    
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
        goto label_140967401
    
    arg1[0x23] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* rcx_9 = arg1[0x22]
int64_t* rax_10 = (*(*rcx_9 + 0x78))(rcx_9, &var_28, 0)

if (&arg1[0x17] != rax_10)
    int64_t rcx_10 = arg1[0x17]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg1[0x17] = *rax_10
    *rax_10 = 0
    arg1[0x18].d = rax_10[1].d
    *(arg1 + 0xc4) = *(rax_10 + 0xc)
    rax_10[1] = 0

int64_t rcx_12 = var_28

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

(*(*arg1 + 0x298))(arg1)
sub_142155510(arg1, 1)
return sub_1421557e0(arg1, 0) __tailcall
