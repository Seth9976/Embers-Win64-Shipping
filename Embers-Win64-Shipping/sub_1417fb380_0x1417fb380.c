// 函数: sub_1417fb380
// 地址: 0x1417fb380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t var_48 = 7
void var_158
void* var_50 = &var_158
int64_t var_58 = 0
int16_t* r15 = nullptr
int32_t rsi = 0
sub_1405a7220(&var_158, 8, "Windows", 8, 0x3f)
int64_t var_188
sub_140a2e390(&var_188, u"Certificates/%s/cacert.pem", var_50)

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_198
int64_t* rax_2 = sub_140b25050(&var_198)
int32_t rcx_4 = rax_2[1].d
int16_t* var_1b8
int32_t var_180
uint64_t var_178
int32_t rbx
int16_t* r14

if (rcx_4 s> 1)
    int32_t rbx_1 = var_180 - 1
    
    if (var_180 == 0)
        rbx_1 = 0
    
    int32_t r8_3
    
    if (rcx_4 == 0)
        r8_3 = rcx_4 + 1
    
    if (rcx_4 != 0 || rbx_1 == 0)
        r8_3 = 0
    
    int16_t* rax_4 = *rax_2
    *rax_2 = 0
    var_1b8 = rax_4
    int32_t rcx_7 = *(rax_2 + 0xc)
    rax_2[1] = 0
    int32_t var_1ac_1 = rcx_7
    int32_t rdx_4 = r8_3 + rcx_4 + rbx_1
    
    if (rdx_4 s> rcx_7)
        sub_1405947f0(&var_1b8, rdx_4)
    
    sub_140a20ba0(&var_1b8, var_188, rbx_1)
    r14 = var_1b8
    rbx = rcx_4
    __builtin_memset(&var_1b8, 0, 0x18)
else
    rbx = var_180
    int64_t rdi_1 = var_188
    var_178 = 0
    
    if (rbx != 0)
        sub_1405a4c70(&var_178, rbx, 0)
        r14 = var_178
        memcpy(r14, rdi_1, rbx * 2)
    else
        r14 = nullptr

int16_t* const r13 = &data_142d40450
int16_t* const rdi_2 = &data_142d40450

if (rbx != 0)
    rdi_2 = r14

int32_t rdx_6 = 0
int32_t rcx_10 = 0
int64_t var_1a0 = 0
int64_t var_1a8

if (rdi_2 != 0 && *rdi_2 != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rdi_2[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_1a8, rbx_2.d + 1)
        rcx_10 = var_1a0:4.d
        rdx_6 = var_1a0.d
    
    int32_t rax_6 = rbx_2.d + 1 + rdx_6
    var_1a0.d = rax_6
    
    if (rax_6 s> rcx_10)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, rdi_2, (rbx_2.d + 1) * 2)

char rax_7 = sub_140b16090(&var_1a8)
int64_t rcx_15 = var_1a8

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t rcx_17 = var_198

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t* rax_8 = sub_140b25050(&var_198)

