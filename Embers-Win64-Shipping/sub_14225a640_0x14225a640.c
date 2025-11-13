// 函数: sub_14225a640
// 地址: 0x14225a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].b = arg3
*arg1 = 0
arg1[1] = 0

if (arg2 != 0)
    int64_t* i = *(arg2 + 0x800)
    
    for (void* rsi_1 = &i[sx.q(*(arg2 + 0x808))]; i != rsi_1; i = &i[1])
        int64_t* rax_2 = sub_140962f60(*i)
        
        if (rax_2 != 0)
            int64_t* rcx_1 = *rax_2
            
            if (rcx_1 != 0)
                int64_t rax_4 = (*(*rcx_1 + 0x30))(rcx_1)
                
                if (rax_4 != 0)
                    *arg1 = rax_4
                    break

int64_t* rcx_2 = *arg1

if (rcx_2 != 0)
    char rax_5 = arg1[2].b
    
    if (rax_5 == 0)
        (*(*rcx_2 + 0x348))(rcx_2, 0, 0)
    else if (rax_5 == 1)
        (*(*rcx_2 + 0x358))(rcx_2, 0, 0)

int64_t* rcx_3 = arg1[1]

if (rcx_3 != 0)
    char rax_8 = arg1[2].b
    
    if (rax_8 == 0)
        (*(*rcx_3 + 0x348))(rcx_3, 0, 0)
        return arg1
    
    if (rax_8 == 1)
        (*(*rcx_3 + 0x358))(rcx_3, 0, 0)

return arg1
