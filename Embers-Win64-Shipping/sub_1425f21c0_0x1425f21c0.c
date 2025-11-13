// 函数: sub_1425f21c0
// 地址: 0x1425f21c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t* pv_4 = arg2
int64_t* rcx = *(arg1 + 0x60)
int32_t arg_8 = 0
sub_1425e8c20(rcx, u"TargetBitrate", &arg_8)

if (arg3 == 0)
    if (arg_8 != *(arg1 + 0x78))
        sub_1425e8dc0(*(arg1 + 0x60), u"TargetBitrate", arg1 + 0x78)
else if (arg_8 != arg3)
    sub_1425e8dc0(*(arg1 + 0x60), u"TargetBitrate", &arg_18)
    *(arg1 + 0x78) = arg3

int64_t* rcx_3 = *(arg1 + 0x60)
arg_18 = 0
sub_1425e8c20(rcx_3, u"MinQP", &arg_18)

if (arg_18 != *(arg1 + 0x90))
    sub_1425e8d00(*(arg1 + 0x60), u"MinQP", arg1 + 0x90)
    sub_1425e8d00(*(arg1 + 0x60), &data_14344a2f0, arg1 + 0x90)
    sub_1425e8d00(*(arg1 + 0x60), &data_14344a2f8, arg1 + 0x90)
    sub_1425e8d00(*(arg1 + 0x60), &data_14344a300, arg1 + 0x90)

int64_t r14 = sx.q(pv_4:4.d)
int64_t rcx_8 = sx.q(arg2.d)
int128_t zmm0
zmm0.d = float.s(r14 * r14 + rcx_8 * rcx_8)
int32_t var_78
int64_t* pv
int32_t var_58
int64_t* pv_1

if (int.d(_mm_sqrt_ss((zx.o(0)).q.d, zmm0.d).d) != 0)
    int64_t* rcx_10 = *(arg1 + 0x60)
    var_78 = 0
    int64_t* pv_5
    
    if ((*(*rcx_10 + 0x20))(rcx_10, u"FrameSize", &var_78) != 0)
        pv_5 = pv_4
    else
        pv_5 = nullptr
        
        if (var_78 == 0)
            pv_4 = pv_5
        else if (var_78 != 5)
            var_58 = 0
            sub_1425eabd0(&var_58, &var_78, 5)
            int32_t rdx_1 = var_58
            
            if (rdx_1 != 0)
                pv_5 = pv_1
            
            if (rdx_1 == 0xa || rdx_1 == 0xb)
                CoTaskMemFree(pv_1)
                pv_4 = pv_5
            else if (rdx_1 != 0xc || pv_1 == 0)
                pv_4 = pv_5
            else
                (*(*pv_1 + 8))()
                pv_4 = pv_5
        else
            pv_5 = pv
            pv_4 = pv_5
    
    int32_t rcx_13 = var_78
    
    if (rcx_13 == 0xa || rcx_13 == 0xb)
        CoTaskMemFree(pv)
    else if (rcx_13 == 0xc && pv != 0)
        (*(*pv + 8))(pv)
    
    if (arg2.d != pv_5.d || r14.d != pv_4:4.d)
        int64_t* rcx_18 = *(arg1 + 0x60)
        pv_4 = arg2
        sub_1425e9000(rcx_18, u"FrameSize", &pv_4)
        int64_t* rcx_19 = *(arg1 + 0x60)
        pv_4 = arg2
        sub_1425e8f40(rcx_19, u"AspectRatio", &pv_4)

int64_t* rcx_20 = *(arg1 + 0x60)
var_78 = 0
int32_t rdi_1 = 7
int32_t pv_6

if ((*(*rcx_20 + 0x20))(rcx_20, u"FrameRate", &var_78) != 0)
    pv_6 = pv_4.d
else
    pv_6 = 0
    
    if (var_78 != 0)
        if (var_78 != 7)
            var_58 = 0
            sub_1425eabd0(&var_58, &var_78, 7)
            int32_t rdx_5 = var_58
            
            if (rdx_5 != 0)
                pv_6 = pv_1.d
            
            if (rdx_5 == 0xa || rdx_5 == 0xb)
                CoTaskMemFree(pv_1)
            else if (rdx_5 == 0xc && pv_1 != 0)
                (*(*pv_1 + 8))()
        else
            pv_6 = pv.d

int32_t rcx_23 = var_78

if (rcx_23 == 0xa || rcx_23 == 0xb)
    CoTaskMemFree(pv)
else if (rcx_23 == 0xc && pv != 0)
    (*(*pv + 8))(pv)

int32_t result = *(arg1 + 0x70)

if (pv_6 == result)
    return result

int64_t* r15_1 = *(arg1 + 0x60)
pv_4.d = result
pv_4:4.d = 1
var_78 = 0
int64_t* pv_2

if (sub_1425ec4c0(&var_78) != 0)
    pv_2 = pv
    rdi_1 = var_78
else
    pv_2 = pv_4
    int64_t* pv_3 = pv_2
    var_78 = 7

var_58.o = var_78.o
int64_t var_68
int64_t var_48_1 = var_68
(*(*r15_1 + 0x18))(r15_1, u"FrameRate", &var_58)

if (rdi_1 == 0xa || rdi_1 == 0xb)
    CoTaskMemFree(pv_2)
else if (rdi_1 == 0xc && pv_2 != 0)
    (*(*pv_2 + 8))(pv_2)

sub_1425e8dc0(*(arg1 + 0x60), u"IDRPeriod", arg1 + 0x70)
return sub_1425e8dc0(*(arg1 + 0x60), u"HeaderInsertionSpacing", arg1 + 0x70)
