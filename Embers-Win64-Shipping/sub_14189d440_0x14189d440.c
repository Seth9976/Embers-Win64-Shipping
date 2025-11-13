// 函数: sub_14189d440
// 地址: 0x14189d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
*arg1 = &data_142fe96a0
void*** result = arg1
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3] = arg2[2]
void* rax_3 = arg2[3]
arg1[4] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[5] = 0
int32_t i_5 = arg2[5].d
int64_t* r14 = arg2[4]
arg1[6].d = i_5

if (i_5 != 0)
    sub_1405a4be0(&arg1[5], i_5, 0)
    int64_t* rbx_1 = result[5]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = r14[1].d
        int64_t r13_1 = *r14
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r13_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        r14 = &r14[2]
        i = i_5
        i_5 -= 1
    while (i != 1)
    result = arg1
else
    *(arg1 + 0x34) = 0

result[7].d = arg2[6].d
*(result + 0x3c) = *(arg2 + 0x34)
result[8] = *arg3
result[0xa] = arg3[2]
result[0xc] = 0

if (result[0xa] != 0)
    void* rax_8 = arg3[4]
    void* rcx_3 = &arg3[6]
    
    if (rax_8 != 0)
        rcx_3 = rax_8
    
    (**rcx_3)(rcx_3)

int64_t* rdx_4 = result[1]
int32_t r12_1 = 2
int64_t var_58
int64_t var_48
int64_t* rcx_5
int32_t rbx_2

if (rdx_4 == 0)
    var_58 = 0
    rcx_5 = &var_58
    int64_t var_50_1 = 0
    rbx_2 = 2
else
    rcx_5 = sub_141839d20(&var_48, rdx_4, result[3])
    rbx_2 = 1

result[0x12] = 0
result[0x12] = *rcx_5
*rcx_5 = 0
result[0x13].d = rcx_5[1].d
*(result + 0x9c) = *(rcx_5 + 0xc)
rcx_5[1] = 0

if ((2 & rbx_2.b) != 0)
    int64_t rcx_6 = var_58
    rbx_2 &= 0xfffffffd
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

void* rcx_8 = data_143ddb400
int32_t rbx_3 = result[6].d
arg_10 = 6
int512_t zmm2
int512_t zmm3
zmm2, zmm3 = sub_140af3c10(rcx_8, u"Portal.BuildPatch", u"DeltaRetries", &arg_10, &data_143de5780)
int32_t rax_14 = arg_10

if (rax_14 s>= rbx_3)
    rbx_3 = 0x3e8
    
    if (rax_14 s< 0x3e8)
        rbx_3 = rax_14

*(result + 0xa4) = result[7].d
result[0x14].d = rbx_3
__builtin_memset(&result[0x15], 0, 0x14)
result[0x18] = 0
result[0x19].d = 0
arg_10 = rbx_3
void*** rax_16 = sub_1405978f0(0x28, &result[0x18])

if (rax_16 != 0)
    rax_16[1] = result
    *rax_16 = &data_142d3fe58
    rax_16[2] = sub_1418a63a0
    rax_16[4] = sub_140a387b0()
    *rax_16 = &data_142d3feb0

void*** rax_18
int512_t zmm1
rax_18, zmm1 = sub_14189c850()
result[0x1a] = &rax_18[2]
result[0x1b] = rax_18

if (rax_18 != 0)
    rax_18[1].d += 1
    
    if (rax_18 != 0)
        rax_18[1].d -= 1
        
        if (rax_18[1].d == 1)
            (**rax_18)(rax_18)
            int32_t rax_23 = *(rax_18 + 0xc)
            *(rax_18 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*rax_18)[1](rax_18, 1)

result[0x1c].b = 1
result[0x1d] = result[0x1a]
uint64_t rax_26 = result[0x1b]
result[0x1e] = rax_26

if (rax_26 != 0)
    *(rax_26 + 8) += 1

result[0x1f].d = 0
int64_t* r13_2 = result[1]
result[0x20] = 0
int32_t rsi_2 = *(result + 0x3c)
int64_t* arg_18
arg_18.d = rsi_2
void*** arg_8

