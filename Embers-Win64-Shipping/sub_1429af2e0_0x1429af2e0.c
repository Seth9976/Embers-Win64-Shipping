// 函数: sub_1429af2e0
// 地址: 0x1429af2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_1409091b0(*arg4, arg4[1])
arg4[1] = *arg4
int64_t r15
r15.b = 0
int32_t* rax_3 = sub_142980aa0(arg3)
int32_t* rax_4 = sub_142980aa0(arg2)
int64_t rsi = 0xf
char var_60

if (*rax_4 != *rax_3 || rax_4[1] != rax_3[1] || rax_4[2] != rax_3[2] || rax_4[3] != rax_3[3])
    r15.b = 1
    int128_t var_50_1 = data_143702ea0
    var_60 = 0
    sub_14058ad40(&var_60, "displayWindow", 0xd)
    int128_t* rdx_1 = arg4[1]
    int64_t rdx_2
    
    if (arg4[2] == rdx_1)
        sub_140689000(arg4, rdx_1, &var_60)
        rdx_2 = var_50_1:8.q
    else
        *rdx_1 = var_60.o
        rdx_1[1] = var_50_1
        rdx_2 = 0xf
        var_60 = 0
        arg4[1] += 0x20
    
    if (rdx_2 u>= 0x10)
        void* rcx_6 = var_60.q
        void* rax_9 = rcx_6
        
        if (rdx_2 + 1 u>= 0x1000)
            rcx_6 = *(rcx_6 - 8)
            
            if (rax_9 - rcx_6 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_6)

int128_t* rax_12 = sub_142981dc0(arg2)
int32_t* rax_13 = sub_142981dc0(arg3)
int128_t zmm0_1 = *rax_12
float temp0 = *rax_13
zmm0_1.d f- temp0

if (is_unordered.d(zmm0_1.d, temp0) || not(zmm0_1.d f== temp0))
    r15.b = 1
    zmm0_1 = data_143702ea0
    var_60 = 0
    sub_14058ad40(&var_60, "pixelAspectRatio", 0x10)
    int128_t* rdx_4 = arg4[1]
    int64_t rdx_5
    
    if (arg4[2] == rdx_4)
        sub_140689000(arg4, rdx_4, &var_60)
        rdx_5 = zmm0_1:8.q
    else
        *rdx_4 = var_60.o
        rdx_4[1] = zmm0_1
        rdx_5 = 0xf
        var_60 = 0
        arg4[1] += 0x20
    
    if (rdx_5 u>= 0x10)
        void* rcx_11 = var_60.q
        void* rax_14 = rcx_11
        
        if (rdx_5 + 1 u>= 0x1000)
            rcx_11 = *(rcx_11 - 8)
            
            if (rax_14 - rcx_11 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_11)

void* rax_17 = sub_14298adb0(arg2, "timecode")
void* rax_18 = sub_14298adb0(arg3, "timecode")
int64_t rbx_2 = -1

if (rax_18 != 0)
    char rax_19
    
    if (rax_17 != 0)
        rax_19 = sub_1429a2b10(rax_17 + 8, rax_18 + 8)
    
    if (rax_17 == 0 || rax_19 != 0)
        r15.b = 1
        int128_t zmm0_3 = data_143702ea0
        var_60 = 0
        int64_t r8_3 = -1
        
        do
            r8_3 += 1
        while ((*"timecode")[r8_3] != 0)
        
        sub_14058ad40(&var_60, "timecode", r8_3)
        int128_t* rdx_8 = arg4[1]
        int64_t rdx_9
        
        if (arg4[2] == rdx_8)
            sub_140689000(arg4, rdx_8, &var_60)
            rdx_9 = zmm0_3:8.q
        else
            *rdx_8 = var_60.o
            rdx_8[1] = zmm0_3
            rdx_9 = 0xf
            var_60 = 0
            arg4[1] += 0x20
        
        if (rdx_9 u>= 0x10)
            void* rcx_17 = var_60.q
            void* rax_20 = rcx_17
            
            if (rdx_9 + 1 u>= 0x1000)
                rcx_17 = *(rcx_17 - 8)
                
                if (rax_20 - rcx_17 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_17)

void* rax_23 = sub_14298aca0(arg2, "chromaticities")
void* rax_24 = sub_14298aca0(arg3, "chromaticities")

if (rax_24 != 0)
    char rax_25
    
    if (rax_23 != 0)
        rax_25 = sub_142989410(rax_23 + 8, rax_24 + 8)
    
    if (rax_23 == 0 || rax_25 != 0)
        r15.b = 1
        int128_t zmm0_5 = data_143702ea0
        var_60 = 0
        
        do
            rbx_2 += 1
        while ((*"chromaticities")[rbx_2] != 0)
        
        sub_14058ad40(&var_60, "chromaticities", rbx_2)
        int128_t* rdx_12 = arg4[1]
        
        if (arg4[2] == rdx_12)
            sub_140689000(arg4, rdx_12, &var_60)
            rsi = zmm0_5:8.q
        else
            *rdx_12 = var_60.o
            rdx_12[1] = zmm0_5
            var_60 = 0
            arg4[1] += 0x20
        
        if (rsi u>= 0x10)
            void* rcx_23 = var_60.q
            void* rax_26 = rcx_23
            
            if (rsi + 1 u>= 0x1000)
                rcx_23 = *(rcx_23 - 8)
                
                if (rax_26 - rcx_23 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_88)
return zx.q(r15.b)
