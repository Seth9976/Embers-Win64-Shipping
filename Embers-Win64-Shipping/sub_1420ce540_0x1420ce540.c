// 函数: sub_1420ce540
// 地址: 0x1420ce540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[2]
int64_t rdi = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t* rsi = *(arg1 + 0x30)
int32_t rax_4

if (rsi[1].d != *(rsi + 0x34))
    int32_t rax_2 = sub_140b5ead0(rdi.d) + rdi:4.d
    void* r8_1 = &rsi[7]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    rax_4 = *(r8_1 + (((sx.q(rsi[9].d) - 1) & sx.q(rax_2)) << 2))

if (rsi[1].d == *(rsi + 0x34) || rax_4 == 0xffffffff)
label_1420ce5c6:
    rax_4 = -1
else
    int64_t rdx_3 = *rsi
    
    while (true)
        int64_t rcx_3 = sx.q(rax_4) << 5
        
        if (*(rcx_3 + rdx_3) == rdi)
            break
        
        rax_4 = *(rcx_3 + rdx_3 + 0x18)
        
        if (rax_4 == 0xffffffff)
            goto label_1420ce5c6

rdi.b = rax_4 != 0xffffffff

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_2 = *rbx_1
        (*r8_2)(rbx_1, arg3, r8_2)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return zx.q(rdi.b)
