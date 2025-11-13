// 函数: sub_142147fa0
// 地址: 0x142147fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t rax = arg4
void* rbp = arg3
int64_t* r15 = arg2
int32_t i_1 = 0

if (arg2[1].d s> 0)
    int32_t r12_1 = 1
    int64_t* r14_1 = nullptr
    int64_t* var_48_1 = nullptr
    int32_t var_54_1 = 1
    
    do
        if ((rax & r12_1) != 0)
            void* rdi_1 = *(r14_1 + *r15)
            
            if (sub_1422a6980(rbp) != 0 && ((*(rbp + 0x2c) u>> 0xb).b & 1) != 0)
                uint8_t rdx = *(arg1 + 0x36)
                
                if ((rdx & 4) == 0)
                label_142148062:
                    rdx u>>= 4
                else
                    int64_t* r10_1 = *(arg1 + 0x70)
                    int64_t* rax_5 = r10_1
                    void* r8 = &r10_1[sx.q(*(arg1 + 0x78))]
                    
                    if (r10_1 == r8)
                    label_142148062_1:
                        rdx u>>= 4
                    else
                        while (*rax_5 != *(rdi_1 + 0x240))
                            rax_5 = &rax_5[1]
                            
                            if (rax_5 == r8)
                                goto label_142148062_2
                        
                        if (((rax_5 - r10_1) s>> 3).d == 0xffffffff)
                        label_142148062_2:
                            rdx u>>= 4
                        else
                            rdx = *(arg1 + 0x37)
                
                int32_t j = 0
                
                if (*(arg1 + 0x370) s> 0)
                    int64_t r15_1 = 0
                    int64_t* r14_2 = nullptr
                    
                    do
                        void* r13_1 = *(r14_2 + *(*(arg1 + 0x360) + 0x438))
                        
                        if (*(r13_1 + 0x4c) u> 0)
                            int32_t rax_8 = sub_14081f8e0(arg5, 1)
                            int64_t* rdi_4 =
                                zx.q(rax_8 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_8 s/ 0x66) << 3))
                            int64_t* rbx_1 = rdi_4
                            int64_t* rax_10 = rdi_4[0xd]
                            
                            if (rax_10 != 0)
                                rbx_1 = rax_10
                            
                            rbx_1[2] = *(r13_1 + 0x40)
                            rdi_4[0xf] = arg1 + 0x150
                            int64_t* rcx_8 = *(*(arg1 + 0x368) + r15_1 + 0x30)
                            rdi_4[0x10] = (*(*rcx_8 + 0x280))(rcx_8)
                            rdi_4[0x11] = sx.q(j) * 0x70 + *(arg1 + 0x368)
                            rbx_1[8].d = *(r13_1 + 0x48)
                            *(rbx_1 + 0x44) = *(r13_1 + 0x4c)
                            rbx_1[0xa].d = *(r13_1 + 0x50)
                            *(rbx_1 + 0x54) = *(r13_1 + 0x54)
                            rbx_1[5] = *(*(arg1 + 0x368) + r15_1 + 0x38)
                            i = i_1
                            int32_t rcx_16 =
                                ((zx.d(rdx) & 7) | 8) << 0xd | (*(rdi_4 + 0x9c) & 0xfffd007f)
                            *(rdi_4 + 0x9a) = 0
                            *(rdi_4 + 0x9c) = rcx_16
                            sub_1422dd2a0(arg5, i, rdi_4)
                        
                        j += 1
                        r14_2 = &r14_2[1]
                        r15_1 += 0x70
                    while (j s< *(arg1 + 0x370))
                    
                    r12_1 = var_54_1
                    r14_1 = var_48_1
                    r15 = arg2
                
                rbp = arg3
            
            rax = arg4
        
        i += 1
        r12_1 = rol.d(r12_1, 1)
        r14_1 = &r14_1[1]
        i_1 = i
        var_54_1 = r12_1
        var_48_1 = r14_1
    while (i s< r15[1].d)

return sub_1422ace90(arg1, 0, 0) __tailcall
