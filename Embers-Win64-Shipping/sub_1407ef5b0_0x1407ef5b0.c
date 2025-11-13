// 函数: sub_1407ef5b0
// 地址: 0x1407ef5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143ce2d18)
*arg1 = 0
int64_t r10 = 0
arg1[1] = 0
int32_t* r9 = *(arg2 + 0x118)
uint32_t rdx_1 = (*(arg2 + 8) u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t rcx_2 = neg.d(r8_1 + rdx_1) ^ r8_1 u>> 0xd
int32_t rdx_4 = (rdx_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - rdx_4 - rcx_2) ^ rdx_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - rdx_4) ^ r8_4 u>> 5
int32_t rdx_7 = (rdx_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - rdx_7 - rcx_5) ^ rdx_7 << 0xa
int32_t rcx_8 = (rcx_5 - r8_7 - rdx_7) ^ r8_7 u>> 0xf
int64_t r11 = sx.q(*(arg2 + 0x120)) << 2
int32_t var_48 = rcx_8
uint64_t r11_1 = r11 u>> 2

if (r9 u> &r9[sx.q(*(arg2 + 0x120))])
    r11_1 = 0

if (r11_1 != 0)
    do
        int32_t r8_9 = *r9
        r9 = &r9[1]
        int32_t r8_11 = (r8_9 - rcx_8) ^ rcx_8 u>> 0xd
        r10 += 1
        int32_t rdx_10 = (0x9e3779b9 - r8_11 - rcx_8) ^ r8_11 << 8
        int32_t rcx_11 = (rcx_8 - rdx_10 - r8_11) ^ rdx_10 u>> 0xd
        int32_t r8_14 = (r8_11 - rdx_10 - rcx_11) ^ rcx_11 u>> 0xc
        int32_t rdx_13 = (rdx_10 - r8_14 - rcx_11) ^ r8_14 << 0x10
        int32_t rcx_14 = (rcx_11 - rdx_13 - r8_14) ^ rdx_13 u>> 5
        int32_t r8_17 = (r8_14 - rdx_13 - rcx_14) ^ rcx_14 u>> 3
        int32_t rdx_16 = (rdx_13 - r8_17 - rcx_14) ^ r8_17 << 0xa
        rcx_8 = (rcx_14 - rdx_16 - r8_17) ^ rdx_16 u>> 0xf
    while (r10 != r11_1)
    
    var_48 = rcx_8

void* rax_36

if (data_14396ee88 == data_14396eeb4)
label_1407ef785:
    rax_36 = nullptr
else
    void* rdx_18 = data_14396eec0
    void* rax_34 = &data_14396eeb8
    
    if (rdx_18 != 0)
        rax_34 = rdx_18
    
    int32_t rax_35 = *(rax_34 + (((sx.q(data_14396eec8) - 1) & sx.q(rcx_8)) << 2))
    
    if (rax_35 == 0xffffffff)
    label_1407ef785_1:
        rax_36 = nullptr
    else
        int64_t r9_1 = data_14396ee80
        int64_t rdx_20
        
        while (true)
            rdx_20 = sx.q(rax_35) << 5
            
            if (*(rdx_20 + r9_1) == rcx_8)
                break
            
            rax_35 = *(rdx_20 + r9_1 + 0x18)
            
            if (rax_35 == 0xffffffff)
                goto label_1407ef785_2
        
        rax_36 = rdx_20 + r9_1
        
        if (rax_35 == 0xffffffff)
        label_1407ef785_2:
            rax_36 = nullptr

int64_t* rbx = rax_36 + 8

if (rax_36 == 0)
    rbx = nullptr

void* var_58
int64_t* var_50
int64_t* rbx_1
int128_t zmm0

if (rbx == 0)
    void*** rax_38 = j_sub_140a82f30(0x30)
    
    if (rax_38 == 0)
        rax_38 = nullptr
    else
        rax_38[1].d = 1
        *rax_38 = &data_142dd15b8
        *(rax_38 + 0xc) = 1
        __builtin_memset(&rax_38[2], 0, 0x20)
    
    var_58 = &rax_38[2]
    void*** rbx_2 = rax_38
    void*** rsi_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = rax_38
    
    void var_40
    
    if (arg1 == &var_40)
    label_1407ef882:
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d != 1)
                rbx_2 = rax_38
            else
                (**rsi_1)(rsi_1)
                int32_t temp4_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp4_1 != 1)
                    rbx_2 = rax_38
                else
                    (*rsi_1)[1](rsi_1, 1)
                    rbx_2 = rax_38
    else
        *arg1 = var_58
        void*** r14_1 = arg1[1]
        
        if (rsi_1 == r14_1)
            goto label_1407ef882
        
        arg1[1] = rsi_1
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d != 1)
                rbx_2 = rax_38
            else
                (**r14_1)(r14_1)
                int32_t temp7_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp7_1 != 1)
                    rbx_2 = rax_38
                else
                    (*r14_1)[1](r14_1, 1)
                    rbx_2 = rax_38
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
    
    if (sub_140801670(*arg1, arg2) != 0)
        int128_t* rax_46 = sub_1407d0f20(&data_14396ee80, &var_48)
        rbx_1 = arg1[1]
        var_58 = *arg1
        var_50 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_58 == rax_46)
            goto label_1407ef938
        
        zmm0 = *rax_46
        *rax_46 = var_58.o
        goto label_1407ef930
    
    if (arg1 != &var_40)
        *arg1 = 0
        int64_t* rbx_3 = arg1[1]
        
        if (rbx_3 != 0)
            arg1[1] = 0
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                int64_t rdx_24 = *rbx_3
                (*rdx_24)(rbx_3, rdx_24)
                int32_t temp9_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    int64_t r8_22 = *rbx_3
                    (*(r8_22 + 8))(rbx_3, 1, r8_22)
else
    rbx_1 = rbx[1]
    var_58 = *rbx
    var_50 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_58 == arg1)
        goto label_1407ef938
    
    zmm0 = *arg1
    *arg1 = var_58.o
label_1407ef930:
    var_58.o = zmm0
    rbx_1 = var_50
label_1407ef938:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
LeaveCriticalSection(&data_143ce2d18)
return arg1
