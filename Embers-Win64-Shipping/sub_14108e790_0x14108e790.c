// 函数: sub_14108e790
// 地址: 0x14108e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[2].d
int32_t r8 = rbp

if (rbp == rbp s/ 0x46 * 0x46)
    void* rax_2 = j_sub_140a82f30(0x3f70)
    void* const r14_1
    
    if (rax_2 == 0)
        r14_1 = nullptr
    else
        r14_1 = sub_14108b640(rax_2)
    
    int64_t rbx_1 = sx.q(arg1[1].d)
    int32_t rax_4 = (rbx_1 + 1).d
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140638870(arg1)
    
    *(*arg1 + (rbx_1 << 3)) = r14_1
    r8 = arg1[2].d

arg1[2].d = r8 + 1
int64_t rcx_4 = sx.q(rbp s/ 0x46)
int64_t rbx_2 = zx.q(rbp s% 0x46) * 0xe8
int64_t rax_9 = *arg1
void* rbx_3 = rbx_2 + *(rax_9 + (rcx_4 << 3))

if (rbx_2 == neg.q(*(rax_9 + (rcx_4 << 3))))
    return zx.q(r8)

*(rbx_3 + 0x10) = 0
*(rbx_3 + 0x18) = 0
*(rbx_3 + 0x1c) = 2
memset(rbx_3 + 0x20, 0, 0x50)
*(rbx_3 + 0x70) = 0
sub_141264230(rbx_3, arg2)
void* rbp_2 = rbx_3 + 0x78
*(rbp_2 + 0x30) = 0
void* r14_2 = arg2 + 0x78
int64_t r15_1 = sx.q(*(r14_2 + 0x38))
void* r12_1 = *(r14_2 + 0x30)
*(rbp_2 + 0x38) = r15_1.d

if (r15_1.d != 0)
    sub_1410b37d0(rbp_2, r15_1.d, 0)
    void* r9_1 = *(rbp_2 + 0x30)
    
    if (r12_1 != 0)
        r14_2 = r12_1
    
    if (r9_1 != 0)
        rbp_2 = r9_1
    
    memcpy(rbp_2, r14_2, (r15_1 * 0xc).d)
else
    *(rbp_2 + 0x3c) = 4

*(rbx_3 + 0xb8) = *(arg2 + 0xb8)
*(rbx_3 + 0xc0) = *(arg2 + 0xc0)
*(rbx_3 + 0xc4) = *(arg2 + 0xc4)
*(rbx_3 + 0xc8) = *(arg2 + 0xc8)
*(rbx_3 + 0xcc) = *(arg2 + 0xcc)
*(rbx_3 + 0xd0) = *(arg2 + 0xd0)
*(rbx_3 + 0xd0) = *(arg2 + 0xd0)
*(rbx_3 + 0xe0) = *(arg2 + 0xe0)
*(rbx_3 + 0xe1) = *(arg2 + 0xe1)
return zx.q(arg1[2].d - 1)
