// 函数: sub_140f31a10
// 地址: 0x140f31a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1328)
void var_1338
int64_t rax_1 = __security_cookie ^ &var_1338
int32_t var_12e8 = 0
*(arg1 + 0x420) = *(arg2 + 0x1a0)
void* r8 = *(arg2 + 0x1a0)
char var_fd8 = *(r8 + 0x2c0)
int64_t var_fd0 = *(r8 + 0x2c8)
int64_t* rax_5 = *(r8 + 0x2d0)
int128_t zmm6
int128_t var_48 = zmm6
int128_t var_fe8 = *(r8 + 0x2b0)

if (rax_5 != 0)
    rax_5[1].d += 1

char var_fc0 = 1
int64_t var_fb8 = 0
int32_t var_fb0 = 0
sub_140693390(arg1 + 0x350, &var_fe8)
*(arg1 + 0x378) = var_fc0
sub_1407473e0(arg1 + 0x380, &var_fb8)
sub_140745b20(&var_fb8)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp2_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

void*** rax_11 = *(arg2 + 0x490)
int64_t* var_1278
int32_t rbx_1
int64_t* rsi
int64_t* rdi

if (rax_11 == 0)
    void*** rax_9 = j_sub_140a82f30(0x10)
    void*** rbx_2 = rax_9
    
    if (rax_9 == 0)
        rbx_2 = nullptr
    else
        rbx_2[1].d = 1
        *rbx_2 = &data_142ee6e68
        *(rbx_2 + 0xc) = 6
    
    int64_t* rax_10 = j_sub_140a82f30(0x18)
    
    if (rax_10 == 0)
        rax_10 = nullptr
    else
        rax_10[1].d = 1
        *rax_10 = &data_142d42ea8
        *(rax_10 + 0xc) = 1
        rax_10[2] = rbx_2
    
    var_1278 = rax_10
    rax_11 = rbx_2
    rbx_1 = 2
    rdi = var_1278
    int64_t* var_1240
    rsi = var_1240
else
    rsi = *(arg2 + 0x498)
    
    if (rsi != 0)
        rsi[1].d += 1
    
    rbx_1 = 1
    rdi = rsi

void*** var_1238 = rax_11

if (rdi != 0)
    rdi[1].d += 1

int128_t zmm1_1

if (&var_1238 != arg1 + 0x408)
    zmm1_1 = var_1238.o
    int128_t var_d80_1 = zmm1_1
    var_1238.o = *(arg1 + 0x408)
    *(arg1 + 0x408) = zmm1_1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if ((rbx_1.b & 2) != 0)
    rbx_1 &= 0xfffffffd
    
    if (var_1278 != 0)
        var_1278[1].d -= 1
        
        if (var_1278[1].d == 1)
            (**var_1278)(var_1278)
            int32_t temp7_1 = *(var_1278 + 0xc)
            *(var_1278 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_1278 + 8))(var_1278, 1)

if ((rbx_1.b & 1) != 0)
    rbx_1 &= 0xfffffffe
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp8_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rsi + 8))(rsi, 1)

*(arg1 + 0x390) = *(arg2 + 0x1a8)
*(arg1 + 0x394) = *(arg2 + 0x1ac)
sub_140692f90(arg1 + 0x398, arg2 + 0x1b0)
sub_1407473e0(arg1 + 0x3a8, arg2 + 0x3f0)
sub_1407473e0(arg1 + 0x3b8, arg2 + 0x400)
sub_1407473e0(arg1 + 0x3c8, arg2 + 0x410)
sub_1407473e0(arg1 + 0x3d8, arg2 + 0x420)
*(arg1 + 0x5f0) = *(arg2 + 0x460)
*(arg1 + 0x5f4) = *(arg2 + 0x464)
sub_140692f90(arg1 + 0x5f8, arg2 + 0x468)

if (arg2 + 0x1c0 != arg1 + 0x4c8)
    if (*(arg1 + 0x4cc) != 0)
        *(arg1 + 0x4cc) = 0
    
    if (*(arg2 + 0x1c4) != 0)
        *(arg1 + 0x4c8) = *(arg2 + 0x1c0)
        *(arg1 + 0x4cc) = 1

*(arg1 + 0x4d0) = *(arg2 + 0x1c8)
sub_1407473e0(arg1 + 0x4d8, arg2 + 0x1d0)

if (arg2 + 0x1e0 != arg1 + 0x4e8)
    if (*(arg1 + 0x4ec) != 0)
        *(arg1 + 0x4ec) = 0
    
    if (*(arg2 + 0x1e4) != 0)
        *(arg1 + 0x4e8) = *(arg2 + 0x1e0)
        *(arg1 + 0x4ec) = 1

*(arg1 + 0x4f0) = *(arg2 + 0x1e8)
sub_1407473e0(arg1 + 0x4f8, arg2 + 0x1f0)
void* rsi_1 = arg2 + 0x200

