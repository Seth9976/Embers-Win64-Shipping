// 函数: sub_140e6a1e0
// 地址: 0x140e6a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x2b8)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x2c0)) * 2]; i != rdi_2; i = &i[2])
    void* rcx = *i
    
    if (rcx != 0)
        int64_t var_18 = *arg2
        void* rax_2 = arg2[1]
        void* var_10_1 = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
            rcx = *i
        
        if (sub_140e6a270(rcx, &var_18, arg3) != 0)
            return 1

return 0
