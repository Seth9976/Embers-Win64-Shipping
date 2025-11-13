// 函数: sub_1405e7f30
// 地址: 0x1405e7f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[2])
int32_t rbp = 0

if (arg2 == 0)
    rbp = (*(*arg1 + 0xe0))(arg1)
else if (arg2 == 1)
    rbp = (*(*arg1 + 0xe8))(arg1)
else if (arg2 == 2)
    int64_t* rbx_3 = arg3
    
    if (arg3 != 0)
        (*(*arg3 + 8))(arg3)
    
    int64_t* rcx_3 = arg1[0xc]
    
    if (rcx_3 != arg3)
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        arg1[0xc] = arg3
        rbx_3 = nullptr
        rcx_3 = arg3
    
    if (rbx_3 != 0)
        (*(*rbx_3 + 0x10))(rbx_3)
        rcx_3 = arg1[0xc]
    
    if (rcx_3 != 0)
        int64_t arg_8 = 0
        
        if ((*(*rcx_3 + 0x30))(rcx_3, &arg_8) == 0)
            int64_t* rcx_5 = arg1[0xc]
            (*(*rcx_5 + 0x20))(rcx_5, arg_8, &data_142d5b558, &arg1[0xd])
            int64_t* rcx_6 = arg1[0xd]
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x140))(rcx_6, &arg1[0xe])
                
                if (arg1[0xe] != 0 && sub_1405e6f00(arg1) == 0)
                    rbp = -0x7fffbfff
else if (arg2 == 0x10000000)
    rbp = (*(*arg1 + 0xe8))(arg1)

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return zx.q(rbp)
