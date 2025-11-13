// 函数: sub_141c6d3e0
// 地址: 0x141c6d3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_60

if (sub_140a80ea0() == 0)
    void** const var_28_1 = &data_142d42ed8
    var_60 = arg2
    int64_t (* var_48)(int64_t* arg1) = sub_141c57450
    int64_t var_38_1 = 0
    int128_t var_20_1 = arg1.o
    return sub_141e85cb0(&var_48, arg3)

void var_58
int64_t* rax_1 = sub_141c5eea0(arg1, &var_58, arg2)
void* rdi_1 = nullptr
void* const var_68_1 = nullptr
int64_t* result = sub_141c4d620(&var_60, &rax_1[1])
void* const rcx_3

if (var_60 == 0)
    rcx_3 = nullptr
else
    rcx_3 = *rax_1
    var_68_1 = rcx_3
    *rax_1 = 0

int64_t* var_50

if (var_50 != 0)
    result = zx.q(*(var_50 + 0xc))
    *(var_50 + 0xc) -= 1
    
    if (result.d == 1 && var_50 != 0)
        result = (*(*var_50 + 8))(var_50, 1)
    
    rcx_3 = var_68_1

if (rcx_3 == 0)
    result = *(arg1 + 0x7e0)
    int64_t* rbx_2 = result[1]
    void* rdx_3 = *result
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
    
    int64_t* rsi_1 = rbx_2
    bool cond:0_1 = rbx_2 != 0
    
    if (rbx_2 == 0)
    label_141c6d52b:
        
        if (cond:0_1)
            rdi_1 = rdx_3
    else
        result = nullptr
        bool z_1
        
        if (0 == rbx_2[1].d)
            rbx_2[1].d = 0
            z_1 = true
        else
            result = zx.q(rbx_2[1].d)
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (result.d == rbx_2[1].d)
                    rbx_2[1].d = (result + 1).d
                    z_2 = true
                else
                    result = zx.q(rbx_2[1].d)
                    z_2 = false
                
                if (z_2)
                    cond:0_1 = rbx_2 != 0
                    break
                
                result = nullptr
                bool z_3
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rbx_2[1].d)
                    z_3 = false
                
                if (z_3)
                    goto label_141c6d523
            
            goto label_141c6d52b
        
    label_141c6d523:
        rsi_1 = nullptr
    
    if (*(rdi_1 + 0x320) != 0)
        *(rdi_1 + 0x32c) |= 1
    
    if (rsi_1 != 0)
        result = zx.q(rsi_1[1].d)
        rsi_1[1].d -= 1
        
        if (result.d == 1)
            (**rsi_1)(rsi_1)
            result = zx.q(*(rsi_1 + 0xc))
            *(rsi_1 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rsi_1 + 8))(rsi_1, 1)
    
    if (rbx_2 != 0)
        result = zx.q(*(rbx_2 + 0xc))
        *(rbx_2 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)
else if (*(rcx_3 + 0x320) != 0)
    *(rcx_3 + 0x32c) |= 1

int64_t* rcx_9 = var_60

if (rcx_9 != 0)
    result = zx.q(rcx_9[1].d)
    rcx_9[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_3 = var_60
        result = (**rbx_3)(rbx_3)
        int32_t rbp_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_11 = var_60
            return (*(*rcx_11 + 8))(rcx_11, zx.q(rbp_1))

return result
