// 函数: sub_142610700
// 地址: 0x142610700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (arg2 != 0)
    char r15_1 = (*(rbx + 0x9c)).b
    char rbp_1 = (*(rbx + 0xa0)).b
    uint64_t r8_2 = zx.q((1 << rbp_1).d - 1) & zx.q(arg2.d)
    int32_t r10_3 = ((1 << r15_1).d - 1) & (arg2 u>> rbp_1).d
    
    if (r10_3 u< *(rbx + 0x30))
        int32_t* r10_5 = zx.q(r10_3) * 0xb0 + *(rbx + 0x90)
        
        if (*r10_5 == ((arg2 u>> (r15_1 + rbp_1)).d & ((1 << (*(rbx + 0x98)).b).d - 1)))
            void* rax_6 = *(r10_5 + 8)
            
            if (rax_6 != 0 && r8_2.d u< *(rax_6 + 0x18))
                int32_t* r8_4 = (r8_2 << 5) + *(r10_5 + 0x10)
                *arg6 = *(r8_4 + 0x1f) u>> 6
                
                if (arg3 != 0)
                    void* rbp_2 = *arg1
                    char r15_2 = (*(rbp_2 + 0xa0)).b
                    char r12_1 = (*(rbp_2 + 0x9c)).b
                    int32_t rdx_4 = (arg3 u>> r15_2).d & ((1 << r12_1).d - 1)
                    int32_t r9_2 = ((1 << r15_2).d - 1) & arg3.d
                    
                    if (rdx_4 u< *(rbp_2 + 0x30))
                        int32_t* rbx_2 = zx.q(rdx_4) * 0xb0 + *(rbp_2 + 0x90)
                        
                        if (*rbx_2 ==
                                ((arg3 u>> (r12_1 + r15_2)).d & ((1 << (*(rbp_2 + 0x98)).b).d - 1)))
                            void* rax_14 = *(rbx_2 + 8)
                            
                            if (rax_14 != 0 && r9_2 u< *(rax_14 + 0x18))
                                int32_t* rdx_7 = (zx.q(r9_2) << 5) + *(rbx_2 + 0x10)
                                *arg7 = *(rdx_7 + 0x1f) u>> 6
                                return sub_1426108d0(arg1, arg2, r8_4, r10_5, arg3, rdx_7, rbx_2, 
                                    arg4, arg5)

return 0x80000008