if (r13_2 != 0)
    int64_t* rcx_14 = result[3]
    int16_t** rax_31 = (*(*rcx_14 + 0x130))(rcx_14)
    int64_t rdx_7 = *r13_2
    int16_t** rax_32 = (*(rdx_7 + 0x130))(r13_2, rdx_7)
    int16_t* const rcx_16 = &data_142d40450
    int16_t* rdx_8
    
    if (rax_31[1].d == 0)
        rdx_8 = &data_142d40450
    else
        rdx_8 = *rax_31
    
    if (rax_32[1].d != 0)
        rcx_16 = *rax_32
    
    arg_8.b = sub_140a54510(rcx_16, rdx_8).d == 0
    
    if (result[1] == 0)
    label_14189d788:
        rax_26.b = 1
    else
        int64_t* rcx_17 = result[3]
        int64_t* var_98
        (*(*rcx_17 + 0x88))(rcx_17, &var_98)
        int64_t* rbx_8 = var_98
        int32_t i_6
        int32_t i_3 = i_6
        void* r14_4 = &rbx_8[sx.q(i_3) * 2]
        
        if (rbx_8 != r14_4)
            while (true)
                int64_t* rcx_18 = result[1]
                void* rax_35 = (*(*rcx_18 + 0x1c8))(rcx_18, rbx_8)
                int64_t* rcx_19 = result[3]
                int64_t r8_3 = *rcx_19
                rax_26 = (*(r8_3 + 0x1c8))(rcx_19, rbx_8, r8_3)
                
                if (rax_35 != 0 && *(rax_35 + 0x20) == *(rax_26 + 0x20)
                        && *(rax_35 + 0x28) == *(rax_26 + 0x28)
                        && *(rax_35 + 0x30) == *(rax_26 + 0x30))
                    rbx_8 = &rbx_8[2]
                    
                    if (rbx_8 != r14_4)
                        continue
                    
                    i_3 = i_6
                    rbx_8 = var_98
                    break
                
                int32_t i_4 = i_6
                int64_t* rbx_9 = var_98
                
                if (i_4 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_25 = *rbx_9
                        
                        if (rcx_25 != 0)
                            rax_26, zmm1 = sub_140a74f90(rcx_25)
                        
                        rbx_9 = &rbx_9[2]
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    rbx_9 = var_98
                
                if (rbx_9 != 0)
                    rax_26, zmm1 = sub_140a74f90(rbx_9)
                
                rsi_2 = arg_18.d
                goto label_14189d788_1
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                int64_t rcx_23 = *rbx_8
                
                if (rcx_23 != 0)
                    rax_26, zmm1 = sub_140a74f90(rcx_23)
                
                rbx_8 = &rbx_8[2]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            rbx_8 = var_98
        
        if (rbx_8 != 0)
            rax_26, zmm1 = sub_140a74f90(rbx_8)
        
        rsi_2 = arg_18.d
        rax_26.b = 0
else
    arg_8.b = r13_2.b
label_14189d788_1:
    rax_26.b = 1

if (r13_2 == 0 || rsi_2 == 3 || arg_8.b != 0 || rax_26.b == 0)
    *(result + 0xa4) = 2
label_14189d9da:
    int64_t var_68 = result[3]
    int64_t* rax_38 = result[4]
    
    if (rax_38 != 0)
        rax_38[1].d += 1
    
    sub_1418acac0(result, &var_68, zmm2, zmm3, zmm1)
    
    if (rax_38 != 0)
        rax_38[1].d -= 1
        
        if (rax_38[1].d == 1)
            (**rax_38)(rax_38)
            int32_t r15 = *(rax_38 + 0xc)
            *(rax_38 + 0xc) -= 1
            
            if (r15 == 1)
                (*(*rax_38 + 8))(rax_38, zx.q(r15))
else
    if (*(result + 0xa4) == 2)
        goto label_14189d9da
    
    int32_t rax_27 = result[0x13].d
    int64_t* rcx_13 = &result[5][sx.q(result[0x15].d) * 2]
    int32_t rsi_3 = rax_27 - 1
    
    if (rax_27 == 0)
        rsi_3 = 0
    
    if (rcx_13[1].d != 0 || rsi_3 == 0xffffffff)
        r12_1 = 1
    
    int64_t var_88 = 0
    int32_t rax_29 = rsi_3 + r12_1
    int32_t rbx_6 = rcx_13[1].d
    int64_t r14_1 = *rcx_13
    int32_t var_80_1 = rbx_6
    
    if (rbx_6 != 0 || rax_29 != 0)
        sub_1405a4c70(&var_88, rbx_6 + rax_29, 0)
        memcpy(var_88, r14_1, rbx_6 * 2)
    else
        int32_t var_7c_1 = 0
    
    sub_140a2cf70(&var_88, result[0x12], rsi_3)
    int64_t* rcx_30 = result[8]
    (*(*rcx_30 + 8))(rcx_30, &var_88, &result[0x18], &result[0x16])
    int64_t rcx_31 = var_88
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)

return result
