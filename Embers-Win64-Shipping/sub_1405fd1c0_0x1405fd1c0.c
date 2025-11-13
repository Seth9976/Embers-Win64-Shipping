// 函数: sub_1405fd1c0
// 地址: 0x1405fd1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2

if (arg2 == 0)
    return 0x80004003

CRITICAL_SECTION* arg_20 = &arg1[2]
EnterCriticalSection(&arg1[2])
int32_t rbp_1

if (arg1[7] == 0)
    rbp_1 = -0x3ff2c17b
else if (arg1[8] != 0)
    int64_t arg_18 = 0
    int32_t rax_3 = (*(*arg2 + 0x118))(arg2, &arg_18)
    rbp_1 = rax_3
    
    if (rax_3 s>= 0)
        int32_t var_40_1 = 0
        int64_t var_38_1 = 0
        int64_t* var_30_1 = arg2
        (*(*arg2 + 8))(arg2)
        int64_t rbp_2 = sx.q(arg1[0x16].d)
        int32_t rax_5 = (rbp_2 + 1).d
        arg1[0x16].d = rax_5
        
        if (rax_5 s> *(arg1 + 0xb4))
            sub_1405a4df0(&arg1[0x15])
        
        int64_t rdx_2 = arg1[0x15]
        int64_t rcx_5 = rbp_2 * 3
        *(rdx_2 + (rcx_5 << 3)) = 0
        *(rdx_2 + (rcx_5 << 3) + 8) = 0
        *(rdx_2 + (rcx_5 << 3) + 0x10) = arg2
        int64_t* arg_10
        
        if (arg1[0xa].b == 0)
            arg_10 = nullptr
            
            if ((zx.o(0)).d f!= arg1[0xf].d)
                char rax_18
                int64_t zmm1_3
                rax_18, zmm1_3 = sub_1405f8240(&arg1[-2], &arg_10)
                int64_t* rbx_3 = arg_10
                
                if (rax_18 == 0)
                    (*(*arg1 + 0x30))(arg1, 0x131, &data_1434cb1d0, 0, 0)
                else
                    sub_1405fea10(&arg1[-2], rbx_3, arg3, arg4, zmm1_3)
                
                rbp_1 = 0
                
                if (rbx_3 != 0)
                    int64_t rdx_10 = *rbx_3
                    (*(rdx_10 + 0x10))(rbx_3, rdx_10)
            else
                char rax_14
                int64_t zmm1_2
                rax_14, zmm1_2 = sub_1405f8240(&arg1[-2], &arg_10)
                int64_t* rbx_2 = arg_10
                
                if (rax_14 != 0)
                    sub_1405fea10(&arg1[-2], rbx_2, arg3, arg4, zmm1_2)
                
                rbp_1 = (*(*arg1 + 0x30))(arg1, 0x134, &data_1434cb1d0, 0, 0)
                
                if (rbx_2 != 0)
                    (*(*rbx_2 + 0x10))(rbx_2)
        else
            int64_t* rcx_6 = arg1[0x13]
            
            if ((*(*rcx_6 + 8))(rcx_6) s< 3)
                arg_10 = nullptr
                char rax_10
                int64_t zmm1_1
                rax_10, zmm1_1 = sub_1405f8240(&arg1[-2], &arg_10)
                int64_t* rbx_1 = arg_10
                int64_t rdx_5
                
                if (rax_10 == 0)
                    arg1[0xa].b = 0
                    rdx_5 = 0x133
                else
                    sub_1405f35d0(&arg1[-2], rbx_1, arg3, arg4, zmm1_1)
                    rdx_5 = 0x131
                
                rbp_1 = (*(*arg1 + 0x30))(arg1, rdx_5, &data_1434cb1d0, 0, 0)
                
                if (rbx_1 != 0)
                    (*(*rbx_1 + 0x10))(rbx_1)
            else
                arg1[0xa].b = 0
                rbp_1 = (*(*arg1 + 0x30))(arg1, 0x133, &data_1434cb1d0, 0, 0)
else
    rbp_1 = -0x3ff2c94c

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return zx.q(rbp_1)
