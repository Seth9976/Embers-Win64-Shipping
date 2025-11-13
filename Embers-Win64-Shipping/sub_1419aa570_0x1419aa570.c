// 函数: sub_1419aa570
// 地址: 0x1419aa570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = *(arg2 + 0x20)
int32_t rbp = 0
int64_t var_38 = result.q
result = _mm_bsrli_si128(result, 8)
void* r14 = result.q
int32_t r15 = *(r14 + 0x10)

if (r15 != 0)
    do
        void* r9_1 = *(r14 + 8)
        int64_t rdx_1 = r9_1 s>> 1
        char r8_1 = *(r14 + 8) & 1
        void* r10_2
        
        if (r8_1 == 0)
            r10_2 = r9_1
        else
            r10_2 = r14 + 8 + rdx_1
        
        int64_t rcx = sx.q(rbp) << 2
        void* rax_3 = r14 + 8 + rdx_1
        
        if (r8_1 == 0)
            rax_3 = r9_1
        
        int64_t* rbx_2 = zx.q(*(rax_3 + rcx)) + var_38
        void* rdx_2
        
        switch (zx.d(*(rcx + r10_2 + 2)) - 9)
            case 0, 3
                rdx_2 = *rbx_2
            label_1419aa693:
                
                if (rdx_2 != 0)
                    result = sub_1419aa420(arg1, rdx_2)
            case 1
                void* rdx_3 = *rbx_2
                
                if (rdx_3 != 0)
                    result = sub_1419aa420(arg1, *(rdx_3 + 0x28))
            case 2
                void* rdx_4 = *rbx_2
                
                if (rdx_4 != 0)
                    result = sub_1419aa420(arg1, *(rdx_4 + 0x18))
            case 4, 7
                void* rdx_5 = *rbx_2
                
                if (rdx_5 != 0)
                    result = sub_1419aa3a0(arg1, rdx_5)
            case 5, 6
                void* rdx_6 = *rbx_2
                
                if (rdx_6 != 0)
                    result = sub_1419aa3a0(arg1, *(rdx_6 + 0x18))
            case 0xb
                for (int32_t i = 0; i u< 8; )
                    void* rdx_8 = *rbx_2
                    
                    if (rdx_8 == 0)
                        break
                    
                    result = sub_1419aa420(arg1, rdx_8)
                    i += 1
                    rbx_2 = &rbx_2[2]
                
                rdx_2 = rbx_2[0x10]
                goto label_1419aa693
        
        rbp += 1
    while (rbp u< r15)

return result
