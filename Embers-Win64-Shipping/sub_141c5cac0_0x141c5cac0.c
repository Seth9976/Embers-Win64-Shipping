// 函数: sub_141c5cac0
// 地址: 0x141c5cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
int64_t rbx = sx.q(arg3)
sub_141c59660(arg1, arg2, rbx.d, rdi.d)
sub_141c58f30(arg1, arg2, rbx.d, rdi.d)
int32_t r13 = data_143f34a18
sub_140b34200("SourceOutputBuffers", r13)

if (rbx s< rdi)
    void* r15_1 = rbx * 0x3f0
    int64_t r14_1 = rbx * 0x2f0
    int64_t i_1 = rdi - rbx
    int64_t i
    
    do
        void* rdi_1 = r15_1 + arg1->__offset(0xc8).q
        char rax_2 = *(rdi_1 + 0x3d0)
        
        if (rax_2 s< 0 && (rax_2 & 8) != 0)
            char rcx_1 = *(rdi_1 + 0x3d1)
            
            if ((rcx_1 & 0x10) == 0 || *(rdi_1 + 0x1c8) == 0)
                int32_t rax_3 = *(rdi_1 + 0xb8)
                
                if (arg2 == 0)
                    if (rax_3 == 0xffffffff)
                    label_141c5cb9a:
                        
                        if ((rcx_1 & 0x40) == 0)
                            int32_t* rbx_2 = arg1->__offset(0xd8).q + r14_1
                            
                            if (*(rbx_2 + 0x40) != 0)
                                bool cond:0_1 = rbx_2[0x9c].b == 0
                                *(rbx_2 + 0x10) = *(rdi_1 + 0x340)
                                *(rbx_2 + 0x20) = *(rdi_1 + 0x370)
                                
                                if (not(cond:0_1))
                                    if ((*(rdi_1 + 0x3d0) & 1) == 0 || (rbx_2[0xb9].b & 1) != 0)
                                        sub_141c58430(rbx_2, arg1->__offset(0x28).q)
                                        rbx_2[0xb9].b &= 0xfe
                                    else
                                        sub_141c586e0(rbx_2, arg1->__offset(0x28).q)
                                
                                if (rbx_2[0xa0] != rbx_2[0xab])
                                    sub_141c5b940(rbx_2, rdi_1, arg1->__offset(0x28).q)
                else if (rax_3 != 0xffffffff)
                    goto label_141c5cb9a
        
        r15_1 += 0x3f0
        r14_1 += 0x2f0
        i = i_1
        i_1 -= 1
    while (i != 1)

return sub_140b38680("SourceOutputBuffers", r13) __tailcall