if (sub_140f466a0(rsi_1)[1].b == 0)
    rsi_1 = arg1 + 0x4c8

if (rsi_1 != arg1 + 0x508)
    if (*(arg1 + 0x50c) != 0)
        *(arg1 + 0x50c) = 0
    
    if (*(rsi_1 + 4) != 0)
        *(arg1 + 0x508) = *rsi_1
        *(arg1 + 0x50c) = 1

*(arg1 + 0x510) = *(rsi_1 + 8)
sub_1407473e0(arg1 + 0x518, rsi_1 + 0x10)
void* r12_1 = arg2 + 0x220

if (sub_140f466a0(r12_1)[1].b == 0)
    r12_1 = arg1 + 0x4e8

if (r12_1 != arg1 + 0x528)
    if (*(arg1 + 0x52c) != 0)
        *(arg1 + 0x52c) = 0
    
    if (*(r12_1 + 4) != 0)
        *(arg1 + 0x528) = *r12_1
        *(arg1 + 0x52c) = 1

*(arg1 + 0x530) = *(r12_1 + 8)
sub_1407473e0(arg1 + 0x538, r12_1 + 0x10)
int64_t var_dd0
int64_t var_db0
int32_t rax_36
int32_t* rdx_15

if (sub_140f46600(arg2 + 0x240)[1].b == 0)
    int32_t var_dc0 = 1
    var_db0 = 0
    rdx_15 = &var_dc0
    int32_t var_da8_1 = 0
    rax_36 = 8
    char var_dbc_1 = 1
    char var_db8_1 = 1
else
    char var_ddc_1 = 0
    int32_t var_de0
    
    if (*(arg2 + 0x244) != 0)
        var_de0 = *(arg2 + 0x240)
        char var_ddc_2 = 1
    
    char var_dd8_1 = *(arg2 + 0x248)
    var_dd0 = 0
    int32_t var_dc8_1 = 0
    sub_1407473e0(&var_dd0, arg2 + 0x250)
    rdx_15 = &var_de0
    rax_36 = 4

int32_t rbx_3 = rbx_1 | rax_36

if (rdx_15 != arg1 + 0x548)
    if (*(arg1 + 0x54c) != 0)
        *(arg1 + 0x54c) = 0
    
    if (rdx_15[1].b != 0)
        *(arg1 + 0x548) = *rdx_15
        *(arg1 + 0x54c) = 1

*(arg1 + 0x550) = rdx_15[2].b
sub_1407473e0(arg1 + 0x558, &rdx_15[4])

if ((rbx_3.b & 8) != 0)
    rbx_3 &= 0xfffffff7
    sub_140745b20(&var_db0)

if ((rbx_3.b & 4) != 0)
    rbx_3 &= 0xfffffffb
    sub_140745b20(&var_dd0)

int64_t var_df0
int64_t var_d90
char rax_42
int32_t* rdx_18

if (sub_140f46600(arg2 + 0x260)[1].b == 0)
    int32_t var_da0 = 6
    var_d90 = 0
    rdx_18 = &var_da0
    int32_t var_d88_1 = 0
    rax_42 = 0x20
    char var_d9c_1 = 1
    char var_d98_1 = 1
else
    char var_dfc_1 = 0
    int32_t var_e00
    
    if (*(arg2 + 0x264) != 0)
        var_e00 = *(arg2 + 0x260)
        char var_dfc_2 = 1
    
    char var_df8_1 = *(arg2 + 0x268)
    var_df0 = 0
    int32_t var_de8_1 = 0
    sub_1407473e0(&var_df0, arg2 + 0x270)
    rdx_18 = &var_e00
    rax_42 = 0x10

char rbx_4 = rbx_3.b | rax_42

if (rdx_18 != arg1 + 0x568)
    if (*(arg1 + 0x56c) != 0)
        *(arg1 + 0x56c) = 0
    
    if (rdx_18[1].b != 0)
        *(arg1 + 0x568) = *rdx_18
        *(arg1 + 0x56c) = 1

*(arg1 + 0x570) = rdx_18[2].b
sub_1407473e0(arg1 + 0x578, &rdx_18[4])

if ((rbx_4 & 0x20) != 0)
    sub_140745b20(&var_d90)

if ((rbx_4 & 0x10) != 0)
    sub_140745b20(&var_df0)

*(arg1 + 0x588) = *(arg2 + 0x280)
*(arg1 + 0x589) = *(arg2 + 0x281)
sub_140692f90(arg1 + 0x590, arg2 + 0x288)
*(arg1 + 0x5a0) = *(arg2 + 0x2e0)
*(arg1 + 0x5a1) = *(arg2 + 0x2e1)
sub_140692f90(arg1 + 0x5a8, arg2 + 0x2e8)
*(arg1 + 0x5b8) = *(arg2 + 0x2f8)
*(arg1 + 0x5b9) = *(arg2 + 0x2f9)
sub_140692f90(arg1 + 0x5c0, arg2 + 0x300)
sub_1407473e0(arg1 + 0x5d0, arg2 + 0x310)
sub_1407473e0(arg1 + 0x5e0, arg2 + 0x320)
*(arg1 + 0x62d) = *(arg2 + 0x4a0)
sub_140f466a0(arg1 + 0x4e8)
int32_t zmm0_2 = sub_140f466a0(arg1 + 0x4c8)

