// 函数: sub_140f8fc70
// 地址: 0x140f8fc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = arg1
int64_t* result_12 = arg1
int32_t rdx
rdx.b = arg1[0xf3].b == 1
int32_t result_22 = 0
int32_t result_24 = rdx + *(arg1 + 0x794)

if (rdx + *(arg1 + 0x794) s>= 0)
    result_22 = result_24

int32_t result_19 = result_22
int64_t* result_1 = arg1[0xf2].d.q
char var_98 = arg1[0xf3].b

if (&result_1 != &arg1[0xee])
    arg1[0xee] = result_1
    arg1[0xef].d = var_98.d
    *(arg1 + 0x77c) = 1

int64_t* rcx_1 = *result_12
(*(*rcx_1 + 0x58))(rcx_1, result_24)
void* r14 = result_12[9]
void* r15 = &result_12[0xeb]
int32_t* rbx = *r15
int64_t rsi = sx.q(*(r15 + 8))
void* rdi_2 = &rbx[rsi * 8]

if (rbx != rdi_2)
    do
        int32_t rax_5 = *rbx
        
        if (rax_5 s>= 0 && rax_5 s< *(r14 + 0x20))
            sub_140f14c50(result_12[9], rbx)
        
        rbx = &rbx[8]
    while (rbx != rdi_2)
    
    rsi = zx.q(result_12[0xec].d)

if (rsi.d != 0)
    int64_t* rdi_4 = *r15 + 0x18
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_4
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_4 = &rdi_4[4]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

*(r15 + 8) = 0

if (*(r15 + 0xc) != 0)
    sub_1405a51b0(r15, 0)

int32_t result_15 = result_12[0xf2].d
void* rdi_5 = &result_12[0xf0]
int32_t rcx_6 = 0
int32_t result_4 = result_15
bool cond:1 = result_12[0xf3].b == 1
int32_t result_18 = result_15
int32_t rax_8
rax_8.b = cond:1

if (rax_8 + *(result_12 + 0x794) s>= 0)
    rcx_6 = rax_8 + *(result_12 + 0x794)

int32_t var_74 = rcx_6

if (result_12[0xf1].b == 0)
    rdi_5 = &result_18

int64_t* result_11 = *rdi_5
int64_t* rcx_7 = *result_12
result_1 = result_11
int64_t* var_58
int32_t arg_10
char arg_18
arg_10.b = *(sub_140e195e0(*(*(*rcx_7 + 0x80))(rcx_7, &var_58), &arg_18) + 1)

if (arg2 != 0)
    arg2 = 0

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp8_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

int64_t* rcx_11 = result_12[0xdf]
char rax_17 = (*(*rcx_11 + 8))(rcx_11)

if (result_11.d == result_15)
    arg_18 = 0

if (result_11.d != result_15 || result_11:4.d != rcx_6)
    arg_18 = 1

char rax_18 = sub_140ab3dc0(&result_12[0xbf])
int64_t* rcx_14 = *result_12
int64_t rdx_4 = *rcx_14
int64_t* result
int32_t r8
result, r8 = (*rdx_4)(rcx_14, rdx_4)
char var_a8 = result.b
int64_t* var_80
char r10_3

if (rax_18 != 0)
    r10_3 = arg_10.b
