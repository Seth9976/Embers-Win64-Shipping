// 函数: sub_141bed210
// 地址: 0x141bed210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t rax

if (*(arg1 + 0x50) != 0)
    int64_t* rbx_1 = *(arg1 + 0x58)
    
    if (rbx_1 != 0)
        rax = rbx_1[1].d
        
        if (rax s> 0)
            int64_t* rcx = nullptr
            
            if (rbx_1 != 0)
                if (rax != 0)
                    rbx_1[1].d = rax + 1
                    rax.b = 1
                
                if (rax.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx = *(arg1 + 0x50)
            
            sub_140f5e570(rcx, zx.d(*(arg1 + 0x48)))
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg1 + 0x50) == 0)
    return 

int64_t* rbx_2 = *(arg1 + 0x58)

if (rbx_2 == 0)
    return 

rax = rbx_2[1].d

if (rax s<= 0)
    return 

if (rbx_2 != 0)
    if (rax != 0)
        rbx_2[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rsi = *(arg1 + 0x50)

sub_140f61770(rsi, zx.d(*(arg1 + 0x49)))

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp3_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
