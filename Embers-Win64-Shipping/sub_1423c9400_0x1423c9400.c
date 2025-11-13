// 函数: sub_1423c9400
// 地址: 0x1423c9400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* rbx = arg1
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_1423c1c90()
int64_t* r10 = rbx[1]
int32_t* rdx = *r10

if (&rdx[1] u<= r10[1])
    *arg2 = *rdx
    int64_t* rcx_2 = rbx[1]
    *rcx_2 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, arg2, zmm1)
else
    (*(*rbx + 0x150))(rbx, arg2, 4)

int64_t* rcx_4 = rbx[1]
int32_t* result_8 = *rcx_4

if (&result_8[1] u<= rcx_4[1])
    arg2[1] = *result_8
    int64_t* rax_4 = rbx[1]
    *rax_4 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &arg2[1], zmm1)
else
    (*(*rbx + 0x150))(rbx, &arg2[1], 4)

int64_t* rcx_6 = rbx[1]
int32_t* rdx_3 = *rcx_6

if (&rdx_3[1] u<= rcx_6[1])
    arg2[2] = *rdx_3
    int64_t* rax_8 = rbx[1]
    *rax_8 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &arg2[2], zmm1)
else
    (*(*rbx + 0x150))(rbx, &arg2[2], 4)

char rax_10 = rbx[5].b
int64_t* rdi = nullptr
int32_t i_8
int16_t* result_1
int32_t i_9

if ((rax_10 & 1) != 0)
    result_1 = nullptr
    i_9 = 0
    sub_140a1d9d0(rbx, &result_1, zmm1)
    int16_t* const result_3 = &data_142d40450
    
    if (i_9 != 0)
        result_3 = result_1
    
    int32_t rax_12
    rax_12, result_8, zmm1 = sub_140be0d00(rax, *sub_140b58260(&i_8, result_3, 1), 0)
    arg2[3] = rax_12
    goto label_1423c9585

if ((rax_10 & 2) != 0)
    result_8, zmm1 = sub_140a1d9d0(rbx, &result_1, 
        sub_140b5e690(sub_140bdece0(rax, &i_8, sx.q(arg2[3])), &result_1))
label_1423c9585:
    int16_t* result_2 = result_1
    
    if (result_2 != 0)
        result_8, zmm1 = sub_140a74f90(result_2)

if (((arg2[2] u>> 0x1e).b & 1) != 0)
    int64_t* rcx_14 = rbx[1]
    int32_t* rdx_10 = *rcx_14
    
    if (&rdx_10[1] u<= rcx_14[1])
        arg2[4] = *rdx_10
        int64_t* rax_18 = rbx[1]
        *rax_18 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &arg2[4], zmm1)
    else
        (*(*rbx + 0x150))(rbx, &arg2[4], 4)
    
    int32_t** rcx_16 = rbx[1]
    result_8 = *rcx_16
    
    if (&result_8[1] u<= rcx_16[1])
        arg2[5] = *result_8
        int64_t* rax_22 = rbx[1]
        *rax_22 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &arg2[5], zmm1)
    else
        (*(*rbx + 0x150))(rbx, &arg2[5], 4)

void* rsi
rsi.b = 0
int32_t arg_10 = arg2[8]
char rax_25 = rbx[5].b
int32_t var_68 = 0
char arg_20 = 0

if ((rax_25 & 2) != 0)
    rsi.b = *(arg2 + 0x28) != 0
    arg_20 = rsi.b

if (arg4 != 0)
    int64_t* rcx_18 = rbx[1]
    int32_t* rdx_13 = *rcx_18
    
    if (&rdx_13[1] u> rcx_18[1])
        int32_t* rdx_14 = &var_68
        
        if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, rdx_14, zmm1)
        else
            (*(*rbx + 0x150))(rbx, rdx_14, 4)
    else
        var_68 = *rdx_13
        *rcx_18 += 4
    
    rax_25 = rbx[5].b
    
    if ((rax_25 & 1) != 0)
        var_68 = 0

int16_t* result_7 = nullptr
result_1 = nullptr
i_8 = 0
i_9 = 0

