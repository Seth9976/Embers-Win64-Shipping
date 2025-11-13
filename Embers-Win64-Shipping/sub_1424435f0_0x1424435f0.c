// 函数: sub_1424435f0
// 地址: 0x1424435f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t r12 = sx.q(arg4)
int32_t i_4 = 0
int64_t* rcx = arg2[1]
int64_t* rbx = arg2
int32_t i = 0
int64_t rax_1 = *rcx + 4
uint32_t var_90

if (rax_1 u> rcx[1])
    uint32_t rax_2
    rax_2.b = arg2[0xe] != 0
    var_90 = rax_2
    (*(*arg2 + 0x150))(rbx, &var_90, 4)
else
    *rcx = rax_1

int64_t* rcx_2 = rbx[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u<= rcx_2[1])
    *arg1 = *rdx_1
    int64_t* rax_6 = rbx[1]
    *rax_6 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, arg1, arg5)
else
    (*(*rbx + 0x150))(rbx, arg1, 4)

int64_t* rcx_4 = rbx[1]
int32_t* r8 = *rcx_4

if (&r8[1] u<= rcx_4[1])
    arg1[4] = *r8
    int64_t* rax_10 = rbx[1]
    *rax_10 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &arg1[4], arg5)
else
    (*(*rbx + 0x150))(rbx, &arg1[4], 4)

int64_t* rcx_6 = rbx[1]
int32_t* r8_1 = *rcx_6

if (&r8_1[1] u<= rcx_6[1])
    arg1[5] = *r8_1
    int64_t* rax_14 = rbx[1]
    *rax_14 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &arg1[5], arg5)
else
    (*(*rbx + 0x150))(rbx, &arg1[5], 4)

int64_t* rcx_8 = rbx[1]
int32_t* r8_2 = *rcx_8

if (&r8_2[1] u<= rcx_8[1])
    arg1[6] = *r8_2
    int64_t* rax_18 = rbx[1]
    *rax_18 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &arg1[6], arg5)
else
    (*(*rbx + 0x150))(rbx, &arg1[6], 4)

int64_t* rcx_10 = rbx[1]
int32_t* r8_3 = *rcx_10

if (&r8_3[1] u<= rcx_10[1])
    arg1[7] = *r8_3
    int64_t* rax_22 = rbx[1]
    *rax_22 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &arg1[7], arg5)
else
    (*(*rbx + 0x150))(rbx, &arg1[7], 4)

int16_t* var_58

