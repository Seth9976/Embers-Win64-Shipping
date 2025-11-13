// 函数: sub_140e78340
// 地址: 0x140e78340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rax_2 = *(arg1 + 0x20)
uint64_t result

if (rax_2 == 0 || rax_2 != *arg2)
    int64_t var_1b8 = *arg2
    void* rax_9 = arg2[1]
    void* var_1b0_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    int64_t var_1a8
    result = sub_140e63960(arg1, &var_1a8, &var_1b8, arg3)
    int64_t* var_1a0
    
    if (var_1a8 != 0)
        var_1b8.o = var_1a8.o
        
        if (var_1a0 != 0)
            var_1a0[1].d += 1
        
        result = sub_140e75b20(arg1, &var_1b8)
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            result = (**var_1a0)(var_1a0)
            int32_t temp2_1 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*var_1a0 + 8))(var_1a0, 1)
else
    int32_t i_1 = *(arg1 + 0x58)
    
    if (i_1 != 0)
        int64_t* rdi_2 = *(arg1 + 0x50) + 8
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp8_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_2 = &rdi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    bool cond:1_1 = *(arg1 + 0x5c) == 0
    *(arg1 + 0x58) = 0
    
    if (not(cond:1_1))
        sub_1405a5410(arg1 + 0x50, 0)
    
    sub_140e61d50(arg1 + 0x60, 0)
    void var_198
    sub_140e88d80(arg1, sub_140d947e0(&var_198))
    void var_48
    sub_140596d80(&var_48)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp7_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    void var_190
    result = sub_140d94d20(&var_190)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp6_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
