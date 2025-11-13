// 函数: sub_141846670
// 地址: 0x141846670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* i = *arg1

if (i == 0)
    return 

int64_t* i_2 = nullptr

if (arg4 != 0)
    i = arg1[1]

if (i == 0)
    return 

int64_t rsi_1 = arg2 + arg3

do
    int64_t rcx = *i
    int64_t* i_1
    
    if (rcx u< rsi_1)
        int64_t rdi_2 = i[1] + rcx
        
        if (arg2 u< rdi_2)
            int64_t* i_3
            
            if (arg4 != 0)
                i_3 = i[2]
            else
                i_3 = i[3]
            
            if (arg2 u> rcx)
                if (rsi_1 u>= rdi_2)
                    i_1 = arg2 - rcx
                else
                    int64_t* rax_2 = j_sub_140a82f30(0x20)
                    int64_t* rcx_4 = rax_2
                    
                    if (rax_2 == 0)
                        rcx_4 = nullptr
                    else
                        *rax_2 = rsi_1
                        rax_2[1] = rdi_2 - rsi_1
                        rax_2[3] = 0
                    
                    rcx_4[2] = i
                    rcx_4[3] = i[3]
                    void* rax_4 = i[3]
                    
                    if (rax_4 == 0)
                        arg1[1] = rcx_4
                        i_1 = arg2 - *i
                        i[3] = rcx_4
                    else
                        *(rax_4 + 0x10) = rcx_4
                        i_1 = arg2 - *i
                        i[3] = rcx_4
                
                i[1] = i_1
            else if (rsi_1 u< rdi_2)
                *i = rsi_1
                i[1] = rdi_2 - rsi_1
            else
                void* rcx_1 = i[2]
                int64_t rax = i[3]
                
                if (rcx_1 == 0)
                    *arg1 = rax
                else
                    *(rcx_1 + 0x18) = rax
                
                void* rcx_2 = i[3]
                int64_t rax_1 = i[2]
                
                if (rcx_2 == 0)
                    arg1[1] = rax_1
                else
                    *(rcx_2 + 0x10) = rax_1
                
                i[2] = 0
                i[3] = 0
                j_sub_140a74f90(i)
            
            i = i_3
        else
            i_1 = i[3]
            
            if (i_2 == i_1)
                break
            
            i_2 = i
            i = i_1
    else
        i_1 = i[2]
        
        if (i_2 == i_1)
            break
        
        i_2 = i
        i = i_1
while (i != 0)
