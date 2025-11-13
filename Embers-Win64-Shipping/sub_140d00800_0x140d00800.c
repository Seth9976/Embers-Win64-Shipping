// 函数: sub_140d00800
// 地址: 0x140d00800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int16_t* var_58 = nullptr
int32_t var_50 = 0
sub_1405947f0(&var_58, 0x14)
int32_t rsi = var_50 + 0x14

if (rsi s> 0)
    sub_140594770(&var_58)
    rsi = rsi

int16_t* r15 = var_58
UnDecorator::getReferenceType(r15, u"__DelegateSignature", 0x28)
int32_t r14 = rsi - 1

if (rsi == 0)
    r14 = 0

int64_t arg_8 = *(*(arg1 + 0x78) + 0x18)
int16_t* var_48
sub_140b63b70(&arg_8, &var_48)
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
            int16_t* r8 = var_48
            memmove(&r8[sx.q(r10)], &r8[sx.q(r10 + rsi_2)], (rax_4 - rsi_2) * 2)
            rcx_5 = var_40
        
        rcx_5 -= rsi_2

int16_t* var_68 = var_48
int32_t var_3c
int32_t var_5c = var_3c
var_40.q = 0
var_48 = nullptr
int32_t var_60 = rcx_5

if (r15 != 0)
    sub_140a74f90(r15)

void* r9_2 = *(arg1 + 0x78)
uint8_t rsi_4 = (arg4 u>> 7).b & 1
int32_t rax_10 = *(r9_2 + 0xc)
void* const rax_16

if (rax_10 s>= data_143e1d9b4)
    rax_16 = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rax_10)
    uint32_t rdx_4 = zx.d(temp1_1)
    int32_t rax_12 = temp2_1 + rdx_4
    rax_16 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_4) * 0x18

if (rsi_4 == 0 || ((*(rax_16 + 8) u>> 0x19).b & 1) == 0)
    void* rax_25 = sub_140bdf0a0(r9_2)
    uint8_t rcx_21
    
    if (rax_25 != 0)
        rcx_21 = (*(sub_140bdf0a0(*(arg1 + 0x78)) + 0xcc) u>> 7).b
    
    if (rax_25 == 0 || (rcx_21 & 1) != 0)
        rax_25.b = 0
    else
        rax_25.b = 1
    
    if (rsi_4 != 0 && rax_25.b != 0)
        int16_t* r14_2 = &data_142d40450
        void* var_38
        void** rax_26 = sub_140d32080(&var_38, &var_68, 0, &data_142d40450)
        
        if (&var_68 != rax_26)
            int16_t* rcx_23 = var_68
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            var_68 = *rax_26
            *rax_26 = nullptr
            var_60 = rax_26[1].d
            var_5c = *(rax_26 + 0xc)
            rax_26[1] = 0
        
        void* rcx_25 = var_38
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        arg_8 = *(sub_140bdf0a0(*(arg1 + 0x78)) + 0x18)
        sub_140b63b70(&arg_8, &var_38)
        sub_140d32080(&var_58, &var_38, 0, &data_142d40450)
        void* rcx_30 = var_38
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        if (var_60 != 0)
            r14_2 = var_68
        
        sub_140a2e390(&var_48, u"%s__%s", r14_2)
        int16_t* rsi_7 = var_48
        var_60 = var_40
        
        if (var_40 != 0 || var_5c != 0)
            sub_1405a4c70(&var_68, var_40, var_5c)
            memcpy(var_68, rsi_7, var_40 * 2)
            rsi_7 = var_48
        else
            int32_t var_5c_1 = 0
        
        if (rsi_7 != 0)
            sub_140a74f90(rsi_7)
        
        int16_t* rcx_35 = var_58
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
    
    if ((arg4.b & 8) != 0)
        sub_140a20ba0(&var_68, u"__SinglecastDelegate", 0x14)
    
    goto label_140d00bad

int64_t* rsi_5 = *(r9_2 + 0x20)

if (rsi_5 == 0)
label_140d00bad:
    var_58 = nullptr
    int64_t var_50_1 = 0
    sub_1405947f0(&var_58, 2)
    int32_t r12_2 = var_50_1:4.d
    int32_t rsi_8 = var_50_1.d + 2
    var_50_1.d = rsi_8
    
    if (rsi_8 s> r12_2)
        sub_140594770(&var_58)
        r12_2 = var_50_1:4.d
        rsi_8 = var_50_1.d
    
    int16_t* r14_4 = var_58
    UnDecorator::getReferenceType(r14_4, &(*U"RGBXYZF10|")[6], 4)
    
    if (rsi_8 s> 1)
        int32_t r15_3
        
        if (var_60 == 0)
            r15_3 = 0
        else
            r15_3 = var_60 - 1
        
        if (rsi_8 == 0 && r15_3 != 0)
            rbx = 1
        
        var_48 = r14_4
        int32_t rdx_17 = rbx + rsi_8 + r15_3
        
        if (rdx_17 s> r12_2)
            sub_1405947f0(&var_48, rdx_17)
        
        sub_140a20ba0(&var_48, var_68, r15_3)
        *arg2 = var_48
        arg2[1].d = rsi_8
        *(arg2 + 0xc) = r12_2
    else
        int16_t* r15_1 = var_68
        *arg2 = 0
        arg2[1].d = var_60
        
        if (var_60 != 0)
            sub_1405a4c70(arg2, var_60, 0)
            memcpy(*arg2, r15_1, var_60 * 2)
        else
            *(arg2 + 0xc) = 0
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
else
    void* rax_19 = sub_140be01c0()
    void* rdx_6 = rsi_5[2]
    int64_t rax_20 = sx.q(*(rax_19 + 0x38))
    
    if (rax_20.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_20 << 3)) != rax_19 + 0x30)
        goto label_140d00bad
    
    int16_t* const rbx_1 = &data_142d40450
    arg_8 = rsi_5[3]
    
    if (var_60 != 0)
        rbx_1 = var_68
    
    sub_140b63b70(&arg_8, &var_48)
    int16_t* const var_78_1 = rbx_1
    sub_140a2e390(arg2, u"%s%s::F%s", (*(*rsi_5 + 0x2c0))(rsi_5))
    int16_t* rcx_17 = var_48
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

int16_t* rcx_45 = var_68

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

return arg2
