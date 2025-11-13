// 函数: sub_141fbd630
// 地址: 0x141fbd630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
int64_t rcx = *(*(r8 + 0x50) + 0x10)
int64_t rax_1 = *(r8 + 0x38)

if (*(arg1 + 0x10) != rcx)
    *(arg1 + 0x10) = rcx
    *(arg1 + 0x18) = rax_1
    *(arg1 + 0x30) = 1
    void var_18
    
    if (arg1 + 0x20 != &var_18)
        *(arg1 + 0x20) = 0
        int64_t* rbx_1 = *(arg1 + 0x28)
        
        if (rbx_1 != 0)
            *(arg1 + 0x28) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int512_t zmm1 = sub_141fce2c0(arg1)
return sub_1422c2ba0(*(arg1 + 0x20), arg2, *(arg1 + 0x38), zmm1) __tailcall
