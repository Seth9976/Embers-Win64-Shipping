// 函数: sub_141e30ce0
// 地址: 0x141e30ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 == 0)
label_141e30d68:
    void* const rdi_3 = arg1[0xf]
    arg1[0xf] = arg2
    void* const rbx_1
    
    if (arg2 == 0)
        rbx_1 = nullptr
    else
        rax = sub_14245f6d0()
        
        if (rax == 0)
            rbx_1 = nullptr
        else
            rbx_1 = arg1[0xf]
            int64_t rdx_3 = rax + 0x30
            rax = sx.q(*(rax + 0x38))
            
            if (rax.d s> *(rbx_1 + 0x38))
                rbx_1 = nullptr
            else if (*(*(rbx_1 + 0x30) + (rax << 3)) != rdx_3)
                rbx_1 = nullptr
    
    if (rdi_3 == 0)
        rdi_3 = nullptr
    else
        rax = sub_14245f6d0()
        
        if (rax == 0)
            rdi_3 = nullptr
        else
            int64_t rdx_4 = rax + 0x30
            rax = sx.q(*(rax + 0x38))
            
            if (rax.d s> *(rdi_3 + 0x38))
                rdi_3 = nullptr
            else if (*(*(rdi_3 + 0x30) + (rax << 3)) != rdx_4)
                rdi_3 = nullptr
    
    if (rbx_1 != rdi_3)
        sub_141e2fc10(arg1, arg3, nullptr)
else
    rax = sub_14245f6d0()
    
    if (rax == 0)
        goto label_141e30d68
    
    int64_t rdx = rax + 0x30
    rax = sx.q(*(rax + 0x38))
    
    if (rax.d s> arg2[7].d)
        goto label_141e30d68
    
    if (*(arg2[6] + (rax << 3)) != rdx)
        goto label_141e30d68
    
    void* rax_1 = sub_141e01bc0(arg2)
    void* rax_2 = sub_141e01bc0(arg3[2])
    int64_t rdx_1 = *rax_1
    int64_t rax_3 = (*(rdx_1 + 0x98))(rax_1, rdx_1)
    int64_t rdx_2 = *rax_2
    
    if (rax_3 == (*(rdx_2 + 0x98))(rax_2, rdx_2))
        goto label_141e30d68
