// 函数: sub_141bf4410
// 地址: 0x141bf4410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x1e]
void* rdi = nullptr

if (rbx == 0)
    goto label_141bf4449

int32_t rax_1 = rbx[1].d
void* rbp_1

if (rax_1 == 0)
    rbx = nullptr
    rbp_1 = rdi
else
    rbx[1].d = rax_1 + 1
label_141bf4449:
    rbp_1 = nullptr
    
    if (rbx != 0)
        rdi = arg1[0x1d]
        rbp_1 = rdi

void* result = (*(*arg1 + 0x150))()

if (rbp_1 != 0 && result != 0)
    int32_t rax_9
    uint8_t rcx_4
    
    if (arg1[0x38].b == 1)
        void* rbp_2 = arg1[2]
        void* rax_4
        int64_t rax_5
        void* rdx_1
        
        if (rbp_2 != 0)
            rax_4 = sub_141c1b420()
            rdx_1 = *(rbp_2 + 0x10)
            rax_5 = sx.q(*(rax_4 + 0x38))
        
        uint8_t rax_8
        
        if (rbp_2 == 0 || rax_5.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30
                || (1 & (*(rbp_2 + 0x330) u>> 5).b) != 0)
            rax_8 = 1
        else
            rax_8 = 0
        
        uint8_t rbp_3 = (*(arg1 + 0x1b4) u>> 3 & 1) | rax_8
        int64_t arg_8
        sub_140d3a3a0(&arg_8, arg1)
        void* rcx_2 = *(result + 0x188)
        void* rcx_3
        
        if (rcx_2 == 0)
            rcx_3 = result + 0x308
        else
            rcx_3 = *(rcx_2 + 0xc8)
        
        rcx_4 = rbp_3
        
        if (sub_1420e48e0(rcx_3, arg_8) != 0)
            rcx_4 = 1
        
        rax_9.b = arg1[0x30].d s> 0
    
    if (arg1[0x38].b != 1 || (rcx_4 | rax_9.b) == 0)
        *(rdi + 0x2e) &= 0xfb
    else
        *(rdi + 0x2e) |= 4
    
    result = sub_140db3510(rdi + 0x18)
    
    if (result.b != 0)
        result = sub_140dc03a0(rdi + 0x18, *(rdi + 0x2e))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