if (*(arg1 + 0x5b0) != 0)
    int64_t* rcx_44 = *(arg1 + 0x5a8)
    
    if (rcx_44 != 0 && (*(*rcx_44 + 0x28))(rcx_44) != 0)
        int64_t* rcx_45
        
        if (*(arg1 + 0x5b0) == 0)
            rcx_45 = nullptr
        else
            rcx_45 = *(arg1 + 0x5a8)
        
        *(arg1 + 0x5a0) = (*(*rcx_45 + 0x48))(rcx_45)

int32_t zmm0_3

if (*(arg1 + 0x5a0) != 0)
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_46 = *(arg1 + 0x398)
        
        if (rcx_46 != 0 && (*(*rcx_46 + 0x28))(rcx_46) != 0)
            int64_t* rcx_47
            
            if (*(arg1 + 0x3a0) == 0)
                rcx_47 = nullptr
            else
                rcx_47 = *(arg1 + 0x398)
            
            (*(*rcx_47 + 0x48))(rcx_47)
            *(arg1 + 0x390) = zmm0_2
    
    zmm6 = 0x7f7fffff
    int32_t var_12e8_1 = 0x7f7fffff
    int32_t* rax_59 = sub_140f466a0(arg1 + 0x528)
    
    if (rax_59[1].b == 0)
        zmm0_3 = 0x7f7fffff
    else
        zmm0_3 = *rax_59

if (*(arg1 + 0x5a0) == 0 || zmm0_3 f>= *(arg1 + 0x390))
    if (*(arg1 + 0x5c8) != 0)
        int64_t* rcx_52 = *(arg1 + 0x5c0)
        
        if (rcx_52 != 0 && (*(*rcx_52 + 0x28))(rcx_52) != 0)
            int64_t* rcx_53
            
            if (*(arg1 + 0x5c8) == 0)
                rcx_53 = nullptr
            else
                rcx_53 = *(arg1 + 0x5c0)
            
            *(arg1 + 0x5b8) = (*(*rcx_53 + 0x48))(rcx_53)
    
    if (*(arg1 + 0x5b8) != 0)
        zmm6 = 0xff7fffff
        int32_t var_118c_1 = 0xff7fffff
        int32_t* rax_66
        int32_t zmm0_5
        rax_66, zmm0_5 = sub_140f466a0(arg1 + 0x508)
        int128_t zmm7
        
        if (rax_66[1].b == 0)
            zmm7 = 0xff7fffff
        else
            zmm7 = *rax_66
        
        if (not(zmm7.d f<= *sub_140eff5d0(arg1 + 0x390, zmm0_5)))
            int32_t var_1188_1 = 0xff7fffff
            int32_t* rax_68
            int32_t zmm0_6
            rax_68, zmm0_6 = sub_140f466a0(arg1 + 0x508)
            
            if (rax_68[1].b != 0)
                zmm6 = *rax_68
            
            zmm1_1.d = (*sub_140eff5d0(arg1 + 0x390, zmm0_6)).d f- zmm6.d
            sub_140f2b070(arg1, zmm1_1, 1)
else
    int32_t var_1190_1 = 0x7f7fffff
    int32_t* rax_60
    int32_t zmm0_4
    rax_60, zmm0_4 = sub_140f466a0(arg1 + 0x528)
    
    if (rax_60[1].b != 0)
        zmm6 = *rax_60
    
    zmm1_1.d = (*sub_140eff5d0(arg1 + 0x390, zmm0_4)).d f- zmm6.d
    sub_140f2ae30(arg1, zmm1_1, 1)

int32_t* rax_70 = sub_140f466a0(arg1 + 0x4c8)
int32_t* rax_71

if (rax_70[1].b != 0)
    rax_71 = sub_140f466a0(arg1 + 0x4e8)

if (rax_70[1].b != 0 && rax_71[1].b != 0)
    rax_71.b = 0
else if (sub_140f466a0(arg1 + 0x508)[1].b == 0)
    rax_71.b = 1
else if (sub_140f466a0(arg1 + 0x528)[1].b == 0)
    rax_71.b = 1
else
    rax_71.b = 0

