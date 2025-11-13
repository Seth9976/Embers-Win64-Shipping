// 函数: sub_1425e73f0
// 地址: 0x1425e73f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1
int64_t* r14 = arg2
int64_t* rcx = *arg2
int64_t* var_48
int64_t* i = (*(*rcx + 0x50))(rcx, &var_48)
int64_t rbp = *(r15 + 0x60)
int64_t rsi = *i
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (rsi != rbp)
    i.b = 0
    return i

int64_t* var_40_1
bool r8

if (arg3 != 0)
    for (i = *(r15 + 0x50); i != &i[sx.q(*(r15 + 0x58)) * 2]; i = &i[2])
        int64_t rcx_3 = *i
        
        if (rcx_3 != 0 && rcx_3 == *r14)
            goto label_1425e7703
    
    void* rdi_1 = r14[1]
    int64_t rbp_1 = *r14
    
    if (rdi_1 != 0)
        *(rdi_1 + 8) += 1
    
    int64_t rsi_1 = sx.q(*(r15 + 0x58))
    int32_t rax_3 = (rsi_1 + 1).d
    *(r15 + 0x58) = rax_3
    
    if (rax_3 s> *(r15 + 0x5c))
        sub_1405a4f90(r15 + 0x50)
    
    int64_t* rax_6 = (rsi_1 << 4) + *(r15 + 0x50)
    *rax_6 = rbp_1
    rax_6[1] = rdi_1
    var_48 = *r14
    int64_t* rax_8 = r14[1]
    var_40_1 = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    r8 = true
    goto label_1425e76d2

int64_t r10_1 = *r14
int64_t* r13_1 = r14[1]
int64_t var_50_1 = r10_1
var_48 = r13_1

if (r13_1 != 0)
    r13_1[1].d += 1

int64_t rcx_5 = sx.q(*(r15 + 0x58))
int32_t r12_1 = 0

if (rcx_5.d != 0)
    int32_t rbx_1 = 0
    int32_t var_58_1 = 0
    int32_t r14_1 = 0
    int64_t rdi_2 = 0
    r8 = **(arg1 + 0x50) != r10_1
    bool arg_20 = r8
    
    do
        int64_t r9_1 = sx.q(r14_1)
        rdi_2 += 1
        r14_1 += 1
        
        if (rdi_2 s< rcx_5)
            int64_t rcx_8 = (rdi_2 << 4) + *(arg1 + 0x50)
            
            do
                int32_t rax_10
                rax_10.b = *rcx_8 != r10_1
                
                if (zx.d(r8) != rax_10)
                    break
                
                r14_1 += 1
                rdi_2 += 1
                rcx_8 += 0x10
            while (rdi_2 s< rcx_5)
        
        int32_t i_2 = r14_1 - r9_1.d
        
        if (r8 != 0)
            if (rbx_1 != r9_1.d)
                memmove((sx.q(rbx_1) << 4) + *(arg1 + 0x50), (r9_1 << 4) + *(arg1 + 0x50), i_2 << 4)
                r8 = arg_20
            
            rbx_1 += i_2
            var_58_1 = rbx_1
        else if (i_2 != 0)
            int64_t* rsi_5 = (r9_1 << 4) + 8 + *(arg1 + 0x50)
            int32_t i_1
            
            do
                int64_t* rbx_2 = *rsi_5
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp8_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rsi_5 = &rsi_5[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rbx_1 = var_58_1
            r8 = arg_20
        
        r10_1 = var_50_1
        r8 ^= 1
        arg_20 = r8
    while (rdi_2 s< rcx_5)
    
    r14 = arg2
    r15 = arg1
    *(arg1 + 0x58) = rbx_1
    r12_1 = rcx_5.d - rbx_1
    r13_1 = var_48

if (r13_1 != 0)
    r13_1[1].d -= 1
    
    if (r13_1[1].d == 1)
        (**r13_1)(r13_1)
        int32_t temp3_1 = *(r13_1 + 0xc)
        *(r13_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*r13_1 + 8))(r13_1, 1)

if (r12_1 s> 0)
    var_48 = *r14
    int64_t* rax_17 = r14[1]
    var_40_1 = rax_17
    
    if (rax_17 != 0)
        rax_17[1].d += 1
    
    r8 = false
label_1425e76d2:
    sub_141b938e0(r15 + 0xd8, &var_48, r8)
    
    if (var_40_1 != 0)
        var_40_1[1].d -= 1
        
        if (var_40_1[1].d == 1)
            (**var_40_1)(var_40_1)
            int32_t temp5_1 = *(var_40_1 + 0xc)
            *(var_40_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_40_1 + 8))(var_40_1, 1)

label_1425e7703:
i.b = 1
return i
