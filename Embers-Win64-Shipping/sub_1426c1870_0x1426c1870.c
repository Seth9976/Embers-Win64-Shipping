// 函数: sub_1426c1870
// 地址: 0x1426c1870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x118) s<= 0)
    return 

do
    int32_t j = 0
    void* rbp_2 = sx.q(i) * 0x58 + *(arg1 + 0x110)
    
    if (*(rbp_2 + 0x18) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            void* rdx = *(rsi_1 + *(rbp_2 + 0x10))
            uint64_t rax = zx.q(*arg2)
            bool c_1 = rax.w u< i.w
            
            if (rax.w == i.w)
                c_1 = arg2[1] u< *(rdx + 0x50)
            
            rax.b = c_1
            
            if (rax.b != 0)
                char var_25 = var_25 & 0xfe
                void* var_38 = rdx
                int64_t var_30_1 = 0
                int16_t var_28_1 = i.w
                char var_26_1 = 2
                sub_1426a96e0(arg1 + 0x140, &var_38)
            
            j += 1
            rsi_1 = &rsi_1[1]
        while (j s< *(rbp_2 + 0x18))
    
    i += 1
while (i s< *(arg1 + 0x118))
