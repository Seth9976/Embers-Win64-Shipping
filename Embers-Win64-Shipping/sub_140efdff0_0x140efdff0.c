// 函数: sub_140efdff0
// 地址: 0x140efdff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = 0
uint64_t rsi = 0
float zmm6[0x4] = *(arg1 + 0x90)
zmm6[0] = zmm6[0] - (*(arg1 + 0xa0) f+ *(arg1 + 0x98))
uint64_t var_28 = 0
int32_t var_20 = 0
zmm6[0] = zmm6[0] f* *(arg1 + 0x8c)
__maxss_xmmss_memss(zmm6[0], 0x3c23d70a)

if (*(arg1 + 0x20) s> 0)
    do
        int64_t* rbx_2 = *(arg1 + 0x18) + rsi
        char rcx = rbx_2[0xd].b
        
        if ((rcx & 2) != 0)
            uint32_t rdx_1 = zx.d(*(arg1 + 0x8a))
            
            if (rdx_1 == 0)
                char rax_1
                
                if (*(arg1 + 0x89) != 1)
                    rax_1 = sub_140a6c7c0(*rbx_2)
                    rcx = rbx_2[0xd].b
                else
                    rax_1 = 0
                
                rbx_2[4].b = rax_1
            else if (rdx_1 == 1)
                rbx_2[4].b = 0
            else if (rdx_1 == 2)
                rbx_2[4].b = (rdx_1 - 1).b
            
            rcx &= 0xfd
            rbx_2[0xd].b = rcx
        
        if ((rcx & 4) != 0)
            sub_140f14f70(rbx_2[2] + 0x10)
            rbx_2[0xd].b &= 0xfb
        
        sub_140efe160(arg1, rbp.d, sub_140efab30(arg1, rbx_2), &var_28)
        rbp = zx.q(rbp.d + 1)
        rsi += 0x70
    while (rbp.d s< *(arg1 + 0x20))
    
    rsi = zx.q(var_20)
    rbp = var_28

if (rsi.d != 0)
    int64_t* rdi_1 = rbp + 8
    int32_t i
    
    do
        int64_t* rbx_3 = *rdi_1
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_1 = &rdi_1[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

if (rbp == 0)
    return 

return sub_140a74f90(rbp) __tailcall
