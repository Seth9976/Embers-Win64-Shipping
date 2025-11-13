// 函数: sub_142155a60
// 地址: 0x142155a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rax = *(arg1 + 0x30)
int64_t rdx = sx.q(*(rax + 0x50))

if (rdx.d s> 0)
    rax = *(rax + 0x48)
    int64_t rdx_1 = 0
    
    do
        if (*rax == arg2)
            int64_t* rdx_7
            
            if (*(arg1 + 0x98) == *(arg1 + 0xc4))
            label_142155b1e:
                rdx_7 = nullptr
            else
                int32_t rax_3 = sub_140b5ead0(arg2.d) + arg_10:4.d
                void* r8_1 = arg1 + 0xc8
                void* rcx_1 = *(r8_1 + 8)
                
                if (rcx_1 != 0)
                    r8_1 = rcx_1
                
                int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & sx.q(rax_3)) << 2))
                
                if (rax_5 == 0xffffffff)
                label_142155b1e_1:
                    rdx_7 = nullptr
                else
                    while (true)
                        rdx_7 = (sx.q(rax_5) << 5) + *(arg1 + 0x90)
                        
                        if (*rdx_7 == arg2)
                            break
                        
                        rax_5 = rdx_7[3].d
                        
                        if (rax_5 == 0xffffffff)
                            goto label_142155b1e_2
                    
                    if (rax_5 == 0xffffffff)
                    label_142155b1e_2:
                        rdx_7 = nullptr
            
            void* rax_6 = &rdx_7[1]
            
            if (rdx_7 == 0)
                rax_6 = nullptr
            
            if (rax_6 == 0)
                sub_140dd24f0(arg1 + 0x90, &arg_10, arg3)
                sub_142158140(arg1, 0)
            else if ((*arg3).d f!= *rax_6 || (*(arg3 + 4)).d f!= *(rax_6 + 4)
                    || (*(arg3 + 8)).d f!= *(rax_6 + 8)
                    || not((*(arg3 + 0xc)).d f== *(rax_6 + 0xc)))
                *rax_6 = *arg3
                sub_142158140(arg1, 0)
            
            rax_6.b = 1
            return rax_6
        
        rdx_1 += 1
        rax += 0x28
    while (rdx_1 s< rdx)

rax.b = 0
return rax
