// 函数: sub_1426f5d50
// 地址: 0x1426f5d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_128 = 0
int32_t r11 = *(arg1 + 0x110)
void* r9 = arg1 + 0xf8
void* r15 = arg1
int32_t var_124 = 1
uint64_t r14
r14.b = 0
void* var_120 = r9
int32_t var_118 = 0xffffffff
int32_t rcx = 0
int32_t var_114 = 0
int32_t var_110 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_114_2
    
    if (rdx_3 != 0)
    label_1426f5e0d:
        int32_t rax_7 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_124_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        int32_t var_114_1 = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> r11)
            var_114_2 = r11
    else
        while (true)
            int64_t rax_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_110 = rcx
            var_128 = r8
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r9 + (rax_4 << 2) + 4)
            var_118 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1426f5e0d
        
        var_114_2 = r11

void* var_b0 = arg1 + 0xe8
int16_t var_f0 = 0
double zmm3[0x2] = var_128.o
double zmm0[0x2] = 0xffffffff
double rax_10 = zmm3[0]
var_118.o = zmm3
var_128.o = (arg1 + 0xe8).o
zmm0[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
double var_108[0x2] = zmm0

if (0 s< *(rax_10 i+ 0x18))
    uint64_t r8_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int32_t i_1
    int32_t i = i_1
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    
    do
        int32_t* rdx_7 = *var_128.q + 8 + sx.q(i) * 0x38
        int32_t* var_138_1 = rdx_7
        int32_t* rbx_1 = *(rdx_7 + 8)
        void* r12_2 = sx.q(rdx_7[4]) * 0x3c + rbx_1
        
        while (rbx_1 != r12_2)
            arg2[0].d = arg2[0].d f+ *rbx_1
            bool cond:2_1 = arg2[0].d f< rbx_1[1]
            *rbx_1 = arg2[0].d
            
            if (not(cond:2_1))
                uint32_t rcx_4 = rbx_1[0xe]
                
                if (((rcx_4 u>> 1).b & 1) == 0)
                    goto label_1426f5fb3
                
                char rdi_1 = rbx_1[0xb].b
                
                if (data_143f724c4 s> *(0x14 + *(ThreadLocalStoragePointer + (r8_1 << 3))))
                    _Init_thread_header(&data_143f724c4)
                    
                    if (data_143f724c4 == 0xffffffff)
                        data_143f724b8 = 0xff
                        sub_140b58260(&data_143f724bc, u"Invalid", 1)
                        _Init_thread_footer(&data_143f724c4)
                    
                    rdx_7 = var_138_1
                
                if (rdi_1 != data_143f724b8 && not(0f f>= rbx_1[2])
                        && (*rbx_1)[0].d f< 3.40282347e+38f)
                    goto label_1426f5fc2
                
                rcx_4 = zx.d(rbx_1[0xe].b)
            label_1426f5fb3:
                
                if ((rcx_4.b & 1) != 0)
                label_1426f5fc2:
                    
                    if (((rbx_1[0xe] u>> 2).b & 1) == 0)
                        int64_t rax_20 = sub_140d3c6e0(rdx_7)
                        
                        if (rax_20 != 0)
                            void* rdi_2 = r15 + 0x138
                            zmm6 = *rbx_1
                            int32_t r14_2 = rbx_1[0xe] | 4
                            zmm7 = rbx_1[1]
                            zmm8 = rbx_1[2]
                            zmm9 = zx.o(*(rbx_1 + 0xc))
                            int32_t r13_1 = rbx_1[5]
                            zmm10 = zx.o(*(rbx_1 + 0x18))
                            rbx_1[0xe] = r14_2 & 0xfffffffd
                            int32_t rax_23 = rbx_1[8]
                            int64_t r15_1 = sx.q(*(rdi_2 + 8))
                            int64_t rax_24 = *(rbx_1 + 0x24)
                            char rax_25 = rbx_1[0xb].b
                            int64_t rax_26 = *(rbx_1 + 0x30)
                            int32_t rax_27 = (r15_1 + 1).d
                            *(rdi_2 + 8) = rax_27
                            
                            if (rax_27 s> *(rdi_2 + 0xc))
                                sub_140775520(rdi_2)
                            
                            int64_t rax_28 = *rdi_2
                            int64_t r8_2 = r15_1 * 9
                            r15 = arg1
                            *(rax_28 + (r8_2 << 3)) = rax_20
                            *(rax_28 + (r8_2 << 3) + 0x20) = zmm10.q
                            *(rax_28 + (r8_2 << 3) + 0x28) = rax_23
                            *(rax_28 + (r8_2 << 3) + 0x2c) = rax_24
                            *(rax_28 + (r8_2 << 3) + 0x14) = zmm9.q
                            *(rax_28 + (r8_2 << 3) + 8) = zmm6.d
                            *(rax_28 + (r8_2 << 3) + 0xc) = zmm7.d
                            *(rax_28 + (r8_2 << 3) + 0x10) = zmm8.d
                            *(rax_28 + (r8_2 << 3) + 0x1c) = r13_1
                            *(rax_28 + (r8_2 << 3) + 0x34) = rax_25
                            *(rax_28 + (r8_2 << 3) + 0x38) = rax_26
                            *(rax_28 + (r8_2 << 3) + 0x40) &= 0xfffffff8
                            *(rax_28 + (r8_2 << 3) + 0x40) |= r14_2 & 5
                            r14.b = 1
                            *(*rdi_2 + (r8_2 << 3) + 0xc) =
                                *(*(r15 + 0x148) + (zx.q(rbx_1[0xb].b) << 2))
            
            rdx_7 = var_138_1
            rbx_1 = &rbx_1[0xf]
            r8_1 = zx.q(data_14401b1a0)
            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        
        var_110 &= not.d(var_120:4.d)
        sub_14059bdd0(&var_120)
        i = i_1
        r8_1 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    while (i s< *(var_118.q + 0x18))
    
    if (var_f0.b != 0 && var_f0:1.b != 0)
        r8_1.b = 1
        sub_1426f6bf0(arg1 + 0xe8, *(arg1 + 0xf0) - *(arg1 + 0x11c), r8_1.b)

return zx.q(r14.b)
