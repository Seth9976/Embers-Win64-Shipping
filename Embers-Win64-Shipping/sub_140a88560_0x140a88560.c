// 函数: sub_140a88560
// 地址: 0x140a88560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x320)
int64_t rsi = sx.q(arg2)
int64_t* rcx

if (arg3 u> 0x64)
    if (rdi == 0)
        int64_t rax_1 = 0
        
        if (arg3 != 0)
            int64_t* rcx_1 = data_143ddb3f0
            
            if (rcx_1 == 0)
                sub_140a750a0()
                rcx_1 = data_143ddb3f0
            
            rax_1 = (*(*rcx_1 + 0x20))(rcx_1, 0, sx.q(arg3) * arg4, 0)
            *(arg1 + 0x320) = rax_1
        
        return memmove(rax_1, arg1, (rsi << 3).d) __tailcall
    
    rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    *(arg1 + 0x320) = (*(*rcx + 0x20))(rcx, rdi, sx.q(arg3) * arg4, 0)
else if (rdi != 0)
    memmove(arg1, rdi, (rsi << 3).d)
    rdi = *(arg1 + 0x320)
    
    if (rdi != 0)
        rcx = data_143ddb3f0
        
        if (rcx == 0)
            sub_140a750a0()
            rcx = data_143ddb3f0
        
        *(arg1 + 0x320) = (*(*rcx + 0x20))(rcx, rdi, 0, 0)
