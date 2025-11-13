// 函数: sub_141d7efc0
// 地址: 0x141d7efc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != &arg1[5])
    if (arg1[8].b != 0)
        arg1[8].b = 0
        int64_t* rsi_1 = arg1[6]
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp2_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    
    arg1[5] = *arg2
    void* rax_4 = arg2[1]
    arg1[6] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    arg1[7] = arg2[2]
    arg1[8].b = 1

uint32_t rdx = zx.d(arg1[0xa].b)
arg1[9] = arg3

if (rdx == 2)
    if (rdx.b != 0)
        if (rdx.b == 2)
            (*(*arg1 + 0x290))(arg1)
        
        arg1[0xa].b = 3
        (*(*arg1 + 0x298))(arg1)
    
    goto label_141d7f092

if (rdx == 3)
label_141d7f092:
    char rax_8 = arg1[0xa].b
    
    if (rax_8 != 3 && rax_8 != 0)
        if (rax_8 == 2)
            (*(*arg1 + 0x290))(arg1)
        
        arg1[0xa].b = 3
        (*(*arg1 + 0x298))(arg1)
    
    if (arg1[0xa].b == 3)
        arg1[0xa].b = 0
        (*(*arg1 + 0x2a8))(arg1)

arg1[0xa].b = 0
char result = (*(*arg1 + 0x260))(arg1)

if (result == 0)
    return result

arg1[0xa].b = 1
return 1
