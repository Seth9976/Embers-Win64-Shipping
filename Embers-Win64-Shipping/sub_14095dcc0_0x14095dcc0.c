// 函数: sub_14095dcc0
// 地址: 0x14095dcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"vcvbr")
int16_t* _String_3
int32_t var_70
uint64_t rax_1

if (rax != 0)
    sub_140b294d0(&_String_3, &arg_18, 0)
    int16_t* const _String = &data_142d40450
    
    if (var_70 != 0)
        _String = _String_3
    
    int64_t rdx_1
    rax_1, rdx_1 = _wtoi(_String)
    int64_t* rcx_2 = *(arg1 + 0xb0)
    rdx_1.b = rax_1.d != 0
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x20))(rcx_2, rdx_1)
    
    goto label_14095ddff

r8.b = 1
char rax_3
int64_t r8_1
rax_3, r8_1 = sub_140b0f6c0(&arg_18, u"vcbitrate")

if (rax_3 != 0)
    sub_140b294d0(&_String_3, &arg_18, 0)
    rax_1 = zx.q(var_70)
    int32_t rcx_5
    
    if (rax_1.d s<= 1)
        rcx_5 = 0
    else
        int16_t* _String_1 = &data_142d40450
        
        if (rax_1.d != 0)
            _String_1 = _String_3
        
        rcx_5 = _wtoi(_String_1).d
    
    int64_t* r8_2 = *(arg1 + 0xb0)
    
    if (r8_2 != 0 && rcx_5 s> 0)
        (*(*r8_2 + 0x18))(r8_2, zx.q(rcx_5))
    
    goto label_14095ddff

r8_1.b = 1
char rax_5
int64_t r8_3
rax_5, r8_3 = sub_140b0f6c0(&arg_18, u"vccomplexity")

if (rax_5 == 0)
    r8_3.b = 1
    
    if (sub_140b0f6c0(&arg_18, u"vcdump") == 0)
        return 0
    
    int64_t* rcx_11 = *(arg1 + 0xa0)
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x58))(rcx_11)
    
    int64_t* rcx_12 = *(arg1 + 0xb0)
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x40))(rcx_12)
    
    int32_t rcx_13 = 0
    _String_3:4.d = 1
    _String_3.d = 0
    int32_t r11_1 = *(arg1 + 0x110)
    void* r9_1 = arg1 + 0xf8
    var_70.q = r9_1
    int32_t r8_4 = 0
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r11_1 != 0)
        void* rax_10 = *(r9_1 + 0x10)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *r9_1
        
        if (rdx_8 != 0)
        label_14095ded8:
            int32_t rax_17 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
            _String_3:4.d = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_2
            
            var_64_1.d = r8_4 - rax_18 + 0x1f
            
            if (r8_4 - rax_18 + 0x1f s> r11_1)
                var_64_1.d = r11_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_13)
                r8_4 += 0x20
                rcx_13 += 1
                var_64_1:4.d = r8_4
                _String_3.d = rcx_13
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                var_68_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_14095ded8
            
            var_64_1.d = r11_1
    
    double zmm4_1[0x2] = var_68_1.o
    void* var_10_1 = arg1 + 0xe8
    int16_t var_40_1 = 0
    double zmm3[0x2] = _String_3.o
    rax_1 = zmm3[0]
    var_68_1.o = zmm3
    _String_3.o = (arg1 + 0xe8).o
    double rcx_15 = zmm4_1[0]
    zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
    double var_58_1[0x2] = zmm4_1
    
    if ((rcx_15 u>> 0x20).d s< *(rax_1 + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t* rcx_18 = *(sx.q(i) * 0x118 + *_String_3 + 0x88)
            
            if (rcx_18 != 0)
                (*(*rcx_18 + 0x28))(rcx_18)
            
            int32_t var_6c
            var_64_1:4.d &= not.d(var_6c)
            sub_14059bdd0(&var_70)
            i = i_1
        while (i s< *(var_68_1.q + 0x18))
        
        if (var_40_1.b != 0 && var_40_1:1.b != 0)
            sub_1409562a0(arg1 + 0xe8, *(arg1 + 0xf0) - *(arg1 + 0x11c), 1)
            int64_t rax_25
            rax_25.b = 1
            return rax_25
else
    sub_140b294d0(&_String_3, &arg_18, 0)
    rax_1 = zx.q(var_70)
    int32_t rdx_5
    
    if (rax_1.d s<= 1)
        rdx_5 = -1
    else
        int16_t* _String_2 = &data_142d40450
        
        if (rax_1.d != 0)
            _String_2 = _String_3
        
        rdx_5 = _wtoi(_String_2).d
    
    int64_t* rcx_9 = *(arg1 + 0xb0)
    
    if (rcx_9 != 0 && rdx_5 s>= 0)
        (*(*rcx_9 + 0x28))(rcx_9)
    
label_14095ddff:
    int16_t* _String_4 = _String_3
    
    if (_String_4 != 0)
        sub_140a74f90(_String_4)

rax_1.b = 1
return rax_1