if (r12.d s> 0)
    int64_t rcx_21 = r12 << 2
    int64_t rsi_1 = sx.q(*(rcx_21 + *(arg1 + 0x48)))
    int64_t rax_37 = sx.q(arg1[0xc])
    
    if (rax_37.d s> 0)
        int64_t rcx_22 = 0
        int32_t* rax_39 = *(arg1 + 0x38) + 4
        
        while (*rax_39 u<= rsi_1.d)
            i += 1
            rcx_22 += 1
            rax_39 = &rax_39[1]
            
            if (rcx_22 s>= rax_37)
                break
        
        i_4 = i
    
    char rcx_23 = r12.b
    int32_t rax_41 = arg1[1] - r12.d
    var_58 = nullptr
    int32_t var_98 = rax_41
    uint32_t var_94 = arg1[2] u>> rcx_23
    var_90 = arg1[3] u>> rcx_23
    int32_t rax_46 = arg1[0x10]
    int32_t rdx_15 = rax_46 - i
    int64_t var_50_1 = 0
    uint64_t var_78
    __builtin_memset(&var_78, 0, 0x1c)
    
    if (rdx_15 s> 0)
        sub_1405dadb0(&var_58, rdx_15)
        rax_46 = arg1[0x10]
    
    int64_t i_6 = sx.q(i_4)
    
    if (i_6.d s< rax_46)
        int64_t rcx_25 = i_6 << 2
        int64_t var_88_1 = rcx_25
        
        do
            int64_t r15_1 = sx.q(var_50_1.d)
            int32_t r14_1 = *(rcx_25 + *(arg1 + 0x38))
            int32_t rax_48 = r14_1
            
            if (rsi_1.d u<= r14_1)
                rax_48 = rsi_1.d
            
            int32_t rax_49 = (r15_1 + 1).d
            var_50_1.d = rax_49
            
            if (rax_49 s> var_50_1:4.d)
                sub_1405a4cf0(&var_58)
            
            i += 1
            rcx_25 = var_88_1 + 4
            var_88_1 = rcx_25
            *(var_58 + (r15_1 << 2)) = r14_1 - rax_48
        while (i s< arg1[0x10])
    
    int32_t rax_51 = arg1[0x14]
    int32_t rdx_18 = rax_51 - r12.d
    uint64_t var_68
    
    if (rdx_18 s> 0)
        sub_1405dadb0(&var_68, rdx_18)
        rax_51 = arg1[0x14]
    
    if (r12.d s< rax_51)
        int64_t rbx_1 = rcx_21
        
        do
            int32_t var_60_1
            int64_t r14_3 = sx.q(var_60_1)
            int32_t rax_53 = (r14_3 + 1).d
            int32_t r15_3 = *(rbx_1 + *(arg1 + 0x48)) - rsi_1.d
            var_60_1 = rax_53
            int32_t var_5c
            
            if (rax_53 s> var_5c)
                sub_1405a4cf0(&var_68)
            
            r12 = zx.q(r12.d + 1)
            rbx_1 += 4
            *(var_68 + (r14_3 << 2)) = r15_3
        while (r12.d s< arg1[0x14])
        
        rbx = arg_10
    
    int32_t rax_55 = arg1[0x18]
    int32_t rdx_21 = rax_55 - rsi_1.d
    
    if (rdx_21 s> 0)
        sub_1405dadb0(&var_78, rdx_21)
        rax_55 = arg1[0x18]
    
    if (rsi_1.d s< rax_55)
        int64_t r15_4 = rsi_1 << 2
        
        do
            int64_t var_70_1
            int64_t r14_4 = sx.q(var_70_1.d)
            int32_t* r12_1 = *(arg1 + 0x58)
            int32_t rax_56 = (r14_4 + 1).d
            var_70_1.d = rax_56
            
            if (rax_56 s> var_70_1:4.d)
                sub_1405a4cf0(&var_78)
            
            int32_t rcx_32 = *(r12_1 + r15_4)
            rsi_1 = zx.q(rsi_1.d + 1)
            r15_4 += 4
            *(var_78 + (r14_4 << 2)) = rcx_32
        while (rsi_1.d s< arg1[0x18])
    
    int64_t* rcx_33 = rbx[1]
    int32_t* rdx_23 = *rcx_33
    
    if (&rdx_23[1] u> rcx_33[1])
        int32_t* rdx_24 = &var_98
        
        if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, rdx_24, arg5)
        else
            (*(*rbx + 0x150))(rbx, rdx_24, 4)
    else
        var_98 = *rdx_23
        *rcx_33 += 4
    
    int64_t* rcx_35 = rbx[1]
    uint32_t* rdx_25 = *rcx_35
    
    if (&rdx_25[1] u> rcx_35[1])
        int32_t* rdx_26 = &var_94
        
        if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, rdx_26, arg5)
        else
            (*(*rbx + 0x150))(rbx, rdx_26, 4)
    else
        var_94 = *rdx_25
        *rcx_35 += 4
    
    int64_t* rcx_37 = rbx[1]
    uint32_t* rdx_27 = *rcx_37
    
    if (&rdx_27[1] u> rcx_37[1])
        int32_t* rdx_28 = &var_90
        
        if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, rdx_28, arg5)
        else
            (*(*rbx + 0x150))(rbx, rdx_28, 4)
    else
        var_90 = *rdx_27
        *rcx_37 += 4
    
    sub_140fdadf0(rbx, &var_58, arg5)
    sub_140fdadf0(rbx, &var_68, arg5)
    sub_140fdadf0(rbx, &var_78, arg5)
    uint64_t rcx_42 = var_78
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    uint64_t rcx_43 = var_68
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)
    
    int16_t* rcx_44 = var_58
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    i = i_4
else
    int64_t* rcx_12 = rbx[1]
    int32_t* r8_4 = *rcx_12
    
    if (&r8_4[1] u<= rcx_12[1])
        arg1[1] = *r8_4
        int64_t* rax_26 = rbx[1]
        *rax_26 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &arg1[1], arg5)
    else
        (*(*rbx + 0x150))(rbx, &arg1[1], 4)
    
    int64_t* rcx_14 = rbx[1]
    int32_t* r8_5 = *rcx_14
    
    if (&r8_5[1] u<= rcx_14[1])
        arg1[2] = *r8_5
        int64_t* rax_30 = rbx[1]
        *rax_30 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &arg1[2], arg5)
    else
        (*(*rbx + 0x150))(rbx, &arg1[2], 4)
    
    int64_t* rcx_16 = rbx[1]
    int32_t* r8_6 = *rcx_16
    
    if (&r8_6[1] u<= rcx_16[1])
        arg1[3] = *r8_6
        int64_t* rax_34 = rbx[1]
        *rax_34 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &arg1[3], arg5)
    else
        (*(*rbx + 0x150))(rbx, &arg1[3], 4)
    
    sub_140fdadf0(rbx, &arg1[0xe], arg5)
    sub_140fdadf0(rbx, &arg1[0x12], arg5)
    sub_140fdadf0(rbx, &arg1[0x16], arg5)

int64_t* rax_67
int512_t zmm1
rax_67, zmm1 = sub_1423c1c90()
char rcx_45 = rbx[5].b
int32_t r12_2 = 0

if ((rcx_45 & 1) != 0)
    int32_t i_1 = 0
    
    if (*arg1 u> 0)
        do
            var_58 = nullptr
            int32_t var_50_2 = 0
            sub_140a1d9d0(rbx, &var_58, zmm1)
            int16_t* const rdx_33 = &data_142d40450
            
            if (var_50_2 != 0)
                rdx_33 = var_58
            
            char rax_69
            rax_69, zmm1 = sub_140be0d00(rax_67, *sub_140b58260(&arg_10, rdx_33, 1), 0)
            *(zx.q(i_1) + arg1 + 0x20) = rax_69
            int16_t* rcx_50 = var_58
            
            if (rcx_50 != 0)
                zmm1 = sub_140a74f90(rcx_50)
            
            i_1 += 1
        while (i_1 u< *arg1)
