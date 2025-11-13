// 函数: sub_141cc3b40
// 地址: 0x141cc3b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t arg_10 = arg2
int64_t* arg_28
int64_t* r14 = arg_28
int32_t r13 = 0
int32_t rsi = 0
int32_t var_88 = 0
int32_t r12 = -1
int64_t* r15 = arg4
int32_t rdi = -1
int32_t rdx = r14[1].d

if (rdx s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t* rax_2 = *(r15_1 + *r14)
        
        if (rax_2 != 0)
            int64_t* rax_3 = *rax_2
            arg_28 = rax_3
            
            if (rax_3 == arg_10)
                r12 = rsi
                break
            
            if (sub_140b5d160(&arg_10, &arg_28) s< 0 && rdi == 0xffffffff)
                rdi = rsi
        
        rdx = r14[1].d
        rsi += 1
        r15_1 = &r15_1[2]
    while (rsi s< rdx)
    
    r15 = arg_20

if (r12 == 0xffffffff)
    r12 = rdx
    
    if (rdi != 0xffffffff)
        r12 = rdi
    
    int64_t* rax_5 = j_sub_140a82f30(0x50)
    int64_t* var_68
    int128_t var_50
    int64_t* rbx_1
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        int64_t rdx_2 = *r15
        int64_t* rcx_2
        
        if (rdx_2 == *(arg1 + 0x50))
            rdx_2 = 0
            rcx_2 = &var_50
            var_50 = zx.o(0)
            r13 = 2
        else
            int64_t* rcx_1 = r15[1]
            int64_t var_70 = rdx_2
            var_68 = rcx_1
            
            if (rcx_1 != 0)
                rcx_1[1].d += 1
            
            rcx_2 = &var_70
            r13 = 1
        
        int64_t var_58_1 = rcx_2[1]
        char var_98_1 = arg7
        char var_a0_1 = arg6
        rcx_2[1] = 0
        int64_t var_60 = rdx_2
        int64_t rdx_3 = arg_10
        *rcx_2 = 0
        char var_a8_1 = arg5
        rbx_1 = sub_141cbe0e0(rax_5, rdx_3, arg3, &var_60)
    
    void*** rax_11 = j_sub_140a82f30(0x18)
    
    if (rax_11 != 0)
        rax_11[1].d = 1
        *rax_11 = &data_143214bf8
        *(rax_11 + 0xc) = 1
        rax_11[2] = rbx_1
    
    int64_t* var_80 = rbx_1
    
    if ((r13.b & 2) != 0)
        int64_t* rbx_2 = var_50:8.q
        r13 &= 0xfffffffd
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    if ((r13.b & 1) != 0 && var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t temp5_1 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_68 + 8))(var_68, 1)
    
    int32_t rdi_1 = r14[1].d
    r14[1].d = rdi_1 + 1
    
    if (rdi_1 + 1 s> *(r14 + 0xc))
        sub_1405a4f90(r14)
    
    int64_t rdx_6 = *r14 + (sx.q(r12) << 4)
    memmove(rdx_6 + 0x10, rdx_6, (rdi_1 - r12) << 4)
    void** rcx_10 = *r14
    rcx_10[sx.q(r12) * 2] = var_80
    rcx_10[sx.q(r12) * 2 + 1] = rax_11
    
    if (rax_11 != 0)
        rax_11[1].d += 1
    
    int64_t* rax_19 = var_80
    int64_t** rax_20
    
    if (rax_19[2].d s<= 0)
        rax_20 = &data_143f35860
    else
        rax_20 = rax_19[1]
    
    arg_28 = *rax_20
    var_50.q = &arg_28
    var_50:8.q = &var_80
    sub_141cbd580(arg1 + 0x60, &arg_20, &var_50, nullptr)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t temp7_1 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rax_11)[1](rax_11, 1)

int64_t* rbx_7 = r15[1]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp1_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_5 = *rbx_7
            (*(r8_5 + 8))(rbx_7, 1, r8_5)

return zx.q(r12)
