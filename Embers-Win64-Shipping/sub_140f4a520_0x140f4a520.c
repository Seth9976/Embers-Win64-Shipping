// 函数: sub_140f4a520
// 地址: 0x140f4a520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x30)
int32_t rax_5

if (rbx[1].d != *(rbx + 0x34))
    int64_t rax_1 = *arg2
    int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
    void* r8_1 = &rbx[7]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    rax_5 = *(r8_1 + (((sx.q(rbx[9].d) - 1) & sx.q(rax_3)) << 2))

if (rbx[1].d == *(rbx + 0x34) || rax_5 == 0xffffffff)
label_140f4a596:
    rax_5 = -1
else
    int64_t rdx_3 = *rbx
    
    while (true)
        int64_t rcx_3 = sx.q(rax_5) << 5
        
        if (*(rcx_3 + rdx_3) == *arg2)
            break
        
        rax_5 = *(rcx_3 + rdx_3 + 0x18)
        
        if (rax_5 == 0xffffffff)
            goto label_140f4a596

int64_t* rbx_1 = arg2[2]
int64_t rdi
rdi.b = rax_5 != 0xffffffff

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_4 = *rbx_1
        (*rdx_4)(rbx_1, rdx_4)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return zx.q(rdi.b)
