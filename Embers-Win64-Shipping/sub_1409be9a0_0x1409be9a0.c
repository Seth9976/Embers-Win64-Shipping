// 函数: sub_1409be9a0
// 地址: 0x1409be9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20
sub_14090aa40(*(arg1 + 0x28) + 0x1a8, &arg_20, data_143f360f8)
void* var_118
sub_14090aa40(*(arg1 + 0x28) + 0x1a8, &var_118, data_143f36100)
void* var_108
sub_14099aef0(*(arg1 + 0x28) + 0x1a8, &var_108, data_143f36108)
TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ceec64 s> *(rsi + 0x14))
    _Init_thread_header(&data_143ceec64)
    
    if (data_143ceec64 == 0xffffffff)
        atexit(sub_142cba1b0)
        _Init_thread_footer(&data_143ceec64)

if (data_143991088 != data_1439910b4)
    int32_t rax_3 = data_14399108c
    data_143991088 = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_140638cc0(&data_143991080, 0)
    
    data_1439910b0 = 0xffffffff
    data_1439910b4 = 0
    sub_140774790(&data_143991090)
    int64_t rcx_7 = sx.q(data_1439910c8)
    
    if (rcx_7 s> 0)
        void* rax_4 = data_1439910c0
        void* rdi_1 = &data_1439910b8
        
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_7 << 2)

int32_t var_134 = 1
int32_t r10 = *(arg1 + 0x450)
void* var_130 = arg1 + 0x438
int32_t rcx_8 = 0
int32_t var_138 = 0
int32_t rdi_2 = 0
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (r10 != 0)
    void* rax_5 = *(arg1 + 0x448)
    void* r8_3 = arg1 + 0x438
    
    if (rax_5 != 0)
        r8_3 = rax_5
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r8_3
    
    if (rdx_5 != 0)
    label_1409beb47:
        int32_t rax_12 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_134_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_124.d = rdi_2 - rax_13 + 0x1f
        
        if (rdi_2 - rax_13 + 0x1f s> r10)
            var_124.d = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_8)
            rdi_2 += 0x20
            rcx_8 += 1
            var_124:4.d = rdi_2
            var_138 = rcx_8
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r8_3 + (rdx_6 << 2) + 4)
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1409beb47
        
        var_124.d = r10

int32_t rdx_7 = *(arg1 + 0x450)
int128_t var_b0 = 0xffffffff
int32_t rbx_1 = 0xffffffff << (rdx_7.b & 0x1f)
uint128_t var_c0 = var_138.o
int32_t rdi_5 = rdx_7 s>> 5
int32_t r8_5 = rdx_7 & 0xffffffe0
int64_t var_d8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_128_2 = rbx_1
var_124.d = rdx_7
uint128_t var_f8 = (arg1 + 0x428).o
uint128_t var_e8 = var_c0

if (rdx_7 != r10)
    void* rax_15 = *(arg1 + 0x448)
    void* r9_1 = arg1 + 0x438
    
    if (rax_15 != 0)
        r9_1 = rax_15
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *(r9_1 + (sx.q(rdi_5) << 2)) & rbx_1
    
    if (rdx_11 != 0)
    label_1409bec10:
        int32_t rax_22 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_4
        
        var_124.d = r8_5 - rax_23 + 0x1f
        
        if (r8_5 - rax_23 + 0x1f s> r10)
            var_124.d = r10
    else
        while (true)
            int64_t rcx_13 = sx.q(rdi_5)
            r8_5 += 0x20
            rdi_5 += 1
            
            if (rcx_13.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rcx_13 << 2) + 4)
            var_128_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1409bec10
        
        var_124.d = r10