*(arg1 + 0x418) = rax_71.b
*(arg1 + 0x498) = *(arg2 + 0x330)
*(arg1 + 0x49c) = *(arg2 + 0x334)
sub_140692f90(arg1 + 0x4a0, arg2 + 0x338)
*(arg1 + 0x4b0) = *(arg2 + 0x348)
*(arg1 + 0x4b4) = *(arg2 + 0x34c)
sub_140692f90(arg1 + 0x4b8, arg2 + 0x350)
*(arg1 + 0x448) = 0
*(arg1 + 0x620) = 0
*(arg1 + 0x450) = *(arg2 + 0x298)
*(arg1 + 0x454) = *(arg2 + 0x29c)
sub_140692f90(arg1 + 0x458, arg2 + 0x2a0)
*(arg1 + 0x468) = *(arg2 + 0x2b0)
*(arg1 + 0x46c) = *(arg2 + 0x2b4)
sub_1407473e0(arg1 + 0x470, arg2 + 0x2b8)
*(arg1 + 0x480) = *(arg2 + 0x2c8)
*(arg1 + 0x484) = *(arg2 + 0x2cc)
float zmm0_7[0x2] = sub_1407473e0(arg1 + 0x488, arg2 + 0x2d0)
*(arg1 + 0x428) = *(arg2 + 0x1a0) + 0x90
*(arg1 + 0x430) = *(arg2 + 0x1a0) + 8
*(arg1 + 0x438) = *(arg2 + 0x1a0) + 0x118
*(arg1 + 0x440) = *(arg2 + 0x1a0) + 0x1a0
int128_t* rax_91 = *(arg2 + 0x1a0) + 0x2d8
*(arg1 + 0x608) = 0
*(arg1 + 0x60c) = 0xffffffff

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx_68 = *(arg1 + 0x398)
    
    if (rcx_68 != 0 && (*(*rcx_68 + 0x28))(rcx_68) != 0)
        int64_t* rcx_69
        
        if (*(arg1 + 0x3a0) == 0)
            rcx_69 = nullptr
        else
            rcx_69 = *(arg1 + 0x398)
        
        (*(*rcx_69 + 0x48))(rcx_69)
        *(arg1 + 0x390) = zmm0_7[0]

*(arg1 + 0x628) = *(arg1 + 0x390)

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx_70 = *(arg1 + 0x398)
    
    if (rcx_70 != 0 && (*(*rcx_70 + 0x28))(rcx_70) != 0)
        int64_t* rcx_71
        
        if (*(arg1 + 0x3a0) == 0)
            rcx_71 = nullptr
        else
            rcx_71 = *(arg1 + 0x398)
        
        (*(*rcx_71 + 0x48))(rcx_71)
        *(arg1 + 0x390) = zmm0_7[0]

int64_t (* var_1048)(void* arg1, int64_t* arg2, int32_t arg3, int32_t arg4 @ zmm0) = sub_140f61f30
zmm0_7 = _mm_cvtps_pd(*(arg1 + 0x390))
int64_t (* var_1058)(void* arg1, int64_t* arg2) = sub_140f61c10
*(arg1 + 0x62c) = 0
int64_t (* var_1068)(void* arg1) = sub_140f4a2e0
float (* var_1038)(void* arg1, float arg2 @ zmm0) = sub_140f48590
float (* var_10a8)(void* arg1, float arg2 @ zmm0) = sub_140f48590
int128_t var_e38
__builtin_memcpy(&var_e38, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
*(arg1 + 0x618) = zmm0_7
char rbx_6 = data_1439ae51d
int64_t rdi_4 = *(arg2 + 0x1a0) + 0x228
int64_t var_1028 = rdi_4
int128_t var_e20 = zx.o(0)
int128_t var_fa8
__builtin_memcpy(&var_fa8, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
char var_f80 = 1
int128_t var_f90 = zx.o(0)
int64_t var_f78 = 0
int32_t var_f70 = 0
char var_1020 = 1
int64_t var_1018 = 0
int32_t var_1010 = 0
int16_t var_10c0 = 0x101
int64_t var_10b8 = 0
int32_t var_10b0 = 0
int32_t var_10d8 = 1
char var_10d4 = 1
int64_t var_10d0 = 0
int32_t var_10c8 = 0
int32_t var_1030 = 0
int32_t var_1040 = 0
int32_t var_1050 = 0
int32_t var_1060 = 0
int64_t* (* var_12f8)(void* arg1, int64_t* arg2, int32_t arg3 @ zmm0) = sub_140f48950
int32_t var_12f0 = 0
int16_t var_10f0 = 0x101
int64_t var_10e8 = 0
int32_t var_10e0 = 0
char var_1108 = rbx_6
char var_1107 = 1
int64_t var_1100 = 0
int32_t var_10f8 = 0
int32_t var_1180 = 0x3f800000
char var_117c = 1
int64_t var_1178 = 0
int32_t var_1170 = 0
int32_t var_10a0 = 0
int64_t* (* var_ff8)(void* arg1, int64_t* arg2, int32_t arg3 @ zmm0) = sub_140f48950
int32_t var_ff0 = 0
int32_t var_1168 = 0x3f800000
char var_1164 = 1
int64_t var_1160 = 0
int32_t var_1158 = 0
void var_bc0
int64_t* rax_99 = sub_140e4fb70(&var_bc0)
rax_99[0x34] = rdi_4
rax_99[0x35].b = 1
sub_140692f90(&rax_99[0x36], &var_1018)
sub_140693390(&rax_99[0x38], &var_fa8)
rax_99[0x3d].b = var_f80
sub_140692f90(&rax_99[0x3e], &var_f78)
void*** rax_100 = sub_140e48c50()
void* var_1150 = &rax_100[2]
void*** var_1148 = rax_100
sub_140918950(&var_1150, &rax_100[2])
int64_t var_1318 = 0x3a8
void var_1308
void* var_1140 = &var_1308
void* var_eb8
void** rax_101 = sub_140e56930(&var_1150, &var_eb8, rax_99, sub_140e23ed0(&rax_100[2], "SImage"))
int64_t* rdi_6 = rax_101[1]
void* var_1078 = *rax_101
int64_t* var_1070 = rdi_6

if (rdi_6 != 0)
    rdi_6[1].d += 1

void*** rax_102 = j_sub_140a82f30(0x88)
void*** rsi_4 = rax_102

if (rax_102 == 0)
    rsi_4 = nullptr
else
    sub_14068e490(rax_102)
    *rsi_4 = &data_142d8add0

void* rax_103 = sub_140698b50(rsi_4)
*(rax_103 + 0x20) = 0x200
sub_140693600(rax_103, &var_1078)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        int64_t rdx_36 = *rdi_6
        (*rdx_36)(rdi_6, rdx_36)
        int32_t temp10_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rdi_6 + 8))(rdi_6, 1)

