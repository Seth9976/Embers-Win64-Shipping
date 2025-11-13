// 函数: sub_140a9eb70
// 地址: 0x140a9eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140a752e0()
int16_t* var_1a8
int64_t* var_c8 = &var_1a8
int16_t* var_1b8
int64_t* var_c0 = &var_1b8
void* var_148
int64_t* var_b8 = &var_148
__builtin_memset(&var_1b8, 0, 0x20)
var_148 = nullptr
int32_t result_1 = 0
sub_140af2b60()
int64_t var_1b0
int64_t var_1a0

if (sub_140b2acc0(&data_143dbb3f0, u"CULTUREFORCOOKING=", &var_1a8, 1) != 0)
    int32_t rbx_1 = var_1a0.d
    int16_t* rdi_1 = var_1a8
    int32_t r8_1 = var_1b0:4.d
    var_1b0.d = rbx_1
    
    if (rbx_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&var_1b8, rbx_1, r8_1)
        memcpy(var_1b8, rdi_1, rbx_1 * 2)
    else
        var_1b0:4.d = 0
    
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"firstinstall") != 0)
        int16_t* const r9_1 = &data_142d40450
        
        if (var_1a0.d != 0)
            r9_1 = var_1a8
        
        sub_140b00d80(data_143ddb400, u"Internationalization", u"Language", r9_1, &data_143de5780)
        int16_t* const r9_2 = &data_142d40450
        
        if (var_1b0.d != 0)
            r9_2 = var_1b8
        
        sub_140b00d80(data_143ddb400, u"Internationalization", u"Locale", r9_2, &data_143de5780)

if (var_1a0.d s<= 1)
    sub_140af2b60()
    sub_140b2acc0(&data_143dbb3f0, u"LANGUAGE=", &var_1a8, 1)

if (var_1b0.d s<= 1)
    sub_140af2b60()
    sub_140b2acc0(&data_143dbb3f0, u"LOCALE=", &var_1b8, 1)

int64_t var_168 = 0
int32_t var_160 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"CULTURE=", &var_168, 1) != 0)
    int32_t rbx_2
    
    if (var_1a0.d s> 1)
        rbx_2 = var_160
    else
        rbx_2 = var_160
        int64_t rdi_2 = var_168
        int32_t r8_7 = var_1a0:4.d
        var_1a0.d = rbx_2
        
        if (rbx_2 != 0 || r8_7 != 0)
            sub_1405a4c70(&var_1a8, rbx_2, r8_7)
            memcpy(var_1a8, rdi_2, rbx_2 * 2)
            rbx_2 = var_160
        else
            var_1a0:4.d = 0
    
    if (var_1b0.d s<= 1)
        int64_t rdi_3 = var_168
        int32_t r8_10 = var_1b0:4.d
        var_1b0.d = rbx_2
        
        if (rbx_2 != 0 || r8_10 != 0)
            sub_1405a4c70(&var_1b8, rbx_2, r8_10)
            memcpy(var_1b8, rdi_3, rbx_2 * 2)
        else
            var_1b0:4.d = 0

int64_t rcx_8 = var_168

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140a9ba20(&var_c8, u"game user settings", &data_143de5840)
sub_140a9ba20(&var_c8, u"game", &data_143de5830)
sub_140a9ba20(&var_c8, u"engine", &data_143de5780)

if (var_1a0.d s<= 1)
    int64_t* rbx_3 = *(rax + 0x60)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    sub_140597df0(&var_1a8, sub_140903440(*(rax + 0x58)))
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rax_7 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

if (var_1b0.d s<= 1)
    int64_t* rbx_4 = *(rax + 0x70)
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    sub_140597df0(&var_1b8, sub_140903440(*(rax + 0x68)))
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rdi_4 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rdi_4 == 1)
                (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_4))

int64_t var_178 = 0
int32_t var_170 = 0
sub_1405947f0(&var_178, 3)
int32_t rax_13 = var_170 + 3
var_170 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_178)

UnDecorator::getReferenceType(var_178, &data_142e5c258, 6)
uint64_t rax_14

