// 函数: sub_140971e10
// 地址: 0x140971e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg2)
int32_t arg_8

if (arg1[0x1b].b != 0)
    int64_t* rcx = arg1[0x15]
    
    if (rcx != 0 && (*(*rcx + 0x38))(rcx, &arg_8) == 1)
        int64_t rax_3 = *arg1
        arg1[0x1b].b = 0
        
        if (*(arg1 + 0xd9) == 0)
            (*(rax_3 + 0x100))(arg1)
        else
            (*(rax_3 + 0xf0))(arg1)

if ((*(*arg1 + 0xe8))(arg1, zx.q(rbp.d)) != 0 && (*(*arg1 + 0x108))(arg1) != 0)
    int32_t rax_8 = sub_1424370f0()
    arg1[0x29].d = 0
    
    if (*(arg1 + 0x14c) != rax_8)
        sub_1405c5510(&arg1[0x28], rax_8)
    
    int32_t rax_9 = sub_142437060()
    arg1[0x1d].d = 0
    
    if (*(arg1 + 0xec) != rax_9)
        sub_1405c5510(&arg1[0x1c], rax_9)
    
    int64_t* rcx_6 = arg1[0x15]
    arg_8 = 0
    
    if ((*(*rcx_6 + 0x38))(rcx_6, &arg_8) - 2 u<= 1)
        int32_t rcx_7 = arg_8
        
        if (rcx_7 == 0)
            *arg4 = 0
            return 0
        
        int32_t r14_2 = arg1[rbp * 0x11 + 4].d + rcx_7
        
        if (r14_2 u> sub_1424370f0())
            r14_2 = sub_1424370f0()
        
        int32_t rax_16 = arg1[0x29].d + r14_2
        arg1[0x29].d = rax_16
        
        if (rax_16 s> *(arg1 + 0x14c))
            sub_1405daba0(&arg1[0x28])
        
        uint64_t rax_17 = zx.q(arg1[rbp * 0x11 + 4].d)
        
        if (rax_17.d != 0)
            memcpy(arg1[0x28], arg1[rbp * 0x11 + 5], rax_17.d)
            rax_17 = zx.q(arg1[rbp * 0x11 + 4].d)
        
        int64_t* rcx_10 = arg1[0x15]
        int64_t rdx_8 = rax_17 + arg1[0x28]
        uint64_t r8_2 = zx.q(arg1[0x29].d - rax_17.d)
        int32_t var_58 = 0
        int64_t var_50 = 0
        int32_t rax_19 = (*(*rcx_10 + 0x40))(rcx_10, rdx_8, r8_2, &var_58, &var_50)
        int32_t r15_2 = var_58 + arg1[rbp * 0x11 + 4].d
        
        if (rax_19 - 2 u<= 1 && r15_2 != 0)
            if (arg5 != 0)
                *arg5 = var_50
            
            arg1[0x1a].d = sub_142437060()
            int32_t rax_24 = sub_142437060() + arg1[0x1d].d
            arg1[0x1d].d = rax_24
            
            if (rax_24 s> *(arg1 + 0xec))
                sub_1405daba0(&arg1[0x1c])
            
            int64_t* rcx_13 = arg1[0x17]
            int32_t rax_26 =
                (*(*rcx_13 + 0x10))(rcx_13, arg1[0x28], zx.q(r15_2), arg1[0x1c], &arg1[0x1a])
            arg1[rbp * 0x11 + 4].d = rax_26
            
            if (rax_26 != 0)
                if (rax_26 u> 0x1000)
                    arg1[rbp * 0x11 + 4].d = 0x1000
                
                void* r14_3 = &arg1[rbp * 0x11]
                int32_t rax_27 = arg1[rbp * 0x11 + 6].d + 0x1000
                *(r14_3 + 0x30) = rax_27
                
                if (rax_27 s> *(r14_3 + 0x34))
                    sub_1405daba0(r14_3 + 0x28)
                
                uint32_t count = arg1[rbp * 0x11 + 4].d
                memcpy(*(r14_3 + 0x28), zx.q(r15_2 - count) + arg1[0x28], count)
            
            int64_t performanceCount[0x2]
            QueryPerformanceCounter(&performanceCount)
            uint32_t count_1 = arg1[0x1a].d
            data_143ced3a8 = float.d(performanceCount[0]) f* data_143d796f8 f+ 16777216.0
            
            if (count_1 != 0)
                if (*arg4 s<= count_1)
                    count_1 = *arg4
                
                *arg4 = count_1
                memcpy(arg3, arg1[0x1c], count_1)
                return 0
            
            *arg4 = 0
            int32_t rax_28 = sub_142437060()
            arg1[0x1d].d = 0
            
            if (*(arg1 + 0xec) != rax_28)
                sub_1405c5510(&arg1[0x1c], rax_28)

return 0xffffffff
