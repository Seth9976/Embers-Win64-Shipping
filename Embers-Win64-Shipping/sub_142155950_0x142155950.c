// 函数: sub_142155950
// 地址: 0x142155950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3.d
int64_t arg_10 = arg2
void* rax = *(arg1 + 0x30)
int64_t rdx = sx.q(*(rax + 0x40))

if (rdx.d s> 0)
    rax = *(rax + 0x38)
    int64_t rdx_1 = 0
    
    do
        if (*rax == arg2)
            void* const rcx_3
            
            if (*(arg1 + 0x48) == *(arg1 + 0x74))
            labelid_e:
                rcx_3 = nullptr
            else
                int32_t rax_3 = sub_140b5ead0(arg2.d) + arg_10:4.d
                void* r8_2 = arg1 + 0x78
                void* rcx_1 = *(r8_2 + 8)
                
                if (rcx_1 != 0)
                    r8_2 = rcx_1
                
                int32_t rax_5 = *(r8_2 + (((sx.q(*(arg1 + 0x88)) - 1) & sx.q(rax_3)) << 2))
                
                if (rax_5 == 0xffffffff)
                label_142155a10:
                    rcx_3 = nullptr
                else
                    int64_t r8_3 = *(arg1 + 0x40)
                    
                    while (true)
                        int64_t rdx_5 = sx.q(rax_5) * 5
                        rcx_3 = r8_3 + (rdx_5 << 2)
                        
                        if (*(r8_3 + (rdx_5 << 2)) == arg2)
                            break
                        
                        rax_5 = *(rcx_3 + 0xc)
                        
                        if (rax_5 == 0xffffffff)
                            goto label_142155a10_1
                    
                    if (rax_5 == 0xffffffff)
                    label_142155a10_1:
                        rcx_3 = nullptr
            
            uint64_t rax_6 = rcx_3 + 8
            
            if (rcx_3 == 0)
                rax_6 = 0
            
            if (rax_6 == 0)
                sub_140dd23d0(arg1 + 0x40, &arg_10, &arg_18)
                sub_142158140(arg1, 0)
            else if (not(arg3.d f== *rax_6))
                *rax_6 = arg3.d
                sub_142158140(arg1, 0)
            
            rax_6.b = 1
            return rax_6
        
        rdx_1 += 1
        rax += 0x1c
    while (rdx_1 s< rdx)

rax.b = 0
return rax