void var_560
int64_t* rax_105 = sub_14068cff0(&var_560)
rax_105[0xf].b = rbx_6
*(rax_105 + 0x79) = 1
sub_1407473e0(&rax_105[0x10], &var_1100)
sub_140d962e0(&rax_105[0x47], arg2 + 0x360)
rax_105[0x51].b = *(arg2 + 0x3b0)
sub_140692f90(&rax_105[0x52], arg2 + 0x3b8)
rax_105[0x71].w = 0x101
sub_140692f90(&rax_105[0x72], &var_10e8)
int128_t var_ee8 = var_12f8.o
int64_t* var_12b0
int64_t* rax_106 = sub_140e46010(&var_12b0, arg1, &var_ee8)
int64_t var_11f0
sub_140a96170(&var_11f0)
char var_11d8 = 1
int64_t var_11d0 = 0
int32_t var_11c8 = 0
sub_140692f90(&var_11d0, rax_106)
int64_t rcx_95 = rax_105[0x34]
rax_105[0x34] = var_11f0
var_11f0 = rcx_95
int64_t* rcx_96 = rax_105[0x35]
int64_t var_11e8
rax_105[0x35] = var_11e8
int32_t var_11e0
rax_105[0x36].d = var_11e0
rax_105[0x37].b = var_11d8
sub_1407473e0(&rax_105[0x38], &var_11d0)
sub_140745b20(&var_11d0)

if (rcx_96 != 0)
    rcx_96[1].d -= 1
    
    if (rcx_96[1].d == 1)
        (**rcx_96)(rcx_96)
        int32_t r12_2 = *(rcx_96 + 0xc)
        *(rcx_96 + 0xc) -= 1
        
        if (r12_2 == 1)
            (*(*rcx_96 + 8))(rcx_96, zx.q(r12_2))

int32_t var_12a8
int64_t* rax_115

if (var_12a8 == 0)
    rax_115 = var_12b0
label_140f32a11:
    
    if (rax_115 != 0)
        sub_140a74f90(rax_115)
else
    int64_t* rcx_101 = var_12b0
    
    if (rcx_101 != 0)
        (*(*rcx_101 + 0x38))(rcx_101, 0)
        rax_115 = var_12b0
        
        if (rax_115 != 0)
            rax_115 = sub_140a84c80(rax_115, 0, 0)
            var_12b0 = rax_115
        
        int32_t var_12a8_1 = 0
        goto label_140f32a11
int128_t var_ef8 = var_1068.o
int64_t* var_12a0
sub_1407473e0(&rax_105[0x82], sub_140f1b860(&var_12a0, arg1, &var_ef8))
int32_t var_1298
int64_t* rax_118

if (var_1298 == 0)
    rax_118 = var_12a0
label_140f32a88:
    
    if (rax_118 != 0)
        sub_140a74f90(rax_118)
else
    int64_t* rcx_106 = var_12a0
    
    if (rcx_106 != 0)
        (*(*rcx_106 + 0x38))(rcx_106, 0)
        rax_118 = var_12a0
        
        if (rax_118 != 0)
            rax_118 = sub_140a84c80(rax_118, 0, 0)
            var_12a0 = rax_118
        
        int32_t var_1298_1 = 0
        goto label_140f32a88
