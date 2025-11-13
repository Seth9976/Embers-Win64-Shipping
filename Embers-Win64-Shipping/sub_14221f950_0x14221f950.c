// 函数: sub_14221f950
// 地址: 0x14221f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t _String = __security_cookie ^ &var_108
int64_t _String_2 = _String
void* rbx = *(arg1 + 0x248)

if (rbx != 0)
    int32_t rcx
    rcx.b = sub_140b5b8a0(*(rbx + 0x34), 0).b == 0
    _String.b = *(rbx + 0x38) != 0
    _String.b |= rcx.b
    
    if (_String.b != 0)
        void* r9_1 = *(arg1 + 0x248)
        uint32_t rcx_1 = zx.d(*(r9_1 + 0x30))
        
        if (rcx_1 == 1)
            if (*(arg1 + 0x310) == 0)
                void* rdx_6 = *(arg1 + 0x18)
                int32_t rdi_1 = 0
                int32_t r10_1 = *(rdx_6 + 0x608)
                
                if (r10_1 s> 0)
                    void** rdx_7 = *(rdx_6 + 0x600)
                    
                    do
                        void* r8_2 = *rdx_7
                        
                        if (r8_2 != 0)
                            _String = *(r9_1 + 0x34)
                            
                            if (*(*(r8_2 + 0x10) + 0x28) == _String)
                                *(arg1 + 0x310) = r8_2
                                break
                        
                        rdi_1 += 1
                        rdx_7 = &rdx_7[1]
                    while (rdi_1 s< r10_1)
        else if (rcx_1 == 2 && *(arg1 + 0x2f8) == 0)
            void* r13_1 = *(arg1 + 0x18)
            int64_t* r12_1
            
            if ((*(r13_1 + 0x433) & 8) == 0)
                if (data_143de5480 == 0)
                    _String.b = 1
                else
                    bool cond:0_1 = GetCurrentThreadId().d == data_143de5470
                    r9_1 = *(arg1 + 0x248)
                    _String.b = cond:0_1
                
                r12_1 = 0x5a0
            
            if ((*(r13_1 + 0x433) & 8) != 0 || _String.b != 0)
                r12_1 = 0x440
            
            int32_t i_1 = 0
            int32_t rax_1 = data_143dbb200
            int32_t i = 0
            uint128_t var_78_1 = data_143dbb0d0
            uint128_t var_88_1 = data_143dbb0c0
            uint128_t zmm1 = data_143dbb0e0
            uint64_t var_58_1 = data_143dbb1f8.q
            int64_t var_c8 = 0
            char var_c0_1 = 0
            int32_t var_bc_1
            __builtin_memset(&var_bc_1, 0, 0x34)
            uint128_t var_68_1 = zmm1
            int32_t var_50_1 = rax_1
            char var_4c_1 = 0
            int128_t var_b8_1
            int64_t var_a0_1
            int128_t var_98_1
            
            if (*(r12_1 + r13_1 + 8) s> 0)
                int64_t* r8_1 = nullptr
                
                do
                    int64_t rcx_3 = *(r12_1 + r13_1)
                    int64_t rdx_1 = *(r8_1 + rcx_3)
                    var_c8 = rdx_1
                    char var_c0_2 = *(r8_1 + rcx_3 + 8)
                    int32_t var_bc_2 = (*(r8_1 + rcx_3 + 0xc)).d
                    var_b8_1.d = (*(r8_1 + rcx_3 + 0x10)).d
                    var_b8_1:4.q = *(r8_1 + rcx_3 + 0x14)
                    var_b8_1:0xc.d = *(r8_1 + rcx_3 + 0x1c)
                    uint64_t var_a8_1 = *(r8_1 + rcx_3 + 0x20)
                    var_a0_1.d = *(r8_1 + rcx_3 + 0x28)
                    var_a0_1:4.d = *(r8_1 + rcx_3 + 0x2c)
                    int64_t r11_1 = *(r8_1 + rcx_3 + 0x30)
                    var_98_1.q = r11_1
                    var_98_1:8.q = *(r8_1 + rcx_3 + 0x38)
                    uint128_t var_88_2 = *(r8_1 + rcx_3 + 0x40)
                    uint128_t var_78_2 = *(r8_1 + rcx_3 + 0x50)
                    uint128_t var_68_2 = *(r8_1 + rcx_3 + 0x60)
                    uint64_t var_58_2 = *(r8_1 + rcx_3 + 0x70)
                    int32_t var_50_2 = *(r8_1 + rcx_3 + 0x78)
                    char var_4c_2 = *(r8_1 + rcx_3 + 0x7c)
                    
                    if (rdx_1 == *(r9_1 + 0x34))
                        *(arg1 + 0x2f8) = r11_1
                        break
                    
                    i += 1
                    r8_1 -= -0x80
                while (i s< *(r12_1 + r13_1 + 8))
            
            _String = *(arg1 + 0x248)
            
            if (*(_String + 0x74) s> 0 && *(r12_1 + r13_1 + 8) s> 0)
                int64_t* r14_1 = nullptr
                
                do
                    int64_t rcx_4 = *(r12_1 + r13_1)
                    var_c8 = *(r14_1 + rcx_4)
                    char rax_10 = *(r14_1 + rcx_4 + 8)
                    int32_t var_bc_3 = (*(r14_1 + rcx_4 + 0xc)).d
                    var_b8_1.d = (*(r14_1 + rcx_4 + 0x10)).d
                    var_b8_1:4.q = *(r14_1 + rcx_4 + 0x14)
                    var_b8_1:0xc.d = *(r14_1 + rcx_4 + 0x1c)
                    uint64_t var_a8_2 = *(r14_1 + rcx_4 + 0x20)
                    var_a0_1.d = *(r14_1 + rcx_4 + 0x28)
                    var_a0_1:4.d = *(r14_1 + rcx_4 + 0x2c)
                    var_98_1.q = *(r14_1 + rcx_4 + 0x30)
                    var_98_1:8.q = *(r14_1 + rcx_4 + 0x38)
                    uint128_t var_88_3 = *(r14_1 + rcx_4 + 0x40)
                    uint128_t var_78_3 = *(r14_1 + rcx_4 + 0x50)
                    uint128_t var_68_3 = *(r14_1 + rcx_4 + 0x60)
                    uint64_t var_58_3 = *(r14_1 + rcx_4 + 0x70)
                    int32_t var_50_3 = *(r14_1 + rcx_4 + 0x78)
                    char var_4c_3 = *(r14_1 + rcx_4 + 0x7c)
                    int16_t* wcs1_1
                    int64_t zmm6_1 = sub_140b63b70(&var_c8, &wcs1_1)
                    int16_t* const wcs1 = &data_142d40450
                    int32_t var_e0
                    
                    if (var_e0 != 0)
                        wcs1 = wcs1_1
                    
                    _String = wcsstr(wcs1, u"TrailSourceOffset")
                    
                    if (_String != 0)
                        _String = _wtoi(_String)
                        int64_t rsi_1 = sx.q(_String.d)
                        
                        if (_String.d s>= 0)
                            int64_t rcx_9
                            int64_t rdx_4
                            
                            if (rax_10 == 3)
                                sub_14220a740(arg1 + 0x300, rsi_1.d, 1)
                                rcx_9 = *(arg1 + 0x300)
                                rdx_4 = rsi_1 * 3
                                *(rcx_9 + (rdx_4 << 2)) = var_b8_1:4.q
                                _String = zx.q(var_b8_1:0xc.d)
                                *(rcx_9 + (rdx_4 << 2) + 8) = _String.d
                            else if (rax_10 == 1)
                                sub_14220a740(arg1 + 0x300, rsi_1.d, 1)
                                int64_t rax_18 = *(arg1 + 0x300)
                                rdx_4 = rsi_1 * 3
                                int32_t _String_1 = 0
                                *(rax_18 + (rdx_4 << 2)) = 0
                                *(rax_18 + (rdx_4 << 2) + 8) = 0
                                rcx_9 = *(arg1 + 0x300)
                                _String = zx.q(_String_1)
                                *(rcx_9 + (rdx_4 << 2)) = (_mm_unpacklo_ps(var_bc_3, zmm6_1)).q
                                *(rcx_9 + (rdx_4 << 2) + 8) = _String.d
                    
                    int16_t* wcs1_2 = wcs1_1
                    
                    if (wcs1_2 != 0)
                        _String = sub_140a74f90(wcs1_2)
                    
                    i_1 += 1
                    r14_1 -= -0x80
                while (i_1 s< *(r12_1 + r13_1 + 8))

__security_check_cookie(_String_2 ^ &var_108)
return _String
