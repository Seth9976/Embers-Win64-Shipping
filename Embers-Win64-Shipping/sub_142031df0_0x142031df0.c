// 函数: sub_142031df0
// 地址: 0x142031df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[4]
int64_t r14 = arg2[2]
int32_t arg_20 = arg2[1].d
int64_t var_50 = arg2[3]
int64_t var_58 = r14
int64_t* var_48 = rbx

if (rbx != 0)
    rbx[1].d += 1

int32_t r12 = arg2[5].d
void arg_10

if (r14 == data_143e1e0b0 && r12 == 0 && (*sub_140e679c0(data_143e29f28, &arg_10) & 0x30) != 0)
    int64_t* rax_3 = sub_1424c7800()
    void* rax_4 = rax_3[0x23]
    
    if (rax_4 == 0)
        int64_t rdx_1 = *rax_3
        (*(rdx_1 + 0x390))(rax_3, rdx_1)
        rax_4 = rax_3[0x23]
    
    if ((*(rax_4 + 0x38) & 1) != 0)
    label_142031ef5:
        sub_14202f1c0(&arg1[-5])
        sub_140d430a0(&var_58)
        uint64_t result
        result.b = 1
        return result

if (r14 == data_143e1e7d0 && r12 == 0)
    int64_t* rax_5 = sub_1424c7800()
    void* rax_6 = rax_5[0x23]
    
    if (rax_6 == 0)
        int64_t rdx_2 = *rax_5
        (*(rdx_2 + 0x390))(rax_5, rdx_2)
        rax_6 = rax_5[0x23]
    
    if ((*(rax_6 + 0x38) & 2) != 0)
        void arg_18
        char rcx_4 = (*sub_140e679c0(data_143e29f28, &arg_18)).b
        int16_t* rax_7
        rax_7.b = (rcx_4 & 0xc) != 0
        char rcx_5 = 0
        
        if ((rcx_4 & 0x30) != 0)
            rcx_5 = rax_7.b
        
        if (rcx_5 == 0)
            goto label_142031ef5

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if ((*(*arg1 + 0x178))(arg1) != 0)
    if (arg1[3] == 0)
        return 0
    
    char rax_13 = sub_140d6de70(&arg2[2])
    var_58 = arg2[2]
    int64_t var_50_1 = arg2[3]
    void* rcx_14 = arg2[4]
    void* var_48_1 = rcx_14
    
    if (rcx_14 != 0)
        *(rcx_14 + 8) += 1
    
    int32_t zmm0_1 = *(arg2 + 0x2c)
    return (*(*arg1[3] + 0x318))(zmm0_1, zx.q(arg_20), &var_58, zx.q(arg2[5].d), zmm0_1, rax_13)

void* rax_15 = arg1[0xa]

if (rax_15 == 0 || *(*(rax_15 + 0x188) + 0x40) s<= 1)
label_142031fe7:
    
    if ((1 & (*(*arg2 + 0xb8) u>> 3).b) != 0 && sub_140d6de70(&arg2[2]) != 0)
        int64_t* rcx_20 = data_143f5b298
        (*(*rcx_20 + 0x378))(rcx_20, &arg1[-5], &arg_20)
else
    if (sub_140d6de70(&arg2[2]) == 0)
        goto label_142031fe7
    
    if (*(sub_141520030() + 0x54) == 0)
        goto label_142031fe7
    
    arg_20 += 1

r12.b = 0
*(arg1 + 0x2d4) += 1
int32_t rax_22 = arg1[0x59].d
int32_t rcx_21 = *(arg1 + 0x2d4)
int64_t rdi_3 = sx.q(rax_22 - 1)

if (rax_22 - 1 s>= 0)
    rbx = rdi_3 << 4
    int64_t temp3_1
    
    do
        int64_t rax_24 = arg1[0x58]
        
        if (*(rbx + rax_24 + 8) == 0)
            r12.b = 1
        else
            int64_t* rcx_22 = *(rbx + rax_24)
            
            if (rcx_22 == 0)
                r12.b = 1
            else if ((*(*rcx_22 + 0x50))(rcx_22, arg2) == 0)
                r12.b = 1
        
        rbx -= 0x10
        temp3_1 = rdi_3
        rdi_3 -= 1
    while (temp3_1 - 1 s>= 0)
    rcx_21 = *(arg1 + 0x2d4)

*(arg1 + 0x2d4) = rcx_21 - 1

if (r12.b != 0)
    sub_140599630(&arg1[0x58], 0)

char var_60

if (arg1[3] == 0)
    rbx.b = 0
label_1420320f5:
    void* rax_31
    int512_t zmm3_1
    rax_31, zmm3_1 = sub_1423dda40(data_143f5b298, &arg1[-5], arg_20)
    char rax_34
    
    if (rax_31 != 0 && *(rax_31 + 0x30) != 0)
        char rax_32 = sub_140d6de70(&arg2[2])
        var_58 = arg2[2]
        int64_t var_50_3 = arg2[3]
        void* rcx_33 = arg2[4]
        void* var_48_3 = rcx_33
        
        if (rcx_33 != 0)
            *(rcx_33 + 8) += 1
        
        int64_t* rcx_34 = *(rax_31 + 0x30)
        zmm3_1.o = *(arg2 + 0x2c)
        int32_t var_68
        var_68.b = rax_32
        rax_34 = (*(*rcx_34 + 0xbf0))(rcx_34, &var_58, zx.q(arg2[5].d), zmm3_1, var_68, var_60)
        rbx = zx.q(rax_34)
    
    if (rax_31 == 0 || *(rax_31 + 0x30) == 0 || rax_34 == 0)
        rbx = zx.q(rbx.b)
        
        if (sub_140d6ded0(&arg2[2]) != 0)
            rbx = 1
else
    char rax_28 = sub_140d6de70(&arg2[2])
    var_58 = arg2[2]
    int64_t var_50_2 = arg2[3]
    void* rcx_27 = arg2[4]
    void* var_48_2 = rcx_27
    
    if (rcx_27 != 0)
        *(rcx_27 + 8) += 1
    
    int32_t zmm0_2 = *(arg2 + 0x2c)
    var_60 = rax_28
    char rax_30 =
        (*(*arg1[3] + 0x318))(zmm0_2, zx.q(arg_20), &var_58, zx.q(arg2[5].d), zmm0_2, var_60)
    rbx = zx.q(rax_30)
    
    if (rax_30 == 0)
        goto label_1420320f5
return zx.q(rbx.b)
