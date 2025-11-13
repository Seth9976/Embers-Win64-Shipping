// 函数: sub_141014440
// 地址: 0x141014440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int64_t result = EnterCriticalSection(r14 + 0x400)

if (*(r14 + 0x3f8) != 0 && &arg1[0x44] != r14 + 0x3a8)
    void* rbx_1 = &arg1[0x4b]
    int64_t rdi_1 = sx.q(*(r14 + 0x3f0))
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax = *(r14 + 0x3e8)
    void* rdx_1 = r14 + 0x3e0
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax != 0)
        rdx_1 = rax
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_1, (rdi_1 << 2).d)
    arg1[0x4d].d = rdi_1.d
    int32_t r12_1 = *(r14 + 0x3b0)
    arg1[0x45].d = 0
    
    if (*(arg1 + 0x22c) != r12_1)
        sub_14092fa50(&arg1[0x44], r12_1)
    
    *(arg1 + 0x254) = 0
    void* rbx_2 = &arg1[0x46]
    arg1[0x4a].d = 0xffffffff
    sub_14059a8e0(rbx_2, r12_1)
    int32_t rax_1 = arg1[0x45].d + r12_1
    arg1[0x45].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x22c))
        sub_14092f900(&arg1[0x44])
    
    void* rdi_2 = r14 + 0x3b8
    arg1[0x4a].d = *(r14 + 0x3d8)
    *(arg1 + 0x254) = *(r14 + 0x3dc)
    
    if (rbx_2 != rdi_2)
        sub_14059a8e0(rbx_2, *(rdi_2 + 0x18))
        int32_t rax_4 = *(rdi_2 + 0x18)
        *(rbx_2 + 0x18) = rax_4
        
        if (rax_4 != 0)
            void* r9_2 = *(rdi_2 + 0x10)
            void* r10_1 = *(rbx_2 + 0x10)
            
            if (r9_2 != 0)
                rdi_2 = r9_2
            
            if (r10_1 != 0)
                rbx_2 = r10_1
            
            memcpy(rbx_2, rdi_2, (zx.q(rax_4 + 0x1f) u>> 5 << 2).d)
    
    result = memcpy(arg1[0x44], *(r14 + 0x3a8), r12_1 * 0xb8)

if (r14 != -0x400)
    result = LeaveCriticalSection(r14 + 0x400)

if (arg1[0x4e].b != 0)
    return result

arg1[0x4e].b = 1
arg1[0xb] = *arg1 + 0x330
return sub_141035290(arg1) __tailcall