else if ((rcx_45 & 2) != 0)
    int32_t i_2 = 0
    
    if (*arg1 u> 0)
        do
            zmm1 = sub_140a1d9d0(rbx, &var_58, 
                sub_140b5e690(sub_140bdece0(rax_67, &arg_10, zx.q(*(zx.q(i_2) + arg1 + 0x20))), 
                    &var_58))
            int16_t* rcx_54 = var_58
            
            if (rcx_54 != 0)
                zmm1 = sub_140a74f90(rcx_54)
            
            i_2 += 1
        while (i_2 u< *arg1)

int64_t* rcx_55 = rbx[1]
int32_t arg_8 = arg1[0xc] - i
int32_t* rdx_38 = *rcx_55
uint64_t result

if (&rdx_38[1] u> rcx_55[1])
    int32_t* rdx_39 = &arg_8
    
    if ((*(rbx + 0x29) & 0x20) != 0)
        result = sub_140b54070(rbx, rdx_39, zmm1)
    else
        result = (*(*rbx + 0x150))(rbx, rdx_39, 4)
else
    result = zx.q(*rdx_38)
    arg_8 = result.d
    *rcx_55 += 4

if ((rbx[5].b & 1) != 0)
    int64_t r14_6 = sx.q(arg1[0xc])
    int32_t rdx_40 = arg_8
    
    if (rdx_40 s> r14_6.d)
        arg1[0xc] = rdx_40
        int32_t i_5 = rdx_40 - r14_6.d
        
        if (rdx_40 s> arg1[0xd])
            sub_1405c4fe0(&arg1[0xa])
        
        result = (r14_6 << 6) + *(arg1 + 0x28)
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                *(result + 0x10) = 0
                *(result + 0x18) = 0
                *(result + 0x1c) = 0
                *result = 0
                *(result + 8) = 0xffffffff
                __builtin_memset(result + 0x20, 0, 0x20)
                result += 0x40
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
    else if (rdx_40 s< r14_6.d)
        result, zmm1 = sub_142440b10(&arg1[0xa], rdx_40, r14_6.d - rdx_40, 1)

if (i s< arg1[0xc])
    int64_t r13_1 = sx.q(i) << 6
    
    do
        int64_t* rcx_59 = rbx[1]
        int64_t* r15_6 = *(arg1 + 0x28) + r13_1
        int32_t* r8_9 = *rcx_59
        
        if (&r8_9[1] u<= rcx_59[1])
            r15_6[4].d = *r8_9
            int64_t* rax_80 = rbx[1]
            *rax_80 += 4
        else if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, &r15_6[4], zmm1)
        else
            (*(*rbx + 0x150))(rbx, &r15_6[4], 4)
        
        int64_t* rcx_61 = rbx[1]
        int32_t* r8_10 = *rcx_61
        
        if (&r8_10[1] u<= rcx_61[1])
            *(r15_6 + 0x24) = *r8_10
            int64_t* rax_84 = rbx[1]
            *rax_84 += 4
        else if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, r15_6 + 0x24, zmm1)
        else
            (*(*rbx + 0x150))(rbx, r15_6 + 0x24, 4)
        
        uint64_t rsi_3 = 0
        
        if (*arg1 u> 0)
            do
                int64_t* rcx_63 = rbx[1]
                void* r9_1 = r15_6 + rsi_3
                char* rdx_44 = *rcx_63
                
                if (&rdx_44[1] u> rcx_63[1])
                    (*(*rbx + 0x150))(rbx, r9_1 + 0x38, 1)
                else
                    *(r9_1 + 0x38) = *rdx_44
                    int64_t* rax_88 = rbx[1]
                    *rax_88 += 1
                
                int64_t* rcx_65 = rbx[1]
                int16_t* rdx_47 = r15_6 + ((rsi_3 + 0x14) << 1)
                int16_t* r8_11 = *rcx_65
                
                if (&r8_11[1] u<= rcx_65[1])
                    *rdx_47 = *r8_11
                    int64_t* rax_92 = rbx[1]
                    *rax_92 += 2
                else if ((*(rbx + 0x29) & 0x20) != 0)
                    sub_140b54000(rbx, rdx_47, zmm1)
                else
                    (*(*rbx + 0x150))(rbx, rdx_47, 2)
                
                rsi_3 = zx.q(rsi_3.d + 1)
            while (rsi_3.d u< *arg1)
        
        int32_t var_a0_1 = 1
        zmm1 = sub_140bcfa90(r15_6, rbx, arg3, zmm1, r12_2.b, 0)
        r12_2 += 1
        result = zx.q(i_4 + r12_2)
        r13_1 += 0x40
    while (result.d s< arg1[0xc])

return result
