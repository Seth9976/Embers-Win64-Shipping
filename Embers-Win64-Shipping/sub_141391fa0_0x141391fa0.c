// 函数: sub_141391fa0
// 地址: 0x141391fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rdi = arg1
sub_141391ba0(arg1, arg2)
int32_t r9 = *(rdi + 0x3a0)
int32_t rsi = 1
int32_t var_c4 = 0x10000
uint32_t temp0 = divu.dp.d(0:(*(rdi + 0x380)), r9)
int16_t var_b0 = 1
int128_t var_e8 = data_143f02308
uint32_t rcx = 1
uint32_t temp0_1 = divu.dp.d(0:(*(rdi + 0x37c)), r9)
uint32_t rdx = 1
int32_t var_c8 = 1
int16_t var_c0 = 1
int64_t var_bc = 0xb

if (temp0_1 u>= 1)
    rdx = temp0_1

int32_t var_b4 = 0xc
int32_t var_d8 = data_143f02318

if (temp0 u>= 1)
    rcx = temp0

uint32_t var_d4 = rdx
uint32_t var_d0 = rcx
int32_t var_cc = 0
wchar16 const* const var_a8 = u"UnknownTexture2D"
int16_t var_a0 = 1
char var_9e = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_e8, rdi + 0x68, u"SmallDepthZ", 1, 0, 0)
int64_t var_108
int128_t var_98
int64_t var_6c

if (*(rdi + 0x3d0) s>= 3)
    int64_t rax_7 = *(rdi + 0x37c)
    int32_t var_d4_1 = rax_7.d
    int32_t var_d0_1 = rax_7:4.d
    char var_110_1 = 0
    var_bc:4.d = data_143ed33f4
    int32_t var_d8_1 = data_1439c7b18
    char var_118_1 = 0
    char var_120_1 = 1
    wchar16 const* const var_128_1 = u"ScreenSpaceAO"
    int16_t var_b0_1 = 0
    var_e8 = data_1439c7b08
    int32_t var_cc_1 = 0
    int32_t var_c8_1 = 1
    int32_t var_c4_1 = 0x10000
    int16_t var_c0_1 = 1
    var_bc.d = 3
    wchar16 const* const var_a8_1 = u"UnknownTexture2D"
    int16_t var_a0_1 = 1
    char var_9e_1 = 0
    int32_t var_b4_1 = 0x10009
    sub_1419a0ce0(&data_1439c9260, arg2, &var_e8, rdi + 0xc0, var_128_1, var_120_1, var_118_1, 
        var_110_1)
    int32_t rax_10 = data_1439b70ac
    int32_t r14_1
    
    if (rax_10 s>= 4)
        r14_1 = 0x800
        
        if (rax_10 s< 0x800)
            r14_1 = rax_10
    else
        r14_1 = 4
    
    uint32_t rbx_1 = arg3 * 3
    int32_t rax_11 = 0x40010009
    void* r12_1 = rdi + 0x148
    
    if (*(rdi + 0x3d0) s< 3)
        rax_11 = 0x40000009
    
    sub_1413a9de0(r12_1, rbx_1, 1)
    void* r13_1 = rdi + 0x170
    sub_1413a9de0(r13_1, rbx_1, 1)
    int32_t rcx_4 = 0
    int32_t var_100_1 = 0
    
    if (rbx_1 s> 0)
        var_108 = 0
        
        do
            void* rbx_2 = *(r12_1 + 0x18)
            int32_t var_d8_2 = data_1439c7b30
            wchar16 const* const var_a8_2 = u"UnknownTextureVolume"
            var_e8 = data_1439c7b20
            int16_t var_b0_2 = 0
            var_a0_1 = 0
            int32_t var_d4_2 = r14_1
            int32_t var_d0_2 = r14_1
            int32_t var_cc_2 = r14_1
            int32_t var_c8_2 = 1
            int32_t var_c4_2 = 0x10000
            int16_t var_c0_2 = 1
            int64_t var_bc_1 = 0xa
            int32_t var_b4_2 = rax_11
            var_a0_1.b = 0
            int64_t rax_14 = sub_14139f6c0(rcx_4, 0)
            void* r9_3 = r12_1
            
            if (rbx_2 != 0)
                r9_3 = rbx_2
            
            sub_1419a0ce0(&data_1439c9260, arg2, &var_e8, r9_3 + var_108, rax_14, 1, 0, 0)
            void* rbx_3 = *(r13_1 + 0x18)
            int32_t var_88_1 = data_1439c7b30
            int32_t var_64_1 = rax_11
            wchar16 const* const var_58_1 = u"UnknownTextureVolume"
            int16_t var_60_1 = 0
            int16_t var_50 = 0
            var_98 = data_1439c7b20
            int32_t var_84_1 = r14_1
            int32_t var_80_1 = r14_1
            int32_t var_7c_1 = r14_1
            int32_t var_78_1 = 1
            int32_t var_74_1 = 0x10000
            int16_t var_70_1 = 1
            var_6c = 0xa
            var_50.b = 0
            int64_t rax_17 = sub_14139f6c0(var_100_1, 1)
            void* r9_5 = r13_1
            
            if (rbx_3 != 0)
                r9_5 = rbx_3
            
            sub_1419a0ce0(&data_1439c9260, arg2, &var_98, r9_5 + var_108, rax_17, 1, 0, 0)
            rcx_4 = var_100_1 + 1
            var_100_1 = rcx_4
            var_108 += 8
        while (rcx_4 s< rbx_1)
        
        rdi = arg1
    
    if (data_1439b70a0 == 0 && data_1439c7a15 != 0)
        TEB* gsbase
        void* rbx_6 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        
        if (data_143ec6fb8 s> *(rbx_6 + 0x14))
            _Init_thread_header(&data_143ec6fb8)
            
            if (data_143ec6fb8 == 0xffffffff)
                int64_t* rcx_22 = data_143db18d0
                
                if (rcx_22 == 0)
                    sub_140a53c40()
                    rcx_22 = data_143db18d0
                
                data_143ec6fb0 = (*(*rcx_22 + 0xb0))(rcx_22, u"r.TranslucencyVolumeBlur", 1)
                _Init_thread_footer(&data_143ec6fb8)
        
        int64_t* rcx_8 = data_143ec6fb0
        int32_t rax_21 = (*(*rcx_8 + 0x90))(rcx_8)
        void* r10_1 = &var_e8:8
        r14_1.b = rax_21 s> 0
        int32_t r9_7 = 0
        void* rax_22 = *(r12_1 + 0x18)
        int64_t r11_1
        r11_1.b = rax_21 s> 0
        int64_t i = 0
        
        if (rax_22 != 0)
            r12_1 = rax_22
        
        void* rax_23 = *(r13_1 + 0x18)
        
        if (rax_23 != 0)
            r13_1 = rax_23
        
        do
            r10_1 += 0x10
            int64_t rcx_9 = sx.q(r9_7 * 2)
            r9_7 += 1
            *(&var_e8 + (rcx_9 << 3)) = *(*(r12_1 + (i << 3)) + 8)
            void* rax_26 = *(r13_1 + (i << 3))
            i += 1
            *(r10_1 - 0x10) = *(rax_26 + 8)
        while (i s< r11_1 + 2)
        
        if (data_143ec7020 s> *(rbx_6 + 0x14))
            _Init_thread_header(&data_143ec7020)
            
            if (data_143ec7020 == 0xffffffff)
                data_143ec6fc0 = data_143dbb1e0
                _Init_thread_footer(&data_143ec7020)
        
        int32_t rdx_8 = *(rdi + 0x3d0)
        int64_t* r8_5 = &var_e8
        
        if (r14_1.b == 0)
            sub_14137acc0(arg2, rdx_8, r8_5, &data_143ec6fc0)
        else
            sub_14137b180(arg2, rdx_8, r8_5, &data_143ec6fc0)

