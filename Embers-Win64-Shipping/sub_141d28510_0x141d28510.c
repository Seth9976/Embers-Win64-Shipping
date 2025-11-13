// 函数: sub_141d28510
// 地址: 0x141d28510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
int64_t* result = sub_141d27f10(arg1, arg2, arg3)

if ((arg2[5].b & 1) != 0)
    void arg_20
    result = sub_141d17b20(rdi, *sub_140b58170(&arg_20, "BoneHierarchy", 1), data_143f37078)
    int64_t* result_1 = result
    
    if (result != 0)
        int64_t rdx_1 = *result
        int32_t i = 0
        result = (*(rdx_1 + 0x48))(result, rdx_1)
        
        if (result.d s> 0)
            int64_t rdx_2 = 0
            int64_t rbp_1 = 0
            int32_t* r8_2 = nullptr
            void* arg_18 = nullptr
            int64_t arg_10 = 0
            
            do
                *(r8_2 + *(rdi + 0x100)) = *(result_1[1] + rbp_1 + 4)
                int64_t* r14_3 = result_1[1] + 8 + rbp_1
                int64_t* rbx_2 = *(rdi + 0x118) + rdx_2
                
                if (rbx_2 != r14_3)
                    int64_t rsi_1 = sx.q(r14_3[9].d)
                    void* rdi_1 = &rbx_2[7]
                    sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
                    void* rax_3 = r14_3[8]
                    void* rdx_3 = &r14_3[7]
                    void* r9_1 = *(rdi_1 + 8)
                    
                    if (rax_3 != 0)
                        rdx_3 = rax_3
                    
                    if (r9_1 != 0)
                        rdi_1 = r9_1
                    
                    memcpy(rdi_1, rdx_3, (rsi_1 << 2).d)
                    rbx_2[9].d = rsi_1.d
                    int64_t r12_1 = sx.q(r14_3[1].d)
                    rbx_2[1].d = 0
                    
                    if (*(rbx_2 + 0xc) != r12_1.d)
                        sub_140638cc0(rbx_2, r12_1.d)
                    
                    *(rbx_2 + 0x34) = 0
                    void* rdi_2 = &rbx_2[2]
                    rbx_2[6].d = 0xffffffff
                    sub_14059a8e0(rdi_2, r12_1.d)
                    int32_t rax_4 = rbx_2[1].d + r12_1.d
                    rbx_2[1].d = rax_4
                    
                    if (rax_4 s> *(rbx_2 + 0xc))
                        sub_140638a00(rbx_2)
                    
                    void* rsi_2 = &r14_3[2]
                    rbx_2[6].d = r14_3[6].d
                    *(rbx_2 + 0x34) = *(r14_3 + 0x34)
                    
                    if (rdi_2 != rsi_2)
                        sub_14059a8e0(rdi_2, *(rsi_2 + 0x18))
                        int32_t rax_7 = *(rsi_2 + 0x18)
                        *(rdi_2 + 0x18) = rax_7
                        
                        if (rax_7 != 0)
                            void* r9_2 = *(rsi_2 + 0x10)
                            void* r10_1 = *(rdi_2 + 0x10)
                            
                            if (r9_2 != 0)
                                rsi_2 = r9_2
                            
                            if (r10_1 != 0)
                                rdi_2 = r10_1
                            
                            memcpy(rdi_2, rsi_2, (zx.q(rax_7 + 0x1f) u>> 5 << 2).d)
                    
                    memcpy(*rbx_2, *r14_3, (r12_1 * 0xc).d)
                    rdx_2 = arg_10
                    r8_2 = arg_18
                    rdi = arg1
                
                arg_18 = &r8_2[1]
                arg_10 = rdx_2 + 0x50
                i += 1
                rbp_1 += 0x60
                result = (*(*result_1 + 0x48))(result_1)
                rdx_2 = arg_10
                r8_2 = arg_18
            while (i s< result.d)

return result
