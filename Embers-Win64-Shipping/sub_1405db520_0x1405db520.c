// 函数: sub_1405db520
// 地址: 0x1405db520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x260))()
char rax_3

if (rax_1 != 1)
    rax_3 = (*(*arg1 + 0x260))(arg1)

if (rax_1 == 1 || rax_3 == 2)
    if (arg1[0x1f].b == 0 && *(arg1 + 0xdc) != 0)
        sub_1423c84a0(arg2, zx.q(arg1[0x17].d), zx.q(*(arg1 + 0xbc)))
    
    char var_38_1 = 1
    
    if (sub_1405dbb50(arg2, &arg1[0x1a], &arg1[0x17], arg1[0x18].d) != 0
            && (*(*arg1 + 0x290))(arg1, arg2) != 0)
        EnterCriticalSection(&arg1[0x12])
        
        while (true)
            int32_t rax_7 = 0
            
            if (0 == *(arg1 + 0xfc))
                *(arg1 + 0xfc) = 0
            else
                rax_7 = *(arg1 + 0xfc)
            
            if (rax_7 s<= 0)
                break
            
            sub_1419a21e0(0)
        
        int64_t var_28 = 0
        void* rcx_5 = arg1[0x11]
        void* var_20 = rcx_5
        
        if (rcx_5 != 0)
            int32_t rax_8 = *(rcx_5 + 8)
            
            if (rax_8 == 0)
                int64_t var_20_1 = 0
            else
                *(rcx_5 + 8) = rax_8 + 1
                
                if (rcx_5 != 0)
                    var_28 = arg1[0x10]
        
        sub_1405da950(arg1, &var_28, 1)
        arg1[0xf] = arg2
        void var_18
        
        if (&arg1[0x10] != &var_18)
            arg1[0x10] = 0
            int64_t* rcx_7 = arg1[0x11]
            arg1[0x11] = 0
            
            if (rcx_7 != 0)
                int32_t temp0_1 = *(rcx_7 + 0xc)
                *(rcx_7 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    (*(*rcx_7 + 8))(rcx_7, 1)
        
        if (arg1 != -0x90)
            LeaveCriticalSection(&arg1[0x12])
        
        void* rax_11
        rax_11.b = 1
        return rax_11

sub_1405db200(arg1, 0)
uint64_t rax_13
rax_13.b = 0
return rax_13