if (rax_7 == 0)
    int16_t* rcx_54 = *rax_8
    int32_t rdx_24 = rax_8[1].d
    int32_t rdx_25 = neg.d(rdx_24)
    *rax_8 = 0
    int32_t r8_14 = rax_8[1].d
    var_1b8 = rcx_54
    int32_t rcx_55 = *(rax_8 + 0xc)
    int32_t rdx_28 = sbb.d(rdx_25, rdx_25, rdx_24 != 0) + 0x18 + r8_14
    int32_t var_1b0_3 = r8_14
    int32_t var_1ac_3 = rcx_55
    rax_8[1] = 0
    
    if (rdx_28 s> rcx_55)
        sub_1405947f0(&var_1b8, rdx_28)
    
    sub_140a20ba0(&var_1b8, u"Certificates/cacert.pem", 0x17)
    int16_t* rdi_5 = &data_142d40450
    int16_t* r14_1 = var_1b8
    bool cond:1_1 = var_1b0_3 != 0
    var_1b8 = nullptr
    int32_t rdx_29 = 0
    
    if (cond:1_1)
        rdi_5 = r14_1
    
    __builtin_memset(&var_1b0_3, 0, 0x18)
    int32_t rcx_58 = 0
    
    if (rdi_5 != 0 && *rdi_5 != 0)
        int64_t rbx_10 = -1
        
        do
            rbx_10 += 1
        while (rdi_5[rbx_10] != 0)
        
        int64_t var_1a0_1
        
        if (rbx_10.d + 1 s> 0)
            sub_1405947f0(&var_1a8, rbx_10.d + 1)
            rcx_58 = var_1a0_1:4.d
            rdx_29 = var_1a0_1.d
        
        int32_t rax_26 = rdx_29 + rbx_10.d + 1
        var_1a0_1.d = rax_26
        
        if (rax_26 s> rcx_58)
            sub_140594770(&var_1a8)
        
        UnDecorator::getReferenceType(var_1a8, rdi_5, (rbx_10.d + 1) * 2)
    
    char rax_27 = sub_140b16090(&var_1a8)
    int64_t rcx_63 = var_1a8
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int64_t rcx_65 = var_198
    
    if (rcx_65 != 0)
        sub_140a74f90(rcx_65)
    
    int64_t* rcx_66 = &var_198
    int32_t var_1b0_4
    wchar16 const* const rdx_37
    int32_t r8_17
    
    if (rax_27 != 0)
        int16_t** rax_28 = sub_140b25050(rcx_66)
        int16_t* rcx_67 = *rax_28
        int32_t rdx_32 = rax_28[1].d
        int32_t rdx_33 = neg.d(rdx_32)
        *rax_28 = nullptr
        int32_t r9_6 = rax_28[1].d
        var_1b8 = rcx_67
        int32_t rcx_68 = *(rax_28 + 0xc)
        int32_t rdx_36 = sbb.d(rdx_33, rdx_33, rdx_32 != 0) + 0x18 + r9_6
        var_1b0_4 = r9_6
        int32_t var_1ac_4 = rcx_68
        rax_28[1] = 0
        
        if (rdx_36 s> rcx_68)
            sub_1405947f0(&var_1b8, rdx_36)
        
        r8_17 = 0x17
        rdx_37 = u"Certificates/cacert.pem"
        goto label_1417fba80
    
    int64_t* rax_29 = sub_140b139e0(rcx_66)
    int16_t* rcx_72 = *rax_29
    int32_t rdx_38 = rax_29[1].d
    int32_t rdx_39 = neg.d(rdx_38)
    *rax_29 = 0
    int32_t r8_18 = rax_29[1].d
    var_1b8 = rcx_72
    int32_t rcx_73 = *(rax_29 + 0xc)
    int32_t rdx_42 = sbb.d(rdx_39, rdx_39, rdx_38 != 0) + 0x23 + r8_18
    int32_t var_1b0_5 = r8_18
    int32_t var_1ac_5 = rcx_73
    rax_29[1] = 0
    
    if (rdx_42 s> rcx_73)
        sub_1405947f0(&var_1b8, rdx_42)
    
    sub_140a20ba0(&var_1b8, u"Certificates/ThirdParty/cacert.pem", 0x22)
    int16_t* rdi_6 = &data_142d40450
    int16_t* r14_2 = var_1b8
    bool cond:3_1 = var_1b0_5 != 0
    var_1b8 = nullptr
    int32_t rdx_43 = 0
    
    if (cond:3_1)
        rdi_6 = r14_2
    
    __builtin_memset(&var_1b0_5, 0, 0x18)
    int32_t rcx_76 = 0
    
    if (rdi_6 != 0 && *rdi_6 != 0)
        int64_t rbx_13 = -1
        
        do
            rbx_13 += 1
        while (rdi_6[rbx_13] != 0)
        
        int64_t var_1a0_2
        
        if (rbx_13.d + 1 s> 0)
            sub_1405947f0(&var_1a8, rbx_13.d + 1)
            rcx_76 = var_1a0_2:4.d
            rdx_43 = var_1a0_2.d
        
        int32_t rax_31 = rbx_13.d + 1 + rdx_43
        var_1a0_2.d = rax_31
        
        if (rax_31 s> rcx_76)
            sub_140594770(&var_1a8)
        
        UnDecorator::getReferenceType(var_1a8, rdi_6, (rbx_13.d + 1) * 2)
    
    char rax_32 = sub_140b16090(&var_1a8)
    int64_t rcx_81 = var_1a8
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    int64_t rcx_83 = var_198
    
    if (rcx_83 != 0)
        sub_140a74f90(rcx_83)
    
    if (rax_32 != 0)
        int16_t** rax_33 = sub_140b139e0(&var_198)
        int16_t* rcx_85 = *rax_33
        int32_t rdx_46 = rax_33[1].d
        int32_t rdx_47 = neg.d(rdx_46)
        *rax_33 = nullptr
        int32_t r9_7 = rax_33[1].d
        var_1b8 = rcx_85
        int32_t rcx_86 = *(rax_33 + 0xc)
        int32_t rdx_50 = sbb.d(rdx_47, rdx_47, rdx_46 != 0) + 0x23 + r9_7
        var_1b0_4 = r9_7
        int32_t var_1ac_6 = rcx_86
        rax_33[1] = 0
        
        if (rdx_50 s> rcx_86)
            sub_1405947f0(&var_1b8, rdx_50)
        
        r8_17 = 0x22
        rdx_37 = u"Certificates/ThirdParty/cacert.pem"
    label_1417fba80:
        sub_140a20ba0(&var_1b8, rdx_37, r8_17)
        int64_t rcx_71 = var_198
        r15 = var_1b8
        rsi = var_1b0_4
        
        if (rcx_71 != 0)
            sub_140a74f90(rcx_71)
