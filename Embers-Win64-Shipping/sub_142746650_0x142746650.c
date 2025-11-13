// 函数: sub_142746650
// 地址: 0x142746650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142319d90(arg1)
sub_14230c4b0(arg1)
int64_t* rdi = arg1[0xb]
int64_t* arg_10 = rdi
int32_t j = sub_14205e180()
int64_t result = 0
int32_t i = 0

if (arg1[0x1c].d s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t* r14_1 = *(r15_1 + *rdi)
        int16_t* rcx_2 = r14_1[0x78]
        int64_t rdx_1 = sx.q(r14_1[0x79].d)
        void* rax = &rcx_2[rdx_1]
        
        if (rcx_2 == rax)
        label_1427466e1:
            int32_t rax_1 = (rdx_1 + 1).d
            r14_1[0x79].d = rax_1
            
            if (rax_1 s> *(r14_1 + 0x3cc))
                sub_140594770(&r14_1[0x78])
            
            *(rdx_1 * 2 + r14_1[0x78]) = 0
            sub_141e366b0(r14_1[0x78], r14_1[0x79].d)
        else
            while (*rcx_2 != 0)
                rcx_2 = &rcx_2[1]
                
                if (rcx_2 == rax)
                    goto label_1427466e1
        
        int64_t rcx_5 = 0
        result = sx.q(r14_1[1].d)
        
        if (result.d s> 0)
            int64_t result_1 = result
            result = *r14_1 + 0x30
            
            while (*result s<= j)
                rcx_5 += 1
                result += 0xe8
                
                if (rcx_5 s>= result_1)
                    break
        
        rdi = arg_10
        i += 1
        r15_1 = &r15_1[1]
    while (i s< arg1[0x1c].d)

return result
