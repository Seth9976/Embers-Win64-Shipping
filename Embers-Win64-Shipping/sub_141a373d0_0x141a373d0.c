// 函数: sub_141a373d0
// 地址: 0x141a373d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a29020(arg1, arg3)
int32_t r10 = arg1[0xb].d
void* const rcx_4

if (r10 == *(arg1 + 0x84))
label_141a37460:
    rcx_4 = nullptr
else
    void* r8_1 = &arg1[0x11]
    void* rdx_1 = *(r8_1 + 8)
    int64_t r9 = sx.q(*arg3)
    
    if (rdx_1 != 0)
        r8_1 = rdx_1
    
    int32_t rax_1 = *(r8_1 + (((sx.q(arg1[0x13].d) - 1) & r9) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141a37460_1:
        rcx_4 = nullptr
    else
        int64_t r8_2 = arg1[0xa]
        
        while (true)
            int64_t rdx_2 = sx.q(rax_1) * 5
            rcx_4 = r8_2 + (rdx_2 << 3)
            
            if (*(r8_2 + (rdx_2 << 3)) == r9.d)
                break
            
            rax_1 = *(rcx_4 + 0x20)
            
            if (rax_1 == 0xffffffff)
                goto label_141a37460_2
        
        if (rax_1 == 0xffffffff)
        label_141a37460_2:
            rcx_4 = nullptr

void* rdi = rcx_4 + 8

if (rcx_4 == 0)
    rdi = nullptr

int32_t result

if (rdi != 0)
    result = *arg4

if (rdi == 0 || *rdi != result)
    if (rdi != 0)
        void* const r8_5
        
        if (r10 - *(arg1 + 0x84) == 0)
        label_141a37521:
            r8_5 = nullptr
        else
            void* r8_4 = &arg1[0x11]
            void* rdx_4 = *(r8_4 + 8)
            int64_t r10_2 = sx.q(*rdi)
            
            if (rdx_4 != 0)
                r8_4 = rdx_4
            
            int32_t rax_3 = *(r8_4 + (((sx.q(arg1[0x13].d) - 1) & r10_2) << 2))
            
            if (rax_3 == 0xffffffff)
            label_141a37521_1:
                r8_5 = nullptr
            else
                int64_t r9_1 = arg1[0xa]
                
                while (true)
                    int64_t rdx_5 = sx.q(rax_3) * 5
                    r8_5 = r9_1 + (rdx_5 << 3)
                    
                    if (*(r9_1 + (rdx_5 << 3)) == r10_2.d)
                        break
                    
                    rax_3 = *(r8_5 + 0x20)
                    
                    if (rax_3 == 0xffffffff)
                        goto label_141a37521_2
                
                if (rax_3 == 0xffffffff)
                label_141a37521_2:
                    r8_5 = nullptr
        
        int64_t* rcx_11 = r8_5 + 0x10
        
        if (r8_5 == 0)
            rcx_11 = 8
        
        sub_1408cf290(rcx_11, arg3)
        *rdi = *arg4
    else
        int32_t var_38 = *arg4
        int64_t var_30_1 = 0
        int64_t var_28_1 = 0
        sub_141a28f50(&arg1[0xa], arg3, &var_38)
        
        if (var_30_1 != 0)
            sub_140a74f90(var_30_1)
    
    void* const rcx_16
    
    if (arg1[0xb].d == *(arg1 + 0x84))
    label_141a375a0:
        rcx_16 = nullptr
    else
        void* r8_6 = &arg1[0x11]
        void* rdx_7 = *(r8_6 + 8)
        int64_t r9_2 = sx.q(*arg4)
        
        if (rdx_7 != 0)
            r8_6 = rdx_7
        
        int32_t rax_6 = *(r8_6 + (((sx.q(arg1[0x13].d) - 1) & r9_2) << 2))
        
        if (rax_6 == 0xffffffff)
        label_141a375a0_1:
            rcx_16 = nullptr
        else
            int64_t r8_7 = arg1[0xa]
            
            while (true)
                int64_t rdx_8 = sx.q(rax_6) * 5
                rcx_16 = r8_7 + (rdx_8 << 3)
                
                if (*(r8_7 + (rdx_8 << 3)) == r9_2.d)
                    break
                
                rax_6 = *(rcx_16 + 0x20)
                
                if (rax_6 == 0xffffffff)
                    goto label_141a375a0_2
            
            if (rax_6 == 0xffffffff)
            label_141a375a0_2:
                rcx_16 = nullptr
    
    void* rbx_1 = rcx_16 + 0x10
    
    if (rcx_16 == 0)
        rbx_1 = 8
    
    int64_t rdi_1 = sx.q(*(rbx_1 + 8))
    int32_t rax_7 = (rdi_1 + 1).d
    *(rbx_1 + 8) = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_1405a4cf0(rbx_1)
    
    result = *arg3
    *(*rbx_1 + (rdi_1 << 2)) = result

return result
