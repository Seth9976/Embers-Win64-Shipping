// 函数: sub_1410450e0
// 地址: 0x1410450e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t r10 = *(arg2 + 0x60)
void* r11 = *(*(arg2 + 0x40) + 0x10)

if (r10 - 3 u<= 0x3d)
    switch (r10)
        case 3, 7, 0xc, 0x11, 0x14, 0x16, 0x19, 0x1e, 0x24, 0x2a, 0x2d, 0x2f, 0x32, 0x39, 0x3e
            r9 = 2
        case 4, 8, 0xe, 0x12, 0x20, 0x26, 0x2b, 0x34, 0x3b, 0x40
            r9 = 1

int32_t result = *(arg2 + 0x64)
uint128_t var_68
uint128_t var_58
int64_t r8

if (result != 1)
    if (result == 4)
        char rcx_12 = (*(arg2 + 0x68)).b
        uint32_t r11_2 = *(r11 + 0xa0) u>> rcx_12
        uint32_t r10_2 = (*(r11 + 0x98) u>> rcx_12).d
        
        if (r9 == 0)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_6 = &var_68
            int64_t var_80_6 = r8
            return sub_140fceac0(arg1, arg2, r10_2, r11_2, 1)
        
        if (r9 == 1)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_5 = &var_68
            int64_t var_80_5 = r8
            return sub_140fce620(arg1, arg2, r10_2, r11_2, 1)
        
        if (r9 == 2)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_4 = &var_68
            int64_t var_80_4 = r8
            return sub_140fce870(arg1, arg2, r10_2, r11_2, r9 - 1)
    else if (result == 5)
        char rcx_16 = (*(arg2 + 0x68)).b
        uint32_t r11_4 = *(r11 + 0xa0) u>> rcx_16
        uint32_t r10_4 = (*(r11 + 0x98) u>> rcx_16).d
        int32_t rcx_17 = *(arg2 + 0x70)
        
        if (r9 == 0)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_9 = &var_68
            int64_t var_80_9 = r8
            return sub_140fcf1b0(arg1, arg2, r10_4, r11_4, rcx_17)
        
        if (r9 == 1)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_8 = &var_68
            int64_t var_80_8 = r8
            return sub_140fced10(arg1, arg2, r10_4, r11_4, rcx_17)
        
        if (r9 == 2)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_7 = &var_68
            int64_t var_80_7 = r8
            return sub_140fcef60(arg1, arg2, r10_4, r11_4, rcx_17)
    else if (result == 8)
        char rcx_21 = (*(arg2 + 0x68)).b
        uint32_t r11_6 = *(r11 + 0xa0) u>> rcx_21
        uint32_t r10_6 = (*(r11 + 0x98) u>> rcx_21).d
        int32_t rcx_22 = *(arg2 + 0x70)
        
        if (r9 == 0)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_12 = &var_68
            int64_t var_80_12 = r8
            return sub_140fcf8c0(arg1, arg2, r10_6, r11_6, rcx_22)
        
        if (r9 == 1)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_11 = &var_68
            int64_t var_80_11 = r8
            return sub_140fcf400(arg1, arg2, r10_6, r11_6, rcx_22)
        
        if (r9 == 2)
            var_58.q = arg1
            var_68:8.q = &var_58
            var_58:8.q = arg2
            var_68.q = sub_140fdd510
            uint128_t* var_78_10 = &var_68
            int64_t var_80_10 = r8
            return sub_140fcf660(arg1, arg2, r10_6, r11_6, rcx_22)
else if (r10 != 0)
    int32_t rcx_8 = *(arg2 + 0x70)
    
    if (r9 == 0)
        var_58.q = arg1
        var_68:8.q = &var_58
        var_58:8.q = arg2
        var_68.q = sub_140fdd510
        uint128_t* var_78_3 = &var_68
        int64_t var_80_3 = r8
        return sub_140fcffc0(arg1, arg2, rcx_8, 1, 1)
    
    if (r9 == 1)
        var_58.q = arg1
        var_68:8.q = &var_58
        var_58:8.q = arg2
        var_68.q = sub_140fdd510
        uint128_t* var_78_2 = &var_68
        int64_t var_80_2 = r8
        return sub_140fcfb20(arg1, arg2, rcx_8, 1, 1)
    
    if (r9 == 2)
        var_68.q = arg1
        var_58:8.q = &var_68
        var_58.q = sub_140fdd510
        int128_t* var_78_1 = &var_58
        int64_t var_80_1 = r8
        var_68:8.q = arg2
        return sub_140fcfd70(arg1, arg2, rcx_8, r9 - 1, r9 - 1)
else
    int64_t rcx_3 = *(arg1 + 0x30) + 7
    var_58 = *(arg2 + 0x60)
    void*** rcx_4 = rcx_3 & 0xfffffffffffffff8
    int64_t var_40_1 = r8
    var_68 = *(arg2 + 0x70)
    void* rax_4 = &rcx_4[9]
    uint64_t arg_10 = *(arg2 + 0x80)
    
    if (rax_4 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, r10 + 0x50)
        rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[9]
    
    *(arg1 + 0x30) = rax_4
    void**** rax_5 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    uint128_t zmm1 = var_58
    *rax_5 = rcx_4
    *(arg1 + 8) = &rcx_4[1]
    *(rcx_4 + 0x10) = arg2.o
    rcx_4[1] = 0
    result = 0x42f01ea8
    uint128_t zmm0 = var_68
    *rcx_4 = &data_142f01ea8
    *(rcx_4 + 0x20) = zmm1
    *(rcx_4 + 0x30) = zmm0
    rcx_4[8] = arg_10
return result
