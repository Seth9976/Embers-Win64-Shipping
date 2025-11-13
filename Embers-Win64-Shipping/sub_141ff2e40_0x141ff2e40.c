// 函数: sub_141ff2e40
// 地址: 0x141ff2e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t* rbx = arg2
int64_t* r14 = arg1

if (rsi.d == 0)
    return 0

uint64_t rdi = 0
int32_t r15 = 0
uint64_t var_58 = 0
int64_t r9 = rsi
int64_t rbp = 0
int64_t r13
r13.b = sub_141ff9960(rbx, *arg1) == 0

do
    int32_t r12_2 = r15
    int32_t arg_18 = r15
    r15 += 1
    rbp += 1
    
    if (rbp s< r9)
        int64_t rsi_2 = rbp << 4
        
        do
            int64_t* r14_1 = *arg1
            int64_t* rax_2 = *(r14_1 + rsi_2)
            
            if (rax_2 == 0)
            label_141ff2f28:
                rax_2.b = 1
            else
                int16_t r8_1 = *(rax_2 + 0x12)
                
                if (r8_1 == 0)
                label_141ff2f28_1:
                    rax_2.b = 1
                else
                    void* rcx_1 = rbx[1]
                    rax_2 = *(rcx_1 + 8)
                    void* rdx_3 = &rax_2[sx.q(*(rcx_1 + 0x10)) * 2]
                    
                    if (rax_2 == rdx_3)
                    label_141ff2f28_2:
                        rax_2.b = 1
                    else
                        while (true)
                            void* rcx_2 = *rax_2
                            
                            if (rcx_2 != 0 && r8_1 == *(rcx_2 + 0x12))
                                void* rbx_1 = *rbx
                                int64_t rdi_1 = sx.q(*(rbx_1 + 0x10))
                                int32_t rax_3 = (rdi_1 + 1).d
                                *(rbx_1 + 0x10) = rax_3
                                
                                if (rax_3 s> *(rbx_1 + 0x14))
                                    sub_1405a4f90(rbx_1 + 8)
                                    r9 = rsi
                                
                                int64_t* rcx_9 = (rdi_1 << 4) + *(rbx_1 + 8)
                                *rcx_9 = *(r14_1 + rsi_2)
                                rax_2 = *(r14_1 + rsi_2 + 8)
                                rcx_9[1] = rax_2
                                
                                if (rax_2 != 0)
                                    rax_2[1].d += 1
                                
                                rbx = arg2
                                rax_2.b = 0
                                break
                            
                            rax_2 = &rax_2[2]
                            
                            if (rax_2 == rdx_3)
                                goto label_141ff2f28_2
            
            if (r13.b != rax_2.b)
                break
            
            r15 += 1
            rbp += 1
            rsi_2 += 0x10
        while (rbp s< r9)
        
        r12_2 = arg_18
        r14 = arg1
        rdi = var_58
    
    int32_t i_1 = r15 - r12_2
    
    if (r13.b == 0)
        if (i_1 != 0)
            int64_t* rdi_5 = (sx.q(r12_2) << 4) + 8 + *r14
            int32_t i
            
            do
                int64_t* rbx_2 = *rdi_5
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_5 = &rdi_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            r9 = rsi
        
        rdi = var_58
    else
        if (rdi.d != r12_2)
            memmove((sx.q(rdi.d) << 4) + *r14, (sx.q(r12_2) << 4) + *r14, i_1 << 4)
        
        r9 = rsi
        rdi = zx.q(rdi.d + i_1)
        var_58 = rdi
    
    rbx = arg2
    r13.b ^= 1
while (rbp s< r9)

r14[1].d = rdi.d
return zx.q(rsi.d - rdi.d)
