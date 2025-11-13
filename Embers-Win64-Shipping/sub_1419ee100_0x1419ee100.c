// 函数: sub_1419ee100
// 地址: 0x1419ee100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xa0)

if (rcx != 0)
    void* rax_1 = sub_141dc9840(rcx)
    
    if (rax_1 != 0)
        void* rcx_1 = *(rax_1 + 0xb8)
        
        if (rcx_1 != 0)
            void* rax_2 = sub_1420f98f0(rcx_1)
            void* rcx_2
            
            if (rax_2 != 0)
                rcx_2 = *(rax_2 + 0x1e0)
            
            if (rax_2 != 0 && rcx_2 != 0)
            label_1419ee160:
                int128_t var_18 = *(arg1 + 0x520)
                void* result
                result.b = sub_1420fa4c0(rcx_2, &var_18) != 0
                return result
            
            rcx_2 = *(rax_1 + 0x1e0)
            
            if (rcx_2 != 0)
                goto label_1419ee160

int64_t rax_3
rax_3.b = false
return 0
