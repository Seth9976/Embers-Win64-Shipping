// 函数: sub_141e20c00
// 地址: 0x141e20c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int32_t arg_8 = 0
char r14 = 0
int16_t* const r12

if (arg2[4].d == 0)
    r12 = &data_142d40450
else
    r12 = arg2[3]

arg_8.q = *(sub_142468340() + 0x18)
int16_t* var_58
sub_140b63b70(&arg_8, &var_58)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_68 = r12
int32_t var_50

if (var_50 != 0)
    r8 = var_58

_mm_cvtps_pd(zmm0)
int64_t var_48
sub_140a2e390(&var_48, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_58

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int16_t* var_38
int32_t var_30

if (arg1[0xf] == 0)
    rsi = u"None"
else
    void* rax_1 = sub_14245f6d0()
    
    if (rax_1 == 0)
        rsi = u"None"
    else
        void* rdx_1 = arg1[0xf]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                || rdx_1 == 0)
            rsi = u"None"
        else
            r14 = 1
            void* rax_4 = sub_14245f6d0()
            int64_t rax_5
            void* const rdx_2
            
            if (rax_4 != 0)
                rdx_2 = arg1[0xf]
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> *(rdx_2 + 0x38)
                    || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rdx_2 = nullptr
            
            arg_8.q = *(rdx_2 + 0x18)
            sub_140b63b70(&arg_8, &var_38)
            
            if (var_30 != 0)
                rsi = var_38

sub_140a2e390(&var_58, u"Target: %s", rsi)
int32_t r8_5

if (var_50 == 0)
    r8_5 = 0
else
    r8_5 = var_50 - 1

sub_140a20ba0(&var_48, var_58, r8_5)
int16_t* rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if ((r14 & 1) != 0)
    int16_t* rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

int64_t rsi_1 = var_48
var_58 = nullptr
int32_t var_40
int32_t var_50_1 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_58, var_40, 0)
    memcpy(var_58, rsi_1, var_40 * 2)
else
    int32_t var_4c_1 = 0

sub_141e14220(arg2, &var_58, 0)
void* result = sub_141df1e90(arg1)

if (result != 0 && arg1[0x11] != 0)
    void* rsi_2 = *(result + 0x20)
    
    if (rsi_2 != 0)
        void* rax_8 = sub_142591550()
        void* rdx_8 = *(rsi_2 + 0x10)
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s<= *(rdx_8 + 0x38) && *(*(rdx_8 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
            uint32_t rax_11
            void* r8_8
            
            if (data_143de5480 != 0)
                rax_11, r8_8 = GetCurrentThreadId()
                rax_11.b = rax_11 == data_143de5470
            
            if (data_143de5480 == 0 || rax_11.b != 0)
                r8_8.b = 1
                sub_141f3e990(*(result + 0x20), 1, r8_8.b)
    
    void* rsi_3 = *(result + 0x240)
    
    if (rsi_3 == 0)
        void* rax_13 = (*(*result + 0x300))(result)
        *(result + 0x240) = rax_13
        rsi_3 = rax_13
    
    int64_t rax_14 = *arg1
    var_38 = nullptr
    var_30.q = 0
    int64_t* rax_15 = (*(rax_14 + 0xe8))(arg1, &arg_8)
    result = sub_141df8140(rsi_3, UnDecorator::getTemplateArgumentList(arg2, 0x3f800000, &var_38), 
        arg1[0x11], *rax_15)
else if (arg1[0xc].d s> 0)
    result = arg1[0xb]
    int64_t* rcx_22 = *(result + 8)
    
    if (rcx_22 != 0)
        result = (*(*rcx_22 + 0x30))(rcx_22, arg2)

int64_t rcx_23 = var_48

if (rcx_23 == 0)
    return result

return sub_140a74f90(rcx_23)