if ((arg1 & 4) != 0)
    rax_14 = sub_140aae970()
    int64_t var_158 = 0
    int64_t var_150_1 = 0
    int64_t* rbx_5 = *(rax_14 + 0x140)
    void* rdi_7 = &rbx_5[sx.q(*(rax_14 + 0x148)) * 2]
    
    if (rbx_5 != rdi_7)
        do
            int64_t* rcx_23 = *rbx_5
            
            if ((*(*rcx_23 + 0x10))(rcx_23, 0, &var_158).b != 0)
                break
            
            rbx_5 = &rbx_5[2]
        while (rbx_5 != rdi_7)
        
        int32_t rdx_11 = var_150_1.d
        
        if (rdx_11 s<= 1)
            int64_t rcx_25 = var_158
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        else
            int64_t rcx_24 = var_178
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
                rdx_11 = var_150_1.d
            
            var_178 = var_158
            var_170 = var_150_1:4.d
            var_170 = rdx_11

int32_t rbx_6 = var_1a0.d
int16_t* rdi_8 = var_1a8
int16_t* var_1c8 = nullptr
int32_t var_1c0 = rbx_6
int32_t var_1bc

if (rbx_6 != 0)
    sub_1405a4c70(&var_1c8, rbx_6, 0)
    memcpy(var_1c8, rdi_8, rbx_6 * 2)
else
    var_1bc = 0

if ((arg1 & 4) == 0)
    rax_14.b = arg1 & 2
    
    if ((arg1 & 8) != 0)
        rax_14.b |= 8
else
    rax_14.b = 4

char rdx_14 = rax_14.b
char rbx_7 = rdx_14 | 0x10

if ((arg1 & 0x10) == 0)
    rbx_7 = rdx_14

uint64_t var_138
sub_140ab0d60(sub_140aae970(), &var_138, rbx_7)
char* var_f0 = rax
uint64_t* var_f8 = &var_138
int16_t* var_b0
sub_140a9c910(&var_f8, &var_b0, &var_1a8)
int16_t* var_a0
sub_140a9c910(&var_f8, &var_a0, &var_178)
int16_t* rdi_9 = var_b0
int16_t* rsi = var_a0
int32_t i_8
int32_t var_a8
uint64_t rax_19
int32_t var_98

if (var_a8 s> 1)
    int16_t* rdx_18 = &data_142d40450
    int16_t* rcx_32 = &data_142d40450
    
    if (var_a8 != 0)
        rdx_18 = rdi_9
    
    if (var_1a0.d != 0)
        rcx_32 = var_1a8
    
    if (sub_140a54510(rcx_32, rdx_18).d != 0)
        var_1c0 = var_a8
        
        if (var_a8 != 0 || var_1bc != 0)
            sub_1405a4c70(&var_1c8, var_a8, var_1bc)
            memcpy(var_1c8, rdi_9, var_a8 * 2)
        else
            int32_t var_1bc_1 = 0
else if (var_98 s> 1)
    var_1c0 = var_98
    
    if (var_98 != 0 || var_1bc != 0)
        sub_1405a4c70(&var_1c8, var_98, var_1bc)
        memcpy(var_1c8, rsi, var_98 * 2)
    else
        int32_t var_1bc_2 = 0
else if (i_8 s<= 0)
    rax_19 = &var_178
label_140a9f107:
    int32_t rbx_10 = *(rax_19 + 8)
    int16_t* r14_1 = *rax_19
    var_1c0 = rbx_10
    
    if (rbx_10 != 0 || var_1bc != 0)
        sub_1405a4c70(&var_1c8, rbx_10, var_1bc)
        memcpy(var_1c8, r14_1, rbx_10 * 2)
    else
        int32_t var_1bc_3 = 0
else
    rax_19 = var_138
    
    if (&var_1c8 != rax_19)
        goto label_140a9f107

if (rsi != 0)
    sub_140a74f90(rsi)

if (rdi_9 != 0)
    sub_140a74f90(rdi_9)

int32_t i_4 = i_8
uint64_t rbx_11 = var_138

if (i_4 != 0)
    int32_t i
    
    do
        int64_t rcx_39 = *rbx_11
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        rbx_11 += 0x10
        i = i_4
        i_4 -= 1
    while (i != 1)

uint64_t rcx_40 = var_138

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int32_t rbx_12 = var_1b0.d
int16_t* r14_2 = nullptr
int16_t* rdi_10 = var_1b8
uint64_t var_188 = 0
int32_t var_180 = rbx_12
int32_t var_17c
int32_t rsi_1

if (rbx_12 != 0)
    sub_1405a4c70(&var_188, rbx_12, 0)
    r14_2 = var_188
    memcpy(r14_2, rdi_10, rbx_12 * 2)
    rsi_1 = var_17c
