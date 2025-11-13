// 函数: sub_142188fc0
// 地址: 0x142188fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (data_143de5480 == 0)
    rdi.b = 0
else
    rdi.b = GetCurrentThreadId() != data_143de5470

void* rax_2 = arg1[0x15]

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg1)

void var_18
sub_142076cb0(&var_18, rax_2, 0, (rdi * 2).b, *(arg1 + 0x431) u>> 7)
(*(*arg1 + 0x390))(arg1)
int32_t rax_4 = arg1[0xc1].d
int32_t rbp = 0
arg1[0xcc].d = 0

if (rax_4 s> 0)
    int64_t* rsi_1 = nullptr
    int32_t r14_1
    
    do
        int64_t rcx_4 = arg1[0xc0]
        r14_1 = rbp + 1
        int64_t* rdi_1 = *(rsi_1 + rcx_4)
        
        if (r14_1 s< rax_4)
            *(rsi_1 + rcx_4 + 8)
        
        if (rdi_1 != 0)
            void* rcx_5 = rdi_1[2]
            
            if (rcx_5 != 0)
                void* rax_6 = rdi_1[5]
                
                if (rax_6 != 0 && (*(rax_6 + 0x2c) & 1) != 0)
                    if (*(arg1 + 0x431) s>= 0)
                        arg1[0xcc].d += 1
                    else
                        char r8_1 = *(rcx_5 + 0x35)
                        char rdx_1 = r8_1
                        char rcx_6 = *(*(rcx_5 + 0x20) + 0xb7)
                        
                        if (rcx_6 u<= r8_1)
                            rdx_1 = rcx_6
                        
                        if (rdx_1 u< *(arg1 + 0x43e))
                            (*(*rdi_1 + 0xf8))(rdi_1, 1)
                            int32_t rcx_9 = rdi_1[0x1c].d | 0x400
                            rdi_1[0x1c].d = rcx_9
                            
                            if ((*(rdi_1[2] + 0x38) & 1) != 0)
                                rdi_1[0x1c].d = rcx_9 & 0xfffffffe
                        else
                            arg1[0xcc].d += 1
                            (*(*rdi_1 + 0xf8))(rdi_1, 0)
                            rdi_1[0x1c].d = (rdi_1[0x1c].d & 0xfffffbff) | 1
                    
                    int512_t zmm1
                    zmm1.o = arg1[0xcb].d
                    (*(*rdi_1 + 0x20))(rdi_1, zmm1, arg1[0x86].b u>> 1 & 1)
                    (*(*rdi_1 + 0x210))(rdi_1, zx.q(rbp))
                    *(arg1 + 0x65c) += rdi_1[0x23].d
        
        rax_4 = arg1[0xc1].d
        rsi_1 = &rsi_1[1]
        rbp = r14_1
    while (r14_1 s< rax_4)

if (*(arg1 + 0x434) != 0)
    *(arg1 + 0x434) = 0

return sub_142079870(&var_18)
