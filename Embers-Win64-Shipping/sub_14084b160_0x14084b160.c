// 函数: sub_14084b160
// 地址: 0x14084b160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
uint64_t var_10 = rbp
uint8_t r13_1 = (*(arg1 + 0x6b8) u>> 3).b & 1

if (*(arg1 + 0x10) == 0xffffffff)
    if (*(arg1 + 0x6e8) - 3 u> 1)
        *(arg1 + 0x6e8) = 3
    
    if (*(arg1 + 0x6e4) - 3 u> 1)
        *(arg1 + 0x6e4) = 3
else
    int64_t* r15_1 = *(arg1 + 0x20)
    
    if (r15_1 != 0)
        r15_1[1].d += 1
    
    sub_140858cf0(*(arg1 + 0x18), arg1)
    
    if (*(arg1 + 0x6e8) - 3 u> 1)
        *(arg1 + 0x6e8) = 3
    
    if (*(arg1 + 0x6e4) - 3 u> 1)
        *(arg1 + 0x6e4) = 3
    
    int64_t* i = *(arg1 + 0xa0)
    
    for (void* r12_3 = &i[sx.q(*(arg1 + 0xa8)) * 2]; i != r12_3; i = &i[2])
        int64_t* rbx_1 = i[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        sub_140801620(*i, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_6 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            (**r15_1)(r15_1)
            int32_t rbp_1 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*r15_1 + 8))(r15_1, zx.q(rbp_1))

sub_14084dbf0(arg1)
sub_140861190(arg1, 1)
int32_t result = *(arg1 + 0x6b8) & 0xfffffffb
*(arg1 + 0x6b8) = result

if (r13_1 != 0)
    *(arg1 + 0x6b8) = result & 0xfffffff7
    rbp.b = 0
    *(arg1 + 0xdc) += 1
    int32_t rax_17 = *(arg1 + 0xd0)
    int32_t rcx_8 = *(arg1 + 0xdc)
    int64_t rsi_1 = sx.q(rax_17 - 1)
    
    if (rax_17 - 1 s>= 0)
        int64_t rbx_3 = rsi_1 << 4
        int64_t temp3_1
        
        do
            int64_t rax_19 = *(arg1 + 0xc8)
            
            if (*(rbx_3 + rax_19 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_9 = *(rbx_3 + rax_19)
                
                if (rcx_9 == 0)
                    rbp.b = 1
                else if ((*(*rcx_9 + 0x50))(rcx_9, arg1) == 0)
                    rbp.b = 1
            
            rbx_3 -= 0x10
            temp3_1 = rsi_1
            rsi_1 -= 1
        while (temp3_1 - 1 s>= 0)
        rcx_8 = *(arg1 + 0xdc)
    
    result = rcx_8 - 1
    *(arg1 + 0xdc) = result
    
    if (rbp.b != 0)
        result = sub_140599630(arg1 + 0xc8, 0)
    
    int64_t* rcx_11 = *(arg1 + 0x28)
    
    if (rcx_11 != 0)
        return sub_14076e990(rcx_11)

return result
