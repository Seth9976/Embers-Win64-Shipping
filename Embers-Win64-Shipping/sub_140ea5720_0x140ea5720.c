// 函数: sub_140ea5720
// 地址: 0x140ea5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2bc0)
void var_2bd8
int64_t rax_1 = __security_cookie ^ &var_2bd8
void* r13 = arg3[2]
int32_t var_2b78 = 0
int64_t* rax_3 = arg3[3]
int64_t* r15 = arg3

if (rax_3 != 0)
    rax_3[1].d += 1

int64_t* rax_4 = arg3[1]
void* (* r12)(void* arg1, void* arg2) = *arg3

if (rax_4 != 0)
    rax_4[1].d += 1

int64_t* rcx = arg3[4]
int128_t* rax_6

if (rcx == 0)
    void var_22d8
    rax_6 = sub_140dda8f0(&var_22d8)
    rcx = arg3[4]
else
    int32_t var_25a0_1 = rcx[0xd].d
    int128_t var_25b8
    rax_6 = &var_25b8
    int64_t zmm1 = rcx[0xc]
    var_25b8 = *(rcx + 0x50)
    int64_t var_25a8_1 = zmm1

int128_t var_25d8
int128_t* rdi = &var_25d8
var_25d8 = *rax_6
int64_t var_25c8 = rax_6[1].q
int32_t var_25c0 = *(rax_6 + 0x18)

if (*(r13 + 0x110) != 0)
    rdi = r13 + 0xf8

int64_t* rax_8 = r15[0x12]
int64_t* var_2a20
int64_t* rcx_2
int64_t rdx_1
int32_t r14

if (rcx == 0)
    sub_1405d9400()
    int64_t* rcx_3 = data_143cd6fe0
    rdx_1 = data_143cd6fd8
    int64_t var_2a28 = rdx_1
    var_2a20 = rcx_3
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    rcx_2 = &var_2a28
    int32_t var_2a18_1 = data_143cd6fe8
    r14 = 2
else
    void var_22f0
    int64_t* rax_9 = sub_140e66f90(rcx, &var_22f0)
    rcx_2 = rax_9
    r14 = 1
    rdx_1 = *rax_9

int64_t var_2ab8 = rdx_1
void* rax_11 = rcx_2[1]

if (rax_11 != 0)
    *(rax_11 + 8) += 1

int32_t rax_12 = rcx_2[2].d

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (var_2a20 != 0)
        var_2a20[1].d -= 1
        
        if (var_2a20[1].d == 1)
            (**var_2a20)(var_2a20)
            int32_t rax_15 = *(var_2a20 + 0xc)
            *(var_2a20 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*var_2a20 + 8))(var_2a20, 1)

if ((r14.b & 1) != 0)
    r14 &= 0xfffffffe
    int64_t* var_22e8
    
    if (var_22e8 != 0)
        var_22e8[1].d -= 1
        
        if (var_22e8[1].d == 1)
            (**var_22e8)(var_22e8)
            int32_t rax_19 = *(var_22e8 + 0xc)
            *(var_22e8 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_22e8 + 8))(var_22e8, 1)

uint32_t rax_21 = zx.d(*(r12 + 0x88))
char temp1 = rax_21.b
rax_21.b = neg.b(rax_21.b)
void* var_2b88 = data_143e244b0
int64_t* rax_25 = data_143e244b8
int64_t* var_2b80 = rax_25

if (rax_25 != 0)
    rax_25[1].d += 1

if (*(rdi + 0x18) != 0)
    void* rax_26 = sub_140e14f50(rdi)
    int32_t rcx_10
    rcx_10.b = sub_140b5b8a0(*(rax_26 + 0x50), 0) == 0
    void* rbx_3
    
    if ((*(rax_26 + 0x54) != 0 | rcx_10.b) == 0)
        rbx_3 = *(rax_26 + 0x48)
    
    int64_t rbx_4
    
    if ((*(rax_26 + 0x54) != 0 | rcx_10.b) != 0 || rbx_3 == 0)
        rbx_4 = *(rax_26 + 0x50)
    else
        rbx_4 = *(rbx_3 + 0x18)
    
    int32_t rcx_11
    rcx_11.b = sub_140b5b8a0(rbx_4.d, 0) == 0
    rcx_11.b |= (rbx_4 u>> 0x20).d != 0
    
    if (rcx_11.b == 0)
        r15 = arg3
    else
        void* var_2710_1 = rax_26
        int64_t var_2700 = 0
        int32_t var_26f8_1 = 0
        char var_2708_1 = 1
        void var_2038
        int64_t* rax_29 = sub_140e4fb70(&var_2038)
        rax_29[0x34] = rax_26
        rax_29[0x35].b = 1
        sub_140692f90(&rax_29[0x36], &var_2700)
        void*** rax_30 = sub_140e48c50()
        void* var_2860 = &rax_30[2]
        sub_140918950(&var_2860, &rax_30[2])
        int64_t var_2bb8_1 = 0x3a8
        void var_2b90
        void* var_2850_1 = &var_2b90
        void* var_2518
        void** rax_31 =
            sub_140e56930(&var_2860, &var_2518, rax_29, sub_140e23ed0(&rax_30[2], "SImage"))
        int64_t* rcx_17 = rax_31[1]
        
        if (rcx_17 != 0)
            rcx_17[1].d += 1
        
        int64_t* rbx_7 = var_2b80
        void* rax_32 = var_2b88
        var_2b88 = *rax_31
        void* var_2b18_2 = rax_32
        var_2b80 = rcx_17
        int64_t* var_2b10_2 = rbx_7
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp4_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        int64_t* var_2510
        
        if (var_2510 != 0)
            var_2510[1].d -= 1
            
            if (var_2510[1].d == 1)
                (**var_2510)(var_2510)
                int32_t temp6_1 = *(var_2510 + 0xc)
                *(var_2510 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_2510 + 8))(var_2510, 1)
        
        if (rax_30 != 0)
            rax_30[1].d -= 1
            
            if (rax_30[1].d == 1)
                (**rax_30)(rax_30)
                int32_t temp8_1 = *(rax_30 + 0xc)
                *(rax_30 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rax_30)[1](rax_30, 1)
        
        void var_1e30
        sub_140745b20(&var_1e30)
        void var_1e48
        sub_140745b20(&var_1e48)
        int64_t* var_1e58
        
        if (var_1e58 != 0)
            var_1e58[1].d -= 1
            
            if (var_1e58[1].d == 1)
                (**var_1e58)(var_1e58)
                int32_t temp10_1 = *(var_1e58 + 0xc)
                *(var_1e58 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_1e58 + 8))(var_1e58, 1)
        
        void var_1e88
        sub_140745b20(&var_1e88)
        sub_140ddea30(&var_2038)
        sub_140745b20(&var_2700)
        r15 = arg3

