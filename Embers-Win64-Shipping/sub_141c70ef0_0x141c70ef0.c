// 函数: sub_141c70ef0
// 地址: 0x141c70ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_80

if (sub_140a80ea0() == 0)
    void** const var_48 = &data_142d42ed8
    var_80 = arg2
    int64_t (* var_68)(int64_t* arg1) = sub_141c57350
    int64_t var_58 = 0
    int128_t var_40 = arg1.o
    return sub_141e85cb0(&var_68, arg3)

void var_78
int64_t* rax_2 = sub_141c5eea0(arg1, &var_78, arg2)
int64_t result_1 = 0
sub_141c4d620(&var_80, &rax_2[1])

if (var_80 != 0)
    result_1 = *rax_2
    *rax_2 = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_3 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_3 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)

int64_t result = result_1

if (result == 0)
    result = *(arg1 + 0x7e0)
    int64_t* rbx_1 = *(result + 8)
    void* r8_1 = *result
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    void* rdx_3 = nullptr
    int64_t* rsi_1 = rbx_1
    bool cond:0_1 = rbx_1 != 0
    
    if (rbx_1 == 0)
    label_141c71040:
        
        if (cond:0_1)
            rdx_3 = r8_1
    else
        result = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            result = zx.q(rbx_1[1].d)
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (result.d == rbx_1[1].d)
                    rbx_1[1].d = (result + 1).d
                    z_2 = true
                else
                    result = zx.q(rbx_1[1].d)
                    z_2 = false
                
                if (z_2)
                    cond:0_1 = rbx_1 != 0
                    break
                
                result = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rbx_1[1].d)
                    z_3 = false
                
                if (z_3)
                    goto label_141c71038
            
            goto label_141c71040
        
    label_141c71038:
        rsi_1 = nullptr
    
    *(rdx_3 + 0x330)
    *(rdx_3 + 0x330) = 0
    
    if (rsi_1 != 0)
        result = zx.q(rsi_1[1].d)
        rsi_1[1].d -= 1
        
        if (result.d == 1)
            (**rsi_1)(rsi_1)
            result = zx.q(*(rsi_1 + 0xc))
            *(rsi_1 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rsi_1 + 8))(rsi_1, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*(rbx_1 + 0xc))
        *(rbx_1 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(result + 0x330)
    *(result + 0x330) = 0

int64_t* r10 = *(arg1 + 0xa18)
uint64_t r9 = sx.q(*(arg1 + 0xa20))
int64_t* rcx_9 = r10
void* rdx_4 = &r10[r9]

if (r10 != rdx_4)
    do
        if (*rcx_9 == arg2)
            int32_t rcx_11 = ((rcx_9 - r10) s>> 3).d
            
            if (rcx_11 != 0xffffffff)
                int32_t rax_10 = r9.d - rcx_11 - 1
                
                if (rax_10 s>= 1)
                    rax_10 = 1
                
                if (rax_10 != 0)
                    memcpy(&r10[sx.q(rcx_11)], &r10[sx.q(r9.d - rax_10)], rax_10 << 3)
                    r9 = zx.q(*(arg1 + 0xa20))
                
                *(arg1 + 0xa20) = (r9 - 1).d
                result = sub_1405c53d0(arg1 + 0xa18)
            
            break
        
        rcx_9 = &rcx_9[1]
    while (rcx_9 != rdx_4)

int64_t* rcx_14 = var_80

if (rcx_14 != 0)
    result = zx.q(rcx_14[1].d)
    rcx_14[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_2 = var_80
        result = (**rbx_2)(rbx_2)
        int32_t rbp_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_16 = var_80
            return (*(*rcx_16 + 8))(rcx_16, 1)

return result
