// 函数: sub_142706300
// 地址: 0x142706300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9b30(arg1, arg2)
int32_t i = 0

if (arg1[0x18].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rbx_2 = *(r14_1 + arg1[0x17])
        
        if (rbx_2 == 0)
        label_142706378:
            int32_t rdx_4 = arg1[0x18].d
            int32_t rax_6 = rdx_4 - i - 1
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                int64_t rcx_1 = arg1[0x17]
                memcpy(rcx_1 + (sx.q(i) << 3), rcx_1 + (sx.q(rdx_4 - rax_6) << 3), rax_6 << 3)
                rdx_4 = arg1[0x18].d
            
            arg1[0x18].d = rdx_4 - 1
            sub_1405c53d0(&arg1[0x17])
        else
            void* rax_1 = sub_14272a610()
            
            if (rax_1 == 0)
                goto label_142706378
            
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rbx_2 + 0x38) || *(*(rbx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                goto label_142706378
            
            i += 1
            r14_1 = &r14_1[1]
    while (i s< arg1[0x18].d)

uint64_t result = zx.q(arg1[0x16].d)

if ((result.b & 1) != 0 && (result.b & 2) == 0)
    if (arg1[0x18].d != 0)
        int64_t* rsi = arg1[0x14]
        
        if (rsi != 0)
            result = (*(*rsi + 0x150))(rsi)
            
            if (result != 0)
                result = sub_1426fbdd0(result)
                uint64_t result_2 = result
                
                if (result != 0)
                    int64_t** i_1 = arg1[0x17]
                    
                    for (void* rdi_1 = &i_1[sx.q(arg1[0x18].d)]; i_1 != rdi_1; i_1 = &i_1[1])
                        if (*i_1 != 0)
                            result = sub_14272a610()
                            
                            if (result != 0)
                                int64_t* rdx_5 = *i_1
                                int64_t r8_3 = result + 0x30
                                result = sx.q(*(result + 0x38))
                                
                                if (result.d s<= rdx_5[7].d)
                                    uint64_t result_1 = result
                                    result = rdx_5[6]
                                    
                                    if (*(result + (result_1 << 3)) == r8_3 && rdx_5 != 0)
                                        result = sub_14270a5d0(result_2, rdx_5, rsi)
                                        arg1[0x16].d |= 2
    else
        result = zx.q(result.d) | 2
        arg1[0x16].d = result.d

return result
