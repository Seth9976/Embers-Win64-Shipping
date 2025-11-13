// 函数: sub_142039b50
// 地址: 0x142039b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[6]

if (rcx != 0)
    char rsi_1 = rcx[0x1e].b
    (*(*rcx + 0xcb0))(rcx)
    void* rbx_1 = *(arg1 + 0x30)
    void* const rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = *(rbx_1 + 0x278)
    
    char rax_2
    
    if (rbx_2 != 0 && *(rbx_2 + 0xf0) != 0)
        rax_2 = sub_14243ae40(rbx_2)
    
    if (rbx_2 != 0 && *(rbx_2 + 0xf0) != 0 && rax_2 != 0)
        sub_141fc4150(*(rbx_2 + 0xf0), arg2[6], 0)
        sub_141dbe590(arg2[6], 1, 1)
    else if (rsi_1 == 3)
        sub_141dbe590(arg2[6], 1, 1)

int64_t* rdx_1 = *(arg1 + 0x38)
int64_t* rbx_3 = rdx_1
void* rcx_4 = &rdx_1[sx.q(*(arg1 + 0x40))]

if (rdx_1 != rcx_4)
    do
        if (*rbx_3 == arg2)
            int32_t rbx_5 = ((rbx_3 - rdx_1) s>> 3).d
            
            if (rbx_5 != 0xffffffff)
                (*(*arg2 + 0x288))(arg2)
                int32_t rcx_6 = *(arg1 + 0x40)
                int32_t rax_6 = rcx_6 - rbx_5
                
                if (rax_6 != 1)
                    int64_t r9_1 = *(arg1 + 0x38)
                    memmove(r9_1 + (sx.q(rbx_5) << 3), r9_1 + (sx.q(rbx_5 + 1) << 3), 
                        (rax_6 - 1) << 3)
                    rcx_6 = *(arg1 + 0x40)
                
                *(arg1 + 0x40) = rcx_6 - 1
                sub_1405c53d0(arg1 + 0x38)
                void* rax_11 = *(arg1 + 0x30)
                
                if (rax_11 != 0)
                    int64_t* rcx_9 = *(rax_11 + 0x210)
                    
                    if (rcx_9 != 0)
                        if (rax_11 == 0)
                            rcx_9 = nullptr
                        
                        (*(*rcx_9 + 0x328))(rcx_9, zx.q(rbx_5), arg2)
            
            break
        
        rbx_3 = &rbx_3[1]
    while (rbx_3 != rcx_4)

arg2[0xe] = 0
sub_140920c10(arg1 + 0xa8, arg2)
int64_t result
result.b = 1
return result
