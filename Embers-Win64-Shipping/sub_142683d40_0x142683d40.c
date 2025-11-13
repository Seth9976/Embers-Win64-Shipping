// 函数: sub_142683d40
// 地址: 0x142683d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x14) & 1) == 0
void** const var_38 = &data_143459b58
int16_t var_30 = 0x101
void** const var_28 = &data_14307fb00

if (not(cond:0))
    sub_1426929c0(&arg1[0x58], 0)
    char result = (*(*arg1 + 0x28))(arg1, &var_38)
    
    if (result == 0)
        return result
    
    int32_t rax_2 = arg1[0x59].d
    void* rbx_1 = &arg1[0x15]
    void* r12_1 = rbx_1 + 0x18
    uint64_t rsi_2 = zx.q((rax_2 + 0x1f) u>> 5)
    uint32_t rbp_3 = (*(rbx_1 + 0x1c) + 0x1f) u>> 5
    *r12_1 = rax_2
    
    if (rsi_2.d u<= rbp_3)
        void* rax_7 = *(rbx_1 + 0x10)
        
        if (rsi_2.d == 0)
            if (rax_7 != 0)
                rbx_1 = rax_7
            
            if (rbp_3 u> 8)
                memset(rbx_1, 0, zx.q(rbp_3) << 2)
            else if (rbp_3 != 0)
                __builtin_memset(rbx_1, 0, zx.q(rbp_3) << 2)
        else
            if (rax_7 != 0)
                rbx_1 = rax_7
            
            int32_t rax_8 = (rsi_2 - 1).d
            
            if (rax_8 s> 8)
                memset(rbx_1, 0xff, (rsi_2 << 2) + -fffffffffffffffc)
            else if (rax_8 s> 0)
                __builtin_memset(rbx_1, 0xffffffff, ((rsi_2 << 2) + -fffffffffffffffc) u>> 2 << 2)
            
            void* rdi_3 = rbx_1 + (rsi_2 << 2)
            int32_t rdx_4 = rbp_3 - rsi_2.d
            *(rbx_1 + (zx.q((rsi_2 - 1).d) << 2)) = 0xffffffff u>> ((neg.d(*r12_1)).b & 0x1f)
            
            if (rdx_4 s> 8)
                memset(rdi_3, 0, (zx.q(rbp_3) - zx.q(rsi_2.d)) << 2)
            else if (rdx_4 s> 0)
                __builtin_memset(rdi_3, 0, (zx.q(rbp_3) - zx.q(rsi_2.d)) << 2)
    else
        sub_1405a4a00(rbx_1, 0, rsi_2.d, 4)
        *(rbx_1 + 0x1c) = rsi_2.d << 5
        void* rax_5 = *(rbx_1 + 0x10)
        
        if (rax_5 != 0)
            rbx_1 = rax_5
        
        if (rsi_2.d u> 8)
            memset(rbx_1, 0xff, zx.q(rsi_2.d) << 2)
        else if (rsi_2.d != 0)
            __builtin_memset(rbx_1, 0xffffffff, zx.q(rsi_2.d) << 2)
        
        void* rdx_2 = rbx_1 + (zx.q((rsi_2 - 1).d) << 2)
        *rdx_2 &= 0xffffffff u>> ((neg.d(*r12_1)).b & 0x1f)

return sub_1426831a0(arg1, &var_38)
