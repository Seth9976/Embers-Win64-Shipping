// 函数: sub_1426adee0
// 地址: 0x1426adee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char rsi = 0
int16_t* var_58 = nullptr
int32_t var_50 = 0
int64_t* rbx_1

if (arg2 != 0)
    rbx_1 = arg2

if (arg2 == 0 || ((zx.q(*(arg2[1] + 0x10)) u>> 0x14).b & 1) == 0)
    rbx_1 = nullptr

int64_t* r13_1

if (arg2 != 0)
    r13_1 = arg2

if (arg2 == 0 || ((zx.q(*(arg2[1] + 0x10)) u>> 8).b & 1) == 0)
    r13_1 = nullptr

int16_t* var_48
int32_t rax_5

if (rbx_1 != 0)
    rsi = 1
    rax_5 = sub_140a23cf0((*(*rbx_1 + 0x60))(rbx_1, &var_48, 0, 0), FBlackboardKeySelector", 1, 0, 
        0xffffffff)

int64_t r15

if (rbx_1 == 0 || rax_5 == 0xffffffff)
    r15.b = 0
else
    r15 = 1

if ((rsi & 1) != 0)
    int16_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int64_t* rax_6

if (r15.b != 0)
    rax_6 = sub_140b63b70(&arg3[2], &var_48)
label_1426ae05f:
    
    if (&var_58 != rax_6)
        int16_t* rcx_10 = var_58
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        var_58 = *rax_6
        *rax_6 = 0
        var_50 = rax_6[1].d
        var_50 = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    int16_t* rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
else if (rbx_1 == 0 || rbx_1[0xf] == 0)
label_1426ae039:
    
    if (r13_1 != 0)
        rax_6 = sub_140a31300(&var_48, _mm_cvtps_pd(*arg3), 1)
        goto label_1426ae05f
    
    (*(*arg2 + 0xa0))(arg2, &var_58, arg3, 0, 0, 0x80000, 0)
else
    void* rax_7 = sub_141cc9450()
    
    if (rax_7 == 0)
        goto label_1426ae039
    
    int64_t rcx_6 = sx.q(*(rax_7 + 0x38))
    void* rax_8 = rbx_1[0xf]
    
    if (rcx_6.d s> *(rax_8 + 0x38) || *(*(rax_8 + 0x30) + (rcx_6 << 3)) != rax_7 + 0x30)
        goto label_1426ae039
    
    sub_140b63b70(arg3, &var_48)
    int16_t* rcx_8 = var_58
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    var_58 = var_48
    int32_t var_40
    var_50 = var_40
    int32_t var_3c
    var_50 = var_3c
sub_140d11050()
int16_t* const rsi_1 = &data_142d40450
rbx_1.b = (data_143e1b9d8 & *(arg2[1] + 0x10)) != 0
sub_140b63b70(&arg2[5], &var_48)
int64_t var_38
int64_t* rax_16 = sub_140b60dd0(&var_38, &var_48, rbx_1.b)

if (rax_16[1].d != 0)
    rsi_1 = *rax_16

sub_140a2e390(arg1, u"%s: %s", rsi_1)
int64_t rcx_18 = var_38

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int16_t* rcx_19 = var_48

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int16_t* rcx_20 = var_58

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return arg1
