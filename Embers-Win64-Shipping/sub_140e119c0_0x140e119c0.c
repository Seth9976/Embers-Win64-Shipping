// 函数: sub_140e119c0
// 地址: 0x140e119c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = 0
int64_t r11 = sx.q(arg3)
void* rdx_1

if (data_1439af0c8 == data_1439af0f4)
label_140e11a44:
    rdx_1 = nullptr
else
    void* rcx = data_1439af100
    void* rax_1 = &data_1439af0f8
    
    if (rcx != 0)
        rax_1 = rcx
    
    int32_t rax_2 = *(rax_1 + (((sx.q(data_1439af108) - 1) & r11) << 2))
    
    if (rax_2 == 0xffffffff)
    label_140e11a44_1:
        rdx_1 = nullptr
    else
        int64_t r8 = data_1439af0c0
        int64_t rcx_2
        
        while (true)
            rcx_2 = sx.q(rax_2) << 5
            
            if (*(rcx_2 + r8) == r11.d)
                break
            
            rax_2 = *(rcx_2 + r8 + 0x18)
            
            if (rax_2 == 0xffffffff)
                goto label_140e11a44_2
        
        rdx_1 = rcx_2 + r8
        
        if (rax_2 == 0xffffffff)
        label_140e11a44_2:
            rdx_1 = nullptr

int64_t* rax_3 = rdx_1 + 8

if (rdx_1 == 0)
    rax_3 = nullptr

int64_t* rax_4
int64_t* rbx

if (rax_3 == 0)
    rax_4 = nullptr
    rbx = nullptr
else
    r10 = *rax_3
    rax_4 = rax_3[1]
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    rbx = rax_4

*arg2 = r10
arg2[1] = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
