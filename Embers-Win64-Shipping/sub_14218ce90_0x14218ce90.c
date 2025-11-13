// 函数: sub_14218ce90
// 地址: 0x14218ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xc0]
int64_t rsi = 0
uint64_t r14_1 = sx.q(arg1[0xc1].d) << 3 u>> 3

if (rdi u> &rdi[arg1[0xc1]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rdi
        
        if (rcx != 0)
            (*(*rcx + 0x200))(rcx)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

void* r12 = arg1[0x15]

if (r12 == 0)
    void* rax_3
    rax_3, arg2 = sub_141ee69e0(arg1)
    r12 = rax_3

void var_38
sub_142076cb0(&var_38, r12, 0, 0, *(arg1 + 0x431) u>> 7)

if (sub_140d23dc0(arg1, 0x30) != 1)
    if (arg1[0xca] != 0)
        arg2 = sub_1421a5650(arg1, 0, 1, arg2)
    
    if (r12 != 0)
        if ((*(arg1 + 0x8a) & 1) != 0)
            arg2 = sub_142187040(&data_143a2ed18, arg1, 0)
        
        arg1[0x86].b &= 0x6d
        rdi.b = 0
        arg1[0x86].b |= 0x12
        int32_t r15_1 = 0
        int32_t rcx_7 = arg1[0xc1].d
        
        if (rcx_7 s> 0)
            int64_t rbp_1 = 0
            
            do
                int64_t* r14_2 = *(arg1[0xc0] + (rbp_1 << 3))
                
                if (r14_2 != 0)
                    if ((r14_2[0x1c].b & 2) == 0)
                        (*(*r14_2 + 0x148))(r14_2)
                    else
                        int32_t i = 0
                        rdi = nullptr
                        
                        if (rcx_7 s> 0)
                            do
                                if (rdi != rbp_1)
                                    int64_t* rcx_8 = *(arg1[0xc0] + (rdi << 3))
                                    
                                    if (rcx_8 != 0)
                                        (*(*rcx_8 + 0x170))(rcx_8, r14_2)
                                
                                i += 1
                                rdi += 1
                            while (i s< arg1[0xc1].d)
                        
                        (**r14_2)(r14_2, 1)
                        rdi.b = 1
                        *(arg1[0xc0] + (rbp_1 << 3)) = 0
                
                rcx_7 = arg1[0xc1].d
                r15_1 += 1
                rbp_1 += 1
            while (r15_1 s< rcx_7)
            
            if (rdi.b != 0)
                if (arg1[0xca] != 0)
                    sub_1421a5650(arg1, 1, 1, arg2)
                
                int64_t rcx_12 = arg1[0x7d]
                
                if (rcx_12 != 0)
                    sub_142208350(rcx_12)
                
                arg2 = sub_141ee8490(arg1)
        
        (*(*arg1 + 0x340))(arg1, 1)
        sub_141f25960(arg1, *(r12 + 0x520), arg2)
    else
        sub_142199780(arg1, 1, arg2)
        arg1[0x86].b &= 0x6d
        arg1[0x86].b |= 0x12

return sub_142079870(&var_38)