void* rdi_3 = arg1
int64_t* var_2b40

if (*(rdi_3 + 0x3bc) != 0 && var_2b88 == data_143e244b0)
    char rax_45
    
    if (data_143e2a050 == 0)
        rax_45 = data_143e2a040
    else
        int64_t* rcx_31 = data_143e2a048
        
        if (rcx_31 == 0)
            rax_45 = data_143e2a040
        else if ((*(*rcx_31 + 0x28))(rcx_31) == 0)
            rax_45 = data_143e2a040
        else
            int64_t* rcx_32 = nullptr
            
            if (data_143e2a050 != 0)
                rcx_32 = data_143e2a048
            
            rax_45 = (*(*rcx_32 + 0x48))(rcx_32)
            data_143e2a040 = rax_45
    
    if (rax_45 != 0)
        void var_2350
        int64_t* rax_46 = _vfprintf_p_l(&var_2350, 
            This menu entry is missing an icon and should be fixed (consistency within each section is "
        "required, either every entry in the section has an i", SMenuEntryBlock")
        int64_t* rcx_34 = rax_46[1]
        int64_t var_29f8 = *rax_46
        
        if (rcx_34 != 0)
            rcx_34[1].d += 1
        
        int32_t var_29e8_1 = rax_46[2].d
        char var_29e0_1 = 1
        int64_t var_29d8 = 0
        int32_t var_29d0_1 = 0
        int32_t var_2798_1 = 0x41800000
        int32_t var_2794_1 = 0x41800000
        char var_2790_1 = 1
        int64_t var_2788 = 0
        int32_t var_2780_1 = 0
        int128_t var_2778
        sub_140acc920(&var_2778, &data_14399f740)
        char var_2768_1 = 1
        int64_t var_2760 = 0
        int32_t var_2758_1 = 0
        void var_2290
        int64_t* rax_49 = sub_140e934e0(&var_2290)
        *(rax_49 + 0x1a0) = var_2778
        rax_49[0x36].b = var_2768_1
        sub_140692f90(&rax_49[0x37], &var_2760)
        rax_49[0x47].d = 0x41800000
        *(rax_49 + 0x23c) = 0x41800000
        rax_49[0x48].b = 1
        sub_140692f90(&rax_49[0x49], &var_2788)
        sub_14065da90(rax_49, &var_29f8)
        rax_49[3].b = var_29e0_1
        sub_140692f90(&rax_49[4], &var_29d8)
        void*** rax_52 = sub_140e91730()
        void* var_2878 = &rax_52[2]
        sub_140918950(&var_2878, &rax_52[2])
        int64_t var_2bb8_2 = 0x360
        void var_2ba0
        void* var_2868_1 = &var_2ba0
        void* var_2528
        int64_t* rax_53 =
            sub_140e9b230(&var_2878, &var_2528, rax_49, sub_140e23ed0(&rax_52[2], "SColorBlock"))
        int64_t* rcx_44 = rax_53[1]
        
        if (rcx_44 != 0)
            rcx_44[1].d += 1
        
        int64_t* rbx_12 = var_2b80
        void* rax_54 = var_2b88
        var_2b88 = *rax_53
        void* var_2b48_2 = rax_54
        var_2b80 = rcx_44
        var_2b40 = rbx_12
        
        if (rbx_12 != 0)
            rbx_12[1].d -= 1
            
            if (rbx_12[1].d == 1)
                (**rbx_12)(rbx_12)
                int32_t temp12_1 = *(rbx_12 + 0xc)
                *(rbx_12 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_12 + 8))(rbx_12, 1)
        
        int64_t* var_2520
        
        if (var_2520 != 0)
            var_2520[1].d -= 1
            
            if (var_2520[1].d == 1)
                (**var_2520)(var_2520)
                int32_t temp14_1 = *(var_2520 + 0xc)
                *(var_2520 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_2520 + 8))(var_2520, 1)
        
        if (rax_52 != 0)
            rax_52[1].d -= 1
            
            if (rax_52[1].d == 1)
                (**rax_52)(rax_52)
                int32_t temp16_1 = *(rax_52 + 0xc)
                *(rax_52 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*rax_52)[1](rax_52, 1)
        
        void var_2048
        sub_140745b20(&var_2048)
        void var_2068
        sub_140745b20(&var_2068)
        void var_2078
        sub_140745b20(&var_2078)
        void var_2090
        sub_140745b20(&var_2090)
        void var_20a8
        sub_140745b20(&var_20a8)
        void var_20c0
        sub_140745b20(&var_20c0)
        void var_20d8
        sub_140745b20(&var_20d8)
        sub_140ddea30(&var_2290)
        sub_140745b20(&var_2760)
        sub_140745b20(&var_2788)
        sub_140745b20(&var_29d8)
        
        if (rcx_34 != 0)
            rcx_34[1].d -= 1
            
            if (rcx_34[1].d == 1)
                (**rcx_34)(rcx_34)
                int32_t rax_63 = *(rcx_34 + 0xc)
                *(rcx_34 + 0xc) -= 1
                
                if (rax_63 == 1)
                    (*(*rcx_34 + 8))(rcx_34, 1)
        
        int64_t* var_2348
        
        if (var_2348 != 0)
            var_2348[1].d -= 1
            
            if (var_2348[1].d == 1)
                (**var_2348)(var_2348)
                int32_t rsi_1 = *(var_2348 + 0xc)
                *(var_2348 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*var_2348 + 8))(var_2348, zx.q(rsi_1))
        
        rdi_3 = arg1

void* rax_68 = r15[4]
char r12_1 = *(r13 + 0x14a)

