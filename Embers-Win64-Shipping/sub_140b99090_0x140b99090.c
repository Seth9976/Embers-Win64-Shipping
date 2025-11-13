// 函数: sub_140b99090
// 地址: 0x140b99090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
void* rbx = arg1[2]
int64_t var_48 = *arg1
int32_t rbp = var_48.d
int64_t result = sub_140b5b8a0(rbp, 0)
int32_t r14 = var_48:4.d
bool rdx = result.b == 0
result.b = r14 != 0

if ((rdx | result.b) != 0 && rdi != 0)
    result = zx.q(*(rbx + 0x1c0))
    
    if (result.d != *(rbx + 0x1ec))
        int32_t rax = sub_140b5ead0(rbp)
        void* r8_1 = rbx + 0x1f0
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(rbx + 0x200)) - 1) & sx.q(rax + r14)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r9_1 = *(rbx + 0x1b8)
            int64_t rdx_4
            
            while (true)
                rdx_4 = sx.q(result.d)
                int64_t r8_2 = rdx_4 * 3
                
                if (*(r9_1 + (r8_2 << 3)) == var_48)
                    break
                
                result = zx.q(*(r9_1 + (r8_2 << 3) + 0x10))
                
                if (result.d == 0xffffffff)
                    return result
            
            if (result.d != 0xffffffff)
                result = rdx_4 * 3
                void* rbx_1 = r9_1 + (result << 3)
                
                if (rbx_1 != 0)
                    int64_t rbx_2 = *(rbx_1 + 8)
                    
                    if (rbx_2 != 0 && *(rbx_2 + 0x23c) == rdi)
                        arg2[1] = u"Create Linker"
                        arg2[2] = *(rbx_2 + 0x58)
                        *(rbx_2 + 0xd0) = *arg2
                        *(rbx_2 + 0xd8) = *(rbx_2 + 0x58)
                        *(rbx_2 + 0xe0) = u"Create Linker"
                        *(rbx_2 + 0xc4) = arg2[3].d
                        bool cond:0_1 = 0.0 f!= *(rbx_2 + 0xe8)
                        *(rbx_2 + 0xc8) = *(arg2 + 0x1c)
                        *(rbx_2 + 0xc9) = *(arg2 + 0x1d)
                        int64_t performanceCount
                        
                        if (not(cond:0_1))
                            QueryPerformanceCounter(&performanceCount)
                            void* rax_9 = *(rbx_2 + 0x90)
                            int64_t zmm0 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
                            *(rbx_2 + 0xe8) = zmm0
                            
                            if (rax_9 != 0 && not(0.0 f!= *(rax_9 + 0xe8)))
                                *(rax_9 + 0xe8) = zmm0
                        
                        performanceCount.b = 0
                        int64_t* var_40_1 = &performanceCount
                        var_48 = sub_140884c50
                        void* rax_10 = sub_140a756e0(&var_48, &data_14397f5f0)
                        int64_t r14_1 = *(rax_10 + 0x40)
                        *(rax_10 + 0x40) = rbx_2
                        sub_140b9bd30(rbx_2)
                        sub_140baf550(rbx_2, 0, 0)
                        sub_140b9fb00(rbx_2)
                        void* rax_11 = *(rbx_2 + 0x50)
                        
                        if (rax_11 == 0)
                            int64_t* rcx_10 = *(rbx_2 + 0x1d8) + 0x340
                            var_48 = rbx_2
                            int64_t var_40_2 = 0
                            sub_140bb6ac0(rcx_10, &var_48)
                            sub_140ba3580(rbx_2)
                            void* rdi_1 = *(rbx_2 + 0x1d8)
                            *(rbx_2 + 0x238) = 9
                            int64_t rbp_1 = sx.q(*(rdi_1 + 0x210))
                            int32_t rax_12 = (rbp_1 + 1).d
                            *(rdi_1 + 0x210) = rax_12
                            
                            if (rax_12 s> *(rdi_1 + 0x214))
                                sub_1405a4d70(rdi_1 + 0x208)
                            
                            *(*(rdi_1 + 0x208) + (rbp_1 << 3)) = rbx_2
                        else
                            *(rbx_2 + 0x238) = 1
                            *(rax_11 + 0x2a1) = 1
                        
                        sub_140ba2960(rbx_2)
                        *(rbx_2 + 0xd8) = 0
                        int64_t* var_40_3 = &performanceCount
                        *(rbx_2 + 0xe0) = 0
                        performanceCount.b = 0
                        var_48 = sub_140884c50
                        *(sub_140a756e0(&var_48, &data_14397f5f0) + 0x40) = r14_1
                        result = *(rbx_2 + 0x58)
                        arg2[2] = result

return result
