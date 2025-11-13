// 函数: sub_1426619e0
// 地址: 0x1426619e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14269bba0()
int64_t* rcx = rax[0x23]
void arg_10

if (rcx != 0)
label_142661a31:
    int32_t rax_1 = sub_14265bea0(rcx, arg4)
    
    if (rax_1 u> 0xf)
        *arg2 = *sub_141debaa0(&arg_10)
    else
        void* const rbx_1
        
        switch (rax_1)
            case 0
                rbx_1 = *(arg1 + 0x48)
            case 1
                rbx_1 = *(arg1 + 0x50)
            case 2
                rbx_1 = *(arg1 + 0x58)
            case 3
                rbx_1 = *(arg1 + 0x60)
            case 4
                rbx_1 = *(arg1 + 0x68)
            case 5
                rbx_1 = *(arg1 + 0x70)
            case 6
                rbx_1 = *(arg1 + 0x78)
            case 7
                rbx_1 = *(arg1 + 0x80)
            case 8
                rbx_1 = *(arg1 + 0x88)
            case 9
                rbx_1 = *(arg1 + 0x90)
            case 0xa
                rbx_1 = *(arg1 + 0x98)
            case 0xb
                rbx_1 = *(arg1 + 0xa0)
            case 0xc
                rbx_1 = *(arg1 + 0xa8)
            case 0xd
                rbx_1 = *(arg1 + 0xb0)
            case 0xe
                rbx_1 = *(arg1 + 0xb8)
            case 0xf
                rbx_1 = *(arg1 + 0xc0)
        
        if (rbx_1 == 0)
            *arg2 = *sub_141debaa0(&arg_10)
        else
            void* rax_3 = sub_14269ce80()
            
            if (rax_3 == 0)
                *arg2 = *sub_141debaa0(&arg_10)
            else
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    *arg2 = *sub_141debaa0(&arg_10)
                else
                    void* rax_6 = sub_14269ce80()
                    int64_t rax_7
                    
                    if (rax_6 != 0)
                        rax_7 = sx.q(*(rax_6 + 0x38))
                    
                    if (rax_6 == 0 || rax_7.d s> *(rbx_1 + 0x38)
                            || *(*(rbx_1 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                        rbx_1 = nullptr
                    
                    *arg2 = rbx_1
else
    int64_t r8 = *rax
    (*(r8 + 0x390))(rax, arg5, r8)
    rcx = rax[0x23]
    
    if (rcx != 0)
        goto label_142661a31
    
    *arg2 = *sub_141debaa0(&arg_10)
return arg2