if (rax_68 != 0)
    r12_1 = *(rax_68 + 0x84)

char rbx_17 = data_1439ae51c

if (r12_1 - 2 u> 2)
    rbx_17 = data_1439ae51e

char var_2b94 = rbx_17

if (*(r13 + 0x138) == 0)
    if (r12_1 != 5)
        goto label_140ea6031
    
    var_2b94 = data_1439ae51d
else if (r12_1 == 1 || r12_1 == 5)
    var_2b94 = data_1439ae51d
else
label_140ea6031:
    int64_t* rax_70 = sub_140d3c6e0(r12 + 0x38)
    
    if (rax_70 != 0)
        char rdx_15 = rbx_17
        
        if ((*(*rax_70 + 0x260))(rax_70) != 0)
            rdx_15 = data_1439ae51e
        
        var_2b94 = rdx_15

int128_t zmm0_1 = data_142d8c9c0
int64_t rdx_16 = r15[0x13]
int128_t var_2808
__builtin_memcpy(&var_2808, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
int128_t var_22b8 = zmm0_1
int64_t var_27f0 = 0
int64_t var_27e8 = 0
int64_t var_27d8 = 0
int32_t var_27d0 = 0
char var_27e0 = 1
int64_t var_2b68
int128_t zmm6 = sub_140e1ad30(&var_2b68, rdx_16, ".CheckBox")
void* var_2b58
void* (* var_2b28)(void* arg1, void* arg2)

if (r12_1 == 4)
    int64_t* rax_74
    rax_74, zmm6 = sub_140e1ad30(&var_2b58, r15[0x13], ".Check")
    var_2b68 = *rax_74
else if (r12_1 == 3)
    void var_24c8
    int64_t* rax_75
    rax_75, zmm6 = sub_140e1ad30(&var_24c8, r15[0x13], ".RadioButton")
    int32_t var_2b20_1 = 0
    var_2b68 = *rax_75
    var_2b28 = sub_140edd2b0
    int64_t* rax_76 = sub_140a84c80(0, 0x30, 0)
    int64_t* var_2538_1 = rax_76
    
    if (rax_76 != 0)
        rax_76[1] = rdi_3
        *rax_76 = &data_142eded78
        *(rax_76 + 0x10) = var_2b28.o
        rax_76[5] = sub_140a387b0()
    
    char var_2698_1 = 1
    int64_t var_2690 = 0
    int32_t var_2688_1 = 0
    int128_t var_26c0
    __builtin_memcpy(&var_26c0, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    int128_t var_26a8_1 = zx.o(0)
    
    if (rax_76 != 0)
        (*(*rax_76 + 0x40))(rax_76, &var_2690)
    
    sub_140693390(&var_2808, &var_26c0)
    var_27e0 = var_2698_1
    sub_1407473e0(&var_27d8, &var_2690)
    sub_140745b20(&var_2690)
    int64_t* rdi_4 = var_26a8_1:8.q
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp17_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    if (rax_76 != 0)
        (*(*rax_76 + 0x38))(rax_76, 0)
        int64_t rax_83 = sub_140a84c80(rax_76, 0, 0)
        int64_t var_2538_2 = rax_83
        
        if (rax_83 != 0)
            sub_140a74f90(rax_83)

int64_t* r15_2 = *(r13 + 0x140)
void* rax_84 = *(r13 + 0x138)
void* var_2b08 = rax_84
int64_t* var_2b00 = r15_2

if (r15_2 != 0)
    r15_2[1].d += 1

int64_t (* var_2b38)(void* arg1, int64_t arg2)
uint64_t (* var_2ad8)(void* arg1)
int128_t zmm0_3

if (rax_84 == 0)
    int64_t var_27c8 = var_2ab8
    void* var_27c0_1 = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    zmm0_3 = zx.o(0)
    int128_t var_2378
    __builtin_memcpy(&var_2378, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x03", 0x11)
    int32_t var_27b8_1 = rax_12
    int128_t var_2360 = zmm0_3
    char var_27b0_1 = 1
    int128_t var_2640
    __builtin_memcpy(&var_2640, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x03", 0x11)
    int64_t var_27a8 = 0
    int128_t var_2628_1 = zmm0_3
    int32_t var_27a0_1 = 0
    int128_t var_2600
    __builtin_memcpy(&var_2600, 
        "\x00\x00\x80\x41\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x01", 0x11)
    char var_2618_1 = 1
    int64_t var_2610 = 0
    int32_t var_2608_1 = 0
    int64_t var_25e8 = 0
    int32_t var_25e0_1 = 0
    char rax_88 = sub_140ab3dc0(&var_2ab8)
    uint32_t rcx_87 = zx.d(data_1439ae51c)
    uint32_t rax_89 = zx.d(data_1439ae51d)
    uint32_t r8_5 = rax_89
    int32_t var_2958 = 0x3f800000
    char r15_3 = rcx_87.b
    
    if (rax_88 != 0)
        r15_3 = rax_89.b
    
    var_2b40.d = 0
    
    if (var_2b88 != data_143e244b0)
        r8_5 = rcx_87
    
    int32_t var_2a58_1 = 0x41900000
    var_2b28.d = r8_5
    char var_2940_1 = r8_5.b
    int64_t var_2968 = 0
    int32_t var_2960_1 = 0
    int64_t var_2950 = 0
    int32_t var_2948_1 = 0
    int64_t var_2a98 = 0
    int32_t var_2a90_1 = 0
    int64_t var_2a80 = 0
    int32_t var_2a78_1 = 0
    int64_t var_2a68 = 0
    int32_t var_2a60_1 = 0
    int64_t var_2a50 = 0
    int32_t var_2a48_1 = 0
    int64_t var_2938 = 0
    int32_t var_2930_1 = 0
    char var_2970_1 = r15_3
    char var_296f_1 = 1
    char var_2954_1 = 1
    int64_t rdx_22 = arg3[0x13]
    int32_t var_2aa0_1 = 0x41800000
    char var_2a9c_1 = 1
    int32_t var_2a88_1 = 0x41800000
    char var_2a84_1 = 1
    int32_t var_2a70_1 = 0x41800000
    char var_2a6c_1 = 1
    char var_2a54_1 = 1
    char var_293f_1 = 1
    int128_t var_2548 = sub_140ebf9c0.o
    void var_23a8
    int64_t* rax_91 = sub_140e1ad30(&var_23a8, rdx_22, ".Keybinding")
    void var_4a0
    int64_t* rax_92 = sub_14068d9d0(&var_4a0)
    int64_t r8_6 = *rax_91
    int64_t var_24e8_1 = r8_6
    int64_t var_24f0_1 = r8_6
    int64_t rax_94 = (*(*rax_8 + 0x88))(rax_8, data_143e243e0)
    
    if (rax_94 == 0)
        rax_94 = sub_140e13900()
    
    rax_92[0x3a] = rax_94
    sub_140693390(&rax_92[0x4c], &var_2640)
    rax_92[0x51].b = var_2618_1
    sub_140692f90(&rax_92[0x52], &var_2610)
    sub_14065da90(&rax_92[0x34], &var_27c8)
    rax_92[0x37].b = var_27b0_1
    sub_140692f90(&rax_92[0x38], &var_27a8)
    void*** rax_97 = sub_140688ae0()
    void*** var_2920_1 = rax_97
    void* var_2928 = &rax_97[2]
    sub_14065fa30(&var_2928, &rax_97[2])
    int64_t var_2bb8_3 = 0x798
    void var_2b9f
    void* var_2918_1 = &var_2b9f
    void* var_2498
    void** rax_98
    int128_t zmm6_1
    rax_98, zmm6_1 =
        sub_140697520(&var_2928, &var_2498, rax_92, sub_140e23ed0(&rax_97[2], "STextBlock"))
    void* var_2740 = *rax_98
    void* rax_100 = rax_98[1]
    void* var_2738_1 = rax_100
    
    if (rax_100 != 0)
        *(rax_100 + 8) += 1
    
    void var_1198
    int64_t* rax_101 = sub_14068c940(&var_1198)
    rax_101[0xf].b = r15_3
    *(rax_101 + 0x79) = 1
    sub_1407473e0(&rax_101[0x10], &var_2968)
    rax_101[0x37].b = 1
    *(rax_101 + 0x1a8) = zmm6_1
    sub_140692f90(&rax_101[0x38], &var_25e8)
    void*** rax_102 = sub_140688920()
    void*** var_2908_1 = rax_102
    void* var_2910 = &rax_102[2]
    sub_14065fa30(&var_2910, &rax_102[2])
    int64_t var_2bb8_4 = 0x3c8
    void var_2b9e
    void* var_2900_1 = &var_2b9e
    int128_t zmm1_5
    int512_t zmm6_2
    zmm1_5, zmm6_2 = sub_140e23ed0(&rax_102[2], "SBox")
    void* rax_103
    int128_t zmm1_6
    rax_103, zmm1_6 = sub_1406937a0(rax_101, &var_2740, zmm1_5)
    void* var_2448
    void** rax_104 = sub_140695d20(&var_2910, &var_2448, rax_103, zmm1_6)
    zmm6_2.o = zmm6
    void* var_2720 = *rax_104
    void* rax_106 = rax_104[1]
    void* var_2718_1 = rax_106
    
    if (rax_106 != 0)
        *(rax_106 + 8) += 1
    
    void*** rax_107 = j_sub_140a82f30(0x88)
    void*** rbx_23 = rax_107
    
    if (rax_107 == 0)
        rbx_23 = nullptr
    else
        sub_14068e490(rax_107)
        *rbx_23 = &data_142d8add0
    
    void* rax_108 = sub_140698b50(rbx_23)
    void* rdi_7 = nullptr
    *(rax_108 + 0x20) = 0x203
    void* rax_109 = arg1
    int64_t* r15_4 = *(rax_109 + 0x3a0)
    
    if (r15_4 == 0)
        goto label_140ea66cf
    
    int32_t rax_110 = r15_4[1].d
    
    if (rax_110 == 0)
        r15_4 = nullptr
    else
        r15_4[1].d = rax_110 + 1
        rax_109 = arg1
    label_140ea66cf:
        
        if (r15_4 != 0)
            rdi_7 = *(rax_109 + 0x398)
    
    void*** rax_112 = sub_140688ae0()
    void*** var_28d0_1 = rax_112
    void* var_28d8 = &rax_112[2]
    sub_14065fa30(&var_28d8, &rax_112[2])
    int64_t var_2bb8_5 = 0x798
    void var_2b9d
    void* var_28c8_1 = &var_2b9d
    sub_140e23ed0(&rax_112[2], "STextBlock")
    void var_24f8
    int64_t* rax_113 = sub_140e1ad30(&var_24f8, arg3[0x13], ".Label")
    void var_8e8
    void* rax_117
    int128_t zmm1_7
    rax_117, zmm1_7 = sub_140e90ca0(
        sub_1406a5080(sub_140edd090(sub_14068d9d0(&var_8e8), rax_8, rax_113, nullptr), &arg3[6]), 
        rdi_7, &var_2548)
    void* var_23b8
    void** rax_118 = sub_140697520(&var_28d8, &var_23b8, rax_117, zmm1_7)
    var_2ad8 = *rax_118
    void* rax_120 = rax_118[1]
    int32_t var_2ad0
    var_2ad0.q = rax_120
    
    if (rax_120 != 0)
        *(rax_120 + 8) += 1
    
    int128_t var_2438
    __builtin_memcpy(&var_2438, 
        "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\xc0\x40\x00\x00\x00\x00\x01", 0x11)
    int64_t var_2420_1 = 0
    int32_t var_2418_1 = 0
    void* rax_123 = sub_140ed19f0(sub_140eb9be0(sub_1406a4fe0(), &var_2958), &var_2438)
    var_2b58 = rax_123
    *(rax_123 + 0x21) = 2
    uint128_t zmm0_5 = var_2b88.o
    uint128_t var_2558 = zmm0_5
    void* rcx_121 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rcx_121 != 0)
        *(rcx_121 + 8) += 1
    
    void var_1438
    int64_t* rax_124 = sub_14068c940(&var_1438)
    rax_124[0x3c].d = var_2a88_1
    *(rax_124 + 0x1e4) = 1
    sub_1407473e0(&rax_124[0x3d], &var_2a80)
    rax_124[0x3f].d = var_2aa0_1
    *(rax_124 + 0x1fc) = 1
    sub_1407473e0(&rax_124[0x40], &var_2a98)
    void*** rax_125 = sub_140688920()
    void*** var_28b8_1 = rax_125
    void* var_28c0 = &rax_125[2]
    sub_14065fa30(&var_28c0, &rax_125[2])
    int64_t var_2bb8_6 = 0x3c8
    void var_2b9c
    void* var_28b0_1 = &var_2b9c
    void* rax_126
    int128_t zmm1_9
    rax_126, zmm1_9 = sub_1406937a0(rax_124, &var_2558, sub_140e23ed0(&rax_125[2], "SBox"))
    void* var_2598
    void** rax_127 = sub_140695d20(&var_28c0, &var_2598, rax_126, zmm1_9)
    void* var_2730 = *rax_127
    void* rax_129 = rax_127[1]
    void* var_2728_1 = rax_129
    
    if (rax_129 != 0)
        *(rax_129 + 8) += 1
    
    void var_16d8
    int64_t* rax_130 = sub_14068c940(&var_16d8)
    rax_130[0xf].b = var_2b28.b
    *(rax_130 + 0x79) = 1
    sub_1407473e0(&rax_130[0x10], &var_2938)
    rax_130[0x3c].d = var_2a58_1
    *(rax_130 + 0x1e4) = 1
    sub_1407473e0(&rax_130[0x3d], &var_2a50)
    rax_130[0x3f].d = var_2a70_1
    *(rax_130 + 0x1fc) = 1
    sub_1407473e0(&rax_130[0x40], &var_2a68)
    rax_130[0x34].d = 2
    *(rax_130 + 0x1a4) = 2
    void*** rax_132 = sub_140688920()
    void*** var_28a0_1 = rax_132
    void* var_28a8 = &rax_132[2]
    sub_14065fa30(&var_28a8, &rax_132[2])
    int64_t var_2bb8_7 = 0x3c8
    void var_2b9b
    void* var_2898_1 = &var_2b9b
    void* rax_133
    int128_t zmm1_11
    rax_133, zmm1_11 = sub_1406937a0(rax_130, &var_2730, sub_140e23ed0(&rax_132[2], "SBox"))
    void* var_2588
    void** rax_134 = sub_140695d20(&var_28a8, &var_2588, rax_133, zmm1_11)
    var_2b38 = *rax_134
    void* rax_136 = rax_134[1]
    int32_t var_2b30
    var_2b30.q = rax_136
    
    if (rax_136 != 0)
        *(rax_136 + 8) += 1
    
    int128_t var_2410
    __builtin_memcpy(&var_2410, 
        "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x01", 0x11)
    int64_t var_23f8_1 = 0
    int32_t var_23f0_1 = 0
    void*** rax_137 = sub_140e91f70()
    void*** var_2888_1 = rax_137
    void* var_2890 = &rax_137[2]
    sub_14065fa30(&var_2890, &rax_137[2])
    int64_t var_2bb8_8 = 0x2d8
    void var_2b9a
    void* var_2880_1 = &var_2b9a
    sub_140e23ed0(&rax_137[2], "SHorizontalBox")
    void* rax_138 = sub_140693860(rax_108, &var_2720)
    void* rax_139 = sub_140693860(var_2b58, &var_2ad8)
    void* rax_143 =
        sub_140693860(sub_140ed19f0(sub_140698b50(sub_1406a4fe0()), &var_2410), &var_2b38)
    void var_1c50
    int64_t* rax_144
    int128_t zmm1_12
    rax_144, zmm1_12 = sub_14068d420(&var_1c50)
    void* var_2568
    void** rax_148 = sub_140696920(&var_2890, &var_2568, 
        sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_144, rax_143), rax_139), rax_138), zmm1_12)
    int64_t* rcx_151 = rax_148[1]
    void* rdx_63 = *rax_148
    int64_t* var_29c0 = rcx_151
    
    if (rcx_151 != 0)
        rcx_151[1].d += 1
    
    var_2b08 = rdx_63
    int64_t var_29c8_1 = 0
    sub_14066a200(&var_2b00, &var_29c0)
    int64_t* rbx_30 = var_29c0
    
    if (rbx_30 != 0)
        rbx_30[1].d -= 1
        
        if (rbx_30[1].d == 1)
            (**rbx_30)(rbx_30)
            int32_t temp31_1 = *(rbx_30 + 0xc)
            *(rbx_30 + 0xc) -= 1
            
            if (temp31_1 == 1)
                (*(*rbx_30 + 8))(rbx_30, 1)
    
    int64_t* var_2560
    
    if (var_2560 != 0)
        var_2560[1].d -= 1
        
        if (var_2560[1].d == 1)
            (**var_2560)(var_2560)
            int32_t temp33_1 = *(var_2560 + 0xc)
            *(var_2560 + 0xc) -= 1
            
            if (temp33_1 == 1)
                (*(*var_2560 + 8))(var_2560, 1)
    
    sub_140669d70(&var_2890)
    int64_t var_1ab0
    
    if (var_1ab0 != 0)
        sub_140a74f90(var_1ab0)
    
    sub_140660250(&var_1c50)
    int64_t* var_2580
    
    if (var_2580 != 0)
        var_2580[1].d -= 1
        
        if (var_2580[1].d == 1)
            (**var_2580)(var_2580)
            int32_t temp36_1 = *(var_2580 + 0xc)
            *(var_2580 + 0xc) -= 1
            
            if (temp36_1 == 1)
                (*(*var_2580 + 8))(var_2580, 1)
    
    sub_140669d70(&var_28a8)
    sub_140690290(&var_16d8)
    int64_t* var_2590
    
    if (var_2590 != 0)
        var_2590[1].d -= 1
        
        if (var_2590[1].d == 1)
            (**var_2590)(var_2590)
            int32_t temp38_1 = *(var_2590 + 0xc)
            *(var_2590 + 0xc) -= 1
            
            if (temp38_1 == 1)
                (*(*var_2590 + 8))(var_2590, 1)
    
    sub_140669d70(&var_28c0)
    sub_140690290(&var_1438)
    int64_t* var_23b0
    
    if (var_23b0 != 0)
        var_23b0[1].d -= 1
        
        if (var_23b0[1].d == 1)
            (**var_23b0)(var_23b0)
            int32_t temp40_1 = *(var_23b0 + 0xc)
            *(var_23b0 + 0xc) -= 1
            
            if (temp40_1 == 1)
                (*(*var_23b0 + 8))(var_23b0, 1)
    
    sub_140669d70(&var_28d8)
    sub_1406913d0(&var_8e8)
    
    if (r15_4 != 0)
        r15_4[1].d -= 1
        
        if (r15_4[1].d == 1)
            (**r15_4)(r15_4)
            int32_t temp42_1 = *(r15_4 + 0xc)
            *(r15_4 + 0xc) -= 1
            
            if (temp42_1 == 1)
                (*(*r15_4 + 8))(r15_4, 1)
    
    int64_t* var_2440
    
    if (var_2440 != 0)
        var_2440[1].d -= 1
        
        if (var_2440[1].d == 1)
            (**var_2440)(var_2440)
            int32_t temp44_1 = *(var_2440 + 0xc)
            *(var_2440 + 0xc) -= 1
            
            if (temp44_1 == 1)
                (*(*var_2440 + 8))(var_2440, 1)
    
    sub_140669d70(&var_2910)
    sub_140690290(&var_1198)
    int64_t* var_2490
    
    if (var_2490 != 0)
        var_2490[1].d -= 1
        
        if (var_2490[1].d == 1)
            (**var_2490)(var_2490)
            int32_t temp45_1 = *(var_2490 + 0xc)
            *(var_2490 + 0xc) -= 1
            
            if (temp45_1 == 1)
                (*(*var_2490 + 8))(var_2490, 1)
    
    sub_140669d70(&var_2928)
    sub_1406913d0(&var_4a0)
    sub_140745b20(&var_2938)
    sub_140745b20(&var_2a50)
    sub_140745b20(&var_2a68)
    sub_140745b20(&var_2a80)
    sub_140745b20(&var_2a98)
    sub_140745b20(&var_2950)
    sub_140745b20(&var_2968)
    sub_140745b20(&var_25e8)
    sub_140745b20(&var_2610)
    sub_140ddfb70(&var_2640)
    sub_140597060(&var_2360)
    sub_140745b20(&var_27a8)
    sub_1405970a0(&var_27c8)
    r15_2 = var_2b00

