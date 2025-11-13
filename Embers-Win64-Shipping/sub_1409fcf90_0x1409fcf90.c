// 函数: sub_1409fcf90
// 地址: 0x1409fcf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* result = arg1
sub_141cd2e90(arg1)
void** const var_230 = &data_142e3fa48
sub_141cef460(&var_230)
int64_t rbx = data_143f36150

if (result[0x62].d != *(result + 0x33c))
    int32_t rax_4 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = &result[0x68]
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(result[0x6a].d) - 1) & sx.q(rax_4)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_3 = result[0x61]
        
        do
            int64_t rax_6 = sx.q(i) * 3
            
            if (*(rdx_3 + (rax_6 << 3)) == rbx)
                break
            
            i = *(rdx_3 + (rax_6 << 3) + 0x10)
        while (i != 0xffffffff)

int64_t rbx_1 = data_143f35cc8
void* const rcx_7

if (result[0x2b].d == *(result + 0x184))
label_1409fd100:
    rcx_7 = nullptr
else
    int32_t rax_9 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_2 = &result[0x31]
    void* rcx_5 = *(r8_2 + 8)
    
    if (rcx_5 != 0)
        r8_2 = rcx_5
    
    int32_t rax_11 = *(r8_2 + (((sx.q(result[0x33].d) - 1) & sx.q(rax_9)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_1409fd100_1:
        rcx_7 = nullptr
    else
        int64_t r8_3 = result[0x2a]
        
        while (true)
            int64_t rdx_7 = sx.q(rax_11) * 3
            rcx_7 = r8_3 + (rdx_7 << 3)
            
            if (*(r8_3 + (rdx_7 << 3)) == rbx_1)
                break
            
            rax_11 = *(rcx_7 + 0x10)
            
            if (rax_11 == 0xffffffff)
                goto label_1409fd100_2
        
        if (rax_11 == 0xffffffff)
        label_1409fd100_2:
            rcx_7 = nullptr

void* r15 = rcx_7 + 8

if (rcx_7 == 0)
    r15 = nullptr

void* var_260_1
void* const r15_1

if (r15 != 0)
    r15_1 = *r15
    var_260_1 = r15_1

if (r15 == 0 || *(r15_1 + 8) != 1)
    r15_1 = nullptr
    var_260_1 = nullptr

void* var_1d8
sub_14090aa40(&result[0x35], &var_1d8, data_143f36100)
int64_t rbx_2 = data_143f36108
void* const rcx_13

if (result[0x36].d == *(result + 0x1dc))
label_1409fd1c0:
    rcx_13 = nullptr
else
    int32_t rax_14 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
    void* r8_5 = &result[0x3c]
    void* rcx_11 = *(r8_5 + 8)
    
    if (rcx_11 != 0)
        r8_5 = rcx_11
    
    int32_t rax_16 = *(r8_5 + (((sx.q(result[0x3e].d) - 1) & sx.q(rax_14)) << 2))
    
    if (rax_16 == 0xffffffff)
    label_1409fd1c0_1:
        rcx_13 = nullptr
    else
        int64_t r8_6 = result[0x35]
        
        while (true)
            int64_t rdx_12 = sx.q(rax_16) * 3
            rcx_13 = r8_6 + (rdx_12 << 3)
            
            if (*(r8_6 + (rdx_12 << 3)) == rbx_2)
                break
            
            rax_16 = *(rcx_13 + 0x10)
            
            if (rax_16 == 0xffffffff)
                goto label_1409fd1c0_2
        
        if (rax_16 == 0xffffffff)
        label_1409fd1c0_2:
            rcx_13 = nullptr

void* rax_17 = rcx_13 + 8

if (rcx_13 == 0)
    rax_17 = nullptr

void* const var_1b8_1
void* rax_18

if (rax_17 != 0)
    rax_18 = *rax_17
    var_1b8_1 = rax_18

if (rax_17 == 0 || *(rax_18 + 8) != 3)
    var_1b8_1 = nullptr

void* var_1d0
sub_14090aa40(&result[0x35], &var_1d0, data_143f360f8)
int64_t rbx_3 = data_143f36110
void* const rcx_19

if (result[0x36].d == *(result + 0x1dc))
label_1409fd280:
    rcx_19 = nullptr
else
    int32_t rax_21 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
    void* r8_8 = &result[0x3c]
    void* rcx_17 = *(r8_8 + 8)
    
    if (rcx_17 != 0)
        r8_8 = rcx_17
    
    int32_t rax_23 = *(r8_8 + (((sx.q(result[0x3e].d) - 1) & sx.q(rax_21)) << 2))
    
    if (rax_23 == 0xffffffff)
    label_1409fd280_1:
        rcx_19 = nullptr
    else
        int64_t r8_9 = result[0x35]
        
        while (true)
            int64_t rdx_17 = sx.q(rax_23) * 3
            rcx_19 = r8_9 + (rdx_17 << 3)
            
            if (*(r8_9 + (rdx_17 << 3)) == rbx_3)
                break
            
            rax_23 = *(rcx_19 + 0x10)
            
            if (rax_23 == 0xffffffff)
                goto label_1409fd280_2
        
        if (rax_23 == 0xffffffff)
        label_1409fd280_2:
            rcx_19 = nullptr

void* rax_24 = rcx_19 + 8

if (rcx_19 == 0)
    rax_24 = nullptr

void* const var_1b0_1
void* rax_25

if (rax_24 != 0)
    rax_25 = *rax_24
    var_1b0_1 = rax_25

if (rax_24 == 0 || *(rax_25 + 8) != 0)
    var_1b0_1 = nullptr

int64_t rbx_4 = data_143f360f0
void* const rcx_23

if (result[0x36].d == *(result + 0x1dc))
label_1409fd320:
    rcx_23 = nullptr
else
    int32_t rax_28 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
    void* r8_10 = &result[0x3c]
    void* rcx_21 = *(r8_10 + 8)
    
    if (rcx_21 != 0)
        r8_10 = rcx_21
    
    int32_t rax_30 = *(r8_10 + (((sx.q(result[0x3e].d) - 1) & sx.q(rax_28)) << 2))
    
    if (rax_30 == 0xffffffff)
    label_1409fd320_1:
        rcx_23 = nullptr
    else
        int64_t r8_11 = result[0x35]
        
        while (true)
            int64_t rdx_21 = sx.q(rax_30) * 3
            rcx_23 = r8_11 + (rdx_21 << 3)
            
            if (*(r8_11 + (rdx_21 << 3)) == rbx_4)
                break
            
            rax_30 = *(rcx_23 + 0x10)
            
            if (rax_30 == 0xffffffff)
                goto label_1409fd320_2
        
        if (rax_30 == 0xffffffff)
        label_1409fd320_2:
            rcx_23 = nullptr

void* r14 = rcx_23 + 8

if (rcx_23 == 0)
    r14 = nullptr

void* const var_238_1
void* const r14_1

if (r14 != 0)
    r14_1 = *r14
    var_238_1 = r14_1

if (r14 == 0 || *(r14_1 + 8) != 2)
    r14_1 = nullptr
    var_238_1 = nullptr

int64_t r12 = sx.q(arg2[0x8a].d)
int32_t rdi_5 = 0
int32_t rsi_1 = 0
uint64_t rbx_5 = 0
int64_t var_b8
int128_t zmm6
int128_t zmm7
zmm6, zmm7 = sub_1409fcd00(&var_b8, arg2, result)
int64_t var_250 = 0
int64_t var_248 = 0

if (r12.d s> 0)
    sub_1405dadb0(&var_250, r12.d)

int32_t i_1 = 0

if (r12.d s> 0)
    int64_t r9_1 = 0
    
    do
        void* rcx_27
        
        if (i_1 s>= arg2[0x8a].d)
            rcx_27 = nullptr
        else
            rcx_27 = arg2[0x89] + r9_1
        
        rdi_5 += *(rcx_27 + 8)
        int32_t rcx_28 = *(rcx_27 + 0x18)
        i_1 += 1
        rsi_1 += rcx_28
        r9_1 += 0x40
        rbx_5 = zx.q(rbx_5.d + rcx_28 s/ 3)
    while (i_1 s< r12.d)
    
    r14_1 = var_238_1
    r15_1 = var_260_1

sub_1409d9850(result, result[1].d - *(result + 0x34) + rdi_5)
void* rax_33 = &result[7]
sub_1409d93a0(rax_33, result[8].d - *(result + 0x6c) + rsi_1)
void* rax_34 = &result[0x1c]
sub_1409d9530(rax_34, result[0x1d].d - *(result + 0x114) + rbx_5.d)
sub_1409d93a0(&result[0xe], result[0xf].d - *(result + 0xa4) + (rbx_5 << 1).d)
sub_14090c670(r14_1, 4)
int32_t i_2 = 0
int32_t var_274

if (r12.d s> 0)
    int64_t r13 = var_250
    
    do
        int64_t rax_38 = (*(*arg2 + 0x548))(arg2, zx.q(i_2))
        
        if (rax_38 == 0)
            rax_38, zmm6, zmm7 = sub_14210f630(0)
        
        sub_140865c40(&var_b8, &var_274, rax_38)
        int64_t rax_39 = sx.q(var_274)
        void* const rcx_36
        
        if (rax_39.d == 0xffffffff)
            rcx_36 = nullptr
        else
            rcx_36 = var_b8 + rax_39 * 0x18
        
        int64_t rbx_6 = sx.q(var_248.d)
        int32_t* rsi_2 = rcx_36 + 8
        
        if (rcx_36 == 0)
            rsi_2 = nullptr
        
        int32_t rax_41 = (rbx_6 + 1).d
        var_248.d = rax_41
        
        if (rax_41 s> var_248:4.d)
            sub_1405a4cf0(&var_250)
            r13 = var_250
        
        i_2 += 1
        *(r13 + (rbx_6 << 2)) = *rsi_2
    while (i_2 s< r12.d)
    
    r15_1 = var_260_1
    result = arg1

int32_t rax_43 = 0
var_274 = 0

if (r12.d s> 0)
    void* r13_1 = var_1d8
    int64_t rdx_40 = 0
    void* r12_1 = var_1d0
    int128_t var_48_1 = zmm6
    zmm6 = 0xbf800000
    int128_t var_58_1 = zmm7
    zmm7 = 0x3f800000
    int64_t var_280_5 = 0
    
    do
        void* const rax_46
        
        if (rax_43 s>= arg2[0x8a].d)
            rax_46 = nullptr
        else
            rax_46 = (sx.q(rax_43) << 6) + arg2[0x89]
        
        int32_t rdi_6 = *(rax_46 + 8)
        int64_t rcx_39 = var_250
        void* const var_1e8 = rax_46
        int32_t rsi_3 = *(rcx_39 + (rdx_40 << 2))
        int32_t var_268_1 = rsi_3
        int32_t* var_158 = nullptr
        int32_t var_150_1 = 0
        int32_t var_12c_1 = 0x80
        int64_t var_148
        __builtin_memset(&var_148, 0, 0x1c)
        int32_t var_128_1 = 0xffffffff
        int32_t var_124_1 = 0
        void* var_118_1 = nullptr
        int32_t var_110_1 = 0
        
        if (rdi_6 s> 0)
            sub_14090a510(&var_158, rdi_6)
            int32_t rdx_44
            
            if (rdi_6 u< 4)
                rdx_44 = 1
            else
                uint32_t rax_48 = rdi_6 u>> 1
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_48 + 8)
                int32_t rcx_41
                
                if (rax_48 == 0xfffffff8)
                    rcx_41 = 0x20
                else
                    rcx_41 = 0x1f - temp0_2
                
                uint64_t rflags_2
                char temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_48 + 7)
                char rdx_43
                
                if (rax_48 == 0xfffffff9)
                    rdx_43 = 0x20
                else
                    rdx_43 = 0x1f - temp0_3
                
                rdx_44 = 1 << ((not.d(rcx_41 << 0x1a s>> 0x1f)).b & (0x20 - rdx_43))
            
            if (var_110_1 == 0 || var_110_1 s< rdx_44)
                var_110_1 = rdx_44
                sub_140908c40(&var_158)
        
        int32_t var_288 = 0
        int32_t var_278
        int32_t var_270
        int64_t var_220
        
        if (rdi_6 s> 0)
            void* const r13_2 = var_1e8
            int32_t rax_53 = 0
            
            do
                __builtin_memset(&var_220, 0, 0x20)
                var_270.q = sx.q(rax_53) * 0x4c + *r13_2
                int64_t rbx_7 = sx.q(sub_14090b340(arg1, &var_220))
                var_278 = rbx_7.d
                int64_t var_210_1
                
                if (var_210_1 != 0)
                    sub_140a74f90(var_210_1)
                
                int64_t rcx_50 = var_220
                
                if (rcx_50 != 0)
                    sub_140a74f90(rcx_50)
                
                sub_14090bdf0(&arg1[0x2a], rbx_7.d)
                int64_t rdx_47 = rbx_7 * 3
                int64_t rcx_52 = **(r15_1 + 0x18)
                int64_t* rax_59 = var_270.q
                *(rcx_52 + (rdx_47 << 2)) = *rax_59
                *(rcx_52 + (rdx_47 << 2) + 8) = rax_59[1].d
                sub_1409fa280(&var_158, &var_288, &var_278)
                rax_53 = var_288 + 1
                var_288 = rax_53
            while (rax_53 s< rdi_6)
            
            rsi_3 = var_268_1
            r14_1 = var_238_1
            r13_1 = var_1d8
            r12_1 = var_1d0
        
        int32_t rbx_8 = *(var_1e8 + 0x18)
        int64_t var_108 = 0
        int32_t var_100_1 = 0
        int32_t var_dc_1 = 0x80
        int64_t var_f8
        __builtin_memset(&var_f8, 0, 0x1c)
        int32_t var_d8_1 = 0xffffffff
        int32_t var_d4_1 = 0
        void* var_c8_1 = nullptr
        int32_t var_c0_1 = 0
        
        if (rdi_6 s> 0)
            sub_14090a510(&var_108, rdi_6)
            int32_t rdx_52
            
            if (rdi_6 u< 4)
                rdx_52 = 1
            else
                uint32_t rdi_7 = rdi_6 u>> 1
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rdi_7 + 8)
                int32_t rcx_58
                
                if (rdi_7 == 0xfffffff8)
                    rcx_58 = 0x20
                else
                    rcx_58 = 0x1f - temp0_4
                
                int32_t rcx_60 = rcx_58 << 0x1a s>> 0x1f
                uint64_t rflags_4
                char temp0_5
                temp0_5, rflags_4 = _bit_scan_reverse(rdi_7 + 7)
                char rdx_51
                
                if (rcx_60 == 0)
                    rdx_51 = 0x20
                else
                    rdx_51 = 0x1f - temp0_5
                
                rdx_52 = 1 << ((not.d(rcx_60)).b & (0x20 - rdx_51))
            
            if (var_c0_1 == 0 || var_c0_1 s< rdx_52)
                var_c0_1 = rdx_52
                sub_140908c40(&var_108)
        
        var_278 = 0
        void var_120
        
        if (rbx_8 s> 0)
            void* const r15_4 = var_1e8
            int32_t rax_68 = 0
            
            do
                int64_t r8_17 = sx.q(*(*(r15_4 + 0x10) + (sx.q(rax_68) << 2)))
                int32_t var_1f8_1 = r8_17.d
                void* rdx_56
                
                if (var_150_1 == var_124_1)
                label_1409fd8ce:
                    rdx_56 = nullptr
                else
                    void* rcx_65 = &var_120
                    
                    if (var_118_1 != 0)
                        rcx_65 = var_118_1
                    
                    int32_t rax_74 = *(rcx_65 + ((sx.q(var_110_1 - 1) & r8_17) << 2))
                    
                    if (rax_74 == 0xffffffff)
                    label_1409fd8ce_1:
                        rdx_56 = nullptr
                    else
                        while (true)
                            int32_t* rdx_55 = var_158
                            
                            if (rdx_55[sx.q(rax_74) * 4] == r8_17.d)
                                break
                            
                            rax_74 = rdx_55[sx.q(rax_74) * 4 + 2]
                            
                            if (rax_74 == 0xffffffff)
                                goto label_1409fd8ce_2
                        
                        if (rax_74 == 0xffffffff)
                        label_1409fd8ce_2:
                            rdx_56 = nullptr
                        else
                            rdx_56 = &var_158[sx.q(rax_74) * 4]
                
                int32_t rdi_9 = *(rdx_56 + 4)
                var_220.d = data_143a1c6b4
                int64_t var_218_1 = 0
                int64_t var_210_2 = 0
                int32_t rax_76 = sub_14090b490(rax_33, &var_220)
                var_288 = rax_76
                
                if (var_218_1 != 0)
                    sub_140a74f90(var_218_1)
                
                sub_141cdb490(arg1, rax_76, rdi_9)
                sub_1409fa280(&var_108, &var_278, &var_288)
                void* rbx_11 = sx.q(var_1f8_1) * 0x4c + *r15_4
                int64_t rdx_60 = sx.q(var_288) * 3
                int64_t rcx_72 = **(r13_1 + 0x18)
                *(rcx_72 + (rdx_60 << 2)) = *(rbx_11 + 0x18)
                *(rcx_72 + (rdx_60 << 2) + 8) = *(rbx_11 + 0x20)
                int64_t rcx_73 = **(r12_1 + 0x18)
                *(rcx_73 + (rdx_60 << 2)) = *(rbx_11 + 0xc)
                *(rcx_73 + (rdx_60 << 2) + 8) = *(rbx_11 + 0x14)
                int64_t zmm0_2
                
                if (*(rbx_11 + 0x24) == 0)
                    zmm0_2 = zmm7.q
                else
                    zmm0_2 = zmm6.q
                
                int64_t rdi_11 = sx.q(var_288)
                *(**(var_1b8_1 + 0x18) + (rdi_11 << 2)) = zmm0_2.d
                void var_168
                uint128_t zmm0_3 = *sub_140acc920(&var_168, rbx_11 + 0x28)
                uint128_t var_1a8_1 = zmm0_3
                *(**(var_1b0_1 + 0x18) + rdi_11 * 0x10) = zmm0_3
                *(**(r14_1 + 0x18) + (rdi_11 << 3)) = *(rbx_11 + 0x2c)
                *(*(*(r14_1 + 0x18) + 0x10) + (rdi_11 << 3)) = *(rbx_11 + 0x34)
                *(*(*(r14_1 + 0x18) + 0x20) + (rdi_11 << 3)) = *(rbx_11 + 0x3c)
                zmm0_3 = zx.o(*(rbx_11 + 0x44))
                int64_t rcx_80 = *(*(r14_1 + 0x18) + 0x30)
                rax_68 = var_278 + 1
                var_278 = rax_68
                *(rcx_80 + (rdi_11 << 3)) = zmm0_3.q
            while (rax_68 s< rbx_8)
            
            rsi_3 = var_268_1
            r15_1 = var_260_1
        
        int64_t i_5 = sx.q(rbx_8 s/ 3)
        
        if (i_5 s> 0)
            void* const r13_3 = var_1e8
            void* rbx_12 = nullptr
            int32_t rdi_12 = 0
            int64_t i_4 = i_5
            var_270.q = 0
            int64_t i_3
            
            do
                int32_t* var_1c8 = nullptr
                int32_t var_1c0_1 = 3
                sub_1405a4cf0(&var_1c8)
                int32_t* r9_2 = var_1c8
                int32_t j_4 = 3
                int32_t* rcx_82 = r9_2
                int32_t j
                
                do
                    *rcx_82 = data_143a1c6b0
                    rcx_82 = &rcx_82[1]
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                
                if (var_150_1 != var_124_1)
                    void* rcx_83 = &var_120
                    int64_t r8_20 = sx.q(*(rbx_12 + *(r13_3 + 0x10)))
                    
                    if (var_118_1 != 0)
                        rcx_83 = var_118_1
                    
                    int32_t j_1 = *(rcx_83 + ((sx.q(var_110_1 - 1) & r8_20) << 2))
                    
                    if (j_1 != 0xffffffff)
                        int32_t* rdx_68 = var_158
                        
                        do
                            int64_t rcx_85 = sx.q(j_1) * 2
                            
                            if (rdx_68[rcx_85 * 2] == r8_20.d)
                                break
                            
                            j_1 = rdx_68[rcx_85 * 2 + 2]
                        while (j_1 != 0xffffffff)
                
                void var_d0
                void* rax_114
                
                if (var_100_1 == var_d4_1)
                label_1409fdb5b:
                    rax_114 = nullptr
                else
                    void* rcx_86 = &var_d0
                    
                    if (var_c8_1 != 0)
                        rcx_86 = var_c8_1
                    
                    int32_t rax_103 = *(rcx_86 + ((sx.q(var_c0_1 - 1) & sx.q(rdi_12)) << 2))
                    
                    if (rax_103 == 0xffffffff)
                    label_1409fdb5b_1:
                        rax_114 = nullptr
                    else
                        int64_t rdx_71 = var_108
                        int64_t rcx_88
                        
                        while (true)
                            rcx_88 = sx.q(rax_103) * 2
                            
                            if (*(rdx_71 + (rcx_88 << 3)) == rdi_12)
                                break
                            
                            rax_103 = *(rdx_71 + (rcx_88 << 3) + 8)
                            
                            if (rax_103 == 0xffffffff)
                                goto label_1409fdb5b_2
                        
                        if (rax_103 == 0xffffffff)
                        label_1409fdb5b_2:
                            rax_114 = nullptr
                        else
                            rax_114 = rdx_71 + (rcx_88 << 3)
                
                *r9_2 = *(rax_114 + 4)
                
                if (var_150_1 != var_124_1)
                    int64_t r8_21 = sx.q(*(rbx_12 + *(r13_3 + 0x10) + 4))
                    void* rcx_90 = &var_120
                    
                    if (var_118_1 != 0)
                        rcx_90 = var_118_1
                    
                    int32_t j_2 = *(rcx_90 + ((sx.q(var_110_1 - 1) & r8_21) << 2))
                    
                    if (j_2 != 0xffffffff)
                        int32_t* rdx_74 = var_158
                        
                        do
                            int64_t rcx_92 = sx.q(j_2) * 2
                            
                            if (rdx_74[rcx_92 * 2] == r8_21.d)
                                break
                            
                            j_2 = rdx_74[rcx_92 * 2 + 2]
                        while (j_2 != 0xffffffff)
                
                void* rax_115
                
                if (var_100_1 == var_d4_1)
                label_1409fdc49:
                    rax_115 = nullptr
                else
                    void* rcx_94 = &var_d0
                    
                    if (var_c8_1 != 0)
                        rcx_94 = var_c8_1
                    
                    int32_t rax_113 = *(rcx_94 + (((sx.q(rdi_12) + 1) & sx.q(var_c0_1 - 1)) << 2))
                    
                    if (rax_113 == 0xffffffff)
                    label_1409fdc49_1:
                        rax_115 = nullptr
                    else
                        int64_t r8_22 = var_108
                        int64_t rdx_79
                        
                        while (true)
                            rdx_79 = sx.q(rax_113) * 2
                            
                            if (*(r8_22 + (rdx_79 << 3)) == rdi_12 + 1)
                                break
                            
                            rax_113 = *(r8_22 + (rdx_79 << 3) + 8)
                            
                            if (rax_113 == 0xffffffff)
                                goto label_1409fdc49_2
                        
                        rax_115 = r8_22 + (rdx_79 << 3)
                        
                        if (rax_113 == 0xffffffff)
                        label_1409fdc49_2:
                            rax_115 = nullptr
                
                r9_2[1] = *(rax_115 + 4)
                
                if (var_150_1 != var_124_1)
                    void* rcx_96 = &var_120
                    int64_t r8_23 = sx.q(*(*(r13_3 + 0x10) + rbx_12 + 8))
                    
                    if (var_118_1 != 0)
                        rcx_96 = var_118_1
                    
                    int32_t j_3 = *(rcx_96 + ((sx.q(var_110_1 - 1) & r8_23) << 2))
                    
                    if (j_3 != 0xffffffff)
                        int32_t* rdx_82 = var_158
                        
                        do
                            int64_t rcx_98 = sx.q(j_3) * 2
                            
                            if (rdx_82[rcx_98 * 2] == r8_23.d)
                                break
                            
                            j_3 = rdx_82[rcx_98 * 2 + 2]
                        while (j_3 != 0xffffffff)
                
                void* rax_127
                
                if (var_100_1 == var_d4_1)
                label_1409fdd24:
                    rax_127 = nullptr
                else
                    void* rcx_100 = &var_d0
                    
                    if (var_c8_1 != 0)
                        rcx_100 = var_c8_1
                    
                    int32_t rax_126 = *(rcx_100 + (((sx.q(rdi_12) + 2) & sx.q(var_c0_1 - 1)) << 2))
                    
                    if (rax_126 == 0xffffffff)
                    label_1409fdd24_1:
                        rax_127 = nullptr
                    else
                        int64_t r8_24 = var_108
                        int64_t rdx_87
                        
                        while (true)
                            rdx_87 = sx.q(rax_126) * 2
                            
                            if (*(r8_24 + (rdx_87 << 3)) == rdi_12 + 2)
                                break
                            
                            rax_126 = *(r8_24 + (rdx_87 << 3) + 8)
                            
                            if (rax_126 == 0xffffffff)
                                goto label_1409fdd24_2
                        
                        rax_127 = r8_24 + (rdx_87 << 3)
                        
                        if (rax_126 == 0xffffffff)
                        label_1409fdd24_2:
                            rax_127 = nullptr
                
                r9_2[2] = *(rax_127 + 4)
                int32_t var_200_1 = data_143a1c6c4
                __builtin_memset(&var_220, 0, 0x20)
                int32_t rax_130 = sub_14090b0b0(rax_34, &var_220)
                int64_t var_210_3
                
                if (var_210_3 != 0)
                    sub_140a74f90(var_210_3)
                
                int64_t rcx_104 = var_220
                
                if (rcx_104 != 0)
                    sub_140a74f90(rcx_104)
                
                int32_t var_170_1 = var_1c0_1
                var_1e8.o = var_1c8.o
                zmm6, zmm7 = sub_141cda990(arg1, rax_130, rsi_3, &var_1e8, nullptr)
                sub_140a74f90(var_1c8)
                rdi_12 += 3
                rbx_12 = var_270.q + 0xc
                var_270.q = rbx_12
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
            r14_1 = var_238_1
            r15_1 = var_260_1
            r13_1 = var_1d8
            r12_1 = var_1d0
        
        sub_1405ae180(&var_108)
        sub_1405ae180(&var_158)
        rax_43 = var_274 + 1
        rdx_40 = var_280_5 + 1
        var_274 = rax_43
        var_280_5 = rdx_40
    while (rdx_40 s< r12)
    
    result = arg1

int64_t rax_134 = var_250

if (rax_134 != 0)
    sub_140a74f90(rax_134)

sub_1405ae080(&var_b8)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
