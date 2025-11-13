// 函数: sub_142c7acf0
// 地址: 0x142c7acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rcx = 0
char* r10 = nullptr
char* rsi = nullptr
void* r12 = *arg1
int32_t rax_2

if (arg3 != 0)
    do
        char rax_1 = rsi[arg2]
        int64_t rbx_1 = arg1[0xe2]
        
        if (rax_1 == 0xa)
            if (rbx_1 == 1 || rbx_1 == 4)
                arg1[0xe2] = rbx_1 + 1
            else
                arg1[0xe2] = 0
        else if (rax_1 == 0xd)
            if (rbx_1 != 0)
                int64_t rax_3 = 1
                
                if (rbx_1 == 3)
                    rax_3 = 4
                
                arg1[0xe2] = rax_3
            else
                arg1[0xe2] = 1
                
                if (rsi != 0)
                    rax_2, arg4 = sub_142c645e0(arg1, (rbx_1 + 1).d, &r10[arg2], rsi - r10, arg4)
                    rcx = rax_2
                    
                    if (rax_2 != 0)
                        return rax_2
                    
                    r10 = rsi
        else if (rax_1 != 0x2e)
            arg1[0xe2] = 0
        else if (rbx_1 != 2)
            arg1[0xe2] = 0
            
            if (rbx_1 == 3)
                rbp.b = 1
        else
            arg1[0xe2] = 3
        
        if (rbx_1 != 0 && rbx_1 u>= arg1[0xe2])
            while (true)
                int64_t rax_4 = arg1[0xe3]
                
                if (rax_4 == 0)
                    break
                
                arg1[0xe3] = rax_4 - 1
                int64_t temp1_1 = rbx_1
                rbx_1 -= 1
                
                if (temp1_1 == 1)
                    goto label_142c7ae4f
            
            if (rbx_1 != 0)
                if (rbp.b != 0)
                    rbx_1 -= 1
                
                rax_2, arg4 = sub_142c645e0(arg1, 1, "\r\n.\r\n", rbx_1, arg4)
                rcx = rax_2
                
                if (rax_2 != 0)
                    return rax_2
                
                r10 = rsi
                rbp.b = 0
        
    label_142c7ae4f:
        rsi = &rsi[1]
    while (rsi u< arg3)

int64_t rax_6 = arg1[0xe2]

if (rax_6 == 5)
    rax_2 = sub_142c645e0(arg1, (rax_6 - 4).d, "\r\n.\r\n", zx.q((rax_6 - 3).d), arg4)
    *(r12 + 0x220) &= 0xfffffffe
    arg1[0xe2] = 0
    return rax_2

if (rax_6 != 0)
    return 0

if (arg3 == r10)
    return rcx

return sub_142c645e0(arg1, 1, &r10[arg2], arg3 - r10, arg4)
