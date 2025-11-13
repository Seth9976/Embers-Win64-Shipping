// 函数: sub_141d4b670
// 地址: 0x141d4b670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 0x48
void* rdi = arg1
EnterCriticalSection(lpCriticalSection)
int64_t* rsi = *(rdi + 0x28)
void* rax = rdi + 0x28
void* r12_2 = &rsi[sx.q(*(rax + 8)) * 2]

if (rsi != r12_2)
    do
        int64_t* rbp_1 = rsi[1]
        int64_t r15_1 = *rsi
        int64_t* rdi_1 = rbp_1
        int64_t var_60 = r15_1
        
        if (rbp_1 != 0)
            *(rbp_1 + 0xc) += 1
            rdi_1 = rbp_1
            r15_1 = var_60
        
        if (sub_140901d20(rdi + 0x18, &var_60) != 0xffffffff)
            goto label_141d4b755
        
        int64_t r13_1 = sx.q(*(rdi + 0x20))
        int32_t rax_2 = (r13_1 + 1).d
        *(rdi + 0x20) = rax_2
        
        if (rax_2 s> *(rdi + 0x24))
            sub_1405a4f90(rdi + 0x18)
        
        int64_t* rax_5 = (r13_1 << 4) + *(rdi + 0x18)
        *rax_5 = r15_1
        rax_5[1] = rdi_1
        
        if (rbp_1 != 0)
            *(rdi_1 + 0xc) += 1
            rdi_1 = rbp_1
        label_141d4b755:
            
            if (rdi_1 != 0)
                int32_t rax_6 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*rbp_1 + 8))(rbp_1, 1)
        
        rsi = &rsi[2]
    while (rsi != r12_2)
    
    rdi = arg1

sub_141d4af30(rax, 0)
void* r14_2 = *(rdi + 0x38)
void* rax_8 = rdi + 0x38
void* r15_4 = (sx.q(*(rax_8 + 8)) << 4) + r14_2
void* arg_10 = r14_2
void* arg_18 = r15_4

while (r14_2 != r15_4)
    int64_t* rsi_1 = *(r14_2 + 8)
    int64_t rbx = *r14_2
    
    if (rsi_1 != 0)
        *(rsi_1 + 0xc) += 1
    
    int32_t i = 0
    
    if (*(rdi + 0x20) s> 0)
        int64_t r15_5 = 0
        
        do
            int64_t* rdx_3 = *(rdi + 0x18)
            int64_t r12_3 = 0
            int64_t* rdi_2 = *(rdx_3 + r15_5 + 8)
            
            if (rdi_2 != 0)
                int32_t rax_9 = 0
                bool z_1
                
                if (0 == rdi_2[1].d)
                    rdi_2[1].d = 0
                    z_1 = true
                else
                    rax_9 = rdi_2[1].d
                    z_1 = false
                
                if (z_1)
                label_141d4b834:
                    rdi_2 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_9 == rdi_2[1].d)
                            rdi_2[1].d = rax_9 + 1
                            z_2 = true
                        else
                            rdi_2[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rdi_2 != 0)
                                r12_3 = *(rdx_3 + r15_5)
                            
                            break
                        
                        rax_9 = 0
                        bool z_3
                        
                        if (0 == rdi_2[1].d)
                            rdi_2[1].d = 0
                            z_3 = true
                        else
                            rax_9 = rdi_2[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_141d4b834
            
            int64_t r14_3 = 0
            
            if (rsi_1 != 0)
                int32_t rax_11 = 0
                bool z_4
                
                if (0 == rsi_1[1].d)
                    rsi_1[1].d = 0
                    z_4 = true
                else
                    rax_11 = rsi_1[1].d
                    z_4 = false
                
                if (not(z_4))
                    bool z_6
                    
                    do
                        bool z_5
                        
                        if (rax_11 == rsi_1[1].d)
                            rsi_1[1].d = rax_11 + 1
                            z_5 = true
                        else
                            rsi_1[1].d
                            z_5 = false
                        
                        if (z_5)
                            r14_3 = rbx
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d == 1)
                                (**rsi_1)(rsi_1)
                                int32_t rax_15 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (rax_15 == 1)
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                            
                            break
                        
                        rax_11 = 0
                        
                        if (0 == rsi_1[1].d)
                            rsi_1[1].d = 0
                            z_6 = true
                        else
                            rax_11 = rsi_1[1].d
                            z_6 = false
                    while (not(z_6))
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_19 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (r12_3 == r14_3)
                sub_141c8bf50(rdi + 0x18, i, 1, 1)
                i -= 1
                r15_5 -= 0x10
            
            i += 1
            r15_5 += 0x10
        while (i s< *(rdi + 0x20))
        
        r14_2 = arg_10
        r15_4 = arg_18
    
    if (rsi_1 != 0)
        int32_t rax_21 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rax_21 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)
    
    r14_2 += 0x10
    arg_10 = r14_2

int64_t result = sub_141d4af30(rax_8, 0)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
