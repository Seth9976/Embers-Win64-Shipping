// 函数: sub_141c5e060
// 地址: 0x141c5e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_30
int64_t* rax = sub_141c5eea0(arg1, &var_30, arg2)
void* rbp = nullptr
void* var_40 = nullptr
int64_t* var_38
sub_141c4d620(&var_38, &rax[1])

if (var_38 != 0)
    var_40 = *rax
    *rax = 0

int64_t* var_28

if (var_28 != 0)
    int32_t rax_1 = *(var_28 + 0xc)
    *(var_28 + 0xc) -= 1
    
    if (rax_1 == 1 && var_28 != 0)
        (*(*var_28 + 8))(var_28, 1)

int32_t result

if (var_40 == 0)
    void** rax_3 = *(arg1 + 0x7e0)
    int64_t* rbx_1 = rax_3[1]
    void* rdx_3 = *rax_3
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    int64_t* rdi_1 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_4 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_4 = rbx_1[1].d
            z_1 = false
        
        if (z_1)
        label_141c5e147:
            rdi_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_4 == rbx_1[1].d)
                    rbx_1[1].d = rax_4 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    rbp = rdx_3
                    break
                
                rax_4 = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_4 = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c5e147
    
    result = sub_141c5df40(rbp, arg3, arg4)
    
    if (rdi_1 != 0)
        result = rdi_1[1].d
        rdi_1[1].d -= 1
        
        if (result == 1)
            (**rdi_1)(rdi_1)
            result = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx_1 != 0)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)
else
    result = sub_141c5df40(var_40, arg3, arg4)

int64_t* rcx_9 = var_38

if (rcx_9 != 0)
    result = rcx_9[1].d
    rcx_9[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_2 = var_38
        result = (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_11 = var_38
            return (*(*rcx_11 + 8))(rcx_11, zx.q(rsi_1))

return result