while (true)
    int64_t rax_25 = sx.q(var_e8:0xc.d)
    int64_t* rdx_12 = var_f8.q
    
    if (rax_25.d == (var_128_2.q u>> 0x20).d && var_e8.q == arg1 + 0x438 && rdx_12 == arg1 + 0x428)
        if (data_143ceec78 s> *(rsi + 0x14))
            _Init_thread_header(&data_143ceec78)
            
            if (data_143ceec78 == 0xffffffff)
                atexit(sub_142cb7ca0)
                _Init_thread_footer(&data_143ceec78)
        
        int32_t rsi_3 = data_143991088 - data_1439910b4
        int32_t i_3 = data_143ceec70
        
        if (rsi_3 s> data_143ceec74)
            if (i_3 != 0)
                int64_t* rdi_14 = data_143ceec68 + 8
                int32_t i
                
                do
                    int64_t rcx_24 = *rdi_14
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    rdi_14 = &rdi_14[3]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            bool cond:8_1 = data_143ceec74 == rsi_3
            data_143ceec70 = 0
            
            if (not(cond:8_1))
                sub_1405a5130(&data_143ceec68, rsi_3)
        else
            if (i_3 != 0)
                int64_t* rdi_12 = data_143ceec68 + 8
                int32_t i_1
                
                do
                    int64_t rcx_23 = *rdi_12
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    rdi_12 = &rdi_12[3]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            data_143ceec70 = 0
        
        int32_t r8_8 = data_1439910a8
        void* r9_2 = &data_143991090
        void* var_130_1 = &data_143991090
        int32_t rcx_25 = 0
        int32_t var_138_1 = 0
        int32_t rdi_15 = 0
        int32_t var_134_2 = 1
        int32_t var_128_3 = 0xffffffff
        int64_t var_124_1 = 0
        
        if (r8_8 != 0)
            void* rax_41 = data_1439910a0
            
            if (rax_41 != 0)
                r9_2 = rax_41
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r8_8 - 1)
            int32_t rdx_20 = *r9_2
            
            if (rdx_20 != 0)
            label_1409beeb6:
                int32_t rax_48 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_5
                int32_t temp0_7
                temp0_7, rflags_5 = _bit_scan_reverse(rax_48)
                int32_t var_134_3 = rax_48
                int32_t r15_1
                
                if (rax_48 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_7
                
                int32_t rax_49 = rdi_15 - r15_1 + 0x1f
                
                if (rax_49 s> r8_8)
                    rax_49 = r8_8
                
                var_124_1.d = rax_49
            else
                while (true)
                    int64_t rdx_21 = sx.q(rcx_25)
                    rdi_15 += 0x20
                    rcx_25 += 1
                    var_124_1:4.d = rdi_15
                    var_138_1 = rcx_25
                    
                    if (rdx_21.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        var_124_1.d = r8_8
                        break
                    
                    rdx_20 = *(r9_2 + (rdx_21 << 2) + 4)
                    int32_t var_128_4 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_1409beeb6
        
        void* rbx_4 = arg_20
        void* rsi_4 = var_118
        uint128_t var_c0_1 = var_138_1.o
        void* r14_2 = var_108
        int128_t var_b0_1 = 0xffffffff
        var_124_1.d = r8_8
        int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t zmm6
        int128_t var_58 = zmm6
        var_f8 = (&data_143991080).o
        uint128_t var_e8_1 = var_c0_1
        int64_t var_d8_1 = zmm2
        int128_t zmm8
        int128_t var_78 = zmm8
        
        while (true)
            int64_t rax_50 = sx.q(var_e8_1:0xc.d)
            int64_t* rdx_22 = var_f8.q
            
            if (rax_50.d == ((0xffffffff << (r8_8.b & 0x1f)).q u>> 0x20).d
                    && var_e8_1.q == &data_143991090 && rdx_22 == &data_143991080)
                return sub_1409de410(arg1, &data_143ceec68) __tailcall
            
            int64_t r15_2 = sx.q(data_143ceec70)
            int64_t rdi_17 = sx.q(*(*rdx_22 + rax_50 * 0xc))
            int64_t rdx_23 = rdi_17 * 3
            int64_t rcx_30 = **(rbx_4 + 0x18)
            var_108.d = (*(rcx_30 + (rdx_23 << 2)) ^ 0x80000000).d
            int64_t rcx_31 = **(rsi_4 + 0x18)
            int32_t var_100_1 = (*(rcx_30 + (rdx_23 << 2) + 8) ^ 0x80000000).d
            var_108:4.d = (*(rcx_30 + (rdx_23 << 2) + 4) ^ 0x80000000).d
            var_118.d = (*(rcx_31 + (rdx_23 << 2)) ^ 0x80000000).d
            int32_t rax_55 = (r15_2 + 1).d
            var_118:4.d = (*(rcx_31 + (rdx_23 << 2) + 4) ^ 0x80000000).d
            bool cond:9_1 = rax_55 s<= data_143ceec74
            int32_t var_110_1 = (*(rcx_31 + (rdx_23 << 2) + 8) ^ 0x80000000).d
            zmm8 = *(**(r14_2 + 0x18) + (rdi_17 << 2))
            data_143ceec70 = rax_55
            
            if (not(cond:9_1))
                sub_1405a4df0(&data_143ceec68)
            
            int64_t rax_56 = data_143ceec68
            int64_t rcx_33 = r15_2 * 3
            int64_t* r15_4 = rax_56 + 8 + (rcx_33 << 3)
            *r15_4 = 0
            r15_4[1] = 0
            *(rax_56 + (rcx_33 << 3)) = rdi_17.d
            r15_4[1].d = 0
            
            if (*(r15_4 + 0xc) s<= 2)
                sub_14090a730(r15_4, 3)
            
            int64_t rdi_18 = sx.q(r15_4[1].d)
            zmm6 = data_142d3f660
            int32_t var_a0_1 = var_100_1
            int32_t rax_58 = (rdi_18 + 1).d
            int64_t* var_c8_1
            var_c8_1.b = 2
            var_b0_1:8.q = var_108
            int64_t var_88_1 = 0
            r15_4[1].d = rax_58
            
            if (rax_58 s> *(r15_4 + 0xc))
                sub_14090a6a0(r15_4)
            
            int64_t rax_59 = data_143f360f8
            uint128_t zmm0 = var_c8_1.o
            int64_t* rcx_38 = rdi_18 * 0x60 + *r15_4
            var_c8_1.b = 2
            *(rcx_38 + 0x10) = zmm0
            *rcx_38 = rax_59
            *(rcx_38 + 0x20) = zmm6
            rcx_38[1].d = 0
            zmm6 = data_142d3f660
            *(rcx_38 + 0x30) = var_b0_1
            int32_t var_a0_2 = var_110_1
            uint128_t var_98
            *(rcx_38 + 0x40) = var_98
            int64_t var_88_2 = 0
            *(rcx_38 + 0x50) = var_88_1.o
            int64_t rdi_19 = sx.q(r15_4[1].d)
            var_b0_1:8.q = var_118
            int32_t rax_61 = (rdi_19 + 1).d
            r15_4[1].d = rax_61
            
            if (rax_61 s> *(r15_4 + 0xc))
                sub_14090a6a0(r15_4)
            
            int64_t rax_62 = data_143f36100
            zmm0 = var_c8_1.o
            uint128_t zmm1 = var_98
            int64_t* rcx_42 = rdi_19 * 0x60 + *r15_4
            var_98:4.d = zmm8.d
            var_c8_1.b = 4
            *(rcx_42 + 0x10) = zmm0
            *rcx_42 = rax_62
            *(rcx_42 + 0x20) = zmm6
            rcx_42[1].d = 0
            zmm6 = data_142d3f660
            *(rcx_42 + 0x30) = var_b0_1
            *(rcx_42 + 0x40) = zmm1
            int64_t var_88_3 = 0
            *(rcx_42 + 0x50) = var_88_2.o
            int64_t rdi_20 = sx.q(r15_4[1].d)
            int32_t rax_63 = (rdi_20 + 1).d
            r15_4[1].d = rax_63
            
            if (rax_63 s> *(r15_4 + 0xc))
                sub_14090a6a0(r15_4)
            
            int64_t rax_64 = data_143f36108
            int64_t* rcx_46 = rdi_20 * 0x60 + *r15_4
            *(rcx_46 + 0x10) = var_c8_1.o
            *rcx_46 = rax_64
            int32_t rax_65 = var_f8:0xc.d
            *(rcx_46 + 0x20) = zmm6
            rcx_46[1].d = 0
            var_e8_1:8.d &= not.d(rax_65)
            *(rcx_46 + 0x30) = var_b0_1
            *(rcx_46 + 0x40) = var_98
            *(rcx_46 + 0x50) = var_88_3.o
            sub_14059bdd0(&var_f8:8)
    
    int64_t rbx_2 = sx.q(*(*rdx_12 + rax_25 * 0xc)) * 5
    int64_t rsi_1 = *(*(arg1 + 0x28) + 0xe0)
    int32_t rax_29 = data_143991088
    int32_t rdi_8 = *(rsi_1 + (rbx_2 << 3) + 8) - data_1439910b4 + rax_29
    
    if (rdi_8 s> rax_29 - data_1439910b4)
        sub_1407c2fa0(&data_143991080, rdi_8)
        int32_t rdx_15
        
        if (rdi_8 u< 4)
            rdx_15 = 1
        else
            uint32_t rdi_9 = rdi_8 u>> 1
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rdi_9 + 8)
            int32_t rcx_17
            
            if (rdi_9 == 0xfffffff8)
                rcx_17 = 0x20
            else
                rcx_17 = 0x1f - temp0_5
            
            int32_t rcx_19 = rcx_17 << 0x1a s>> 0x1f
            uint64_t rflags_4
            char temp0_6
            temp0_6, rflags_4 = _bit_scan_reverse(rdi_9 + 7)
            char rdx_14
            
            if (rcx_19 == 0)
                rdx_14 = 0x20
            else
                rdx_14 = 0x1f - temp0_6
            
            rdx_15 = 1 << ((not.d(rcx_19)).b & (0x20 - rdx_14))
        
        int32_t rax_35 = data_1439910c8
        
        if (rax_35 == 0 || rax_35 s< rdx_15)
            data_1439910c8 = rdx_15
            sub_140771f10(&data_143991080)
    
    int32_t* i_2 = *(rsi_1 + (rbx_2 << 3))
    
    for (void* rbx_3 = &i_2[sx.q(*(rsi_1 + (rbx_2 << 3) + 8))]; i_2 != rbx_3; i_2 = &i_2[1])
        void arg_10
        sub_140998ff0(&data_143991080, &arg_10, i_2, nullptr)
    
    var_e8:8.d &= not.d(var_f8:0xc.d)
    sub_14059bdd0(&var_f8:8)
