// 函数: sub_14080f4d0
// 地址: 0x14080f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 == 0 || *(arg1 + 0x24) == 4)
    sub_1408400b0(arg1 + 0x80)
    result = sub_1408400b0(arg1 + 0x3e8)
    void* rcx_12 = *(arg1 + 0x728)
    
    if (rcx_12 != 0)
        result = sub_1408400b0(rcx_12 + 0x58)
    
    int32_t i = 0
    
    if (*(arg1 + 0x738) s> 0)
        do
            result = sub_1408400b0(sx.q(i) * 0x368 + *(arg1 + 0x730) + 0x28)
            i += 1
        while (i s< *(arg1 + 0x738))
else
    void* rax = *(arg1 + 0x58)
    int64_t rsi_1 = 0
    int64_t* rdi_1 = *(rax + 0x500)
    uint64_t r14_2 = sx.q(*(rax + 0x508)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(rax + 0x508))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rax_3 = sub_140852250(*(arg1 + 0x780), *rdi_1)
            
            if (rax_3 != 0)
                sub_14083ffd0(rax_3 + 0x40, arg1 + 0x80)
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r14_2)
    
    void* rax_4 = *(arg1 + 0x3c0)
    int64_t rsi_2 = 0
    int64_t* rdi_2 = *(rax_4 + 0x500)
    result = &rdi_2[sx.q(*(rax_4 + 0x508))]
    uint64_t r14_4 = sx.q(*(rax_4 + 0x508)) << 3 u>> 3
    
    if (rdi_2 u> result)
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            result = sub_140852250(*(arg1 + 0x780), *rdi_2)
            
            if (result != 0)
                result = sub_14083ffd0(result + 0x40, arg1 + 0x3e8)
            
            rdi_2 = &rdi_2[1]
            rsi_2 += 1
        while (rsi_2 != r14_4)
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x738) s> 0)
        int64_t r12_1 = 0
        
        do
            int64_t rdi_3 = 0
            void* rcx_4 = *(*(arg1 + 0x730) + r12_1)
            void** rsi_3 = *(rcx_4 + 0x500)
            result = &rsi_3[sx.q(*(rcx_4 + 0x508))]
            uint64_t r15_2 = sx.q(*(rcx_4 + 0x508)) << 3 u>> 3
            
            if (rsi_3 u> result)
                r15_2 = 0
            
            if (r15_2 != 0)
                do
                    result = sub_140852250(*(arg1 + 0x780), *rsi_3)
                    
                    if (result != 0)
                        result =
                            sub_14083ffd0(result + 0x40, sx.q(i_1) * 0x368 + *(arg1 + 0x730) + 0x28)
                    
                    rsi_3 = &rsi_3[1]
                    rdi_3 += 1
                while (rdi_3 != r15_2)
            
            i_1 += 1
            r12_1 += 0x368
        while (i_1 s< *(arg1 + 0x738))

return result