int128_t var_f08 = var_1058.o
int64_t* var_1290
sub_140692f90(&rax_105[0x84], sub_140dd1ec0(&var_1290, arg1, &var_f08))
int32_t var_1288
int64_t* rax_121

if (var_1288 == 0)
    rax_121 = var_1290
label_140f32aff:
    
    if (rax_121 != 0)
        sub_140a74f90(rax_121)
else
    int64_t* rcx_111 = var_1290
    
    if (rcx_111 != 0)
        (*(*rcx_111 + 0x38))(rcx_111, 0)
        rax_121 = var_1290
        
        if (rax_121 != 0)
            rax_121 = sub_140a84c80(rax_121, 0, 0)
            var_1290 = rax_121
        
        int32_t var_1288_1 = 0
        goto label_140f32aff
int128_t var_f18 = var_1048.o
int64_t* var_12e0
sub_140692f90(&rax_105[0x86], sub_140edf9f0(&var_12e0, arg1, &var_f18))
int32_t var_12d8
int64_t* rax_124

if (var_12d8 == 0)
    rax_124 = var_12e0
label_140f32b7d:
    
    if (rax_124 != 0)
        sub_140a74f90(rax_124)
else
    int64_t* rcx_116 = var_12e0
    
    if (rcx_116 != 0)
        (*(*rcx_116 + 0x38))(rcx_116, 0)
        rax_124 = var_12e0
        
        if (rax_124 != 0)
            rax_124 = sub_140a84c80(rax_124, 0, 0)
            var_12e0 = rax_124
        
        int32_t var_12d8_1 = 0
        goto label_140f32b7d
rax_105[0x77].b = *(arg2 + 0x430)
*(rax_105 + 0x3b9) = *(arg2 + 0x431)
sub_140692f90(&rax_105[0x78], arg2 + 0x438)
rax_105[0x8b].b = *(arg2 + 0x448)
*(rax_105 + 0x459) = *(arg2 + 0x449)
sub_140692f90(&rax_105[0x8c], arg2 + 0x450)
int128_t var_e48 = var_1038.o
int64_t* var_12d0
int64_t* rax_129 = sub_140e90050(&var_12d0, arg1, &var_e48)
int32_t var_1270 = 0
char var_126c = 1
int64_t var_1268 = 0
int32_t var_1260 = 0
sub_140692f90(&var_1268, rax_129)
rax_105[0x88].d = var_1270
*(rax_105 + 0x444) = var_126c
sub_140692f90(&rax_105[0x89], &var_1268)
sub_140745b20(&var_1268)
int32_t var_12c8
int64_t* rax_132

if (var_12c8 == 0)
    rax_132 = var_12d0
label_140f32c94:
    
    if (rax_132 != 0)
        sub_140a74f90(rax_132)
else
    int64_t* rcx_125 = var_12d0
    
    if (rcx_125 != 0)
        (*(*rcx_125 + 0x38))(rcx_125, 0)
        rax_132 = var_12d0
        
        if (rax_132 != 0)
            rax_132 = sub_140a84c80(rax_132, 0, 0)
            var_12d0 = rax_132
        
        int32_t var_12c8_1 = 0
        goto label_140f32c94
rax_105[0x94].d = 1
*(rax_105 + 0x4a4) = 1
sub_1407473e0(&rax_105[0x95], &var_10d0)
rax_105[0x7a].d = *(arg2 + 0x478)
*(rax_105 + 0x3d4) = *(arg2 + 0x47c)
sub_140692f90(&rax_105[0x7b], arg2 + 0x480)
rax_105[0x98].w = 0x101
sub_1407473e0(&rax_105[0x99], &var_10b8)
sub_1407473e0(&rax_105[0x92], arg2 + 0x4a8)
void*** rax_135 = j_sub_140a82f30(0x558)
void*** rbx_9 = rax_135

if (rax_135 == 0)
    rbx_9 = nullptr
else
    rax_135[1].d = 1
    *(rax_135 + 0xc) = 1
    *rbx_9 = &data_142d8c5b0
    
    if (rbx_9 != -0x10)
        sub_140ee3400(&rbx_9[2])

void*** var_1130 = rbx_9
void* var_1138 = &rbx_9[2]
sub_14065fa30(&var_1138, &rbx_9[2])
int64_t var_1318_1 = 0x548
void var_1307
void* var_1128 = &var_1307
int128_t zmm1_3 = sub_140e23ed0(&rbx_9[2], "SEditableText")

if (rbx_9 != 0)
    rbx_9[1].d += 1

void var_e10

if (arg1 + 0x3f8 == &var_e10)
label_140f32dfd:
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp12_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rbx_9)[1](rbx_9, 1)
else
    *(arg1 + 0x3f8) = &rbx_9[2]
    void*** rsi_6 = *(arg1 + 0x400)
    
    if (rbx_9 == rsi_6)
        goto label_140f32dfd
    
    *(arg1 + 0x400) = rbx_9
    
    if (rsi_6 != 0)
        rsi_6[1].d -= 1
        
        if (rsi_6[1].d == 1)
            (**rsi_6)(rsi_6)
            int32_t temp14_1 = *(rsi_6 + 0xc)
            *(rsi_6 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*rsi_6)[1](rsi_6, 1)

