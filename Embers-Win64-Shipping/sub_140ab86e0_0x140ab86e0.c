// 函数: sub_140ab86e0
// 地址: 0x140ab86e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rsi = *(arg1 + 0x290)
bool cond:0 = rsi != 0

if (rsi != 0)
    int64_t* rdi_1 = rsi
    
    while (rdi_1[0x2a].d == 0)
        result = &rdi_1[3]
        rsi = rdi_1[1]
        int32_t var_238
        
        if (rdi_1[3].d == 1)
            *result = nullptr
            *(result + 4) = 0
            
            if (rdi_1[0x2c] != 0)
                int32_t* rax = sub_140a95370(&var_238, &rdi_1[0x29])
                void* rdx_2 = rdi_1[0x2e]
                void* rcx_1 = &rdi_1[0x30]
                
                if (rdx_2 != 0)
                    rcx_1 = rdx_2
                
                int64_t rdx_3 = *rcx_1
                rdi_1[0x2c]((*(rdx_3 + 8))(rcx_1, rdx_3), rax)
                result = sub_140a980e0(rax)
        else if (rdi_1[0x2c] != 0)
            int32_t var_128
            int32_t* rdx_5 = &var_128
            int64_t i_2 = 2
            int128_t zmm0
            int128_t zmm1
            int64_t i
            
            do
                rdx_5 = &rdx_5[0x20]
                zmm0 = *result
                zmm1 = *(result + 0x10)
                result = &result[0x10]
                *(rdx_5 - 0x80) = zmm0
                zmm0 = *(result - 0x60)
                *(rdx_5 - 0x70) = zmm1
                zmm1 = *(result - 0x50)
                *(rdx_5 - 0x60) = zmm0
                zmm0 = *(result - 0x40)
                *(rdx_5 - 0x50) = zmm1
                zmm1 = *(result - 0x30)
                *(rdx_5 - 0x40) = zmm0
                zmm0 = *(result - 0x20)
                *(rdx_5 - 0x30) = zmm1
                zmm1 = *(result - 0x10)
                *(rdx_5 - 0x20) = zmm0
                *(rdx_5 - 0x10) = zmm1
                i = i_2
                i_2 -= 1
            while (i != 1)
            *rdx_5 = *result
            void var_124
            void* rcx_5 = &var_124
            int64_t i_3 = 2
            var_238 = var_128
            void var_234
            void* rax_3 = &var_234
            int64_t i_1
            
            do
                rax_3 += 0x80
                zmm0 = *rcx_5
                zmm1 = *(rcx_5 + 0x10)
                rcx_5 += 0x80
                *(rax_3 - 0x80) = zmm0
                zmm0 = *(rcx_5 - 0x60)
                *(rax_3 - 0x70) = zmm1
                zmm1 = *(rcx_5 - 0x50)
                *(rax_3 - 0x60) = zmm0
                zmm0 = *(rcx_5 - 0x40)
                *(rax_3 - 0x50) = zmm1
                zmm1 = *(rcx_5 - 0x30)
                *(rax_3 - 0x40) = zmm0
                zmm0 = *(rcx_5 - 0x20)
                *(rax_3 - 0x30) = zmm1
                zmm1 = *(rcx_5 - 0x10)
                *(rax_3 - 0x20) = zmm0
                *(rax_3 - 0x10) = zmm1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            void* rax_4 = rdi_1[0x2e]
            void* rcx_6 = &rdi_1[0x30]
            
            if (rax_4 != 0)
                rcx_6 = rax_4
            
            rdi_1[0x2c]((*(*rcx_6 + 8))(rcx_6, i_3), &var_238)
            result = sub_140a980e0(&var_238)
        
        if (*rdi_1 == 0)
            result = sub_140aade80(arg1, rdi_1)
        
        *(arg1 + 0x290) = rsi
        rdi_1 = rsi
        
        if (rsi == 0)
            break
    
    cond:0 = rsi != 0

if (not(cond:0))
    *(arg1 + 0x298) = 0

return result
