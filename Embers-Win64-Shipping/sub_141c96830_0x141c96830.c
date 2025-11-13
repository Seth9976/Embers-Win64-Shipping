// 函数: sub_141c96830
// 地址: 0x141c96830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int64_t rbx = sx.q(arg2)

while (true)
    int64_t* r9_1 = *arg1
    uint64_t result = zx.q(r9_1[1].d)
    int32_t* rcx_3
    
    if (result.d == *(r9_1 + 0x34))
    label_141c968af:
        rcx_3 = nullptr
    else
        void* rcx = r9_1[8]
        void* r8 = &r9_1[7]
        
        if (rcx != 0)
            r8 = rcx
        
        result = zx.q(*(r8 + (((sx.q(r9_1[9].d) - 1) & rbx) << 2)))
        
        if (result.d == 0xffffffff)
        label_141c968af_1:
            rcx_3 = nullptr
        else
            while (true)
                rcx_3 = (sx.q(result.d) << 4) + *r9_1
                
                if (*rcx_3 == rbx.d)
                    break
                
                result = zx.q(rcx_3[2])
                
                if (result.d == 0xffffffff)
                    goto label_141c968af_2
            
            if (result.d == 0xffffffff)
            label_141c968af_2:
                rcx_3 = nullptr
    
    if (r15 s>= rcx_3[1])
        return result
    
    int64_t* r9_2 = arg1[1]
    int32_t arg_8 = 0
    int64_t* rcx_4 = r9_2[1]
    int32_t* rdx_4 = *rcx_4
    
    if (&rdx_4[1] u> rcx_4[1])
        int32_t* rdx_5 = &arg_8
        
        if ((*(r9_2 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_2, rdx_5, arg4)
        else
            (*(*r9_2 + 0x150))(r9_2, rdx_5, 4)
    else
        arg_8 = *rdx_4
        int64_t* rax_3 = r9_2[1]
        *rax_3 += 4
    
    int64_t rcx_6 = sx.q(arg_8)
    
    if (rcx_6.d s< 0 || rcx_6.d s>= *arg1[2])
        result = arg1[1]
        *(result + 0x29) |= 1
        return result
    
    if (arg3 != 0)
        int64_t rax_6 = arg1[4]
        
        if (rbx.d != 0)
            r9_2.b = 1
            sub_141c98300(*arg1[3], (rcx_6 << 7) + *rax_6, rbx.b, r9_2.b)
        else
            int64_t r14_3 = (rcx_6 << 7) + *rax_6
            void* rdi_1 = *arg1[3]
            int64_t rbp_1 = sx.q(*(rdi_1 + 0x78))
            int32_t rax_8 = (rbp_1 + 1).d
            *(rdi_1 + 0x78) = rax_8
            
            if (rax_8 s> *(rdi_1 + 0x7c))
                sub_1405a4d70(rdi_1 + 0x70)
            
            r15 += 1
            *(*(rdi_1 + 0x70) + (rbp_1 << 3)) = r14_3
            continue
    
    r15 += 1
