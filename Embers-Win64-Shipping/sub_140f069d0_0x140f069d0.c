// 函数: sub_140f069d0
// 地址: 0x140f069d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg2)
int32_t r15 = arg2[1]
int32_t arg_20 = r15

if (rax.d s< 0 || rax.d s>= arg1[4].d)
    rax.b = 0
    return rax

int32_t r9 = arg3[1].d
int32_t r8 = r9 - 1
uint64_t rax_1 = zx.q(r9 - 1)
int64_t* r12_1 = rax * 0x70 + arg1[3]

if (r9 == 0)
    rax_1 = 0xffffffff

if (r9 == 0)
    r8 = -1

int64_t* rcx = *r12_1
int64_t rsi = 0

if (r9 == 0)
    rax_1 = 0

if (rax_1.d != 0)
    int64_t rdx = *arg3
    
    if (rcx[1].d != 0)
        if (r9 == 0)
            r8 = 0
        
        sub_140ab3a50(rcx, rdx, r8, r15)
    else
        if (r9 == 0)
            r8 = 0
        
        sub_140a20ba0(rcx, rdx, r8)

r12_1[0xd].b |= 7
uint64_t rbx
rbx.b = 0
int32_t i = 0

if (r12_1[6].d s> 0)
    rax_1 = &r12_1[5]
    
    do
        int64_t* r14_2 = *rax_1 + rsi
        int64_t* rcx_1 = *r14_2
        int64_t var_b8
        (*(*rcx_1 + 8))(rcx_1, &var_b8)
        int64_t rax_3 = var_b8
        char arg_10
        
        if (r15 s< rax_3.d || r15 s>= var_b8:4.d)
            if (i == r12_1[6].d - 1)
                if (rbx.b != 0)
                    goto label_140f06dba
                
                goto label_140f06ad9
            
            if (rbx.b != 0)
            label_140f06dba:
                arg_10.q = rax_3
                int32_t rcx_28 = arg3[1].d
                int32_t rdx_10 = rcx_28 - 1
                
                if (rcx_28 == 0)
                    rdx_10 = 0
                
                int32_t rcx_29 = rdx_10 + rax_3.d
                
                if (rcx_29 s<= 0)
                    rcx_29 = 0
                
                arg_10.d = rcx_29
                int32_t rcx_31 = arg4 + rdx_10
                
                if (rcx_31 s<= 0)
                    rcx_31 = 0
                
                arg4 = rcx_31
                int64_t* rcx_32 = *r14_2
                (*(*rcx_32 + 0x10))(rcx_32, &arg_10, 0)
        else
        label_140f06ad9:
            int64_t* rbx_1 = r14_2[1]
            int64_t* rcx_4 = *r14_2
            arg_10 = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            char r15_1 = (*(*rcx_4 + 0x88))(rcx_4) & 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_2 = *rbx_1
                    (*rdx_2)(rbx_1, rdx_2)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int32_t rdx_3 = arg3[1].d
            
            if (r15_1 == 0)
                int32_t rcx_8 = rdx_3 - 1
                r15 = arg_20
                int64_t r10_1 = *(*arg1 + 0x30)
                int32_t rax_12 = var_b8.d
                int64_t* rbx_4
                int64_t var_b0
                
                if (r15 != rax_12)
                    int32_t rax_24 = var_b8:4.d
                    int32_t var_68 = rax_24
                    
                    if (rdx_3 == 0)
                        rcx_8 = 0
                    
                    int32_t var_64_1 = rcx_8 + rax_24
                    int64_t var_50
                    r10_1(arg1, &var_50, r12_1, &var_68)
                    var_b0 = var_50
                    int64_t* var_48
                    
                    if (var_48 != 0)
                        var_48[1].d += 1
                    
                    i += 1
                    int64_t var_a0_1
                    __builtin_memset(&var_a0_1, 0, 0x20)
                    rsi += 0x30
                    sub_140f068f0(&r12_1[5], &var_b0, i)
                    int64_t var_90_1
                    
                    if (var_90_1 != 0)
                        sub_140a74f90(var_90_1)
                    
                    int64_t rcx_24 = var_a0_1
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    if (var_48 != 0)
                        var_48[1].d -= 1
                        
                        if (var_48[1].d == 1)
                            (**var_48)(var_48)
                            int32_t temp5_1 = *(var_48 + 0xc)
                            *(var_48 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*var_48 + 8))(var_48, 1)
                    
                    rbx_4 = var_48
                else
                    int32_t var_78 = rax_12
                    
                    if (rdx_3 == 0)
                        rcx_8 = 0
                    
                    int32_t var_74_1 = rcx_8 + rax_12
                    int64_t var_60
                    r10_1(arg1, &var_60, r12_1, &var_78)
                    int32_t rcx_11 = arg3[1].d
                    int32_t rax_13 = rcx_11 - 1
                    
                    if (rcx_11 == 0)
                        rax_13 = -1
                    
                    if (rcx_11 == 0)
                        rax_13 = 0
                    
                    int32_t var_70 = rax_13 + var_b8.d
                    int32_t rax_15 = rcx_11 - 1
                    int64_t* rcx_12 = *r14_2
                    
                    if (rcx_11 == 0)
                        rax_15 = 0
                    
                    int32_t var_6c_1 = rax_15 + var_b8:4.d
                    (*(*rcx_12 + 0x10))(rcx_12, &var_70)
                    var_b0 = var_60
                    int64_t* var_58
                    
                    if (var_58 != 0)
                        var_58[1].d += 1
                    
                    int64_t var_a0
                    __builtin_memset(&var_a0, 0, 0x20)
                    sub_140f068f0(&r12_1[5], &var_b0, i)
                    i += 1
                    rsi += 0x30
                    int64_t var_90
                    
                    if (var_90 != 0)
                        sub_140a74f90(var_90)
                    
                    int64_t rcx_15 = var_a0
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    if (var_58 != 0)
                        var_58[1].d -= 1
                        
                        if (var_58[1].d == 1)
                            (**var_58)(var_58)
                            int32_t temp9_1 = *(var_58 + 0xc)
                            *(var_58 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*var_58 + 8))(var_58, 1)
                    
                    rbx_4 = var_58
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp7_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            else
                int32_t var_80 = var_b8.d
                int32_t rax_8 = rdx_3 - 1
                
                if (rdx_3 == 0)
                    rax_8 = 0
                
                int64_t* rcx_7 = *r14_2
                int32_t var_7c_1 = rax_8 + var_b8:4.d
                (*(*rcx_7 + 0x10))(rcx_7, &var_80)
                r15 = arg_20
            
            rbx = zx.q(arg_10)
        i += 1
        rax_1 = &r12_1[5]
        rsi += 0x30
    while (i s< r12_1[6].d)

arg1[0x11].b |= 1
rax_1.b = 1
return rax_1