void* var_ec8
void** rax_140 = sub_140696520(&var_1138, &var_ec8, rax_105, zmm1_3)
int64_t* rbx_10 = rax_140[1]
void* var_1008 = *rax_140
int64_t* var_1000 = rbx_10

if (rbx_10 != 0)
    rbx_10[1].d += 1

char var_f58 = 1
int64_t var_f50 = 0
int32_t var_f48 = 0
int128_t zmm6_1 = *rax_91
int128_t var_f68 = zmm6_1
void*** rax_141 = j_sub_140a82f30(0x88)
void*** rsi_7 = rax_141

if (rax_141 == 0)
    rsi_7 = nullptr
else
    sub_14068e490(rax_141)
    *rsi_7 = &data_142d8add0

int32_t var_1228 = 1
int32_t var_1220 = 0x3f800000
char var_121c = 1
int64_t var_1218 = 0
int32_t var_1210 = 0
sub_140692f90(&var_1218, &var_1178)
rsi_7[5].d = var_1228
*(rsi_7 + 0x34) = var_121c
rsi_7[6].d = var_1220
sub_140692f90(&rsi_7[7], &var_1218)
sub_140745b20(&var_1218)
rsi_7[0xb].b = 1
*(rsi_7 + 0x48) = zmm6_1
sub_140692f90(&rsi_7[0xc], &var_f50)
sub_140745b20(&var_f50)
rsi_7[4].w = 0x200
sub_140693600(rsi_7, &var_1008)

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp16_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

void var_9a8
void* rax_147 = sub_140f45840(sub_14068d9d0(&var_9a8), arg2 + 0x360)
int128_t var_e68 = var_ff8.o
int64_t* var_12c0
int64_t* rax_148 = sub_140e46010(&var_12c0, arg1, &var_e68)
int64_t var_11c0
sub_140a96170(&var_11c0)
char var_11a8 = 1
int64_t var_11a0 = 0
int32_t var_1198 = 0
sub_140692f90(&var_11a0, rax_148)
int64_t rcx_154 = *(rax_147 + 0x1a0)
*(rax_147 + 0x1a0) = var_11c0
var_11c0 = rcx_154
int64_t rcx_155 = *(rax_147 + 0x1a8)
int64_t var_11b8
*(rax_147 + 0x1a8) = var_11b8
int32_t var_11b0
*(rax_147 + 0x1b0) = var_11b0
int64_t var_11b8_1 = rcx_155
*(rax_147 + 0x1b8) = var_11a8
sub_1407473e0(rax_147 + 0x1c0, &var_11a0)
sub_140745b20(&var_11a0)
sub_1405970a0(&var_11c0)
int32_t var_12b8
int64_t* rax_154

if (var_12b8 == 0)
    rax_154 = var_12c0
label_140f3308b:
    
    if (rax_154 != 0)
        sub_140a74f90(rax_154)
else
    int64_t* rcx_159 = var_12c0
    
    if (rcx_159 != 0)
        (*(*rcx_159 + 0x38))(rcx_159, 0)
        rax_154 = var_12c0
        
        if (rax_154 != 0)
            rax_154 = sub_140a84c80(rax_154, 0, 0)
            var_12c0 = rax_154
        
        int32_t var_12b8_1 = 0
        goto label_140f3308b
int128_t var_ea8 = var_10a8.o
int64_t* rax_155 = sub_140e90050(&var_12f8, arg1, &var_ea8)
int32_t var_1258 = 0
int64_t var_1250 = 0
int32_t var_1248 = 0
char var_1254 = 1
sub_140692f90(&var_1250, rax_155)
*(rax_147 + 0x400) = var_1258
*(rax_147 + 0x404) = var_1254
sub_140692f90(rax_147 + 0x408, &var_1250)
sub_140745b20(&var_1250)
int64_t* (* rax_158)(void* arg1, int64_t* arg2, int32_t arg3 @ zmm0)

if (var_12f0 == 0)
    rax_158 = var_12f8
label_140f3314a:
    
    if (rax_158 != 0)
        sub_140a74f90(rax_158)
else
    int64_t* (* rcx_166)(void* arg1, int64_t* arg2, int32_t arg3 @ zmm0) = var_12f8
    
    if (rcx_166 != 0)
        (*(*rcx_166 + 0x38))(rcx_166, 0)
        rax_158 = var_12f8
        
        if (rax_158 != 0)
            rax_158 = sub_140a84c80(rax_158, 0, 0)
            var_12f8 = rax_158
        
        int32_t var_12f0_1 = 0
        goto label_140f3314a