else
    rsi_1 = 0
    var_17c = 0

if ((arg1 & 4) == 0)
    rax_19.b = arg1 & 2
    
    if ((arg1 & 8) != 0)
        rax_19.b |= 8
else
    rax_19.b = 4

char rdx_25 = rax_19.b
char rbx_13 = rdx_25 | 0x10

if ((arg1 & 0x10) == 0)
    rbx_13 = rdx_25

int64_t* var_128
sub_140ab0d60(sub_140aae970(), &var_128, rbx_13)
char* var_e0 = rax
int64_t* var_e8 = &var_128
int64_t var_80
sub_140a9c910(&var_e8, &var_80, &var_1b8)
int64_t var_90
sub_140a9c910(&var_e8, &var_90, &var_1c8)
int64_t rdi_11 = var_90
int32_t i_9
int32_t var_78
int32_t var_88

if (var_78 s<= 1)
    int64_t rdx_30
    int32_t r8_30
    
    if (var_88 s> 1)
        var_180 = var_88
        
        if (var_88 != 0 || rsi_1 != 0)
            sub_1405a4c70(&var_188, var_88, rsi_1)
            r8_30 = var_88
            rdx_30 = rdi_11
        label_140a9f2d8:
            r14_2 = var_188
            memcpy(r14_2, rdx_30, r8_30 * 2)
            rsi_1 = var_17c
        else
            rsi_1 = 0
    else
        int64_t* rax_22
        
        if (i_9 s<= 0)
            rax_22 = &var_1c8
        label_140a9f2b0:
            int32_t rbx_15 = rax_22[1].d
            int64_t r15_1 = *rax_22
            var_180 = rbx_15
            
            if (rbx_15 != 0 || rsi_1 != 0)
                sub_1405a4c70(&var_188, rbx_15, rsi_1)
                r8_30 = rbx_15
                rdx_30 = r15_1
                goto label_140a9f2d8
        else
            rax_22 = var_128
            
            if (&var_188 != rax_22)
                goto label_140a9f2b0

if (rdi_11 != 0)
    sub_140a74f90(rdi_11)

int64_t rcx_51 = var_80

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

int32_t i_5 = i_9
int64_t* rbx_16 = var_128

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_52 = *rbx_16
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        rbx_16 = &rbx_16[2]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int64_t* rcx_53 = var_128

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int16_t* rdx_32 = &data_142d40450
int16_t* var_108 = r14_2
int16_t* rcx_54 = &data_142d40450
int32_t var_100 = var_180

if (var_180 != 0)
    rdx_32 = r14_2

int32_t var_fc = rsi_1

if (var_1c0 != 0)
    rcx_54 = var_1c8

int16_t** rdx_33 = &var_1c8

if (sub_140a54510(rcx_54, rdx_32) != 0)
    sub_140a8bf80(rax, rdx_33)
    __std_fs_get_file_id(rax, &var_108)
else
    sub_140a8c140(rax, rdx_33)

void* r14_3 = var_148
uint64_t result = sx.q(result_1)
void* r15_2 = r14_3 + result * 0x18

