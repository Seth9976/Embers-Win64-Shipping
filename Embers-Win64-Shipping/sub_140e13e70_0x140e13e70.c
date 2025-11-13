// 函数: sub_140e13e70
// 地址: 0x140e13e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t arg_8 = 0
int16_t* arg_28
int16_t* rax = arg_28
int32_t r14 = 0
int32_t rcx
rcx.b = (rax u>> 0x20).d == 0
int64_t var_88
int16_t* var_80
int32_t var_78
int64_t var_70
int64_t var_60
int32_t* rax_3
int16_t* r15

if ((rcx.b & sub_140b5b8a0(rax.d, 0)) == 0)
    int16_t** rax_4 = sub_140b63b70(&arg_28, &var_60)
    int16_t** rax_5 = sub_140b63b70(&arg_18, &var_70)
    int32_t rcx_3 = rax_5[1].d
    int32_t rax_6
    
    if (rcx_3 s> 1)
        int32_t rax_7 = rax_4[1].d
        int32_t rdi_1 = rax_7 - 1
        
        if (rax_7 == 0)
            rdi_1 = 0
        
        int32_t r8
        
        if (rcx_3 == 0)
            r8 = rcx_3 + 1
        
        if (rcx_3 != 0 || rdi_1 == 0)
            r8 = 0
        
        int16_t* rax_8 = *rax_5
        *rax_5 = nullptr
        var_80 = rax_8
        int32_t rax_9 = *(rax_5 + 0xc)
        rax_5[1] = 0
        int32_t rdx_4 = rdi_1 + r8 + rcx_3
        int32_t var_74_1 = rax_9
        
        if (rdx_4 s> rax_9)
            sub_1405947f0(&var_80, rdx_4)
        
        sub_140a20ba0(&var_80, *rax_4, rdi_1)
        rax_6 = rcx_3
        r15 = var_80
        var_78.q = 0
        var_80 = nullptr
    else
        r15 = *rax_4
        *rax_4 = nullptr
        rax_6 = rax_4[1].d
        rax_4[1] = 0
    
    int16_t* rdx_6 = &data_142d40450
    
    if (rax_6 != 0)
        rdx_6 = r15
    
    rax_3 = sub_140b58260(&var_88, rdx_6, 1)
    r14 = 7
else
    r15 = arg_28
    arg_8.q = arg_18
    rax_3 = &arg_8

int64_t rdi_2 = *rax_3
int64_t arg_10 = rdi_2

if ((r14.b & 4) != 0)
    r14 &= 0xfffffffb
    
    if (r15 != 0)
        sub_140a74f90(r15)

if ((r14.b & 2) != 0)
    int64_t rcx_8 = var_70
    r14 &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((r14.b & 1) != 0)
    int64_t rcx_9 = var_60
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int16_t* rcx_14
int64_t* r14_1
int16_t* r15_1

if (arg1[0x62].d == *(arg1 + 0x33c))
label_140e1404a:
    r15_1 = nullptr
    rcx_14 = nullptr
    r14_1 = nullptr
else
    arg_8.q = rdi_2
    int32_t rax_12 = sub_140b5ead0(rdi_2.d) + arg5
    void* r8_2 = &arg1[0x68]
    void* rcx_11 = *(r8_2 + 8)
    
    if (rcx_11 != 0)
        r8_2 = rcx_11
    
    int32_t rax_14 = *(r8_2 + (((sx.q(arg1[0x6a].d) - 1) & sx.q(rax_12)) << 2))
    
    if (rax_14 == 0xffffffff)
        goto label_140e1404a
    
    int64_t r8_3 = arg1[0x61]
    int64_t rdx_10
    
    while (true)
        rdx_10 = sx.q(rax_14)
        int64_t rcx_13 = rdx_10 << 5
        
        if (*(rcx_13 + r8_3) == rdi_2)
            break
        
        rax_14 = *(rcx_13 + r8_3 + 0x18)
        
        if (rax_14 == 0xffffffff)
            goto label_140e1404a
    
    if (rax_14 == 0xffffffff)
        goto label_140e1404a
    
    int64_t rdx_11 = rdx_10 << 5
    void* rdx_12 = rdx_11 + r8_3
    
    if (rdx_11 == neg.q(r8_3))
        goto label_140e1404a
    
    r14_1 = *(rdx_12 + 0x10)
    rcx_14 = *(rdx_12 + 8)
    
    if (r14_1 != 0)
        *(r14_1 + 0xc) += 1
    
    r15_1 = nullptr

*arg2 = nullptr
arg2[1] = r14_1

if (r14_1 != 0)
    int32_t rax_15 = r14_1[1].d
    
    if (rax_15 == 0)
        arg2[1] = 0
    else
        r14_1[1].d = rax_15 + 1
        int16_t* rax_17 = *arg2
        
        if (arg2[1] != 0)
            rax_17 = rcx_14
        
        *arg2 = rax_17

