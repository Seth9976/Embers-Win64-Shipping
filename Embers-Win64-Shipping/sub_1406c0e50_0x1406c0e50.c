// 函数: sub_1406c0e50
// 地址: 0x1406c0e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* var_110 = arg2
void* r15 = data_143f5b298[0xf1]
int64_t* result

if (r15 == 0)
label_1406c10e9:
    int64_t rcx_24 = arg2[7]
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = arg2[5]
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int64_t rcx_26 = arg2[3]
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    result.b = 0
else
    void* rax_2 = sub_1406c4d40()
    void* rdx = *(r15 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        goto label_1406c10e9
    
    if ((*(rdx + 0x30))[result] != rax_2 + 0x30)
        goto label_1406c10e9
    
    void var_e8
    int64_t* rax_3 = sub_1406b55b0(&var_e8, arg2)
    int64_t* var_118 = rax_3
    *(r15 + 0x350) = *rax_3
    *(r15 + 0x354) = *(rax_3 + 4)
    *(r15 + 0x358) = rax_3[1].d
    *(r15 + 0x35c) = *(rax_3 + 0xc)
    *(r15 + 0x360) = rax_3[2].d
    sub_140597df0(r15 + 0x368, &rax_3[3])
    sub_140597df0(r15 + 0x378, &rax_3[5])
    sub_140597df0(r15 + 0x388, &rax_3[7])
    *(r15 + 0x398) = rax_3[9].d
    int64_t rcx_10 = rax_3[7]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = rax_3[5]
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = rax_3[3]
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    void var_100
    int64_t* rax_5 = sub_140596d10(&var_100, arg1)
    int64_t* var_108_1 = rax_5
    sub_140597df0(r15 + 0x4a8, rax_5)
    int16_t* const r14_1
    
    if (rax_5[1].d == 0)
        r14_1 = &data_142d40450
    else
        r14_1 = *rax_5
    
    int64_t* rsi_1 = nullptr
    int64_t* var_68_1 = nullptr
    int64_t rbx_1 = -1
    
    if (r14_1 == 0)
        int64_t var_60_2 = 0
        int32_t var_58_2 = 0
    else
        int64_t rdi_2 = -1
        
        do
            rdi_2 += 1
        while (r14_1[rdi_2] != 0)
        
        var_118.d = 0
        sub_14060af80(&var_118, (rdi_2 << 2).d, r14_1, rdi_2.d)
        int32_t rax_6 = var_118.d
        int32_t var_58_1 = rax_6
        
        if (rax_6 + 1 u> 0x80 && rax_6 != 0xffffffff)
            int64_t* rax_7 = sub_140a84c80(0, sx.q(rax_6 + 1), 0)
            rsi_1 = rax_7
            var_68_1 = rax_7
        
        int64_t* rax_8 = &var_e8
        
        if (rsi_1 != 0)
            rax_8 = rsi_1
        
        var_118 = rax_8
        sub_14060ac90(&var_118, rax_6 + 1, r14_1, (rdi_2 + 1).d)
        rsi_1 = rax_8
    
    do
        rbx_1 += 1
    while (*(rsi_1 + rbx_1) != 0)
    
    sub_14058ad40(r15 + 0x488, rsi_1, rbx_1)
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    int64_t rcx_19 = *rax_5
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    sub_1406bd050(r15)
    int64_t rcx_21 = arg2[7]
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = arg2[5]
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = arg2[3]
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