if (sub_141248b20(*(rdi + 0x3d0)) != 0)
    int64_t rax_29 = *(rdi + 0x37c)
    int32_t var_84_2 = rax_29.d
    char var_110_4 = 0
    int32_t var_80_2 = rax_29:4.d
    int32_t var_88_2 = data_1439c7b30
    char var_118_4 = 1
    char var_120_4 = 1
    wchar16 const* const var_128_4 = u"DirectionalOcclusion"
    int16_t var_60_2 = 0
    var_98 = data_1439c7b20
    int32_t var_7c_2 = 0
    int32_t var_78_2 = 1
    int32_t var_74_2 = 0x10000
    int16_t var_70_2 = 1
    var_6c = 0x28
    int32_t var_64_2 = 9
    wchar16 const* const var_58_2 = u"UnknownTexture2D"
    int16_t var_50_1 = 1
    char var_4e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_98, rdi + 0x38, var_128_4, var_120_4, var_118_4, 
        var_110_4)

if (*(rdi + 0x3d0) s>= 3)
    int64_t rax_31 = *(rdi + 0x37c)
    int32_t var_84_3 = rax_31.d
    int32_t var_80_3 = rax_31:4.d
    char var_110_5 = 0
    var_6c:4.d = data_143ed33ec
    int32_t var_88_3 = data_1439c7ae8
    char var_118_5 = 0
    char var_120_5 = 1
    wchar16 const* const var_128_5 = u"LightAccumulation"
    int16_t var_60_3 = 0
    var_98 = data_1439c7ad8
    int32_t var_7c_3 = 0
    int32_t var_78_3 = 1
    int32_t var_74_3 = 0x10000
    int16_t var_70_3 = 1
    var_6c.d = 0xa
    wchar16 const* const var_58_3 = u"UnknownTexture2D"
    int16_t var_50_2 = 1
    char var_4e_2 = 0
    int32_t var_64_3 = 0x10009
    sub_1419a0ce0(&data_1439c9260, arg2, &var_98, rdi + 0x30, var_128_5, var_120_5, var_118_5, 
        var_110_5)

if (*(rdi + 0x3d9) != 0)
    sub_1414cb8c0(&var_98)
    var_6c:4.d |= data_143ed3378
    sub_1419a0ce0(&data_1439c9260, arg2, &var_98, rdi + 0x50, u"GBufferVelocity", 1, 1, 0)

char result = sub_1419ba670(*(rdi + 0x3d0))

if (result != 0)
    int64_t rcx_17 = *(rdi + 0x37c)
    
    if (data_1439b6a04 s>= 1)
        rsi = data_1439b6a04
    
    var_108.d = divs.dp.d(sx.q(rsi - 1 + rcx_17.d), rsi)
    var_108:4.d = divs.dp.d(sx.q(rsi - 1 + (rcx_17 u>> 0x20).d), rsi)
    result = sub_1415046b0(rdi + 0x1e0, arg2, var_108)

__security_check_cookie(rax_1 ^ &var_148)
return result