if (arg4 != 0 && (rax_25 & 2) != 0)
    if (rsi.b != 0)
        int64_t r15_2 = sx.q(*(*(arg2 + 0x28) + 0x30))
        i_8 = r15_2.d
        i_9 = r15_2.d
        
        if (r15_2.d s> 0)
            sub_1405a4cf0(&result_1)
            i_8 = i_9
        
        memset(result_1, 0, r15_2 << 2)
        int32_t r12_1 = 0
        
        if (r15_2.d s> 0)
            int16_t* result_4 = result_1
            int64_t rsi_3 = 0
            int64_t r15_3 = 0
            
            do
                *(result_4 + (rsi_3 << 2)) = *(*(*(arg2 + 0x28) + 0x28) + r15_3 + 0x18)
                sub_140bd0790((sx.q(r12_1) << 6) + *(*(arg2 + 0x28) + 0x28), 0x400)
                r12_1 += 1
                r15_3 += 0x40
                rsi_3 += 1
            while (rsi_3 s< r15_2)
            
            rbx = arg_8
    else
        int64_t r13_1 = sx.q(arg2[8])
        i_8 = r13_1.d
        i_9 = r13_1.d
        
        if (r13_1.d s> 0)
            sub_1405a4cf0(&result_1)
            result_7 = result_1
            i_8 = i_9
        
        memset(result_7, 0, r13_1 << 2)
        int32_t i = 0
        
        if (arg2[8] s> 0)
            int64_t rdx_16 = 0
            result_8 = result_7
            
            do
                rdx_16 += 8
                i += 1
                *result_8 = *(*(rdx_16 + *(arg2 + 0x18) - 8) + 0x28)
                result_8 = &result_8[1]
            while (i s< arg2[8])
        
        int32_t rsi_1 = 0
        int32_t rcx_24
        
        if (arg5 == 0)
            rcx_24 = arg_10
        else
            int32_t rax_32 = sub_1423c1b40(arg2)
            rcx_24 = arg_10
            rsi_1 = rcx_24 - rax_32
            
            if (rsi_1 s<= 0)
                rsi_1 = 0
        
        int32_t i_1 = 0
        
        if (rcx_24 s> 0)
            while (i_1 s< 0)
                sub_140bd0790(*(*(arg2 + 0x18) + (sx.q(var_68 + i_1) << 3)) + 0x10, 0xc00)
                rcx_24 = arg_10
                i_1 += 1
                
                if (i_1 s>= rcx_24)
                    break
        
        int32_t r15_1 = 0
        
        if (rcx_24 s> 0)
            while (r15_1 s< rsi_1)
                sub_140bd0790(*(*(arg2 + 0x18) + (sx.q(var_68 + r15_1) << 3)) + 0x10, 0x400)
                rcx_24 = arg_10
                r15_1 += 1
                
                if (r15_1 s>= rcx_24)
                    break
        
        if (rsi_1 s< rcx_24)
            do
                sub_140bd0790(*(*(arg2 + 0x18) + (sx.q(var_68 + rsi_1) << 3)) + 0x10, 0x48)
                rsi_1 += 1
            while (rsi_1 s< arg_10)

int64_t* rcx_43 = rbx[1]
int32_t* rdx_21 = *rcx_43

if (&rdx_21[1] u> rcx_43[1])
    int32_t* rdx_22 = &arg_10
    
    if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, rdx_22, zmm1)
    else
        (*(*rbx + 0x150))(rbx, rdx_22, 4)
else
    arg_10 = *rdx_21
    *rcx_43 += 4

int32_t rax_44

if ((rbx[5].b & 1) == 0)
    rax_44 = arg_10
else
    result_8, zmm1 = sub_1423bf9a0(&arg2[6], arg_10)
    rax_44 = arg_10
    int32_t r12_2 = 0
    
    if (rax_44 s> 0)
        do
            int64_t* rax_45
            rax_45, result_8 = j_sub_140a82f30(0x30)
            int64_t* rsi_4 = rax_45
            
            if (rax_45 == 0)
                rsi_4 = nullptr
            else
                *rax_45 = 0
                rax_45[1].d = 0
                rax_45[4] = 0
                rax_45[5].d = 0
                *(rax_45 + 0x2c) = 0
                rax_45[2] = 0
                rax_45[3].d = 0xffffffff
            
            int64_t r13_3 = sx.q(arg2[8])
            int32_t rax_46 = (r13_3 + 1).d
            arg2[8] = rax_46
            
            if (rax_46 s> arg2[9])
                sub_140638870(&arg2[6])
            
            r12_2 += 1
            *(*(arg2 + 0x18) + (r13_3 << 3)) = rsi_4
            rax_44 = arg_10
        while (r12_2 s< rax_44)

