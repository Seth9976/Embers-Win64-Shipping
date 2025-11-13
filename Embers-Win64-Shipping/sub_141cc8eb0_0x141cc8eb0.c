// 函数: sub_141cc8eb0
// 地址: 0x141cc8eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rdi = arg3
int64_t* rsi = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = rsi
        rsi = &rsi[2]
        
        if (rdi != rbx_1)
            int64_t* rcx
            
            if (rdi[1].d != 0)
                rcx = *rdi
            
            if (rdi[1].d != 0 && rcx != 0)
                (*(*rcx + 0x40))(rcx, rbx_1)
            else if (rbx_1[1].d != 0)
                int64_t* rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x38))(rcx_1, 0)
                    int64_t rcx_2 = *rbx_1
                    
                    if (rcx_2 != 0)
                        *rbx_1 = sub_140a84c80(rcx_2, 0, 0)
                    
                    rbx_1[1].d = 0
        
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