*(rax_147 + 0x3e8) = *(arg2 + 0x478)
*(rax_147 + 0x3ec) = *(arg2 + 0x47c)
sub_140692f90(rax_147 + 0x3f0, arg2 + 0x480)
void*** rax_161 = sub_140688ae0()
void*** var_1200 = rax_161
void* var_1208 = &rax_161[2]
sub_14065fa30(&var_1208, &rax_161[2])
void var_1306
void* var_11f8 = &var_1306
int64_t var_1318_2 = 0x798
int128_t zmm1_4 = sub_140e23ed0(var_1208, "STextBlock")
void* var_ed8
void** rax_163 = sub_140697520(sub_140dd3250(&var_1208, arg1 + 0x3e8), &var_ed8, rax_147, zmm1_4)
void* rdx_77 = rax_163[1]
void* var_1098 = *rax_163
void* var_1090 = rdx_77

if (rdx_77 != 0)
    *(rdx_77 + 8) += 1

char var_e88 = 1
int64_t var_e80 = 0
int128_t var_e98 = *rax_91
int32_t var_e78 = 0
void*** rax_164 = j_sub_140a82f30(0x88)
void*** rbx_12 = rax_164

if (rax_164 == 0)
    rbx_12 = nullptr
else
    sub_14068e490(rax_164)
    *rbx_12 = &data_142d8add0

void* rax_166 = sub_140ed19f0(sub_140eb9be0(rbx_12, &var_1168), &var_e98)
*(rax_166 + 0x20) = 0x200
void*** rax_167 = sub_140e91f70()
void*** var_1118 = rax_167
void* var_1120 = &rax_167[2]
sub_14065fa30(&var_1120, &rax_167[2])
int64_t var_1318_3 = 0x2d8
void var_1305
void* var_1110 = &var_1305
sub_140e23ed0(&rax_167[2], "SHorizontalBox")
void* rax_168 = sub_140693860(rax_166, &var_1098)
void var_d70
int64_t* rax_169
int128_t zmm1_5
rax_169, zmm1_5 = sub_14068d420(&var_d70)
void* var_e58
void** rax_173 = sub_140696920(&var_1120, &var_e58, 
    sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_169, rax_168), rsi_7), rax_103), zmm1_5)
int64_t* rbx_15 = rax_173[1]
void* var_1088 = *rax_173
int64_t* var_1080 = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

char var_f30 = *(arg2 + 0x3d8)
int128_t var_f40 = *(arg2 + 0x3c8)
int64_t var_f28 = 0
int32_t var_f20 = 0
sub_140692f90(&var_f28, arg2 + 0x3e0)
sub_140de1b90(sub_140ed19a0(arg1 + 0x2e0, &var_f40) + 0x10, &var_1088)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp19_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

int64_t* var_e50

if (var_e50 != 0)
    var_e50[1].d -= 1
    
    if (var_e50[1].d == 1)
        (**var_e50)(var_e50)
        int32_t temp20_1 = *(var_e50 + 0xc)
        *(var_e50 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*var_e50 + 8))(var_e50, 1)

sub_140669d70(&var_1120)
int64_t var_bd0

if (var_bd0 != 0)
    sub_140a74f90(var_bd0)

sub_140660250(&var_d70)
int64_t* var_ed0

if (var_ed0 != 0)
    var_ed0[1].d -= 1
    
    if (var_ed0[1].d == 1)
        (**var_ed0)(var_ed0)
        int32_t temp23_1 = *(var_ed0 + 0xc)
        *(var_ed0 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*var_ed0 + 8))(var_ed0, 1)

sub_140669d70(&var_1208)
sub_1406913d0(&var_9a8)
int64_t* var_ec0

if (var_ec0 != 0)
    var_ec0[1].d -= 1
    
    if (var_ec0[1].d == 1)
        (**var_ec0)(var_ec0)
        int32_t temp25_1 = *(var_ec0 + 0xc)
        *(var_ec0 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_ec0 + 8))(var_ec0, 1)

sub_140669d70(&var_1138)
sub_140690950(&var_560)
int64_t* var_eb0

if (var_eb0 != 0)
    var_eb0[1].d -= 1
    
    if (var_eb0[1].d == 1)
        (**var_eb0)(var_eb0)
        int32_t temp26_1 = *(var_eb0 + 0xc)
        *(var_eb0 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*(*var_eb0 + 8))(var_eb0, 1)

sub_140597060(&var_1150)
sub_140e536f0(&var_bc0)
sub_140745b20(&var_1160)
sub_140745b20(&var_1178)
sub_140745b20(&var_1100)
sub_140745b20(&var_10e8)
sub_140745b20(&var_10d0)
sub_140745b20(&var_10b8)
sub_140745b20(&var_1018)
sub_140745b20(&var_f78)
sub_140ddfb70(&var_fa8)
int64_t result = sub_140597060(&var_e20)
__security_check_cookie(rax_1 ^ &var_1338)
return result
