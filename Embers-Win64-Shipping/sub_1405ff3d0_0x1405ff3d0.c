// 函数: sub_1405ff3d0
// 地址: 0x1405ff3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* arg_8 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
int32_t rsi_1

if (*(arg1 + 0x50) != 0)
    int64_t* rcx_1 = *(arg1 + 0x48)
    int32_t rax_2
    
    if (rcx_1 != 0)
        rax_2 = (*(*rcx_1 + 0x60))(rcx_1, arg1 - 0x10)
        rsi_1 = rax_2
    
    if (rcx_1 == 0 || rax_2 s>= 0)
        int32_t rax_4
        
        if (arg2 != 0)
            rax_4 = (*(*arg2 + 0x58))(arg2, arg1 - 0x10)
            rsi_1 = rax_4
        
        if (arg2 == 0 || rax_4 s>= 0)
            int64_t* rsi_2 = *(arg1 + 0x48)
            
            if (rsi_2 != arg2)
                if (arg2 != 0)
                    (*(*arg2 + 8))(arg2)
                    rsi_2 = *(arg1 + 0x48)
                
                if (rsi_2 != 0)
                    (*(*rsi_2 + 0x10))(rsi_2)
                
                *(arg1 + 0x48) = arg2
                rsi_2 = arg2
            
            void* rbp_1 = *(arg1 + 0x50)
            void* arg_18 = rbp_1 + 0x20
            EnterCriticalSection(rbp_1 + 0x20)
            int64_t* rcx_6 = *(rbp_1 + 0x80)
            
            if (rcx_6 != rsi_2)
                if (rsi_2 != 0)
                    (*(*rsi_2 + 8))(rsi_2)
                    rcx_6 = *(rbp_1 + 0x80)
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x10))(rcx_6)
                
                *(rbp_1 + 0x80) = rsi_2
            
            if (rbp_1 != -0x20)
                LeaveCriticalSection(rbp_1 + 0x20)
            
            rsi_1 = 0
else
    rsi_1 = -0x3ff2c17b

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rsi_1)
