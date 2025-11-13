// 函数: sub_140eca900
// 地址: 0x140eca900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg2
int64_t* r14 = arg3
int32_t arg_20
sub_140a73790(&arg1[1], &arg_20, arg2)
int64_t rax = sx.q(arg_20)
int64_t rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = arg1[1] + rax * 0x28

int64_t rax_2 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_2 = 0

if (rax_2 == 0)
    int64_t* var_68 = rbp
    int64_t* var_60_1 = r14
    sub_140e90740(&arg1[1], &arg_20, &var_68, nullptr)
    var_68 = *r14
    int64_t* var_50_1 = rbp
    int64_t* var_58 = &var_68
    sub_140e90570(&arg1[0xb], &arg_20, &var_58, nullptr)
    int64_t* rcx_4 = *r14
    (**rcx_4)(rcx_4)
    int64_t* rbx_1 = rbp[1]
    int64_t* rsi_1 = *rbp
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* rdi_1 = *arg1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (*(rdi_1 + 0x5c8) != 0)
        int64_t* rcx_5 = *(rdi_1 + 0x5c0)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            int64_t* rcx_6
            
            if (*(rdi_1 + 0x5c8) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(rdi_1 + 0x5c0)
            
            var_58 = rsi_1
            int64_t* var_50_2 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            (*(*rcx_6 + 0x50))(rcx_6, &var_58, r14)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp9_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1
int64_t rdx_5 = sx.q(rbx_2[0x19].d)

if (rdx_5.d != 0)
    int32_t r14_1 = 0
    int64_t rsi_2 = 0
    int32_t r13_1 = 0
    int64_t r12
    r12.b = *rbx_2[0x18] != *rbp
    
    do
        int64_t r9_1 = sx.q(r14_1)
        rsi_2 += 1
        r14_1 += 1
        
        if (rsi_2 s< rdx_5)
            int64_t rcx_14 = (rsi_2 << 4) + rbx_2[0x18]
            
            do
                int32_t rax_13
                rax_13.b = *rcx_14 != *rbp
                
                if (zx.d(r12.b) != rax_13)
                    break
                
                r14_1 += 1
                rsi_2 += 1
                rcx_14 += 0x10
            while (rsi_2 s< rdx_5)
        
        int32_t i_1 = r14_1 - r9_1.d
        
        if (r12.b != 0)
            if (r13_1 != r9_1.d)
                int64_t rax_14 = rbx_2[0x18]
                memmove((sx.q(r13_1) << 4) + rax_14, (r9_1 << 4) + rax_14, i_1 << 4)
            
            r13_1 += i_1
        else if (i_1 != 0)
            int64_t* rdi_5 = (r9_1 << 4) + 8 + rbx_2[0x18]
            int32_t i
            
            do
                int64_t* rbx_3 = *rdi_5
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp10_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rdi_5 = &rdi_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_2 = arg1
        
        rbp = arg2
        r12.b ^= 1
    while (rsi_2 s< rdx_5)
    
    r14 = arg3
    rbx_2[0x19].d = r13_1

int64_t rdi_6 = sx.q(rbx_2[0x16].d)
int32_t rax_17 = (rdi_6 + 1).d
rbx_2[0x16].d = rax_17

if (rax_17 s> *(rbx_2 + 0xb4))
    sub_1405a4f90(&rbx_2[0x15])

int64_t* rcx_23 = (rdi_6 << 4) + rbx_2[0x15]
*rcx_23 = *rbp
void* result = rbp[1]
rcx_23[1] = result

if (result != 0)
    *(result + 8) += 1

int64_t* rbx_4 = rbp[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = r14[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp5_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
