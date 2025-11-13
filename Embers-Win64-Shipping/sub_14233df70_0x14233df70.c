// 函数: sub_14233df70
// 地址: 0x14233df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c4)
uint64_t rdi

if (*(arg1 + 0x198) == *(arg1 + 0x1c4))
labelid_8:
    rdi.b = 0
else
    int64_t rax_2 = *arg2
    int32_t rax_4 = sub_140b5ead0(rax_2.d) + rax_2:4.d
    void* r8_1 = arg1 + 0x1c8
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x1d8)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_14233dff7:
        rdi.b = 0
    else
        int64_t r8_2 = *(arg1 + 0x190)
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_6)
            int64_t rcx_2 = rdx_3 * 5
            
            if (*(r8_2 + (rcx_2 << 3)) == *arg2)
                break
            
            rax_6 = *(r8_2 + (rcx_2 << 3) + 0x20)
            
            if (rax_6 == 0xffffffff)
                goto label_14233dff7_2
        
        if (rax_6 == 0xffffffff)
        label_14233dff7_1:
            rdi.b = 0
        else
            void* rcx_5 = r8_2 + rdx_3 * 0x28
            
            if (rcx_5 == 0)
            label_14233dff7_2:
                rdi.b = 0
            else
                rdi = zx.q(*(rcx_5 + 0x18))

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_4 = *rbx_1
        (*rdx_4)(rbx_1, rdx_4)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return zx.q(rdi.b)
