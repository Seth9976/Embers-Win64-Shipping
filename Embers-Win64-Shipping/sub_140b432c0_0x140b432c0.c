// 函数: sub_140b432c0
// 地址: 0x140b432c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* var_48 = nullptr
int32_t var_40 = 0
int32_t* r15 = arg2
sub_140b3dfe0(&var_48)
int64_t* r14 = var_48
int64_t rdi = sx.q(var_40)
void* r13_2 = &r14[rdi * 2]
void* arg_18 = r13_2

if (r14 != r13_2)
    do
        int64_t* rbx_1 = r14[1]
        void* r15_1 = *r14
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (*(r15_1 + 0x90) == 0)
            void** rax_1 = j_sub_140a82f30(0x128)
            void** rdi_1 = rax_1
            
            if (rax_1 == 0)
                rdi_1 = nullptr
            else
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                *rax_1 = r15_1
                rax_1[1] = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                rax_1[2] = arg1
                __builtin_memset(&rax_1[3], 0, 0x30)
                sub_140b2e5c0(&rax_1[9])
                void* rax_2 = *rdi_1
                rdi_1[0x24] = 0
                *(rax_2 + 0x90) = rdi_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_5 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_5 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t r13_3 = sx.q(arg1[0x18].d)
            int32_t rax_7 = (r13_3 + 1).d
            arg1[0x18].d = rax_7
            
            if (rax_7 s> *(arg1 + 0xc4))
                sub_1405a4d70(&arg1[0x17])
            
            *(arg1[0x17] + (r13_3 << 3)) = rdi_1
            r13_2 = arg_18
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_11 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r14 = &r14[2]
    while (r14 != r13_2)
    
    rdi = zx.q(var_40)
    r14 = var_48
    r15 = arg2

int64_t rax_13 = sx.q(arg1[0x18].d)
int32_t rcx_7 = 0x7fffffff
int64_t* rbx_2 = arg1[0x17]
int32_t arg_8 = 0x7fffffff
uint64_t result = &rbx_2[rax_13]
uint64_t rsi_1 = rax_13 << 3 u>> 3

if (rbx_2 u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        result = sub_140b42580(*rbx_2, r15, &arg_8)
        rbp += 1
        rbx_2 = &rbx_2[1]
    while (rbp != rsi_1)
    
    rcx_7 = arg_8

if (arg1[0x14].b != 0 && rcx_7 s< 0x7fffffff)
    int64_t i = sx.q(rcx_7) - arg1[0x11]
    
    while (arg1[0x13] s< i)
        result = sub_140b39a60(arg1)

if (rdi.d != 0)
    int64_t** r14_1 = &r14[1]
    int32_t i_1
    
    do
        int64_t* rbx_4 = *r14_1
        
        if (rbx_4 != 0)
            result = zx.q(rbx_4[1].d)
            rbx_4[1].d -= 1
            
            if (result.d == 1)
                (**rbx_4)(rbx_4)
                result = zx.q(*(rbx_4 + 0xc))
                *(rbx_4 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rbx_4 + 8))(rbx_4, 1)
        
        r14_1 = &r14_1[2]
        i_1 = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i_1 != 1)
    r14 = var_48

if (r14 == 0)
    return result

return sub_140a74f90(r14)
