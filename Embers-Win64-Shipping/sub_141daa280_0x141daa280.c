// 函数: sub_141daa280
// 地址: 0x141daa280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x48))(arg1, zx.q(arg4)) != 0 && arg1[0x59] == -1 && arg1[0x58].d == 0xffffffff)
    if (arg1[0x57].d == 0)
    label_141daa2f6:
        uint64_t rax_4 = zx.q(*(arg1 + 0x274))
        uint64_t rdx_1 = -1
        int64_t r8 = sx.q(arg1[0x5c].d)
        
        if (arg2 u<= rax_4.d)
            rax_4 = zx.q(arg2)
        
        arg1[0x59] = rax_4
        
        if (r8.d s> 0 && arg2 u>= *((r8 << 6) + arg1[0x5b] - 8))
            return (*(*arg1 + 0x38))(arg1, zx.q((r8 - 1).d), arg3, zx.q(arg4))
        
        int32_t rbx_1 = 0
        
        if (r8.d s> 0)
            int32_t* rax_8 = arg1[0x5b] + 0x38
            
            while (arg2 u>= *rax_8)
                rbx_1 += 1
                rax_8 = &rax_8[0x10]
                
                if (rbx_1 s>= r8.d)
                    return (*(*arg1 + 0x38))(arg1, -1, arg3, zx.q(arg4))
            
            rdx_1 = zx.q(rbx_1 - 1)
        
        return (*(*arg1 + 0x38))(arg1, rdx_1, arg3, zx.q(arg4))
    
    int64_t* rcx = arg1[0x56]
    
    if (rcx == 0)
        goto label_141daa2f6
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_141daa2f6

int64_t* rbx_2 = nullptr
int64_t var_20_1 = 6
char result = -0x78
void** const var_28 = &data_142fc8f88
int64_t var_18_1 = -1
int32_t var_10_1 = 0xfffffffe
int32_t var_c_1 = 0xfffffffe

if (arg3[1].d != 0)
    int64_t* rcx_6 = *arg3
    
    if (rcx_6 != 0)
        result = (*(*rcx_6 + 0x28))(rcx_6)
        
        if (result != 0)
            if (arg3[1].d != 0)
                rbx_2 = *arg3
            
            return (*(*rbx_2 + 0x50))(rbx_2, &var_28)

return result