if (r14_3 != r15_2)
    char* var_d0_1 = rax
    TEB* gsbase
    int32_t* rax_27 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    int16_t** var_118
    int16_t*** var_d8 = &var_118
    
    do
        int64_t var_40
        int64_t* rax_28 = sub_140b63b70(r14_3, &var_40)
        int16_t* const r8_33
        
        if (rax_28[1].d == 0)
            r8_33 = &data_142d40450
        else
            r8_33 = *rax_28
        
        int64_t var_50
        sub_140a2e390(&var_50, u"'%s' asset group", r8_33)
        int32_t rbx_17 = *(r14_3 + 0x10)
        int64_t rsi_2 = *(r14_3 + 8)
        int16_t* var_198 = nullptr
        int32_t var_190_1 = rbx_17
        int32_t var_18c
        
        if (rbx_17 != 0)
            sub_1405a4c70(&var_198, rbx_17, 0)
            memcpy(var_198, rsi_2, rbx_17 * 2)
        else
            var_18c = 0
        
        char rax_29
        
        if ((arg1 & 4) == 0)
            rax_29 = arg1 & 2
            
            if ((arg1 & 8) != 0)
                rax_29 |= 8
        else
            rax_29 = 4
        
        char rbx_18 = rax_29 | 0x10
        
        if ((arg1 & 0x10) == 0)
            rbx_18 = rax_29
        
        if (data_143dbae18 s> *rax_27)
            _Init_thread_header(&data_143dbae18)
            
            if (data_143dbae18 == 0xffffffff)
                sub_140a97bb0(&data_143dbaca0)
                data_143dbae10 = &data_143dbaca0
                atexit(sub_142cbde90)
                _Init_thread_footer(&data_143dbae18)
        
        sub_140ab0d60(data_143dbae10, &var_118, rbx_18)
        int64_t var_60
        sub_140a9c910(&var_d8, &var_60, r14_3 + 8)
        int16_t* var_70
        sub_140a9c910(&var_d8, &var_70, &var_1c8)
        int16_t* rdi_12 = var_70
        int32_t i_10
        int32_t var_58
        int32_t var_68
        
        if (var_58 s<= 1)
            if (var_68 s> 1)
                var_190_1 = var_68
                
                if (var_68 != 0 || var_18c != 0)
                    sub_1405a4c70(&var_198, var_68, var_18c)
                    memcpy(var_198, rdi_12, var_68 * 2)
            else
                int16_t** rax_33
                
                if (i_10 s<= 0)
                    rax_33 = &var_1c8
                label_140a9f537:
                    int32_t rbx_19 = rax_33[1].d
                    int16_t* rsi_3 = *rax_33
                    var_190_1 = rbx_19
                    
                    if (rbx_19 != 0 || var_18c != 0)
                        sub_1405a4c70(&var_198, rbx_19, var_18c)
                        memcpy(var_198, rsi_3, rbx_19 * 2)
                else
                    rax_33 = var_118
                    
                    if (&var_198 != rax_33)
                        goto label_140a9f537
        
        if (rdi_12 != 0)
            sub_140a74f90(rdi_12)
        
        int64_t rcx_71 = var_60
        
        if (rcx_71 != 0)
            sub_140a74f90(rcx_71)
        
        int32_t i_6 = i_10
        int16_t** rbx_20 = var_118
        
        if (i_6 != 0)
            int32_t i_2
            
            do
                int16_t* rcx_72 = *rbx_20
                
                if (rcx_72 != 0)
                    sub_140a74f90(rcx_72)
                
                rbx_20 = &rbx_20[2]
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        int16_t** rcx_73 = var_118
        
        if (rcx_73 != 0)
            sub_140a74f90(rcx_73)
        
        int64_t rcx_74 = var_50
        
        if (rcx_74 != 0)
            sub_140a74f90(rcx_74)
        
        int64_t rcx_75 = var_40
        
        if (rcx_75 != 0)
            sub_140a74f90(rcx_75)
        
        int16_t* rdx_45 = &data_142d40450
        int16_t* const rcx_76 = &data_142d40450
        
        if (var_1c0 != 0)
            rdx_45 = var_1c8
        
        if (var_190_1 != 0)
            rcx_76 = var_198
        
        result = sub_140a54510(rcx_76, rdx_45)
        
        if (result.d != 0)
            result = sub_140a8bad0(rax, r14_3, &var_198)
        
        int16_t* rcx_78 = var_198
        
        if (rcx_78 != 0)
            result = sub_140a74f90(rcx_78)
        
        r14_3 += 0x18
    while (r14_3 != r15_2)

int16_t* rcx_79 = var_108

if (rcx_79 != 0)
    result = sub_140a74f90(rcx_79)

int16_t* rcx_80 = var_1c8

if (rcx_80 != 0)
    result = sub_140a74f90(rcx_80)

int64_t rcx_81 = var_178

if (rcx_81 != 0)
    result = sub_140a74f90(rcx_81)

int32_t i_7 = result_1

if (i_7 != 0)
    void* rbx_22 = var_148 + 8
    int32_t i_3
    
    do
        int64_t rcx_82 = *rbx_22
        
        if (rcx_82 != 0)
            result = sub_140a74f90(rcx_82)
        
        rbx_22 += 0x18
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

void* rcx_83 = var_148

if (rcx_83 != 0)
    result = sub_140a74f90(rcx_83)

int16_t* rcx_84 = var_1b8

if (rcx_84 != 0)
    result = sub_140a74f90(rcx_84)

int16_t* rcx_85 = var_1a8

if (rcx_85 == 0)
    return result

return sub_140a74f90(rcx_85)
