// 函数: sub_140a88330
// 地址: 0x140a88330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x60)
int64_t rsi = sx.q(arg2)
int64_t* rcx

if (arg3 u> 4)
    if (rdi == 0)
        int64_t rcx_1 = 0
        
        if (arg3 != 0)
            int64_t* rcx_2 = data_143ddb3f0
            
            if (rcx_2 == 0)
                sub_140a750a0()
                rcx_2 = data_143ddb3f0
            
            int64_t rax_2 = (*(*rcx_2 + 0x20))(rcx_2, 0, sx.q(arg3) * arg4, 0)
            rcx_1 = rax_2
            *(arg1 + 0x60) = rax_2
        
        return memmove(rcx_1, arg1, (rsi * 0x18).d) __tailcall
    
    rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    *(arg1 + 0x60) = (*(*rcx + 0x20))(rcx, rdi, sx.q(arg3) * arg4, 0)
else if (rdi != 0)
    memmove(arg1, rdi, (rsi * 0x18).d)
    rdi = *(arg1 + 0x60)
    
    if (rdi != 0)
        rcx = data_143ddb3f0
        
        if (rcx == 0)
            sub_140a750a0()
            rcx = data_143ddb3f0
        
        *(arg1 + 0x60) = (*(*rcx + 0x20))(rcx, rdi, 0, 0)
