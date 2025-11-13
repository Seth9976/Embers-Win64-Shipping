// 函数: sub_1410c2080
// 地址: 0x1410c2080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
uint64_t rsi
rsi.b = 0
void* rbx = arg1
int32_t i = 0
void* const* result

if (*(arg1 + 0xa8) s> 0)
    int64_t r13_1 = 0
    
    do
        int32_t j = 0
        void* r15_1 = *(rbx + 0xa0) + r13_1
        void* arg_10 = r15_1
        
        if (*(r15_1 + 0x5170) s> 0)
            void** r14_1 = nullptr
            
            do
                void* rcx = *(r14_1 + *(r15_1 + 0x5168))
                void** var_48 = nullptr
                int32_t var_40_1 = 0
                sub_14139bda0(rcx, &var_48)
                int32_t rdx_2 = var_40_1
                int32_t rbx_1 = 0
                
                if (rdx_2 s> 0)
                    do
                        int64_t* rcx_2 = *(*(rdi + var_48) + 8)
                        
                        if ((*(rcx_2 + 0x39) & 2) != 0)
                            rdx_2 = var_40_1
                            rsi = zx.q(rsi.b)
                            
                            if ((*(*rcx_2 + 0x120))(rcx_2).b != 0)
                                rsi = 1
                        
                        rbx_1 += 1
                        rdi = &rdi[1]
                    while (rbx_1 s< rdx_2)
                    
                    r15_1 = arg_10
                    rdi = nullptr
                
                j += 1
                r14_1 = &r14_1[1]
            while (j s< *(r15_1 + 0x5170))
            
            rbx = arg1
        
        i += 1
        r13_1 += 0x5240
    while (i s< *(rbx + 0xa8))
    
    if (rsi.b != 0)
        int64_t rcx_3 = sx.q(*(rbx + 0x3b0))
        
        if (data_1439b5208 != 0 && data_1439b5200 != 0 && rcx_3.d s>= 3
                && sub_1410959f0((*1111")[rcx_3]).b != 0 && (*(rbx + 0x38) & 0x1000000) != 0)
            result.b = 1
            return result

result.b = 0
return result
