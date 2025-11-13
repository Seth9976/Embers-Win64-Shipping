// 函数: sub_14203a2c0
// 地址: 0x14203a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int32_t r9 = 0
int32_t var_4c = 0

if (arg2 == 0 || *arg2 == 0)
    goto label_14203a36f

int64_t rbx_1 = -1

do
    rbx_1 += 1
while (arg2[rbx_1] != 0)

if (rbx_1.d + 1 s> 0)
    sub_1405947f0(&var_58, rbx_1.d + 1)
    r9 = var_4c
    rdx = var_50

int32_t rax_1 = rbx_1.d + 1 + rdx

if (rax_1 s> r9)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, arg2, (rbx_1.d + 1) * 2)

if (rax_1 == 0 || rax_1 == 1)
    r9 = var_4c
label_14203a36f:
    
    if (var_58 != u"BugScreenShot.png")
        int32_t rdx_3 = 0
        int32_t var_50_2 = 0
        
        if (r9 != 0x12)
            sub_1405947f0(&var_58, 0x12)
            r9 = var_4c
            rdx_3 = var_50_2
        
        int32_t var_50_3 = rdx_3 + 0x12
        
        if (rdx_3 + 0x12 s> r9)
            sub_140594770(&var_58)
        
        __builtin_memcpy(var_58, u"BugScreenShot.png", 0x24)

int64_t* var_48
int32_t i_1

if (sub_140a23cf0(&var_58, &data_142d5a024, 1, 0, 0xffffffff) == 0xffffffff)
    int64_t var_28
    int64_t* rax_4 = sub_140b18720(&var_28, &var_58, 1)
    int16_t* const rbx_3 = &data_142d40450
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int64_t* rax_5 = sub_140b0ec20(&var_48)
    
    if (rax_5[1].d != 0)
        rbx_3 = *rax_5
    
    int64_t var_38
    sub_140a2e390(&var_38, u"%s%s_", rbx_3)
    int64_t* rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    var_48 = nullptr
    i_1.q = 0
    sub_1405947f0(&var_48, 4)
    int32_t i_2 = i_1 + 4
    i_1 = i_2
    int32_t var_3c
    
    if (i_2 s> var_3c)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, &data_142d8ad90, 8)
    sub_140a464c0()
    sub_140b17a00(&var_38, &var_48, &var_58, &data_14399ea08)
    int64_t* rcx_16 = var_48
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

if (arg1[0x17] != 0)
    int64_t rax_7
    int64_t* rdx_7
    rax_7, rdx_7 = (*(*arg1 + 0x150))(arg1)
    
    if (arg3 != 0 && rax_7 != 0)
        sub_1424373a0(rax_7, &var_48)
        int32_t i = i_1
        
        while (i s>= 0)
            rdx_7 = var_48
            
            if (i s>= rdx_7[1].d)
                break
            
            void* rax_9
            rax_9, rdx_7 = sub_140d3c6e0(*rdx_7 + (sx.q(i) << 3))
            
            if (rax_9 != 0 && sub_14226c830(rax_9) != 0)
                int64_t* rax_11 = sub_14226c830(rax_9)
                int64_t rdx_8 = *rax_11
                (*(rdx_8 + 0x6d0))(rax_11, rdx_8)
            
            i = i_1 + 1
            i_1 = i
    
    rdx_7.b = 1
    sub_1423ee750(&var_58, rdx_7.b, 0)

int64_t rcx_26 = var_58

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int32_t result
result.b = 1
return result
