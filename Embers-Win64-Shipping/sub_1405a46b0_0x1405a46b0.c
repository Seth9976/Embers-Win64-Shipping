// 函数: sub_1405a46b0
// 地址: 0x1405a46b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rdi = 0

if (*(arg1 + 0x14) s<= 0)
    int32_t rcx_3 = arg1[1].d
    
    if (rcx_3 s> 0)
        int64_t* r15_1 = nullptr
        
        do
            int64_t rax_6 = *arg1
            
            if (*(r15_1 + rax_6 + 8) == 0)
                sub_1405a4880(arg1, rsi, 1, 0)
                rdi += 1
            else
                int64_t* rbx_2 = *(r15_1 + rax_6)
                
                if (rbx_2 == 0)
                    sub_1405a4880(arg1, rsi, 1, 0)
                    rdi += 1
                else if ((*(*rbx_2 + 0x18))(rbx_2, arg2) != 0)
                    sub_1405a4880(arg1, rsi, 1, 0)
                    rdi += 1
                else if ((*(*rbx_2 + 0x20))(rbx_2) != 0)
                    sub_1405a4880(arg1, rsi, 1, 0)
                    rdi += 1
                else
                    rsi += 1
                    r15_1 = &r15_1[2]
            
            rcx_3 = arg1[1].d
        while (rsi s< rcx_3)
    
    int32_t rax_11 = rcx_3 * 2
    
    if (rax_11 s<= 2)
        rax_11 = 2
    
    arg1[2].d = rax_11
    
    if (*(arg1 + 0xc) != rcx_3)
        sub_1405a5410(arg1, arg1[1].d)
    
    return zx.q(rdi)

int64_t* rbx_1 = *arg1
void* rbp_3 = &rbx_1[sx.q(arg1[1].d) * 2]

if (rbx_1 == rbp_3)
    return 0

do
    if (rbx_1[1].d != 0)
        int64_t* rcx = *rbx_1
        
        if (rcx != 0 && (*(*rcx + 0x18))(rcx, arg2) != 0)
            if (rbx_1[1].d != 0)
                int64_t* rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x38))(rcx_1, 0)
                    int64_t rcx_2 = *rbx_1
                    
                    if (rcx_2 != 0)
                        *rbx_1 = sub_140a84c80(rcx_2, 0, 0)
                    
                    rbx_1[1].d = 0
            
            rdi += 1
    
    rbx_1 = &rbx_1[2]
while (rbx_1 != rbp_3)

if (rdi s> 0)
    arg1[2].d = 0

return zx.q(rdi)
