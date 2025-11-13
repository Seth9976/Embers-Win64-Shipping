// 函数: sub_141bed7c0
// 地址: 0x141bed7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t rax

if (*(arg1 + 0x48) != 0)
    int64_t* rbx_1 = *(arg1 + 0x50)
    
    if (rbx_1 != 0)
        rax = rbx_1[1].d
        
        if (rax s> 0)
            char var_28_1 = 1
            int64_t var_20 = 0
            int32_t var_18_1 = 0
            int64_t* rcx = nullptr
            int128_t var_38 = *(arg1 + 0x38)
            
            if (rbx_1 != 0)
                if (rax != 0)
                    rbx_1[1].d = rax + 1
                    rax.b = 1
                
                if (rax.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx = *(arg1 + 0x48)
            
            sub_140f60540(rcx, &var_38)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            sub_140745b20(&var_20)

if (*(arg1 + 0x48) != 0)
    int64_t* rbx_2 = *(arg1 + 0x50)
    
    if (rbx_2 != 0)
        rax = rbx_2[1].d
        
        if (rax s> 0)
            int64_t* rcx_4 = nullptr
            
            if (rbx_2 != 0)
                if (rax != 0)
                    rbx_2[1].d = rax + 1
                    rax.b = 1
                
                if (rax.b == 0)
                    rbx_2 = nullptr
                
                if (rbx_2 != 0)
                    rcx_4 = *(arg1 + 0x48)
            
            sub_140f5e570(rcx_4, zx.d(*(arg1 + 0x58)))
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)

if (*(arg1 + 0x48) == 0)
    return 

int64_t* rbx_3 = *(arg1 + 0x50)

if (rbx_3 == 0)
    return 

rax = rbx_3[1].d

if (rax s<= 0)
    return 

if (rbx_3 != 0)
    if (rax != 0)
        rbx_3[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        rsi = *(arg1 + 0x48)

sub_140f61770(rsi, zx.d(*(arg1 + 0x59)))

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp5_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp5_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