if (*arg2 == 0)
    int64_t rbx_3 = arg_18
    int32_t rax_18 = arg1[0x44].d
    var_88 = rbx_3
    void* rbx_5
    
    if (rax_18 == *(arg1 + 0x24c))
    labelid_48:
        rbx_5 = (*(*arg1 + 0x70))(arg1)
    else
        arg_8.q = rbx_3
        int32_t rax_20 = sub_140b5ead0(rbx_3.d) + arg5
        void* r8_4 = &arg1[0x4a]
        void* rcx_16 = *(r8_4 + 8)
        
        if (rcx_16 != 0)
            r8_4 = rcx_16
        
        int32_t rax_22 = *(r8_4 + (((sx.q(arg1[0x4c].d) - 1) & sx.q(rax_20)) << 2))
        
        if (rax_22 == 0xffffffff)
        labelid_48:
            rbx_5 = (*(*arg1 + 0x70))(arg1)
        else
            int64_t r8_5 = arg1[0x43]
            int64_t rcx_17
            
            while (true)
                rcx_17 = sx.q(rax_22)
                int64_t rdx_16 = rcx_17 * 3
                
                if (*(r8_5 + (rdx_16 << 3)) == rbx_3)
                    break
                
                rax_22 = *(r8_5 + (rdx_16 << 3) + 0x10)
                
                if (rax_22 == 0xffffffff)
                    goto label_140e1414e_2
            
            if (rax_22 == 0xffffffff)
            label_140e1414e:
                rbx_5 = (*(*arg1 + 0x70))(arg1)
            else
                void* rbx_4 = r8_5 + rcx_17 * 0x18
                
                if (rbx_4 == 0)
                label_140e1414e_1:
                    rbx_5 = (*(*arg1 + 0x70))(arg1)
                else
                    rbx_5 = *(rbx_4 + 8)
                    
                    if (rbx_5 == 0)
                    label_140e1414e_2:
                        rbx_5 = (*(*arg1 + 0x70))(arg1)
    
    void*** rax_26 = j_sub_140a82f30(0xa0)
    
    if (rax_26 != 0)
        var_60.o = data_142d3f670
        r15_1 = sub_140dda4b0(rax_26, arg4, rbx_5 + 8, rdi_2, &var_60, 0, 1)
    
    void*** rax_28 = j_sub_140a82f30(0x18)
    void*** rbx_6 = rax_28
    
    if (rax_28 == 0)
        rbx_6 = rax_28
    else
        rax_28[1].d = 1
        *(rax_28 + 0xc) = 1
        *rbx_6 = &data_142d42ea8
        rax_28 = nullptr
        rbx_6[2] = r15_1
    
    int16_t** rdi_3 = &r15_1[0x44]
    
    if (r15_1 == 0)
        rdi_3 = rax_28
    
    if (rdi_3 != 0)
        void* rax_29
        
        if (*rdi_3 != 0)
            rax_29 = rdi_3[1]
        
        if (*rdi_3 == 0 || rax_29 == 0 || *(rax_29 + 8) s<= 0)
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            *rdi_3 = r15_1
            int64_t* rcx_20 = rdi_3[1]
            
            if (rbx_6 != rcx_20)
                if (rbx_6 != 0)
                    *(rbx_6 + 0xc) += 1
                    rcx_20 = rdi_3[1]
                
                if (rcx_20 != 0)
                    int32_t temp9_1 = *(rcx_20 + 0xc)
                    *(rcx_20 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rcx_20 + 8))(rcx_20, 1)
                
                rdi_3[1] = rbx_6
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp8_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*rbx_6)[1](rbx_6, 1)
    
    if (arg2 == &var_60)
    label_140e1428f:
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp3_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_6)[1](rbx_6, 1)
    else
        *arg2 = r15_1
        void*** rdi_4 = arg2[1]
        
        if (rbx_6 == rdi_4)
            goto label_140e1428f
        
        arg2[1] = rbx_6
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp6_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rdi_4)[1](rdi_4, 1)
    
    var_80 = *arg2
    void* rax_37 = arg2[1]
    var_78.q = rax_37
    
    if (rax_37 != 0)
        *(rax_37 + 0xc) += 1
    
    sub_140dd2a20(&arg1[0x61], &arg_10, &var_80)
    int64_t* rcx_27 = var_78.q
    
    if (rcx_27 != 0)
        int32_t temp5_1 = *(rcx_27 + 0xc)
        *(rcx_27 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rcx_27 + 8))(rcx_27, 1)

if (r14_1 != 0)
    int32_t temp0_1 = *(r14_1 + 0xc)
    *(r14_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*r14_1 + 8))(r14_1, 1)

return arg2
