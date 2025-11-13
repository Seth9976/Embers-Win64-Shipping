// 函数: sub_140d01050
// 地址: 0x140d01050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t rbx = 0
int16_t* var_68 = nullptr
int32_t var_60 = 0
sub_1405947f0(&var_68, 0x14)
int32_t rsi = var_60 + 0x14

if (rsi s> 0)
    sub_140594770(&var_68)
    rsi = rsi

int16_t* r12 = var_68
UnDecorator::getReferenceType(r12, u"__DelegateSignature", 0x28)
int32_t r14 = rsi - 1

if (rsi == 0)
    r14 = 0

var_68 = *(*(arg1 + 0x78) + 0x18)
int16_t* var_48
sub_140b63b70(&var_68, &var_48)
int32_t var_40
int32_t rcx_5 = var_40
int32_t r10 = rcx_5 - 1

if (rcx_5 == 0)
    r10 = 0

int32_t rax_2 = r10 - r14

if (r10 - r14 s< 0)
    r10 = 0
else if (rax_2 s< r10)
    r10 = rax_2

int32_t rsi_1 = rcx_5 - 1

if (rcx_5 == 0)
    rsi_1 = 0

int32_t rsi_2 = rsi_1 - r10

if (r14 s>= 0)
    if (r14 s< rsi_2)
        rsi_2 = r14
    
    if (rsi_2 != 0)
        int32_t rax_4 = rcx_5 - r10
        
        if (rax_4 != rsi_2)
            int16_t* r9 = var_48
            memmove(&r9[sx.q(r10)], &r9[sx.q(r10 + rsi_2)], (rax_4 - rsi_2) * 2)
            rcx_5 = var_40
        
        rcx_5 -= rsi_2

int16_t* var_58 = var_48
int32_t var_3c
int32_t var_4c = var_3c
var_40.q = 0
var_48 = nullptr
int32_t var_50 = rcx_5

if (r12 != 0)
    sub_140a74f90(r12)

void* rax_10 = sub_140bdf0a0(*(arg1 + 0x78))
void* rsi_4 = *(arg_8 + 0x78)
int32_t rax_11 = *(rsi_4 + 0xc)
void* const rax_17

if (rax_11 s>= data_143e1d9b4)
    rax_17 = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rax_11)
    uint32_t rdx_4 = zx.d(temp1_1)
    int32_t rax_13 = temp2_1 + rdx_4
    rax_17 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(zx.d(rax_13.w) - rdx_4) * 0x18

if (((arg4 u>> 7).b & 1) == 0 || ((*(rax_17 + 8) u>> 0x19).b & 1) == 0)
    if ((arg4.b & 0x80) != 0 && rax_10 != 0 && ((*(rax_10 + 0xcc) u>> 7).b & 1) == 0)
        int16_t* r14_2 = &data_142d40450
        void* var_38
        void** rax_30 = sub_140d32080(&var_38, &var_58, 0, &data_142d40450)
        
        if (&var_58 != rax_30)
            int16_t* rcx_20 = var_58
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            var_58 = *rax_30
            *rax_30 = nullptr
            var_50 = rax_30[1].d
            var_4c = *(rax_30 + 0xc)
            rax_30[1] = 0
        
        void* rcx_22 = var_38
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        arg_8 = *(rax_10 + 0x18)
        sub_140b63b70(&arg_8, &var_38)
        sub_140d32080(&var_68, &var_38, 0, &data_142d40450)
        void* rcx_25 = var_38
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        if (var_50 != 0)
            r14_2 = var_58
        
        sub_140a2e390(&var_48, u"%s__%s", r14_2)
        int16_t* rsi_7 = var_48
        var_50 = var_40
        
        if (var_40 != 0 || var_4c != 0)
            sub_1405a4c70(&var_58, var_40, var_4c)
            memcpy(var_58, rsi_7, var_40 * 2)
            rsi_7 = var_48
        else
            int32_t var_4c_1 = 0
        
        if (rsi_7 != 0)
            sub_140a74f90(rsi_7)
        
        int16_t* rcx_30 = var_68
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
    
    if ((arg4.b & 8) == 0)
        goto label_140d013f6
    
    sub_140a20ba0(&var_58, u"__MulticastDelegate", 0x13)
label_140d013f6:
    var_68 = nullptr
    int64_t var_60_1 = 0
    sub_1405947f0(&var_68, 2)
    int32_t r12_1 = var_60_1:4.d
    int32_t rsi_8 = var_60_1.d + 2
    var_60_1.d = rsi_8
    
    if (rsi_8 s> r12_1)
        sub_140594770(&var_68)
        r12_1 = var_60_1:4.d
        rsi_8 = var_60_1.d
    
    int16_t* r14_4 = var_68
    UnDecorator::getReferenceType(r14_4, &(*U"RGBXYZF10|")[6], 4)
    
    if (rsi_8 s> 1)
        int32_t r15_4
        
        if (var_50 == 0)
            r15_4 = 0
        else
            r15_4 = var_50 - 1
        
        if (rsi_8 == 0 && r15_4 != 0)
            rbx = 1
        
        var_48 = r14_4
        int32_t rdx_17 = rbx + rsi_8 + r15_4
        
        if (rdx_17 s> r12_1)
            sub_1405947f0(&var_48, rdx_17)
        
        sub_140a20ba0(&var_48, var_58, r15_4)
        *arg2 = var_48
        arg2[1].d = rsi_8
        *(arg2 + 0xc) = r12_1
    else
        int16_t* r15_2 = var_58
        *arg2 = 0
        arg2[1].d = var_50
        
        if (var_50 != 0)
            sub_1405a4c70(arg2, var_50, 0)
            memcpy(*arg2, r15_2, var_50 * 2)
        else
            *(arg2 + 0xc) = 0
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
else
    int64_t* rsi_5 = *(rsi_4 + 0x20)
    
    if (rsi_5 == 0)
        goto label_140d013f6
    
    void* rax_20 = sub_140be01c0()
    void* rdx_6 = rsi_5[2]
    int64_t rax_21 = sx.q(*(rax_20 + 0x38))
    
    if (rax_21.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
        goto label_140d013f6
    
    int16_t* const rbx_1 = &data_142d40450
    arg_8 = rsi_5[3]
    
    if (var_50 != 0)
        rbx_1 = var_58
    
    sub_140b63b70(&arg_8, &var_48)
    int16_t* const var_78_1 = rbx_1
    sub_140a2e390(arg2, u"%s%s::F%s", (*(*rsi_5 + 0x2c0))(rsi_5))
    int16_t* rcx_18 = var_48
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

int16_t* rcx_40 = var_58

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

return arg2
