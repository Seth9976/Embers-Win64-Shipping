// 函数: sub_14059bf80
// 地址: 0x14059bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
sub_140af4d50()
sub_140599090(&data_1439a04a8)
void var_f8
int64_t var_e8
int64_t* rax_3 = sub_140b29020(sub_140b21590(&var_f8), &var_e8)
int16_t* const rbx = &data_142d40450

if (rax_3[1].d != 0)
    *rax_3

int16_t* var_108
sub_140a2e390(&var_108, u"unreal-v%i-%s.dmp", zx.q(sub_140b187d0(j_sub_140b17d00())))
int16_t* rcx_5 = var_108
int32_t var_100

if (var_100 != 0)
    rbx = rcx_5

int16_t* rdx_1 = &data_143d78ed0 - rbx
int16_t i

do
    i = *rbx
    *(rdx_1 + rbx) = i
    rbx = &rbx[1]
while (i != 0)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_e8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

data_143cd5b28 = GetFileType(GetStdHandle(STD_OUTPUT_HANDLE)) == FILE_TYPE_CHAR
int32_t rax_8 = sub_1405a0ca0(&data_143958020, arg1)
int32_t rsi = rax_8
int32_t rax_9

if (rax_8 == 0)
    rax_9 = sub_14059f090(&data_143958020)
    rsi = rax_9

if (rax_8 == 0 && rax_9 == 0)
    rsi = 0
label_14059c0b9:
    
    if (data_143de5432 == 0)
        void var_d8
        void var_88
        sub_140b2f260(&var_88, 0x42c80000, _vfprintf_p_l(&var_d8, Loading...", EngineInit"), 1, 
            data_143ddb418)
        sub_140b40000(&var_88)
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_13 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        void var_c0
        sub_140b389c0(&var_88, 0x42a00000, sub_140a96170(&var_c0))
        int64_t* var_b8
        
        if (var_b8 != 0)
            var_b8[1].d -= 1
            
            if (var_b8[1].d == 1)
                (**var_b8)(var_b8)
                int32_t rax_18 = *(var_b8 + 0xc)
                *(var_b8 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_b8 + 8))(var_b8, 1)
        
        void var_a8
        sub_140b389c0(&var_88, 0x41a00000, sub_140a96170(&var_a8))
        int64_t* var_a0
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t rax_23 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        rsi = sub_1405949b0(&data_143958020)
        sub_140b365b0(&var_88)
        char var_3c_1 = 0
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t rax_28 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        int64_t* var_80
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t rbx_2 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_80 + 8))(var_80, zx.q(rbx_2))
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (data_143de5432 == 0)
            sub_1405952f0(&data_143958020)
else
    sub_140599550(&data_143958078)
    
    if (rsi == 0)
        goto label_14059c0b9

sub_140afef00()
sub_14059ba70(&data_143958020)
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rsi)