int32_t r15_4 = 0

if (rax_44 s> 0)
    do
        int64_t* rcx_49 = rbx[1]
        int32_t* rsi_5 = *(*(arg2 + 0x18) + (sx.q(var_68 + r15_4) << 3))
        int64_t rax_50 = *rcx_49 + 4
        
        if (rax_50 u> rcx_49[1])
            int32_t rax_51
            rax_51.b = rbx[0xe] != 0
            arg_8.d = rax_51
            (*(*rbx + 0x150))(rbx, &arg_8, 4)
        else
            *rcx_49 = rax_50
        
        int32_t var_70_1 = 1
        zmm1 = sub_140bcfa90(&rsi_5[4], rbx, arg3, zmm1, r15_4.b, 0)
        int64_t* rcx_52 = rbx[1]
        int32_t* rdx_28 = *rcx_52
        
        if (&rdx_28[1] u<= rcx_52[1])
            *rsi_5 = *rdx_28
            int64_t* rax_55 = rbx[1]
            *rax_55 += 4
        else if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, rsi_5, zmm1)
        else
            (*(*rbx + 0x150))(rbx, rsi_5, 4)
        
        int64_t* rcx_54 = rbx[1]
        int32_t* r8_5 = *rcx_54
        
        if (&r8_5[1] u<= rcx_54[1])
            rsi_5[1] = *r8_5
            int64_t* rax_59 = rbx[1]
            *rax_59 += 4
        else if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, &rsi_5[1], zmm1)
        else
            (*(*rbx + 0x150))(rbx, &rsi_5[1], 4)
        
        int32_t** rcx_56 = rbx[1]
        result_8 = *rcx_56
        
        if (&result_8[1] u<= rcx_56[1])
            rsi_5[2] = *result_8
            int64_t* rax_63 = rbx[1]
            *rax_63 += 4
        else if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, &rsi_5[2], zmm1)
        else
            (*(*rbx + 0x150))(rbx, &rsi_5[2], 4)
        
        r15_4 += 1
    while (r15_4 s< arg_10)

int64_t* rdx_32 = rbx[1]
int64_t rcx_58 = *rdx_32
bool cond:9

if (rcx_58 + 4 u> rdx_32[1])
    arg_20.d = zx.d(arg_20)
    (*(*rbx + 0x150))(rbx, &arg_20, 4)
    cond:9 = arg_20.d != 0
else
    cond:9 = *rcx_58 != 0
    *rdx_32 = rcx_58 + 4

result_8.b = cond:9

if (result_8.b == 0)
    int32_t i_7 = i_8
    
    if (i_7 s> 0)
        int16_t* result_6 = result_1
        uint64_t i_5 = zx.q(i_7)
        uint64_t i_2
        
        do
            sub_140a53830(*(rdi + *(arg2 + 0x18)) + 0x10, *result_6)
            result_6 = &result_6[2]
            rdi = &rdi[1]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
else
    if ((rbx[5].b & 1) != 0 && *(arg2 + 0x28) == 0)
        int64_t rax_69 = j_sub_140a82f30(0x68)
        
        if (rax_69 == 0)
            rax_69 = 0
        else
            __builtin_memset(rax_69, 0, 0x68)
        
        *(arg2 + 0x28) = rax_69
    
    sub_1424435f0(*(arg2 + 0x28), rbx, arg3, var_68, zmm1)
    int32_t i_6 = i_8
    
    if (i_6 s> 0)
        int16_t* result_5 = result_1
        uint64_t i_4 = zx.q(i_6)
        uint64_t i_3
        
        do
            sub_140a53830(*(*(arg2 + 0x28) + 0x28) + rdi, *result_5)
            rdi = &rdi[8]
            result_5 = &result_5[2]
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

int16_t* result = result_1

if (result == 0)
    return result

return sub_140a74f90(result)
