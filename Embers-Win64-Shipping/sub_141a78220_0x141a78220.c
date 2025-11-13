// 函数: sub_141a78220
// 地址: 0x141a78220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9488)
int32_t rax_1

if ((arg2[5].b & 1) != 0)
    rax_1, arg3 = sub_140b4e7c0(arg2, &data_1439a9488)

char var_38
char var_30

if ((arg2[5].b & 1) == 0 || rax_1 s>= 7)
    sub_141a34af0(arg2, arg1, arg3)
else
    var_38 = 2
    int32_t var_34_1 = 0
    var_30 = 2
    int32_t var_2c_1 = 0
    sub_1408dce70(sub_1408dce70(arg2, &var_38, arg3), &var_30, arg3)
    void var_28
    *arg1 = *sub_141a4caf0(&var_28, &var_38)

int32_t rax_4
int512_t zmm1
rax_4, zmm1 = sub_140b4e7c0(arg2, &data_1439a9488)
int32_t rbp = 0

if (rax_4 s>= 5)
    int64_t* rcx_7 = arg2[1]
    int32_t* r8_1 = *rcx_7
    
    if (&r8_1[1] u<= rcx_7[1])
        arg1[1].d = *r8_1
        int64_t* rax_7 = arg2[1]
        *rax_7 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[1], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[1], 4)
    
    int64_t* rcx_9 = arg2[1]
    int32_t* rdx_5 = *rcx_9
    
    if (&rdx_5[1] u> rcx_9[1])
        int32_t rax_11
        rax_11.b = *(arg1 + 0x14) != 0
        int32_t arg_10 = rax_11
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        *(arg1 + 0x14) = arg_10 != 0
    else
        void* rax_9
        rax_9.b = *rdx_5 != 0
        *(arg1 + 0x14) = rax_9.b
        int64_t* rax_10 = arg2[1]
        *rax_10 += 4

int64_t* rcx_11 = arg2[1]
int32_t arg_8 = arg1[5].d
int32_t* rdx_7 = *rcx_11

if (&rdx_7[1] u> rcx_11[1])
    int32_t* rdx_8 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_8, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_8, 4)
else
    arg_8 = *rdx_7
    *rcx_11 += 4

int64_t result = zx.q(arg2[5].b)

if ((result.b & 1) == 0)
    if ((result.b & 2) != 0)
        void* i_1 = *(arg1 + 0x48)
        void* i = arg1 + 0x18
        
        if (i_1 != 0)
            i = i_1
        
        for (void* rbp_1 = i + sx.q(arg1[5].d) * 0xc; i != rbp_1; i += 0xc)
            int64_t* rax_23 = data_143f2b028
            
            if (rax_23 == 0)
                int32_t var_48_2 = 0x1a74cd19
                rax_23 = sub_140d225c0(sub_141a79790, sub_141a6e680(), u"SectionEvaluationData")
                data_143f2b028 = rax_23
            
            sub_140ca67c0(rax_23, arg2, i, 0)
else if (arg_8 s> 0)
    do
        int64_t* rax_19 = data_143f2b028
        var_38.d = 0xffffffff
        int32_t var_34_2 = 0x80000000
        var_30 = 0
        
        if (rax_19 == 0)
            int32_t var_48_1 = 0x1a74cd19
            rax_19 = sub_140d225c0(sub_141a79790, sub_141a6e680(), u"SectionEvaluationData")
            data_143f2b028 = rax_19
        
        sub_140ca67c0(rax_19, arg2, &var_38, 0)
        int64_t rbx_1 = sx.q(arg1[5].d)
        int32_t rax_20 = (rbx_1 + 1).d
        arg1[5].d = rax_20
        
        if (rax_20 s> *(arg1 + 0x54))
            sub_140775760(arg1 + 0x18, rbx_1.d)
        
        void* rax_21 = *(arg1 + 0x48)
        int64_t rcx_15 = rbx_1 * 3
        void* rdx_12 = arg1 + 0x18
        
        if (rax_21 != 0)
            rdx_12 = rax_21
        
        rbp += 1
        *(rdx_12 + (rcx_15 << 2)) = var_38.q
        *(rdx_12 + (rcx_15 << 2) + 8) = var_30.d
    while (rbp s< arg_8)

result.b = 1
return result