int32_t var_2b30_1 = 0
void* var_2828
int128_t var_2680
int64_t var_2650
int128_t var_2388
void var_2308
void var_18f0
void var_c58
int32_t rax_172
void** rcx_203
int64_t* r12_2
int64_t* r13_2

if (r12_1 != 4)
    int32_t var_2ad0_1 = 0
    var_2b38 = sub_140ec6650
    zmm0_3 = var_2b38.o
    var_2ad8 = sub_140ec1d60
    int128_t var_24d8 = var_2ad8.o
    int128_t var_2578 = zmm0_3
    int64_t* rax_173 = sub_140e93090(&var_c58)
    sub_140693390(&rax_173[0x46], &var_2808)
    rax_173[0x4b].b = var_27e0
    sub_140692f90(&rax_173[0x4c], &var_27d8)
    void* rax_175 = sub_140e91110(rax_173, arg1, &var_24d8)
    int64_t rbx_38 = *rax_8
    void var_2500
    int64_t* rax_176 = sub_140e1ad30(&var_2500, var_2b68, nullptr)
    int64_t rax_177 = (*(rbx_38 + 0x88))(rax_8, data_143e243d8, *rax_176)
    
    if (rax_177 == 0)
        rax_177 = sub_140e13090()
    
    *(rax_175 + 0x1b0) = rax_177
    void* rax_178 = sub_140e923e0(rax_175, arg1, &var_2578)
    void var_2b98
    void** rax_179
    int128_t zmm1_14
    rax_179, zmm1_14 = sub_140e911f0(&var_2308, "SCheckBox", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp", 
        0x242, &var_2b98)
    void* var_2468
    int64_t* rax_180 = sub_140e9ac90(rax_179, &var_2468, rax_178, zmm1_14)
    r12_2 = rax_180[1]
    void* var_29b8 = *rax_180
    int64_t* var_29b0_1 = r12_2
    
    if (r12_2 != 0)
        r12_2[1].d += 1
    
    int64_t* var_29a0
    r13_2 = var_29a0
    rcx_203 = &var_29b8
    rax_172 = 0xf00
