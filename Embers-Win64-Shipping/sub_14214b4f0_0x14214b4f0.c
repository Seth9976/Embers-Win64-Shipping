// 函数: sub_14214b4f0
// 地址: 0x14214b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* rax = sub_140b5e500(&arg_8, 0x100)
void* rbx = *(arg1 + 0x58)
int32_t rcx_1 = *rax
int32_t rax_1 = *(rbx + 0x1b0)
arg_8 = rcx_1
int32_t arg_c = 0

if (rax_1 != *(rbx + 0x1dc))
    int32_t rax_2 = sub_140b5ead0(rcx_1)
    void* r8_1 = rbx + 0x1e0
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(*(rbx + 0x1f0)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_1 = *(rbx + 0x1a8)
        
        do
            int64_t* r8_2 = sx.q(i) * 0x38
            
            if (*(r8_2 + r9_1) == arg_8.q)
                if (i == 0xffffffff)
                    break
                
                int32_t* rax_5 = sub_140b5e500(&arg_8, 0x100)
                void* rbx_1 = *(arg1 + 0x58)
                int32_t arg_14 = 0
                int32_t rcx_5 = *rax_5
                int64_t* rdx_10
                
                if (*(rbx_1 + 0x1b0) == *(rbx_1 + 0x1dc))
                label_14214b62e:
                    rdx_10 = nullptr
                else
                    int32_t rax_7 = sub_140b5ead0(rcx_5)
                    void* r8_3 = rbx_1 + 0x1e0
                    void* rcx_6 = *(r8_3 + 8)
                    
                    if (rcx_6 != 0)
                        r8_3 = rcx_6
                    
                    int32_t rax_9 = *(r8_3 + (((sx.q(*(rbx_1 + 0x1f0)) - 1) & sx.q(rax_7)) << 2))
                    
                    if (rax_9 == 0xffffffff)
                    label_14214b62e_1:
                        rdx_10 = nullptr
                    else
                        while (true)
                            rdx_10 = sx.q(rax_9) * 0x38 + *(rbx_1 + 0x1a8)
                            
                            if (*rdx_10 == rcx_5.q)
                                break
                            
                            rax_9 = rdx_10[6].d
                            
                            if (rax_9 == 0xffffffff)
                                goto label_14214b62e_2
                        
                        if (rax_9 == 0xffffffff)
                        label_14214b62e_2:
                            rdx_10 = nullptr
                
                int64_t rdi = sx.q(rdx_10[4].d) << 3
                void* rax_11 = *(rdi + *(arg1 + 0x1310))
                
                if (rax_11 != 0)
                    int32_t rcx_9
                    rcx_9.b = *(rax_11 + 0x48) == 0
                    
                    if ((rcx_9.b & sub_140b5b8a0(*(rax_11 + 0x44), 0x100)) != 0)
                        void* const result = *(rdi + *(arg1 + 0x1310))
                        
                        if (result != 0)
                            void* rax_14 = sub_1425b8ab0()
                            void* rdx_11 = *(result + 0x10)
                            int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                            
                            if (rax_15.d s<= *(rdx_11 + 0x38)
                                    && *(*(rdx_11 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
                                return result
                
                return nullptr
            
            i = *(r8_2 + r9_1 + 0x30)
        while (i != 0xffffffff)

return 0
