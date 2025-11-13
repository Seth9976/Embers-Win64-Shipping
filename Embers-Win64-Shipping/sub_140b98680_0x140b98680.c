// 函数: sub_140b98680
// 地址: 0x140b98680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
void* rbx = arg1[2]
void*** (* var_28)() = *arg1
int32_t rsi = var_28.d
int64_t result = sub_140b5b8a0(rsi, 0)
int32_t rbp = var_28:4.d
bool rdx = result.b == 0
result.b = rbp != 0

if ((rdx | result.b) != 0 && rdi != 0)
    result = zx.q(*(rbx + 0x1c0))
    
    if (result.d != *(rbx + 0x1ec))
        int32_t rax = sub_140b5ead0(rsi)
        void* r8_1 = rbx + 0x1f0
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(rbx + 0x200)) - 1) & sx.q(rax + rbp)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r9_1 = *(rbx + 0x1b8)
            
            do
                int64_t rdx_4 = sx.q(result.d)
                int64_t r8_2 = rdx_4 * 3
                
                if (*(r9_1 + (r8_2 << 3)) == var_28)
                    if (result.d != 0xffffffff)
                        result = rdx_4 * 3
                        void* rbx_1 = r9_1 + (result << 3)
                        
                        if (rbx_1 != 0)
                            void* rbx_2 = *(rbx_1 + 8)
                            
                            if (rbx_2 != 0 && *(rbx_2 + 0x23c) == rdi)
                                arg2[1] = u"Start Post Load"
                                arg2[2] = *(rbx_2 + 0x58)
                                *(rbx_2 + 0xd0) = *arg2
                                int64_t rax_5 = *(rbx_2 + 0x58)
                                *(rbx_2 + 0xe0) = u"Start Post Load"
                                *(rbx_2 + 0xd8) = rax_5
                                *(rbx_2 + 0xc4) = arg2[3].d
                                *(rbx_2 + 0xc8) = *(arg2 + 0x1c)
                                *(rbx_2 + 0xc9) = *(arg2 + 0x1d)
                                *(rbx_2 + 0x238) = 9
                                sub_140ba3580(rbx_2)
                                char arg_8 = 0
                                char* var_20_1 = &arg_8
                                var_28 = sub_140884c50
                                void* rax_9 = sub_140a756e0(&var_28, &data_14397f5f0)
                                void* r8_3 = *(rbx_2 + 0x50)
                                void* rbp_1 = *(rax_9 + 0x48)
                                int32_t rdx_6 = *(r8_3 + 0x20) + *(rbp_1 + 0x18)
                                
                                if (rdx_6 s> *(rbp_1 + 0x1c))
                                    sub_1405c5570(rbp_1 + 0x10, rdx_6)
                                    r8_3 = *(rbx_2 + 0x50)
                                
                                int32_t i = 0
                                
                                if (*(r8_3 + 0x20) s> 0)
                                    int64_t rsi_1 = 0
                                    void* rcx_7
                                    
                                    do
                                        rcx_7 = r8_3
                                        void* r9_2 = *(*(r8_3 + 0x18) + rsi_1 + 0x40)
                                        
                                        if (r9_2 != 0)
                                            void* const rax_17
                                            
                                            if (((*(r9_2 + 8) u>> 0xc).b & 1) == 0
                                                    && *(r8_3 + 0x295) == 0)
                                                int32_t rax_13 = *(r9_2 + 0xc)
                                                
                                                if (rax_13 s>= data_143e1d9b4)
                                                    rax_17 = nullptr
                                                else
                                                    uint32_t rdx_7 = zx.d(rax_13.w)
                                                    
                                                    if (rax_13 s< 0)
                                                        rax_13 += 0xffff
                                                        rdx_7 -= 0x10000
                                                    
                                                    rax_17 = *(data_143e1d9a0
                                                        + (sx.q(rax_13 s>> 0x10) << 3))
                                                        + sx.q(rdx_7) * 0x18
                                                
                                                rcx_7 = r8_3
                                            
                                            if (((*(r9_2 + 8) u>> 0xc).b & 1) != 0
                                                    || *(r8_3 + 0x295) != 0
                                                    || ((*(rax_17 + 8) u>> 0x1b).b & 1) != 0)
                                                sub_140d3a600(rbp_1, r9_2)
                                                rcx_7 = *(rbx_2 + 0x50)
                                        
                                        i += 1
                                        rsi_1 -= -0x80
                                        r8_3 = rcx_7
                                    while (i s< *(rcx_7 + 0x20))
                                
                                void* rdi_1 = *(rbx_2 + 0x1d8)
                                int64_t rsi_2 = sx.q(*(rdi_1 + 0x210))
                                int32_t rax_20 = (rsi_2 + 1).d
                                *(rdi_1 + 0x210) = rax_20
                                
                                if (rax_20 s> *(rdi_1 + 0x214))
                                    sub_1405a4d70(rdi_1 + 0x208)
                                
                                result = *(rdi_1 + 0x208)
                                *(result + (rsi_2 << 3)) = rbx_2
                    
                    break
                
                result = zx.q(*(r9_1 + (r8_2 << 3) + 0x10))
            while (result.d != 0xffffffff)

return result