else
    zmm0_3 = zx.o(0)
    var_2b38 = sub_140ebde90
    var_2388 = zmm0_3
    int128_t var_2668_1 = zmm0_3
    int128_t var_24a8 = var_2b38.o
    int128_t var_23a0
    __builtin_memcpy(&var_23a0, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
    char var_2658_1 = 1
    __builtin_memcpy(&var_2680, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
    var_2650 = 0
    int32_t var_2648_1 = 0
    int64_t* rax_165 = sub_140e4fb70(&var_18f0)
    sub_140693390(&rax_165[0x38], &var_2680)
    rax_165[0x3d].b = var_2658_1
    sub_140692f90(&rax_165[0x3e], &var_2650)
    void*** rax_167 = sub_140e48c50()
    void*** var_2820_1 = rax_167
    var_2828 = &rax_167[2]
    sub_140918950(&var_2828, &rax_167[2])
    int64_t var_2bb8_9 = 0x3a8
    void var_2b99
    void* var_2818_1 = &var_2b99
    sub_140e23ed0(&rax_167[2], "SImage")
    void* rax_169
    int128_t zmm1_13
    rax_169, zmm1_13 =
        sub_140e90e00(rax_165, arg1, &var_24a8, sub_140e90c50(rax_8, var_2b68, nullptr))
    void* var_2458
    void** rax_170 = sub_140e56930(&var_2828, &var_2458, rax_169, zmm1_13)
    r13_2 = rax_170[1]
    void* var_29a8 = *rax_170
    int64_t* var_29a0_1 = r13_2
    
    if (r13_2 != 0)
        r13_2[1].d += 1
    
    int64_t* var_29b0
    r12_2 = var_29b0
    rcx_203 = &var_29a8
    rax_172 = 0xfc

int32_t r14_1 = r14 | rax_172
int32_t var_2a40 = 0x41800000
char var_2a3c = 1
int64_t var_2a38 = 0
int32_t var_2a30 = 0
int32_t var_2a10 = 0x41800000
char var_2a0c = 1
int64_t var_2a08 = 0
int32_t var_2a00 = 0
char var_2988 = var_2b94
char var_2987 = 1
int64_t var_2980 = 0
int32_t var_2978 = 0
int128_t var_24b8 = var_2b08.o

if (r15_2 != 0)
    r15_2[1].d += 1

void* var_26f0 = *rcx_203
void* rax_183 = rcx_203[1]
void* var_26e8 = rax_183

if (rax_183 != 0)
    *(rax_183 + 8) += 1

void var_ef8
int64_t* rax_184
int128_t zmm1_15
rax_184, zmm1_15 = sub_14068c940(&var_ef8)
rax_184[0xf].b = var_2b94
*(rax_184 + 0x79) = 1
sub_1407473e0(&rax_184[0x10], &var_2980)
rax_184[0x3c].d = var_2a10
*(rax_184 + 0x1e4) = 1
sub_1407473e0(&rax_184[0x3d], &var_2a08)
rax_184[0x3f].d = var_2a40
*(rax_184 + 0x1fc) = 1
sub_1407473e0(&rax_184[0x40], &var_2a38)
rax_184[0x34].d = 2
*(rax_184 + 0x1a4) = 2
void* rax_185 = sub_1406937a0(rax_184, &var_26f0, zmm1_15)
void var_2b97
void var_2338
int64_t* rax_186
int128_t zmm1_16
rax_186, zmm1_16 = sub_1406883e0(&var_2338, "SBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp", 
    0x236, &var_2b97)
void* var_2478
void** rax_187 = sub_140695d20(rax_186, &var_2478, rax_185, zmm1_16)
char* (* var_2ac8)(void* arg1, char* arg2, uint128_t arg3 @ zmm0) = *rax_187
void* rax_189 = rax_187[1]
void* var_2ac0 = rax_189

if (rax_189 != 0)
    *(rax_189 + 8) += 1

void* rax_191 = sub_140693860(sub_1406a4fe0(), &var_24b8)
void* rax_194 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_2ac8)
void var_1aa0
void* rax_197 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_1aa0), rax_194), rax_191)
void var_2b96
void var_2320
int64_t* rax_198
int128_t zmm1_17
rax_198, zmm1_17 = sub_140688620(&var_2320, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp", 
    0x232, &var_2b96)