else
    int32_t rcx_19 = rax_8[1].d
    
    if (rcx_19 s> 1)
        int32_t rbx_6 = var_180 - 1
        
        if (var_180 == 0)
            rbx_6 = 0
        
        int32_t r8_9
        
        if (rcx_19 == 0)
            r8_9 = rcx_19 + 1
        
        if (rcx_19 != 0 || rbx_6 == 0)
            r8_9 = 0
        
        int16_t* rax_10 = *rax_8
        *rax_8 = 0
        var_1b8 = rax_10
        int32_t rcx_22 = *(rax_8 + 0xc)
        rax_8[1] = 0
        int32_t var_1ac_2 = rcx_22
        int32_t rdx_13 = r8_9 + rcx_19 + rbx_6
        
        if (rdx_13 s> rcx_22)
            sub_1405947f0(&var_1b8, rdx_13)
        
        sub_140a20ba0(&var_1b8, var_188, rbx_6)
        rsi = rcx_19
        r15 = var_1b8
    else
        int64_t rbx_5 = var_188
        var_178 = 0
        rsi = var_180
        
        if (rsi != 0)
            sub_1405a4c70(&var_178, rsi, 0)
            r15 = var_178
            memcpy(r15, rbx_5, rsi * 2)
    
    int64_t rcx_25 = var_198
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int64_t rcx_26 = var_188

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

if (rsi s> 1)
    char* str1_2 = nullptr
    sub_140a464c0()
    int16_t* rdx_15 = &data_142d40450
    
    if (rsi != 0)
        rdx_15 = r15
    
    char const (* r9_1)[0x4] = data_14399ea08
    int64_t* rax_12 = (*(r9_1 + 0x18))(&data_14399ea08, rdx_15, 0, r9_1)
    
    if (rax_12 != 0)
        int64_t rax_14 = (*(*rax_12 + 0x28))(rax_12)
        str1_2 = j_sub_140a82f30(rax_14 + 1)
        j_sub_140a74f90(0)
        int64_t r9_2 = *rax_12
        (*(r9_2 + 0x150))(rax_12, str1_2, rax_14, r9_2)
        str1_2[rax_14] = 0
        int64_t r8_12 = *rax_12
        (*r8_12)(rax_12, 1, r8_12)
        
        if (rax_14 s> 0 && str1_2 != 0)
            char* str1_3 = strstr(str1_2, "-----BEGIN CERTIFICATE-----")
            char* str1_1 = str1_3
            
            if (str1_3 != 0)
                char* i
                
                do
                    char* str1 = strstr(str1_1, "-----END CERTIFICATE-----")
                    
                    if (str1 != 0)
                        int64_t* rax_16
                        int512_t zmm1_1
                        rax_16, zmm1_1 = sub_14289b510(str1_1, str1.d - str1_1.d + 0x1a)
                        int64_t* rax_17 = sub_1428a3d00(rax_16, 0, 0, nullptr, zmm1_1)
                        
                        if (rax_17 != 0)
                            sub_1417fb230(arg1, rax_17)
                        
                        sub_142899e70(rax_16)
                    
                    i = strstr(str1, "-----BEGIN CERTIFICATE-----")
                    str1_1 = i
                while (i != 0)
    
    j_sub_140a74f90(str1_2)

void* rcx_39 = data_143ddb400
int16_t var_1c8
var_1c8.q = &data_143de5780
int16_t* var_168 = nullptr
int32_t result_1 = 0
int32_t result =
    sub_140af5b90(rcx_39, &data_142fe1150, DebuggingCertificatePath", &var_168, var_1c8)

if (result.b != 0)
    result = result_1
    
    if (result != 0)
        result -= 1
        
        if (result s> 0)
            result = sub_140b16090(&var_168)
            
            if (result.b != 0)
                sub_140a464c0()
                
                if (result_1 != 0)
                    r13 = var_168
                
                char const (* r9_4)[0x4] = data_14399ea08
                int64_t* rax_18 = (*(r9_4 + 0x18))(&data_14399ea08, r13, 0, r9_4)
                int64_t rax_20 = (*(*rax_18 + 0x28))(rax_18)
                char* rax_21 = j_sub_140a82f30(rax_20 + 1)
                int64_t r9_5 = *rax_18
                (*(r9_5 + 0x150))(rax_18, rax_21, rax_20, r9_5)
                rax_21[rax_20] = 0
                int64_t* rax_22
                int512_t zmm1_2
                rax_22, zmm1_2 = sub_14289b510(rax_21, 0xffffffff)
                int64_t* rax_23 = sub_1428a3d00(rax_22, 0, 0, nullptr, zmm1_2)
                
                if (rax_23 != 0)
                    sub_1417fb230(arg1, rax_23)
                
                sub_142899e70(rax_22)
                j_sub_140a74f90(rax_21)
                result = (**rax_18)(rax_18, 1)

int16_t* rcx_50 = var_168

if (rcx_50 != 0)
    result = sub_140a74f90(rcx_50)

if (r15 != 0)
    result = sub_140a74f90(r15)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
