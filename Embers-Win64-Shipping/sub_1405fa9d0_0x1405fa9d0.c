// 函数: sub_1405fa9d0
// 地址: 0x1405fa9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
sub_1405ffd50(arg1)
CRITICAL_SECTION* var_50 = &arg1[0x14]
int32_t result = EnterCriticalSection(&arg1[0x14])
arg1[0x1e].b = 1
arg1[0x2b].b = 1

if (arg2 != 0)
    int32_t r14_1 = 0
    int64_t* arg_10 = nullptr
    result = (*(*arg2 + 0x40))(arg2, &arg_10)
    
    if (result s>= 0)
        int32_t arg_8 = 0
        int64_t* rcx_2 = arg_10
        result = (*(*rcx_2 + 0x108))(rcx_2, &arg_8)
        
        if (result s>= 0)
            if (arg1[0x1d] != arg2)
                (*(*arg2 + 8))(arg2)
                int64_t* rcx_4 = arg1[0x1d]
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x10))(rcx_4)
                
                arg1[0x1d] = arg2
            
            sub_140597df0(&arg1[0x1b], arg3)
            int64_t* rcx_6 = arg1[0x28]
            int64_t* rax_4 = arg_10
            
            if (rcx_6 != rax_4)
                if (rax_4 != 0)
                    int64_t rdx_3 = *rax_4
                    (*(rdx_3 + 8))(rax_4, rdx_3)
                    rcx_6 = arg1[0x28]
                    rax_4 = arg_10
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x10))(rcx_6)
                    rax_4 = arg_10
                
                arg1[0x28] = rax_4
            
            char rax_6 = sub_140a32ae0(arg3, u"vidcap://", 1)
            int32_t rsi_1 = arg_8
            int32_t rsi_2 = rsi_1 - 1
            
            if (rsi_1 - 1 s>= 0)
                int32_t temp1_1
                
                do
                    sub_1405eef80(arg1, rsi_2, rax_6, &arg1[0x19])
                    sub_140a20ba0(&arg1[0x19], &data_142d576a0, 1)
                    temp1_1 = rsi_2
                    rsi_2 -= 1
                while (temp1_1 - 1 s>= 0)
            
            int32_t rsi_3 = -1
            int32_t rbp_1 = -1
            int32_t r15_2 = 0
            
            if (arg4 != 0)
                int96_t zmm0_1 = (*arg4).12
                r15_2 = *(arg4 + 0x18)
                rbp_1 = zmm0_1:8.d
                rsi_3 = zmm0_1:4.d
                r14_1 = zmm0_1.d
            
            (*(arg1[1] + 0x48))(&arg1[1], 0, zx.q(r14_1))
            (*(arg1[1] + 0x48))(&arg1[1], 1, zx.q(rsi_3))
            (*(arg1[1] + 0x48))(&arg1[1], 2, zx.q(rbp_1))
            result = (*(arg1[1] + 0x48))(&arg1[1], 6, zx.q(r15_2))
    
    int64_t* rcx_15 = arg_10
    
    if (rcx_15 != 0)
        result = (*(*rcx_15 + 0x10))(rcx_15)

if (arg1 == -0xa0)
    return result

return LeaveCriticalSection(&arg1[0x14])