void* var_2488
void** rax_199 = sub_140696920(rax_198, &var_2488, rax_197, zmm1_17)
int64_t* rsi_5 = rax_199[1]
void* rdi_16 = *rax_199
var_2b58 = rdi_16

if (rsi_5 != 0)
    rsi_5[1].d += 1

int64_t* var_2480

if (var_2480 != 0)
    var_2480[1].d -= 1
    
    if (var_2480[1].d == 1)
        (**var_2480)(var_2480)
        int32_t temp19_1 = *(var_2480 + 0xc)
        *(var_2480 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*var_2480 + 8))(var_2480, 1)

sub_140669d70(&var_2320)
int64_t var_1900

if (var_1900 != 0)
    sub_140a74f90(var_1900)

sub_140660250(&var_1aa0)
int64_t* var_2470

if (var_2470 != 0)
    var_2470[1].d -= 1
    
    if (var_2470[1].d == 1)
        (**var_2470)(var_2470)
        int32_t temp21_1 = *(var_2470 + 0xc)
        *(var_2470 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_2470 + 8))(var_2470, 1)

sub_140669d70(&var_2338)
sub_140690290(&var_ef8)
sub_140745b20(&var_2980)
sub_140745b20(&var_2a08)
sub_140745b20(&var_2a38)

