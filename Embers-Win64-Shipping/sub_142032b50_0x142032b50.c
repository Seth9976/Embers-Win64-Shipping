// 函数: sub_142032b50
// 地址: 0x142032b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* r14 = arg2
int64_t* var_88
int64_t* rax
int32_t rdx_1
rax, rdx_1 = sub_140b18970(&var_88, arg3)
*rax = 0
int32_t r8 = rax[1].d
int32_t rdx_2 = sbb.d(rdx_1, rdx_1, rax[1].d != 0)
int16_t* _String_9 = *rax
int32_t rcx_2 = *(rax + 0xc)
int32_t rdx_4 = rdx_2 + 6 + r8
int32_t var_4c = rcx_2
rax[1] = 0

if (rdx_4 s> rcx_2)
    sub_1405947f0(&_String_9, rdx_4)

sub_140a20ba0(&_String_9, u"*.png", 5)
int64_t* rcx_5 = var_88

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* var_78 = nullptr
int32_t i_2 = 0
sub_140a464c0()
int16_t* const _String_4 = &data_142d40450
int16_t* _String_7 = _String_9

if (r8 != 0)
    _String_4 = _String_7

int64_t* rax_1 = sub_140b1a780(&var_88, arg3)
int16_t* const r8_1

if (rax_1[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_1

char var_148 = 1
(*(data_14399ea08 + 0x80))(&data_14399ea08, &var_78, r8_1, _String_4, 1, 0, 0)
int64_t* rcx_7 = var_88

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* r12 = var_78
int64_t* rsi
rsi.b = 0
void* rax_5 = &r12[sx.q(i_2) * 2]
char arg_20 = 0
int64_t* var_b0 = r12

if (r12 != rax_5)
    while (true)
        uint64_t r8_2
        r8_2.b = 1
        int16_t* var_68
        sub_140b18720(&var_68, r12, r8_2.b)
        uint64_t rsi_1 = 0
        uint64_t var_120_1
        __builtin_memset(&var_120_1, 0, 0x14)
        uint64_t _String_2
        __builtin_memset(&_String_2, 0, 0x18)
        uint64_t r14_1 = 0
        int32_t r13_1 = 0
        int32_t var_128_1 = 0
        int16_t* var_a8 = nullptr
        int32_t var_a0_1 = 0
        sub_1405947f0(&var_a8, 2)
        uint64_t rdi_1 = zx.q(var_a0_1 + 2)
        var_a0_1 = rdi_1.d
        
        if (rdi_1.d s> 0)
            sub_140594770(&var_a8)
            rdi_1 = zx.q(var_a0_1)
        
        int16_t* r12_1 = var_a8
        UnDecorator::getReferenceType(r12_1, &data_142e6d328, 4)
        var_148.d = 0xffffffff
        int16_t* const rdx_9 = &data_142d40450
        
        if (rdi_1.d != 0)
            rdx_9 = r12_1
        
        int32_t rax_6 = sub_140a23cf0(&var_68, rdx_9, 1, 1, 0xffffffff)
        uint64_t var_118
        int32_t var_110_1
        
        if (rax_6 s>= 0)
            int32_t var_60
            int32_t r8_3 = var_60
            int16_t* r10_1 = var_68
            int32_t rbx
            int16_t* r14_2
            
            if (r8_3 == 0)
                r14_2 = &data_142d40450
                rbx = 0
            else
                r14_2 = r10_1
                rbx = r8_3 - 1
            
            var_120_1 = 0
            int32_t rdx_10 = 0
            uint64_t var_d0 = 0
            
            if (rax_6 s< rbx)
                rbx = rax_6
            
            int32_t var_c8_1 = 0
            int32_t rcx_13 = 0
            uint64_t r9_3 = 0
            int32_t var_c4_1 = 0
            
            if (r14_2 != 0 && *r14_2 != 0 && rbx s> 0)
                if (rbx + 1 s> 0)
                    sub_1405947f0(&var_d0, rbx + 1)
                    r9_3 = var_d0
                    rcx_13 = var_c4_1
                    rdx_10 = var_c8_1
                    var_120_1 = r9_3
                
                int32_t rsi_3 = rdx_10 + 1 + rbx
                
                if (rsi_3 s> rcx_13)
                    sub_140594770(&var_d0)
                    r9_3 = var_d0
                    var_120_1 = r9_3
                
                UnDecorator::getReferenceType(r9_3, r14_2, rbx * 2)
                rsi_1 = 0
                *(var_120_1 + (sx.q(rsi_3) << 1) - 2) = 0
                r8_3 = var_60
                r10_1 = var_68
            
            var_d0 = 0
            var_c8_1.q = 0
            int32_t rdi_2
            
            if (rdi_1.d == 0)
                rdi_2 = 0
            else
                rdi_2 = rdi_1.d - 1
            
            int32_t rax_9 = rdi_2 + rax_6
            int32_t rbx_1 = r8_3 - 1
            
            if (r8_3 == 0)
                rbx_1 = 0
            
            int32_t rcx_18
            
            if (rax_9 s>= 0)
                rcx_18 = rbx_1
                
                if (rax_9 s< rbx_1)
                    rcx_18 = rax_9
            else
                rcx_18 = 0
            
            int64_t r9_4 = sx.q(rcx_18)
            
            if (sx.q(rax_9) + 0x7fffffff s< r9_4)
                rbx_1 = rcx_18
            else if (sx.q(rax_9) + 0x7fffffff s< sx.q(rbx_1))
                rbx_1 = rax_9 + 0x7fffffff
            
            uint64_t var_f0 = 0
            int16_t* rax_11 = &data_142d40450
            
            if (r8_3 != 0)
                rax_11 = r10_1
            
            _String_4 = zx.q(rbx_1 - rcx_18)
            void* r15_1 = &rax_11[r9_4]
            int64_t var_e8_1 = 0
            rdi_1 = 0
            int32_t r14_3 = 0
            
            if (r15_1 != 0 && *r15_1 != 0 && _String_4.d s> 0)
                int32_t rdx_15 = (_String_4 + 1).d
                
                if (rdx_15 s> 0)
                    sub_1405947f0(&var_f0, rdx_15)
                    r14_3 = var_e8_1:4.d
                    rdi_1 = zx.q(var_e8_1.d)
                    rsi_1 = var_f0
                
                rdi_1 = zx.q(rdi_1.d + 1 + _String_4.d)
                var_e8_1.d = rdi_1.d
                
                if (rdi_1.d s> r14_3)
                    sub_140594770(&var_f0)
                    r14_3 = var_e8_1:4.d
                    rdi_1 = zx.q(var_e8_1.d)
                    rsi_1 = var_f0
                
                UnDecorator::getReferenceType(rsi_1, r15_1, _String_4.d * 2)
                *(rsi_1 + (sx.q(rdi_1.d) << 1) - 2) = 0
            
            uint64_t rcx_22 = var_118
            var_f0 = 0
            int64_t var_e8_2 = 0
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            var_118 = rsi_1
            _String_4.b = 1
            var_110_1 = r14_3
            r14_1 = var_120_1
            var_110_1 = rdi_1.d
        else
            _String_4.b = 0
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        uint64_t _String_1
        
        if (_String_4.b == 0)
            sub_1405947f0(&_String_2, 2)
            int32_t var_100_1
            r13_1 = var_100_1 + 2
            int32_t var_fc_1
            
            if (r13_1 s> var_fc_1)
                sub_140594770(&_String_2)
            
            _String_1 = _String_2
            *_String_1 = 0x31
        else
            int16_t* var_98 = nullptr
            int32_t var_90_1 = 0
            sub_1405947f0(&var_98, 2)
            int32_t rsi_4 = var_90_1 + 2
            
            if (rsi_4 s> 0)
                sub_140594770(&var_98)
            
            int16_t* r12_2 = var_98
            UnDecorator::getReferenceType(r12_2, 
                &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x15], 4)
            var_148.d = 0xffffffff
            int16_t* const rdx_19 = &data_142d40450
            
            if (rsi_4 != 0)
                rdx_19 = r12_2
            
            int32_t rax_13
            rax_13, r8_2 = sub_140a23cf0(&var_118, rdx_19, 1, 0, 0xffffffff)
            int32_t rbx_2 = var_110_1
            uint64_t _String_3
            
            if (rax_13 s>= 0)
                int32_t rdi_4
                uint64_t r14_4
                
                if (rbx_2 == 0)
                    r14_4 = &data_142d40450
                    rdi_4 = 0
                else
                    r14_4 = var_118
                    rdi_4 = rbx_2 - 1
                
                int32_t var_d8_1 = 0
                uint64_t _String_5 = 0
                int32_t rcx_28 = 0
                
                if (rax_13 s< rdi_4)
                    rdi_4 = rax_13
                
                _String_3 = 0
                uint64_t _String_8 = 0
                r13_1 = 0
                var_128_1 = 0
                int32_t var_d4_1 = 0
                
                if (r14_4 != 0 && *r14_4 != 0 && rdi_4 s> 0)
                    if (rdi_4 + 1 s> 0)
                        sub_1405947f0(&_String_8, rdi_4 + 1)
                        _String_5 = _String_8
                        rcx_28 = var_d4_1
                        r13_1 = var_d8_1
                        _String_3 = _String_5
                        var_128_1 = rcx_28
                    
                    r13_1 = r13_1 + 1 + rdi_4
                    
                    if (r13_1 s> rcx_28)
                        sub_140594770(&_String_8)
                        _String_5 = _String_8
                        _String_3 = _String_5
                        var_128_1 = var_d4_1
                    
                    UnDecorator::getReferenceType(_String_5, r14_4, rdi_4 * 2)
                    *(_String_3 + (sx.q(r13_1) << 1) - 2) = 0
                    _String_5 = _String_3
                    rcx_28 = var_128_1
                    rbx_2 = var_110_1
                
                _String_2 = _String_5
                _String_8 = 0
                int32_t var_fc_2 = rcx_28
                var_d8_1.q = 0
                int32_t rsi_5
                
                if (rsi_4 == 0)
                    rsi_5 = 0
                else
                    rsi_5 = rsi_4 - 1
                
                int32_t rax_15 = rax_13 + rsi_5
                int32_t rdi_5 = rbx_2 - 1
                
                if (rbx_2 == 0)
                    rdi_5 = 0
                
                int32_t rcx_33
                
                if (rax_15 s>= 0)
                    rcx_33 = rdi_5
                    
                    if (rax_15 s< rdi_5)
                        rcx_33 = rax_15
                else
                    rcx_33 = 0
                
                r8_2 = sx.q(rcx_33)
                
                if (sx.q(rax_15) + 0x7fffffff s< r8_2)
                    rdi_5 = rcx_33
                else if (sx.q(rax_15) + 0x7fffffff s< sx.q(rdi_5))
                    rdi_5 = rax_15 + 0x7fffffff
                
                uint64_t var_c0 = 0
                uint64_t rax_17 = &data_142d40450
                uint64_t rsi_6 = 0
                
                if (rbx_2 != 0)
                    rax_17 = var_118
                
                rdi_1 = zx.q(rdi_5 - rcx_33)
                int32_t rcx_34 = 0
                int32_t var_b4_1 = 0
                uint64_t r14_5 = rax_17 + (r8_2 << 1)
                int32_t rax_18 = 0
                int32_t var_b8_1 = 0
                
                if (r14_5 != 0 && *r14_5 != 0 && rdi_1.d s> 0)
                    int32_t rdx_25 = (rdi_1 + 1).d
                    
                    if (rdx_25 s> 0)
                        sub_1405947f0(&var_c0, rdx_25)
                        rcx_34 = var_b4_1
                        rax_18 = var_b8_1
                        rsi_6 = var_c0
                    
                    int32_t rbx_4 = rax_18 + 1 + rdi_1.d
                    
                    if (rbx_4 s> rcx_34)
                        sub_140594770(&var_c0)
                        rsi_6 = var_c0
                    
                    UnDecorator::getReferenceType(rsi_6, r14_5, rdi_1.d * 2)
                    *(rsi_6 + (sx.q(rbx_4) << 1) - 2) = 0
                    rbx_2 = var_110_1
                
                uint64_t rcx_38 = var_120_1
                var_c0 = 0
                var_b8_1.q = 0
                
                if (rcx_38 != 0)
                    sub_140a74f90(rcx_38)
                    rbx_2 = var_110_1
                
                r14_1 = rsi_6
                var_120_1 = rsi_6
                rdi_1.b = 0
            else
                rdi_1.b = 1
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
                rbx_2 = var_110_1
            
            if (rdi_1.b == 0)
                _String_1 = _String_3
            else
                rdi_1 = var_118
                r13_1 = rbx_2
                r8_2 = zx.q(var_128_1)
                
                if (rbx_2 != 0 || r8_2.d != 0)
                    sub_1405a4c70(&_String_2, rbx_2, r8_2.d)
                    _String_1 = _String_2
                    memcpy(_String_1, rdi_1, rbx_2 * 2)
                    r13_1 = rbx_2
                else
                    int32_t var_fc_3 = 0
                    _String_1 = _String_3
        
        wint_t _C
        
        if (r13_1 == 0)
            _C = 0
            _String_4 = &data_142d40450
            var_120_1 = r14_1
            
            if (_C == 0x2b)
                _C = _String_4[1]
                _String_4 = &_String_4[1]
        else
            _C = *_String_1
            _String_4 = _String_1
            
            if (_C == 0x2d || _C == 0x2b)
                _C = _String_4[1]
                _String_4 = &_String_4[1]
        
        rdi_1.b = 0
        int64_t* r12_3
        
        if (_C == 0)
        label_1420332b5:
            void*** _String_6
            int64_t zmm0_1
            _String_6, zmm0_1 = j_sub_140a82f30(0x38)
            
            if (_String_6 == 0)
                _String_6 = nullptr
            else
                _String_6[1].d = 1
                *_String_6 = &data_1432a4c78
                *(_String_6 + 0xc) = 1
                _String_6[2] = 0
                _String_6[3] = 0
                _String_6[4] = 0x3ff0000000000000
                _String_6[5] = 0
                _String_6[6] = 0
            
            var_88 = &_String_6[2]
            _String_4 = _String_6
            rsi = var_88
            
            if (_String_4 != 0)
                *(_String_4 + 8) += 1
                
                if (_String_6 != 0)
                    _String_6[1].d -= 1
                    
                    if (_String_6[1].d == 1)
                        (**_String_6)(_String_6)
                        int32_t temp3_1 = *(_String_6 + 0xc)
                        *(_String_6 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*_String_6)[1](_String_6, 1)
            
            r12_3 = var_b0
            
            if (rsi != r12_3)
                int32_t rdi_7 = r12_3[1].d
                int64_t r14_6 = *r12_3
                int32_t r8_15 = *(rsi + 0xc)
                rsi[1].d = rdi_7
                
                if (rdi_7 != 0 || r8_15 != 0)
                    sub_1405a4c70(rsi, rdi_7, r8_15)
                    zmm0_1 = memcpy(*rsi, r14_6, rdi_7 * 2)
                else
                    *(rsi + 0xc) = 0
            
            uint64_t _String = &data_142d40450
            
            if (r13_1 != 0)
                _String = _String_1
            
            _wtof(_String)
            int64_t zmm1_1
            zmm1_1.d = fconvert.s(zmm0_1)
            rsi[2] = _mm_cvtps_pd(zmm1_1).q
            int16_t* const rdx_35
            
            if (r12_3[1].d == 0)
                rdx_35 = &data_142d40450
            else
                rdx_35 = *r12_3
            
            sub_140b1ef70(&rsi[3], rdx_35, 2)
            r14 = arg_10
            int64_t rdi_8 = sx.q(r14[1].d)
            int32_t rax_24 = (rdi_8 + 1).d
            r14[1].d = rax_24
            
            if (rax_24 s> *(r14 + 0xc))
                sub_1405a4f90(r14)
            
            int64_t** rax_27 = (rdi_8 << 4) + *r14
            *rax_27 = rsi
            rax_27[1] = _String_4
            
            if (_String_4 != 0)
                *(_String_4 + 8) += 1
            
            rsi.b = 1
            arg_20 = 1
            
            if (_String_4 != 0)
                int32_t temp4_1 = *(_String_4 + 8)
                *(_String_4 + 8) -= 1
                
                if (temp4_1 == 1)
                    (**_String_4)(_String_4)
                    int32_t temp5_1 = *(_String_4 + 0xc)
                    *(_String_4 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*_String_4 + 8))(_String_4, 1)
            
            if (_String_1 != 0)
                sub_140a74f90(_String_1)
            
            uint64_t rcx_62 = var_118
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
            
            uint64_t rcx_63 = var_120_1
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
            
            int16_t* rcx_64 = var_68
            
            if (rcx_64 != 0)
                sub_140a74f90(rcx_64)
        else
            while (true)
                if (_C != 0x2e)
                    int32_t rax_20
                    rax_20, r8_2 = iswdigit(_C)
                    
                    if (rax_20 != 0)
                        goto label_1420332a3
                else if (rdi_1.b == 0)
                    rdi_1.b = 1
                label_1420332a3:
                    _C = _String_4[1]
                    _String_4 = &_String_4[1]
                    
                    if (_C == 0)
                        goto label_1420332b5
                    
                    continue
                
                if (_String_1 != 0)
                    sub_140a74f90(_String_1)
                
                uint64_t rcx_46 = var_118
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                int16_t* rcx_48 = var_68
                
                if (rcx_48 != 0)
                    sub_140a74f90(rcx_48)
                
                r14 = arg_10
                rsi = zx.q(arg_20)
                r12_3 = var_b0
                break
        
        r12 = &r12_3[2]
        var_b0 = r12
        
        if (r12 == rax_5)
            break
    
    _String_7 = _String_9

arg_20.q = &arg_10
arg_10.b = 0
sub_142018890(*r14, r14[1].d)
int32_t i_1 = i_2
int64_t* rbx_5 = var_78

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_50 = *rbx_5
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        rbx_5 = &rbx_5[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = var_78

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

if (_String_7 != 0)
    sub_140a74f90(_String_7)

return zx.q(rsi.b)
