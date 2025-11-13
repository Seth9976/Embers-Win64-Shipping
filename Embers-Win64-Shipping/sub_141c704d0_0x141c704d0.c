// 函数: sub_141c704d0
// 地址: 0x141c704d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rdi = arg2
int64_t* var_80

if (sub_140a80ea0() == 0)
    void** const var_48 = &data_142d42ed8
    var_80 = rdi
    int64_t (* var_68)(int64_t* arg1) = sub_141c56b90
    int64_t var_58 = 0
    int128_t var_40 = arg1.o
    return sub_141e85cb0(&var_68, arg3)

void var_78
int64_t* rax_2 = sub_141c5eea0(arg1, &var_78, rdi)
void* rsi = nullptr
void* var_88_1 = nullptr
sub_141c4d620(&var_80, &rax_2[1])

if (var_80 != 0)
    var_88_1 = *rax_2
    *rax_2 = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_3 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_3 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)
    
    rdi = arg_10

if (var_88_1 == 0)
    int64_t* rax_5 = *(arg1 + 0x7e0)
    int64_t* rbx_1 = rax_5[1]
    void* rdx_4 = *rax_5
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rdi = arg_10
    
    int64_t* r14_1 = rbx_1
    bool cond:0_1 = rbx_1 != 0
    
    if (rbx_1 == 0)
    label_141c70623:
        
        if (cond:0_1)
            rsi = rdx_4
    else
        int32_t rax_6 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_6 = rbx_1[1].d
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (rax_6 == rbx_1[1].d)
                    rbx_1[1].d = rax_6 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    rdi = arg_10
                    cond:0_1 = rbx_1 != 0
                    break
                
                rax_6 = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_6 = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c70613
            
            goto label_141c70623
        
    label_141c70613:
        rdi = arg_10
        r14_1 = nullptr
    
    sub_141c70700(rsi, rdi[0xc].d, *(rdi + 0x64))
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t rax_10 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    if (rbx_1 != 0)
        int32_t rax_12 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
else
    sub_141c70700(var_88_1, rdi[0xc].d, *(rdi + 0x64))

int32_t result = sub_1405a7050(arg1 + 0xa18, &arg_10)
int64_t* rcx_12 = var_80

if (rcx_12 != 0)
    result = rcx_12[1].d
    rcx_12[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_2 = var_80
        result = (**rbx_2)(rbx_2)
        int32_t r15_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (r15_1 == 1)
            int64_t* rcx_14 = var_80
            return (*(*rcx_14 + 8))(rcx_14, zx.q(r15_1))

return result