if (test_bit(r14_1, 0xb))
    r14_1 &= 0xfffff7ff
    
    if (r12_2 != 0)
        r12_2[1].d -= 1
        
        if (r12_2[1].d == 1)
            (**r12_2)(r12_2)
            int32_t temp24_1 = *(r12_2 + 0xc)
            *(r12_2 + 0xc) -= 1
            
            if (temp24_1 == 1)
                (*(*r12_2 + 8))(r12_2, 1)

if (test_bit(r14_1, 0xa))
    r14_1 &= 0xfffffbff
    int64_t* var_2460
    
    if (var_2460 != 0)
        var_2460[1].d -= 1
        
        if (var_2460[1].d == 1)
            (**var_2460)(var_2460)
            int32_t temp25_1 = *(var_2460 + 0xc)
            *(var_2460 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*var_2460 + 8))(var_2460, 1)

if (test_bit(r14_1, 9))
    r14_1 &= 0xfffffdff
    sub_140597060(&var_2308)

if (test_bit(r14_1, 8))
    r14_1 &= 0xfffffeff
    sub_140e978a0(&var_c58)

if (r14_1.b s< 0)
    r14_1 &= 0xffffff7f
    
    if (r13_2 != 0)
        r13_2[1].d -= 1
        
        if (r13_2[1].d == 1)
            (**r13_2)(r13_2)
            int32_t temp29_1 = *(r13_2 + 0xc)
            *(r13_2 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*(*r13_2 + 8))(r13_2, 1)

if ((r14_1.b & 0x40) != 0)
    r14_1 &= 0xffffffbf
    int64_t* var_2450
    
    if (var_2450 != 0)
        var_2450[1].d -= 1
        
        if (var_2450[1].d == 1)
            (**var_2450)(var_2450)
            int32_t temp32_1 = *(var_2450 + 0xc)
            *(var_2450 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*(*var_2450 + 8))(var_2450, 1)

if ((r14_1.b & 0x20) != 0)
    r14_1 &= 0xffffffdf
    sub_140597060(&var_2828)

if ((r14_1.b & 0x10) != 0)
    r14_1 &= 0xffffffef
    sub_140e536f0(&var_18f0)

if ((r14_1.b & 8) != 0)
    r14_1 &= 0xfffffff7
    sub_140745b20(&var_2650)
    sub_140ddfb70(&var_2680)

