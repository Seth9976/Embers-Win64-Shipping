// 函数: sub_141d9f650
// 地址: 0x141d9f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = arg1[0x30]
void* r11_2 = &r10[sx.q(arg1[0x31].d) * 2]

if (r10 == r11_2)
label_141d9f6a6:
    void* rax_2 = arg1[0x32]
    
    if ((rax_2 == 0 || *(rax_2 + 0x18) != 0xa) && arg1[0x2f] == -1)
        uint64_t rax_3 = zx.q(arg1[0x17].d)
        int32_t r10_1 = -1
        int64_t rdx = sx.q(arg1[0x24].d)
        
        if (arg2 u<= rax_3.d)
            rax_3 = zx.q(arg2)
        
        arg1[0x2f] = rax_3
        
        if (rdx.d s> 0 && arg2 u>= *(arg1[0x23] + rdx * 0x50 - 0x18))
            return (*(*arg1 + 0x38))(arg1, zx.q((rdx - 1).d))
        
        int32_t rbx_1 = 0
        
        if (rdx.d s> 0)
            int32_t* rax_7 = arg1[0x23] + 0x38
            
            while (arg2 u>= *rax_7)
                rbx_1 += 1
                rax_7 = &rax_7[0x14]
                
                if (rbx_1 s>= rdx.d)
                    return (*(*arg1 + 0x38))(arg1, 0xffffffff)
            
            r10_1 = rbx_1 - 1
        
        return (*(*arg1 + 0x38))(arg1, zx.q(r10_1))
else
    while (*(*r10 + 0x18) != 0xa)
        r10 = &r10[2]
        
        if (r10 == r11_2)
            goto label_141d9f6a6

int64_t* rbx_2 = nullptr
int64_t var_20_1 = 6
char result = -0x78
void** const var_28 = &data_142fc8f88
int64_t var_18_1 = -1
int32_t var_10_1 = 0xfffffffe
int32_t var_c_1 = 0xfffffffe

if (arg3[1].d != 0)
    int64_t* rcx_5 = *arg3
    
    if (rcx_5 != 0)
        result = (*(*rcx_5 + 0x28))(rcx_5)
        
        if (result != 0)
            if (arg3[1].d != 0)
                rbx_2 = *arg3
            
            return (*(*rbx_2 + 0x50))(rbx_2, &var_28)

return result
