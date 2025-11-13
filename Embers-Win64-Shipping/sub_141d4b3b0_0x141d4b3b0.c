// 函数: sub_141d4b3b0
// 地址: 0x141d4b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x5c)
void* rdi = *(arg1 + 0x50)
void* rbp = arg1
int32_t i_3 = *(arg1 + 0x58)

if (rax s< 0)
    if (i_3 != 0)
        void* rdi_2 = rdi + 8
        int32_t i
        
        do
            int64_t* rcx_1 = *rdi_2
            
            if (rcx_1 != 0)
                int32_t rax_3 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_3 == 1 && rcx_1 != 0)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_2 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax = *(arg1 + 0x5c)
    
    *(arg1 + 0x58) = 0
    
    if (rax != 0)
        sub_1405a5410(arg1 + 0x50, 0)
else
    if (i_3 != 0)
        int64_t* rdi_1 = rdi + 8
        int32_t i_1
        
        do
            int64_t* rcx = *rdi_1
            
            if (rcx != 0)
                int32_t rax_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (rax_1 == 1 && rcx != 0)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi_1 = &rdi_1[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x58) = 0

void* lpCriticalSection = rbp + 0x10
EnterCriticalSection(lpCriticalSection)
int32_t result = *(rbp + 0x48)
int32_t r15 = result - 1

if (r15 s>= 0)
    int64_t r12_2 = sx.q(r15) << 4
    int32_t temp3_1
    
    do
        int64_t* r14_1 = *(rbp + 0x40)
        int64_t* rdi_3 = *(r14_1 + r12_2 + 8)
        
        if (rdi_3 == 0)
            sub_141c8bf50(rbp + 0x40, r15, 1, 1)
        else
            int32_t rax_5 = 0
            bool z_1
            
            if (0 == rdi_3[1].d)
                rdi_3[1].d = 0
                z_1 = true
            else
                rax_5 = rdi_3[1].d
                z_1 = false
            
            if (z_1)
            label_141d4b4d7:
                rdi_3 = nullptr
                sub_141c8bf50(rbp + 0x40, r15, 1, 1)
            else
                while (true)
                    bool z_2
                    
                    if (rax_5 == rdi_3[1].d)
                        rdi_3[1].d = rax_5 + 1
                        z_2 = true
                    else
                        rdi_3[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_5 = 0
                    bool z_3
                    
                    if (0 == rdi_3[1].d)
                        rdi_3[1].d = 0
                        z_3 = true
                    else
                        rax_5 = rdi_3[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4b4d7
                
                if (rdi_3 == 0)
                    sub_141c8bf50(rbp + 0x40, r15, 1, 1)
                else
                    int64_t r14_3 = *(r14_1 + r12_2)
                    
                    if (r14_3 == 0)
                        sub_141c8bf50(rbp + 0x40, r15, 1, 1)
                    else
                        *(rdi_3 + 0xc) += 1
                        int64_t rbp_1 = sx.q(*(arg1 + 0x58))
                        int32_t rax_12 = (rbp_1 + 1).d
                        *(arg1 + 0x58) = rax_12
                        
                        if (rax_12 s> *(arg1 + 0x5c))
                            sub_1405a4f90(arg1 + 0x50)
                        
                        int64_t* rax_15 = (rbp_1 << 4) + *(arg1 + 0x50)
                        *rax_15 = r14_3
                        rax_15[1] = rdi_3
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_9 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        r12_2 -= 0x10
        temp3_1 = r15
        r15 -= 1
    while (temp3_1 - 1 s>= 0)
    rbp = arg1
    result = *(rbp + 0x48)

if (result == 0)
    int64_t* rcx_8 = *(rbp + 0x60)
    result = (*(*rcx_8 + 0x18))(rcx_8)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

int32_t i_2 = 0

if (*(rbp + 0x58) s> 0)
    int64_t r14_2 = 0
    
    do
        int64_t* rdx_2 = *(arg1 + 0x50)
        int64_t* rbx_1 = *(rdx_2 + r14_2 + 8)
        
        if (rbx_1 != 0)
            result = 0
            bool z_4
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_4 = true
            else
                result = rbx_1[1].d
                z_4 = false
            
            if (not(z_4))
                bool z_6
                
                do
                    bool z_5
                    
                    if (result == rbx_1[1].d)
                        rbx_1[1].d = result + 1
                        z_5 = true
                    else
                        result = rbx_1[1].d
                        z_5 = false
                    
                    if (z_5)
                        if (rbx_1 != 0)
                            int64_t* rcx_12 = *(rdx_2 + r14_2)
                            
                            if (rcx_12 != 0)
                                (**rcx_12)(rcx_12)
                            
                            result = rbx_1[1].d
                            rbx_1[1].d -= 1
                            
                            if (result == 1)
                                (**rbx_1)(rbx_1)
                                result = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (result == 1)
                                    result = (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        break
                    
                    result = 0
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_6 = true
                    else
                        result = rbx_1[1].d
                        z_6 = false
                while (not(z_6))
        
        i_2 += 1
        r14_2 += 0x10
    while (i_2 s< *(rbp + 0x58))

return result