if ((r14_1.b & 4) != 0)
    sub_140597060(&var_2388)

void* var_26e0 = rdi_16
var_2ac0.d = 0
var_2ac8 = sub_140ecbf20
int64_t* var_26d8 = rsi_5
int128_t var_26d0 = zx.o(0)

if (rsi_5 != 0)
    rsi_5[1].d += 1

int64_t* rcx_256 = nullptr

if (data_143e2a060 != 0)
    rcx_256 = data_143e2a058

int64_t var_2998
(*(*rcx_256 + 0x48))(rcx_256, &var_2998, &arg3[0xc], &var_26d0, &arg3[4])
int64_t rax_213 = var_2998
int64_t* var_2990
int64_t* var_2748 = var_2990
int64_t r12_4 = rax_213 + 0x390

if (rax_213 == 0)
    r12_4 = 0

int64_t var_2750 = r12_4

if (var_2990 != 0)
    var_2990[1].d += 1

void var_2508
int64_t* rax_214 = sub_140e1ad30(&var_2508, arg3[0x13], ".Button")
void var_1e20
int64_t* rax_215 = sub_140e94e70(&var_1e20)
rax_215[0x36] = sub_140e90c00(rax_8, *rax_214, nullptr)
rax_215[0x37].d = sbb.d(rax_21, rax_21, temp1 != 0) & 2
int64_t var_2af8 = r12_4

if (var_2990 != 0)
    var_2990[1].d += 1

if (&var_2af8 != &rax_215[6])
    var_2af8.o = *(rax_215 + 0x30)
    *(rax_215 + 0x30) = var_2af8.o

if (var_2990 != 0)
    var_2990[1].d -= 1
    
    if (var_2990[1].d == 1)
        (**var_2990)(var_2990)
        int32_t temp47_1 = *(var_2990 + 0xc)
        *(var_2990 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*(*var_2990 + 8))(var_2990, 1)

sub_140597060(&var_2750)
int128_t var_23e8 = var_2ac8.o
void var_23d8
sub_140692f90(&rax_215[0x38], sub_140e8f760(&var_23d8, arg1, &var_23e8))
sub_140745b20(&var_23d8)
void* var_2ae8 = var_2b58

if (rsi_5 != 0)
    rsi_5[1].d += 1

if (&var_2ae8 != &rax_215[0x34])
    var_2ae8.o = *(rax_215 + 0x1a0)
    *(rax_215 + 0x1a0) = var_2ae8.o

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t temp49_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (temp49_1 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

sub_140669d70(&var_26e0)
void*** rax_225 = sub_140e92060()
void*** var_2838 = rax_225
int64_t* var_2840 = &rax_225[2]
sub_140918950(&var_2840, &rax_225[2])
int64_t var_2bb8_14 = 0x5c0
void var_2b95
void* var_2830 = &var_2b95
int64_t* var_23c8
int64_t** rax_226 =
    sub_140e9dd60(&var_2840, &var_23c8, rax_215, sub_140e23ed0(&rax_225[2], "SMenuEntryButton"))
int64_t* rbx_51 = rax_226[1]
int64_t* r14_3 = *rax_226

if (rbx_51 != 0)
    rbx_51[1].d += 1

int64_t* var_23c0

if (var_23c0 != 0)
    var_23c0[1].d -= 1
    
    if (var_23c0[1].d == 1)
        (**var_23c0)(var_23c0)
        int32_t temp52_1 = *(var_23c0 + 0xc)
        *(var_23c0 + 0xc) -= 1
        
        if (temp52_1 == 1)
            (*(*var_23c0 + 8))(var_23c0, 1)

sub_140597060(&var_2840)
void var_1c60
sub_140745b20(&var_1c60)
void var_1c80
sub_140597060(&var_1c80)
sub_140ddea30(&var_1e20)

if (var_2990 != 0)
    var_2990[1].d -= 1
    
    if (var_2990[1].d == 1)
        (**var_2990)(var_2990)
        int32_t temp54_1 = *(var_2990 + 0xc)
        *(var_2990 + 0xc) -= 1
        
        if (temp54_1 == 1)
            (*(*var_2990 + 8))(var_2990, 1)

int64_t* rdi_20 = var_26d0:8.q

if (rdi_20 != 0)
    rdi_20[1].d -= 1
    
    if (rdi_20[1].d == 1)
        (**rdi_20)(rdi_20)
        int32_t temp55_1 = *(rdi_20 + 0xc)
        *(rdi_20 + 0xc) -= 1
        
        if (temp55_1 == 1)
            (*(*rdi_20 + 8))(rdi_20, 1)

*arg2 = r14_3
arg2[1] = rbx_51

if (rbx_51 != 0)
    int32_t rax_233 = rbx_51[1].d
    rbx_51[1].d = rax_233
    
    if (rax_233 == 0)
        (**rbx_51)(rbx_51)
        int32_t temp57_1 = *(rbx_51 + 0xc)
        *(rbx_51 + 0xc) -= 1
        
        if (temp57_1 == 1)
            (*(*rbx_51 + 8))(rbx_51, 1)

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t temp59_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (temp59_1 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

if (r15_2 != 0)
    r15_2[1].d -= 1
    
    if (r15_2[1].d == 1)
        (**r15_2)(r15_2)
        int32_t temp61_1 = *(r15_2 + 0xc)
        *(r15_2 + 0xc) -= 1
        
        if (temp61_1 == 1)
            (*(*r15_2 + 8))(r15_2, 1)

sub_140745b20(&var_27d8)
sub_140ddfb70(&var_2808)

if (var_2b80 != 0)
    var_2b80[1].d -= 1
    
    if (var_2b80[1].d == 1)
        (**var_2b80)(var_2b80)
        int32_t temp63_1 = *(var_2b80 + 0xc)
        *(var_2b80 + 0xc) -= 1
        
        if (temp63_1 == 1)
            (*(*var_2b80 + 8))(var_2b80, 1)

sub_1405970a0(&var_2ab8)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp65_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp65_1 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp66_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp66_1 == 1)
            int64_t r8_35 = *rax_3
            (*(r8_35 + 8))(rax_3, 1, r8_35)

__security_check_cookie(rax_1 ^ &var_2bd8)
return arg2
