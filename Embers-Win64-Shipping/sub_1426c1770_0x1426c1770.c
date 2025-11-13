// 函数: sub_1426c1770
// 地址: 0x1426c1770
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
            int16_t rcx = *(rdx + 0x50)
            bool c_1 = rax.w u< i.w
            
            if (rax.w == i.w)
                c_1 = arg2[1] u< rcx
            
            rax.b = c_1
            
            if (rax.b != 0)
                rax = zx.q(*arg3)
                bool c_2 = i.w u< rax.w
                
                if (i.w == rax.w)
                    c_2 = rcx u< arg3[1]
                
                rax.b = c_2
                
                if (rax.b != 0)
                    char var_35 = var_35 & 0xfe
                    void* var_48 = rdx
                    int64_t var_40_1 = 0
                    int16_t var_38_1 = i.w
                    char var_36_1 = 2
                    sub_1426a96e0(arg1 + 0x140, &var_48)
            
            j += 1
            rsi_1 = &rsi_1[1]
        while (j s< *(rbp_2 + 0x18))
    
    i += 1
while (i s< *(arg1 + 0x118))
