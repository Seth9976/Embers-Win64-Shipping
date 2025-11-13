// 函数: sub_140e278d0
// 地址: 0x140e278d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = nullptr
int32_t rbp = arg2

if (arg1[0x27] != 0)
    int64_t* rdi_1 = arg1[0x28]
    
    if (rdi_1 != 0)
        int32_t rcx = rdi_1[1].d
        
        if (rcx s> 0)
            int64_t* rax_1 = rdi_1
            
            if (rdi_1 != 0)
                if (rcx == 0)
                    rdi_1 = nullptr
                    rax_1 = nullptr
                else
                    rdi_1[1].d = rcx + 1
                    rax_1 = rdi_1
            
            int64_t r13_1 = 0
            
            if (rax_1 != 0)
                r13_1 = arg1[0x27]
            
            int64_t* rsi_1 = arg3[1]
            
            if (rsi_1 != 0)
                int32_t rax_3 = rsi_1[1].d
                
                if (rax_3 != 0)
                    rsi_1[1].d = rax_3 + 1
                    rax_3.b = 1
                
                if (rax_3.b == 0)
                    rsi_1 = nullptr
            
            int64_t rbp_1 = 0
            
            if (rsi_1 != 0)
                rbp_1 = *arg3
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp3_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (r13_1 != rbp_1)
                sub_140dbb220(&arg1[0x27])
            
            rbp = arg2

int64_t* rcx_6 = arg3[1]
int64_t var_40 = *arg3

if (rcx_6 != 0)
    *(rcx_6 + 0xc) += 1

if (&var_40 != &arg1[0x27])
    var_40.o = *(arg1 + 0x138)
    *(arg1 + 0x138) = var_40.o

if (rcx_6 != 0)
    int32_t temp0_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

char result = sub_140db3510(&arg1[3])

if (result == 0)
    return result

void* rax_10 = sub_140da9130(&arg1[3])

if (arg1[0x37].d != 0)
    int64_t* rcx_9 = arg1[0x36]
    
    if (rcx_9 != 0)
        int64_t rdx = *rcx_9
        
        if ((*(rdx + 0x28))(rcx_9, rdx) != 0)
            if (arg1[0x37].d != 0)
                r15 = arg1[0x36]
            
            char var_48
            (*(*r15 + 0x48))(r15, &var_48)
            arg1[0x35].b = var_48

*(rax_10 + 0x1a) = arg1[0x35].b
char rax_15 = arg1[5].b
*(arg1 + 0x14c) = rbp
char rax_17
char rax_19

if ((rax_15 & 0x40) == 0 || rax_15 s< 0)
    rax_17 = (*(*arg1 + 0x210))(arg1)
    
    if (rax_17 != 0)
        rax_19 = (*(*arg1 + 0x208))(arg1)

if (((rax_15 & 0x40) == 0 || rax_15 s< 0) && (rax_17 == 0 || rax_19 != 0))
    *(arg1 + 0x2e) &= 0xbf
else
    *(arg1 + 0x2e) |= 0x40

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

return sub_140db43a0(&arg1[3])
