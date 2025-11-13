// 函数: sub_141811300
// 地址: 0x141811300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int32_t arg_8 = 0
j_sub_140a1b080()
int64_t var_38
int64_t var_28
int64_t* rbx_3
int32_t rsi

if (rbx s> 1)
    rbx_3 = sub_140a300d0(arg2, &var_28, u"%VERSION%", u"++UE4+Release-4.25-CL-14469661", 0)
    rsi = 2
else
    var_38 = 0
    int32_t rdx = 0
    int32_t var_30_1 = 0
    int32_t rcx = 0
    int32_t var_2c_1 = 0
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((*u"++UE4+Release-4.25-CL-14469661")[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx = var_2c_1
        rdx = var_30_1
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_30_2 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"++UE4+Release-4.25-CL-14469661", (rbx_1.d + 1) * 2)
    rbx_3 = &var_38
    rsi = 1

if (arg2 != rbx_3)
    int64_t rcx_5 = *arg2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg2 = *rbx_3
    *rbx_3 = 0
    arg2[1].d = rbx_3[1].d
    *(arg2 + 0xc) = *(rbx_3 + 0xc)
    rbx_3[1] = 0

if ((rsi.b & 2) != 0)
    int64_t rcx_6 = var_28
    rsi &= 0xfffffffd
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rsi.b & 1) != 0)
    int64_t rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int16_t* const rcx_8 = &data_142d40450
int16_t* rdx_3

if (arg2[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *arg2

if (arg1[0xe].d != 0)
    rcx_8 = arg1[0xd]

int32_t result = sub_140a54510(rcx_8, rdx_3)

if (result != 0)
    result = (*(*arg1 + 0x20))(arg1)
    
    if (&arg1[0xd] != arg2)
        int16_t* rcx_10 = arg1[0xd]
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        arg1[0xd] = *arg2
        *arg2 = 0
        arg1[0xe].d = arg2[1].d
        result = *(arg2 + 0xc)
        *(arg1 + 0x74) = result
        arg2[1] = 0

return result
