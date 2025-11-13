// 函数: sub_1426afb00
// 地址: 0x1426afb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* r9 = *arg2
int32_t* rdi = arg3
int64_t* r12 = arg1

if (arg1[0xc].d == 0)
    return 0xfffffffe

int32_t r8 = sx.d(*(zx.q(*(arg1 + 0x52)) + *(zx.q(*(r9 + 0x260)) * 0x58 + *(r9 + 0x110) + 0x30)))
int32_t rbx_1
int512_t zmm0_1
int512_t zmm1_1

while (true)
    *rdi
    int32_t rax_2 = sub_1426b2870(arg1, arg2, r8)
    rbx_1 = rax_2
    
    if (rax_2 s< 0 || rax_2 s>= r12[0xc].d || (arg2[8].b & 2) != 0)
        return 0xfffffffe
    
    void* rdx_3 = *arg2
    char rax_3
    rax_3, zmm0_1, zmm1_1 = sub_1426af380(r12, rdx_3, zx.d(*(rdx_3 + 0x260)), rax_2)
    
    if (rax_3 != 0)
        break
    
    *rdi = 1
    char rax_5
    
    if ((r12[0x11].b & 0x40) != 0)
        rax_5 = (*(*r12 + 0x2e8))(r12, arg2, zx.q(rbx_1), rdi)
    
    if ((r12[0x11].b & 0x40) == 0 || rax_5 != 0)
        int32_t i = 0
        void* r13_3 = sx.q(rbx_1) * 0x30 + r12[0xb]
        int16_t rcx_2 = *(*arg2 + 0x260)
        int16_t arg_10 = rcx_2
        
        if (*(r13_3 + 0x18) s> 0)
            int64_t* r15_1 = nullptr
            
            do
                int64_t* rbx_3 = *(r15_1 + *(r13_3 + 0x10))
                
                if ((rbx_3[0xc].b & 0x20) != 0)
                    int64_t* rcx_8
                    
                    if ((*(rbx_3 + 0x55) & 4) == 0)
                        rcx_8 = rbx_3
                    label_1426afc97:
                        
                        if (rcx_8 != 0)
                            (*(*rcx_8 + 0x2d8))(rcx_8, arg2, arg3)
                    else
                        void* rsi_1 = *arg2
                        int64_t rdi_2 = zx.q(*(rbx_3 + 0x52))
                            + *(zx.q(*(rsi_1 + 0x260)) * 0x58 + *(rsi_1 + 0x110) + 0x30)
                        uint32_t rax_12 = zx.d((*(*rbx_3 + 0x298))(rbx_3))
                        
                        if (rax_12 != 0)
                            int64_t rcx_6 = zx.q(rax_12 + 3) & 0xfffffffffffffffc
                            
                            if (rdi_2 != rcx_6)
                                int64_t rax_13 = sx.q(*(rdi_2 - rcx_6))
                                
                                if (rax_13.d s>= 0 && rax_13.d s< *(rsi_1 + 0x138))
                                    rcx_8 = *(*(rsi_1 + 0x130) + (rax_13 << 3))
                                    goto label_1426afc97
                    rcx_2 = arg_10
                
                if (((*(rbx_3 + 0x64) - 1) & 0xfd) == 0)
                    char var_55 = var_55 & 0xfe
                    int16_t var_58_1 = rcx_2
                    int64_t* var_68 = rbx_3
                    int64_t var_60_1 = 0
                    char var_56_1 = 1
                    sub_1426a96e0(arg2, &var_68)
                
                rcx_2 = arg_10
                i += 1
                r15_1 = &r15_1[1]
            while (i s< *(r13_3 + 0x18))
            
            r12 = arg_8
            rbx_1 = rax_2
            rdi = arg3
    
    r8 = rbx_1
    arg1 = r12

sub_1426b7e50(r12, arg2, rbx_1, zmm0_1, zmm1_1)
return zx.q(rbx_1)
