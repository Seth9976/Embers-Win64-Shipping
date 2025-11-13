// 函数: sub_141c71830
// 地址: 0x141c71830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_70

if (sub_140a80ea0() == 0)
    void** const var_38 = &data_142d42ed8
    var_70 = arg2
    int64_t (* var_58)(int64_t* arg1) = sub_141c56cf0
    int64_t var_48 = 0
    int128_t var_30 = arg1.o
    return sub_141e85cb0(&var_58, arg3)

void var_68
int64_t* rax_2 = sub_141c5eea0(arg1, &var_68, arg2)
uint64_t result_1 = 0
sub_141c4d620(&var_70, &rax_2[1])

if (var_70 != 0)
    result_1 = *rax_2
    *rax_2 = 0

int64_t* var_60

if (var_60 != 0)
    int32_t rax_3 = *(var_60 + 0xc)
    *(var_60 + 0xc) -= 1
    
    if (rax_3 == 1 && var_60 != 0)
        (*(*var_60 + 8))(var_60, 1)

uint64_t result = result_1

if (result == 0)
    result = *(arg1 + 0x7e0)
    int64_t* rbx_3 = *(result + 8)
    void* r8_1 = *result
    
    if (rbx_3 != 0)
        *(rbx_3 + 0xc) += 1
    
    void* rdx_4 = nullptr
    int64_t* rdi_1 = rbx_3
    bool cond:0_1 = rbx_3 != 0
    
    if (rbx_3 == 0)
    label_141c7198e:
        
        if (cond:0_1)
            rdx_4 = r8_1
    else
        result = 0
        bool z_1
        
        if (0 == rbx_3[1].d)
            rbx_3[1].d = 0
            z_1 = true
        else
            result = zx.q(rbx_3[1].d)
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (result.d == rbx_3[1].d)
                    rbx_3[1].d = (result + 1).d
                    z_2 = true
                else
                    result = zx.q(rbx_3[1].d)
                    z_2 = false
                
                if (z_2)
                    cond:0_1 = rbx_3 != 0
                    break
                
                result = 0
                bool z_3
                
                if (0 == rbx_3[1].d)
                    rbx_3[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rbx_3[1].d)
                    z_3 = false
                
                if (z_3)
                    goto label_141c71986
            
            goto label_141c7198e
        
    label_141c71986:
        rdi_1 = nullptr
    
    void* r14_1 = *(rdx_4 + 0x2b8)
    
    if (r14_1 != 0)
        *(rdx_4 + 0x2b8) = 0
        sub_141c326e0(r14_1)
        result = j_sub_140a74f90(r14_1)
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        rdi_1[1].d -= 1
        
        if (result.d == 1)
            (**rdi_1)(rdi_1)
            result = zx.q(*(rdi_1 + 0xc))
            *(rdi_1 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx_3 != 0)
        result = zx.q(*(rbx_3 + 0xc))
        *(rbx_3 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)
else
    void* rbx_2 = *(result + 0x2b8)
    
    if (rbx_2 != 0)
        *(result + 0x2b8) = 0
        sub_141c326e0(rbx_2)
        result = j_sub_140a74f90(rbx_2)

int64_t* rcx_13 = var_70

if (rcx_13 != 0)
    result = zx.q(rcx_13[1].d)
    rcx_13[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_4 = var_70
        result = (**rbx_4)(rbx_4)
        int32_t rbp_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_15 = var_70
            return (*(*rcx_15 + 8))(rcx_15, zx.q(rbp_1))

return result