else
    int64_t* rax_19
    rax_19, r8 = sub_140ac6680(&result_12[0xbf])
    int32_t i_1 = 0
    int32_t i_3 = 0
    int32_t rcx_16 = rax_19[1].d
    int32_t rsi_2 = rcx_16 - 1
    
    if (rcx_16 == 0)
        rsi_2 = 0
    
    int64_t* rax_21 = result_12[9] + 0x18
    int32_t var_64_1 = rsi_2
    var_58 = rax_21
    
    if (rax_21[1].d s> 0)
        int64_t* r14_2 = nullptr
        var_80 = nullptr
        
        do
            int32_t r13 = 0
            int64_t* r10_2 = *rax_21 + r14_2
            int64_t* var_60_1 = r10_2
            int32_t rcx_17 = *(*r10_2 + 8)
            int32_t rax_23 = rcx_17 - 1
            
            if (rcx_17 == 0)
                rax_23 = 0
            
            if (rax_23 s> 0)
                do
                    int16_t* rdx_5
                    
                    if (rax_19[1].d == 0)
                        rdx_5 = &data_142d40450
                    else
                        rdx_5 = *rax_19
                    
                    int32_t rax_24
                    rax_24, r8 = sub_140a23cf0(*r10_2, rdx_5, result_12[0xc2].d, 0, r13)
                    
                    if (rax_24 == 0xffffffff)
                        break
                    
                    int64_t* rbx_4 = result_12[0xea]
                    r13 = rsi_2 + rax_24
                    int64_t r14_3 = result_12[0xe9]
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 2
                    
                    int64_t* var_88_1
                    var_88_1.d = rax_24
                    var_88_1:4.d = r13
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                    
                    int64_t rsi_3 = sx.q(*(r15 + 8))
                    int32_t rax_25 = (rsi_3 + 1).d
                    *(r15 + 8) = rax_25
                    
                    if (rax_25 s> *(r15 + 0xc))
                        r8 = sub_1405c4e40(r15)
                    
                    int32_t* rcx_22 = (rsi_3 << 5) + *r15
                    *rcx_22 = i_3
                    *(rcx_22 + 4) = var_88_1
                    rcx_22[3] = 0xfffffff7
                    *(rcx_22 + 0x10) = r14_3
                    *(rcx_22 + 0x18) = rbx_4
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                r8 = (**rbx_4)(rbx_4)
                                int32_t temp14_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp14_1 == 1)
                                    r8 = (*(*rbx_4 + 8))(rbx_4, 1)
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d -= 1
                                
                                if (rbx_4[1].d == 1)
                                    r8 = (**rbx_4)(rbx_4)
                                    int32_t temp21_1 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (temp21_1 == 1)
                                        r8 = (*(*rbx_4 + 8))(rbx_4, 1)
                                
                                rbx_4[1].d -= 1
                                
                                if (rbx_4[1].d == 1)
                                    r8 = (**rbx_4)(rbx_4)
                                    int32_t temp23_1 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (temp23_1 == 1)
                                        r8 = (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    r10_2 = var_60_1
                    rsi_2 = var_64_1
                while (r13 s< rax_23)
                
                i_1 = i_3
                r14_2 = var_80
            
            rax_21 = var_58
            i_1 += 1
            r14_2 = &r14_2[0xe]
            i_3 = i_1
            var_80 = r14_2
        while (i_1 s< rax_21[1].d)
        
        result_11 = result_1
        result_15 = result_4
    
    result = result_12[0xe9]
    r10_3 = arg_10.b
    result[1].b = r10_3

char arg_20
uint32_t arg_24

if (rax_17 != 0)
    void* rcx_29 = result_12[9]
    result_1 = nullptr
    var_98.q = 0
    sub_140f048e0(rcx_29, &result_1, r8)
    void* rax_34 = result_12[0xdf]
    int32_t r8_2 = *(rax_34 + 0x5c)
    int32_t rbx_6 = *(rax_34 + 0x60) + r8_2
    sub_140f08ab0(&result_1, &result_2, r8_2)
    int32_t rdx_10
    result, rdx_10 = sub_140f08ab0(&result_1, &arg_18, rbx_6)
    int32_t result_10 = result_2.d
    
    if (result_10 == arg_18.d)
        int32_t rcx_32 = result_2:4.d
        arg_20.d = rcx_32
        arg_24 = arg3
        
        if (result_10 != result_15 || rcx_6 s< rcx_32 || rcx_6 s> arg3)
            rdx_10.b = 0
        else
            rdx_10.b = 1
        
        result = zx.q(arg3 - rcx_32)
        
        if (result.d s> 0 && rdx_10.b != 0)
            int64_t* rdi_7 = result_12[0xe6]
            int64_t r14_4 = result_12[0xe5]
            
            if (rdi_7 != 0)
                rdi_7[1].d += 1
                result_10 = result_2.d
                
                if (rdi_7 != 0)
                    rdi_7[1].d += 1
                    result_10 = result_2.d
                    
                    if (rdi_7 != 0)
                        rdi_7[1].d += 1
            
            int64_t rsi_4 = sx.q(*(r15 + 8))
            int32_t rax_36 = (rsi_4 + 1).d
            *(r15 + 8) = rax_36
            
            if (rax_36 s> *(r15 + 0xc))
                sub_1405c4e40(r15)
            
            result = arg_20.q
            int32_t* rcx_36 = (rsi_4 << 5) + *r15
            *rcx_36 = result_10
            *(rcx_36 + 4) = result
            rcx_36[3] = 0xa
            *(rcx_36 + 0x10) = r14_4
            *(rcx_36 + 0x18) = rdi_7
            
            if (rdi_7 != 0)
                rdi_7[1].d += 1
                
                if (rdi_7 != 0)
                    rdi_7[1].d -= 1
                    
                    if (rdi_7[1].d == 1)
                        result = (**rdi_7)(rdi_7)
                        int32_t temp10_1 = *(rdi_7 + 0xc)
                        *(rdi_7 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            result = (*(*rdi_7 + 8))(rdi_7, 1)
                    
                    if (rdi_7 != 0)
                        rdi_7[1].d -= 1
                        
                        if (rdi_7[1].d == 1)
                            result = (**rdi_7)(rdi_7)
                            int32_t temp13_1 = *(rdi_7 + 0xc)
                            *(rdi_7 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                result = (*(*rdi_7 + 8))(rdi_7, 1)
                        
                        if (rdi_7 != 0)
                            rdi_7[1].d -= 1
                            
                            if (rdi_7[1].d == 1)
                                result = (**rdi_7)(rdi_7)
                                int32_t temp19_1 = *(rdi_7 + 0xc)
                                *(rdi_7 + 0xc) -= 1
                                
                                if (temp19_1 == 1)
                                    result = (*(*rdi_7 + 8))(rdi_7, 1)
    
    int64_t* result_8 = result_1
    
    if (result_8 != 0)
        result = sub_140a74f90(result_8)
else if (arg_18 != 0)
    int32_t result_16 = result_4
    int64_t rbx_7 = result_18.q
    bool cond:5_1 = result_11.d s< result_4
    
    if (result_11.d == result_4)
        cond:5_1 = (result_11 u>> 0x20).d s< (rbx_7 u>> 0x20).d
    
    if (cond:5_1)
        result_16 = result_11.d
    
    uint64_t r8_5 = rbx_7 u>> 0x20
    
    if (result_11.d == result_4)
        uint32_t rax_46 = (result_11 u>> 0x20).d
        
        if (rax_46 s< r8_5.d)
            r8_5 = zx.q(rax_46)
    else if (result_11.d s< result_4)
        r8_5 = zx.q((result_11 u>> 0x20).d)
    
    result_18.q = r8_5
    int32_t result_3 = result_4
    bool cond:7_1 = result_11.d s> result_4
    
    if (result_11.d == result_4)
        cond:7_1 = (result_11 u>> 0x20).d s> (rbx_7 u>> 0x20).d
    
    if (cond:7_1)
        result_3 = result_11.d
    
    uint32_t rbx_8 = (rbx_7 u>> 0x20).d
    
    if (result_11.d == result_4)
        uint32_t rdi_8 = (result_11 u>> 0x20).d
        
        if (rdi_8 s> rbx_8)
            rbx_8 = rdi_8
    else if (result_11.d s> result_4)
        rbx_8 = (result_11 u>> 0x20).d
    
    *(result_12[0xe7] + 8) = r10_3
    
    if (result_16 != result_3)
        int64_t result_20 = sx.q(result_16)
        int64_t* r9_3 = result_12[9] + 0x18
        result = sx.q(result_3)
        int64_t result_23 = result_20
        var_58 = r9_3
        int64_t result_21 = result_20
        result_1 = result
        
        if (result_20 s<= result)
            int64_t rcx_59 = result_20 * 0x70
            int64_t var_88_2 = rcx_59
            
            do
                int64_t* rax_66
                int64_t rsi_6
                int64_t* rdi_10
                int64_t r14_5
                
                if (result_20 == result_23)
                    arg_18.d = r8_5.d
                    int32_t rdx_13 = *(*(*r9_3 + rcx_59) + 8)
                    uint32_t rax_60 = rdx_13 - 1
                    
                    if (rdx_13 == 0)
                        rax_60 = 0
                    
                    arg3 = rax_60
                    int64_t* result_5 = result_2
                    rdi_10 = result_5[0xe8]
                    r14_5 = result_5[0xe7]
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d += 2
                        
                        if (rdi_10 != 0)
                            rdi_10[1].d += 1
                    
                    rsi_6 = sx.q(*(r15 + 8))
                    int32_t rax_61 = (rsi_6 + 1).d
                    *(r15 + 8) = rax_61
                    
                    if (rax_61 s> *(r15 + 0xc))
                        sub_1405c4e40(r15)
                    
                    rax_66 = arg_18.q
                else if (result_20 != result)
                    int32_t rdx_16 = *(*(*r9_3 + rcx_59) + 8)
                    var_80.d = 0
                    int32_t rax_64 = rdx_16 - 1
                    
                    if (rdx_16 == 0)
                        rax_64 = 0
                    
                    var_80:4.d = rax_64
                    int64_t* result_7 = result_2
                    rdi_10 = result_7[0xe8]
                    r14_5 = result_7[0xe7]
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d += 2
                        
                        if (rdi_10 != 0)
                            rdi_10[1].d += 1
                    
                    rsi_6 = sx.q(*(r15 + 8))
                    int32_t rax_65 = (rsi_6 + 1).d
                    *(r15 + 8) = rax_65
                    
                    if (rax_65 s> *(r15 + 0xc))
                        sub_1405c4e40(r15)
                    
                    rax_66 = var_80
                else
                    arg_24 = rbx_8
                    arg_20.d = 0
                    int64_t* result_6 = result_2
                    rdi_10 = result_6[0xe8]
                    r14_5 = result_6[0xe7]
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d += 2
                        
                        if (rdi_10 != 0)
                            rdi_10[1].d += 1
                    
                    rsi_6 = sx.q(*(r15 + 8))
                    int32_t rax_62 = (rsi_6 + 1).d
                    *(r15 + 8) = rax_62
                    
                    if (rax_62 s> *(r15 + 0xc))
                        sub_1405c4e40(r15)
                    
                    rax_66 = arg_20.q
                
                int32_t* rcx_67 = (rsi_6 << 5) + *r15
                *rcx_67 = result_16
                *(rcx_67 + 4) = rax_66
                rcx_67[3] = 0xfffffff6
                *(rcx_67 + 0x10) = r14_5
                *(rcx_67 + 0x18) = rdi_10
                
                if (rdi_10 != 0)
                    rdi_10[1].d += 1
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d -= 1
                        
                        if (rdi_10[1].d == 1)
                            (**rdi_10)(rdi_10)
                            int32_t temp33_1 = *(rdi_10 + 0xc)
                            *(rdi_10 + 0xc) -= 1
                            
                            if (temp33_1 == 1)
                                (*(*rdi_10 + 8))(rdi_10, 1)
                        
                        if (rdi_10 != 0)
                            rdi_10[1].d -= 1
                            
                            if (rdi_10[1].d == 1)
                                (**rdi_10)(rdi_10)
                                int32_t temp36_1 = *(rdi_10 + 0xc)
                                *(rdi_10 + 0xc) -= 1
                                
                                if (temp36_1 == 1)
                                    (*(*rdi_10 + 8))(rdi_10, 1)
                            
                            rdi_10[1].d -= 1
                            
                            if (rdi_10[1].d == 1)
                                (**rdi_10)(rdi_10)
                                int32_t temp37_1 = *(rdi_10 + 0xc)
                                *(rdi_10 + 0xc) -= 1
                                
                                if (temp37_1 == 1)
                                    (*(*rdi_10 + 8))(rdi_10, 1)
                
                result_16 += 1
                result = result_1
                rcx_59 = var_88_2 + 0x70
                r8_5 = result_18.q
                result_20 += 1
                r9_3 = var_58
                result_23 = result_21
                var_88_2 = rcx_59
            while (result_20 s<= result)
        
        result_12 = result_2
    else
        int64_t rsi_5 = result_12[0xe7]
        result_2:4.d = rbx_8
        int64_t* rbx_9 = result_12[0xe8]
        result_2.d = r8_5.d
        
        if (rbx_9 != 0)
            rbx_9[1].d += 1
            
            if (rbx_9 != 0)
                rbx_9[1].d += 1
                
                if (rbx_9 != 0)
                    rbx_9[1].d += 1
        
        int64_t rdi_9 = sx.q(*(r15 + 8))
        int32_t rax_52 = (rdi_9 + 1).d
        *(r15 + 8) = rax_52
        
        if (rax_52 s> *(r15 + 0xc))
            sub_1405c4e40(r15)
        
        result = result_2
        int32_t* rcx_52 = (rdi_9 << 5) + *r15
        *rcx_52 = result_16
        *(rcx_52 + 4) = result
        rcx_52[3] = 0xfffffff6
        *(rcx_52 + 0x10) = rsi_5
        *(rcx_52 + 0x18) = rbx_9
        
        if (rbx_9 != 0)
            rbx_9[1].d += 1
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    result = (**rbx_9)(rbx_9)
                    int32_t temp27_1 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (temp27_1 == 1)
                        result = (*(*rbx_9 + 8))(rbx_9, 1)
                
                if (rbx_9 != 0)
                    rbx_9[1].d -= 1
                    
                    if (rbx_9[1].d == 1)
                        result = (**rbx_9)(rbx_9)
                        int32_t temp29_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp29_1 == 1)
                            result = (*(*rbx_9 + 8))(rbx_9, 1)
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d -= 1
                        
                        if (rbx_9[1].d == 1)
                            result = (**rbx_9)(rbx_9)
                            int32_t temp32_1 = *(rbx_9 + 0xc)
                            *(rbx_9 + 0xc) -= 1
                            
                            if (temp32_1 == 1)
                                result = (*(*rbx_9 + 8))(rbx_9, 1)

if (arg_10.b != 0 && var_a8 == 0)
    result = result_12[0xf2]
    result_2 = result
    
    if (result.d s>= 0)
        void* rcx_75 = result_12[9]
        
        if (result.d s< *(rcx_75 + 0x20))
            sub_140f012d0(rcx_75, &result_1, &result_2)
            int64_t* rbx_10 = result_12[0xe4]
            int64_t r14_6 = result_12[0xe3]
            
            if (rbx_10 != 0)
                rbx_10[1].d += 1
                
                if (rbx_10 != 0)
                    rbx_10[1].d += 1
            
            int32_t r8_7 = result_1.d
            int32_t r9_4 = var_98.d
            int32_t result_17
            int32_t result_13 = result_17
            int32_t result_14 = result_13
            int32_t result_9 = result_1.d
            bool cond:8_1 = r8_7 s> r9_4
            
            if (r8_7 == r9_4)
                cond:8_1 = result_9 s> result_13
            
            if (cond:8_1)
                result_14 = result_9
            
            bool cond:9_1 = r8_7 s< r9_4
            
            if (r8_7 == r9_4)
                cond:9_1 = result_9 s< result_13
            
            int32_t rsi_7 = result_2.d
            
            if (cond:9_1)
                result_13 = result_9
            
            result_19 = result_14
            
            if (rbx_10 != 0)
                rbx_10[1].d += 1
            
            int64_t rdi_11 = sx.q(*(r15 + 8))
            int32_t rax_73 = (rdi_11 + 1).d
            *(r15 + 8) = rax_73
            
            if (rax_73 s> *(r15 + 0xc))
                sub_1405c4e40(r15)
            
            result = result_13.q
            int32_t* rcx_79 = (rdi_11 << 5) + *r15
            *rcx_79 = rsi_7
            *(rcx_79 + 4) = result
            rcx_79[3] = 0xb
            *(rcx_79 + 0x10) = r14_6
            *(rcx_79 + 0x18) = rbx_10
            
            if (rbx_10 != 0)
                result = zx.q(rbx_10[1].d)
                rbx_10[1].d = result.d
                
                if (result.d == 0)
                    result = (**rbx_10)(rbx_10)
                    int32_t temp18_1 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        result = (*(*rbx_10 + 8))(rbx_10, 1)
                
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    result = (**rbx_10)(rbx_10)
                    int32_t temp22_1 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        result = (*(*rbx_10 + 8))(rbx_10, 1)
                
                if (rbx_10 != 0)
                    rbx_10[1].d -= 1
                    
                    if (rbx_10[1].d == 1)
                        result = (**rbx_10)(rbx_10)
                        int32_t temp26_1 = *(rbx_10 + 0xc)
                        *(rbx_10 + 0xc) -= 1
                        
                        if (temp26_1 == 1)
                            result = (*(*rbx_10 + 8))(rbx_10, 1)

int32_t* i_2 = *r15

for (void* rdi_14 = &i_2[sx.q(*(r15 + 8)) * 8]; i_2 != rdi_14; i_2 = &i_2[8])
    result = sub_140ee7a30(result_12[9], i_2)

return result
