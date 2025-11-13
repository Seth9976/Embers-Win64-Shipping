// 函数: sub_141e312c0
// 地址: 0x141e312c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t rdi = sx.q(*(arg1 + 0x1c))
int64_t rbp = sx.q(arg3)

if (rbp.d != rdi.d)
    if (rdi.d != 0xffffffff && rdi.d s< *(arg1 + 0x78))
        sub_141e1f0e0((rdi << 4) + *(arg1 + 0x70), arg1, rdi.d, rbp.d)
    
    void* rbx_1 = *(arg1 + 0x28)
    char arg_8 = 0
    
    if (rbp.d s>= 0 && rbp.d s< *(rbx_1 + 0x18))
        arg_8 = *(rbp * 0x58 + *(rbx_1 + 0x10) + 0x50)
    
    bool arg_20 = sub_141e24b90(arg1, rbp.d) > 0f
    int64_t* r12_1 = nullptr
    int32_t rax_2
    
    if (rbp.d s>= 0)
        rax_2 = *(rbx_1 + 0x18) - 1
        
        if (rbp.d s< rax_2)
            rax_2 = rbp.d
    else
        rax_2 = 0
    
    *(arg1 + 0x1c) = rax_2
    int64_t r14_1 = 0
    int64_t rcx_5 = sx.q(rax_2) * 0x58
    *(arg1 + 0x20) = 0
    int64_t rax_5 = *(rbx_1 + 0x10)
    void* r15_1 = *(rcx_5 + rax_5 + 0x30)
    int64_t r13_1 = sx.q(*(rcx_5 + rax_5 + 0x38)) << 2
    result = r15_1 + r13_1
    uint64_t r13_2 = r13_1 u>> 2
    
    if (r15_1 u> result)
        r13_2 = 0
    
    if (r13_2 != 0)
        do
            result = sub_141e03000(*arg2, *r15_1, sub_142468100())
            
            if (result != 0)
                result[3].d = 0
            
            r15_1 += 4
            r14_1 += 1
        while (r14_1 != r13_2)
        
        rbp = zx.q(arg3)
        rdi = zx.q(rdi.d)
    
    if (arg_20 == 0 || arg_8 != 0)
        void* rax_8 = *(arg1 + 0x28)
        int64_t rbx_3
        
        if (rax_8 == 0 || rbp.d s>= *(rax_8 + 0x18))
            rbx_3 = sx.q(rbp.d)
        label_141e31450:
            int32_t* rbx_5 = (rbx_3 << 4) + *(arg1 + 0x40)
            void* rax_9 = *arg2
            arg_8.q = rax_9
            int64_t* rcx_8 = *(rbx_5 + 8)
            
            if (rcx_8 != 0)
                (**rcx_8)(rcx_8, &arg_8)
            else
                if (*rbx_5 != 0xffffffff)
                    if (rax_9 != 0)
                        r12_1 = *(rax_9 + 0xa8)
                    
                    int64_t* rax_11 = (*(*r12_1 + 0x20))(r12_1)
                    int64_t rcx_10 = sx.q(*rbx_5)
                    
                    if (rcx_10.d s< 0 || rcx_10.d s>= rax_11[1].d)
                        rcx_8 = *(rbx_5 + 8)
                    else
                        rcx_8 = *(arg_8.q + 0xa0) + sx.q(*(*(*rax_11 + (rcx_10 << 3)) + 0x4c))
                        *(rbx_5 + 8) = rcx_8
                
                if (rcx_8 != 0)
                    (**rcx_8)(rcx_8, &arg_8)
            
            result = *arg2
            
            if (result[0x82].w != 0xffff && result[0x81] != -1)
                arg_20.q = result
                result = sub_141e18430(arg1, rbp.d, &arg_20)
        else
            result = *(rax_8 + 0x10)
            rbx_3 = sx.q(rbp.d)
            
            if (result[rbx_3 * 0xb + 5].b == 0)
                goto label_141e31450
    
    int64_t r9_2 = sx.q(*(arg1 + 0x1c))
    
    if (r9_2.d != 0xffffffff && r9_2.d s< *(arg1 + 0x68))
        return sub_141e1f0e0((r9_2 << 4) + *(arg1 + 0x60), arg1, rdi.d, r9_2.d)

return result
