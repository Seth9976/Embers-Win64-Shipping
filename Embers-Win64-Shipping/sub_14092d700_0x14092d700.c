// 函数: sub_14092d700
// 地址: 0x14092d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* rcx = arg1[7]
int64_t* r15 = arg3
int64_t* var_78 = nullptr
int64_t var_70 = 0
int64_t* var_68
(*(*rcx + 0x80))(rcx, &var_68)
int64_t* rcx_1 = var_68

if (rcx_1 != 0)
    void var_58
    int64_t rdi_1 = *(*(*rcx_1 + 0xf0))(rcx_1, &var_58, zx.q(arg2))
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    if (rdi_1 != 0)
        int64_t* rcx_4 = var_68
        void var_48
        int64_t* rax_6 = (*(*rcx_4 + 0xf0))(rcx_4, &var_48, zx.q(arg2))
        int64_t rsi_1 = *rax_6
        int64_t* rbx_2 = rax_6[1]
        rax_6[1] = 0
        *rax_6 = 0
        int64_t rdi_2 = sx.q(var_70.d)
        int32_t rax_7 = (rdi_2 + 1).d
        var_70.d = rax_7
        
        if (rax_7 s> 0)
            sub_1405a4f90(&var_78)
        
        int64_t* rax_10 = &var_78[rdi_2 * 2]
        *rax_10 = rsi_1
        rax_10[1] = rbx_2
        
        if (rbx_2 != 0)
            int32_t rax_11 = rbx_2[1].d
            rbx_2[1].d = rax_11
            
            if (rax_11 == 0)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp5_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)

int64_t rbx_5 = **r15
void* const rcx_13

if (arg1[9].d == *(arg1 + 0x74))
label_14092d8c0:
    rcx_13 = nullptr
else
    int32_t rax_18 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
    void* r8_2 = &arg1[0xf]
    void* rcx_11 = *(r8_2 + 8)
    
    if (rcx_11 != 0)
        r8_2 = rcx_11
    
    int32_t rax_20 = *(r8_2 + (((sx.q(arg1[0x11].d) - 1) & sx.q(rax_18)) << 2))
    
    if (rax_20 == 0xffffffff)
    label_14092d8c0_1:
        rcx_13 = nullptr
    else
        int64_t r8_3 = arg1[8]
        
        while (true)
            int64_t rdx_7 = sx.q(rax_20) * 9
            rcx_13 = r8_3 + (rdx_7 << 3)
            
            if (*(r8_3 + (rdx_7 << 3)) == rbx_5)
                break
            
            rax_20 = *(rcx_13 + 0x40)
            
            if (rax_20 == 0xffffffff)
                goto label_14092d8c0_2
        
        if (rax_20 == 0xffffffff)
        label_14092d8c0_2:
            rcx_13 = nullptr

void* r13 = rcx_13 + 8

if (rcx_13 == 0)
    r13 = nullptr

if (r13 != 0 && *(r13 + 0x28) s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t rax_21 = *(r13 + 0x20)
        int64_t j = *(r15_1 + rax_21 + 0x10)
        
        if (j != 0)
            int64_t* rbx_6 = *(r15_1 + rax_21 + 0x18)
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            int64_t* rax_22 = var_78
            void* rcx_16 = &rax_22[sx.q(var_70.d) * 2]
            
            if (rax_22 != rcx_16)
                while (*rax_22 != j)
                    rax_22 = &rax_22[2]
                    
                    if (rax_22 == rcx_16)
                        goto label_14092d934
                
                if (((rax_22 - var_78) s>> 4).d != 0xffffffff)
                    goto label_14092d968
                
                goto label_14092d934
            
        label_14092d934:
            int64_t rsi_2 = sx.q(var_70.d)
            int32_t rax_25 = (rsi_2 + 1).d
            var_70.d = rax_25
            
            if (rax_25 s> var_70:4.d)
                sub_1405a4f90(&var_78)
            
            int64_t* rax_28 = &var_78[rsi_2 * 2]
            *rax_28 = j
            rax_28[1] = rbx_6
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            label_14092d968:
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp10_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
        
        i += 1
        r15_1 += 0x78
    while (i s< *(r13 + 0x28))
    
    r15 = arg3

char rax_32 = (*(*arg1 + 8))(arg1, &var_78, r15)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        int64_t rdx_11 = *var_60
        (*rdx_11)(var_60, rdx_11)
        int32_t rdi_3 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_3 == 1)
            (*(*var_60 + 8))(var_60, zx.q(rdi_3))

int32_t i_2 = var_70.d

if (i_2 != 0)
    void* rdi_4 = &var_78[1]
    int32_t i_1
    
    do
        int64_t* rbx_8 = *rdi_4
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp8_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        rdi_4 += 0x10
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int64_t* rcx_25 = var_78

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return zx.q(rax_32)
