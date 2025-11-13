// 函数: sub_141bf2320
// 地址: 0x141bf2320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm6[0x2] = arg3
int32_t rdi = 0

if (arg1[0x30].d s> 0)
    void** rbx_1 = nullptr
    int32_t rax_1
    
    do
        zmm6 = sub_141bf1a50(*(rbx_1 + arg1[0x2f]), zmm6)
        rax_1 = arg1[0x30].d
        rbx_1 = &rbx_1[1]
        rdi += 1
    while (rdi s< rax_1)
    
    if (rax_1 s> 0)
        void* var_48
        sub_141bab3c0(arg1, &var_48)
        void* rcx_3 = var_48
        
        if (rcx_3 != 0)
            sub_140e1a0f0(rcx_3)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)

void* rcx_6 = &arg1[0x31]
int64_t r12 = 0
int64_t* r15 = *rcx_6
uint64_t r13_1 = sx.q(*(rcx_6 + 8)) << 3 u>> 3

if (r15 u> &r15[sx.q(*(rcx_6 + 8))])
    r13_1 = 0

uint64_t arg_8 = r13_1

if (r13_1 != 0)
    do
        int32_t rcx_7 = arg1[0x30].d
        int32_t rbx_3 = 0
        int64_t rbp_1 = *r15
        
        if (rcx_7 s> 0)
            int64_t* rdi_1 = nullptr
            int32_t rax_6
            
            do
                int64_t r9_1 = arg1[0x2f]
                rax_6 = rcx_7
                
                if (*(rdi_1 + r9_1) == rbp_1)
                    int32_t rax_8 = rax_6 - rbx_3 - 1
                    
                    if (rax_8 s>= 1)
                        rax_8 = 1
                    
                    if (rax_8 != 0)
                        memcpy(r9_1 + (sx.q(rbx_3) << 3), r9_1 + (sx.q(rcx_7 - rax_8) << 3), 
                            rax_8 << 3)
                        rcx_7 = arg1[0x30].d
                    
                    arg1[0x30].d = rcx_7 - 1
                    sub_1405c53d0(&arg1[0x2f])
                    rax_6 = arg1[0x30].d
                    rbx_3 -= 1
                    rdi_1 -= 8
                
                rbx_3 += 1
                rdi_1 = &rdi_1[1]
                rcx_7 = rax_6
            while (rbx_3 s< rax_6)
            r13_1 = arg_8
        
        r15 = &r15[1]
        r12 += 1
    while (r12 != r13_1)
    
    rcx_6 = &arg1[0x31]

bool cond:0 = *(rcx_6 + 0xc) == 0
*(rcx_6 + 8) = 0

if (not(cond:0))
    sub_1405c5570(rcx_6, 0)

int64_t* result = (*(*arg1 + 0x150))(arg1)

if (result == 0)
    return result

void* rcx_12 = result[0x31]
int64_t* rcx_13

if (rcx_12 == 0)
    rcx_13 = &result[0x61]
else
    rcx_13 = *(rcx_12 + 0xc8)

return sub_1420e7dd0(rcx_13, arg1, zmm6)
