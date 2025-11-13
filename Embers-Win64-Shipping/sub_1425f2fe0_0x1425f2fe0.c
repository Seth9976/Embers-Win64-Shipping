// 函数: sub_1425f2fe0
// 地址: 0x1425f2fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char* var_c8 = nullptr
int32_t var_c0 = 0
sub_1405947f0(&var_c8, 8)
int32_t rax_2 = var_c0 + 8
var_c0 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_c8)

char* rbx = var_c8
sub_1405a7220(rbx, 8, "Initial", 8, 0x3f)

if (rbx != 0)
    sub_140a74f90(rbx)

uint64_t result

if (*(arg1 + 0xa8) == 0)
    void* var_c0_1 = arg1
    char var_b8
    var_c8 = &var_b8
    int128_t zmm0_1 = var_c8.o
    var_b8 = 0
    int64_t var_b0 = 0
    int32_t var_a8_1 = 0
    sub_1405947f0(&var_b0, 4)
    int32_t rax_3 = var_a8_1 + 4
    var_a8_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_b0)
    
    sub_1405a7220(var_b0, 4, "aac", 4, 0x3f)
    char* rax_4 = sub_1425ee8b0(&var_b0)
    int64_t rcx_8 = var_b0
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t* var_78
    int64_t* rcx_16
    
    if (rax_4 != 0)
        var_c8 = nullptr
        int32_t var_c0_2 = 0
        sub_1405947f0(&var_c8, 4)
        int32_t rax_5 = var_c0_2 + 4
        var_c0_2 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_c8)
        
        sub_1405a7220(var_c8, 4, "aac", 4, 0x3f)
        int64_t* rax_7 = (*(*rax_4 + 0x18))(rax_4, &var_78, &var_c8)
        
        if (arg1 + 0xa0 != rax_7)
            int64_t* rcx_13 = *(arg1 + 0xa0)
            *(arg1 + 0xa0) = *rax_7
            *rax_7 = 0
            
            if (rcx_13 != 0)
                (**rcx_13)(rcx_13, 1)
        
        int64_t* rcx_14 = var_78
        
        if (rcx_14 != 0)
            (**rcx_14)(rcx_14, 1)
        
        char* rcx_15 = var_c8
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rcx_16 = *(arg1 + 0xa0)
    
    char* rbx_1
    
    if (rax_4 == 0 || rcx_16 == 0)
        rbx_1.b = 0
    else
        int64_t var_60 = 0
        int64_t var_58_1 = 0
        int32_t var_70 = 0xbb80
        int32_t var_6c_1 = 2
        int32_t var_68_1 = 0x2ee00
        
        if ((*(*rcx_16 + 0x18))(rcx_16, &var_70) != 0)
            int64_t* rcx_17 = *(arg1 + 0xa0)
            (*(*rcx_17 + 0x38))(rcx_17, arg1 + 8)
            var_c8 = nullptr
            int32_t var_c0_3 = 0
            sub_1405947f0(&var_c8, 0x1a)
            int32_t rax_13 = var_c0_3 + 0x1a
            var_c0_3 = rax_13
            
            if (rax_13 s> 0)
                sub_140594770(&var_c8)
            
            rbx_1 = var_c8
            sub_1405a7220(rbx_1, 0x1a, "Audio encoder initialized", 0x1a, 0x3f)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            int64_t var_a0
            __builtin_memset(&var_a0, 0, 0x14)
            int32_t var_8c_1 = 1
            int64_t var_88 = 0
            int64_t var_80_1 = 0
            sub_140af2b60()
            int64_t r9_1 = sub_140b2ab80(&data_143dbb3f0, u"GameplayMediaEncoder.ResY=", &var_a0:4)
            int32_t rax_14 = var_a0:4.d
            
            if (rax_14 == 0 || rax_14 == 0x2d0)
                var_a0.d = 0x500
                var_a0:4.d = 0x2d0
            label_1425f32ff:
                sub_140af2b60()
                int64_t var_98
                sub_140b2ab80(&data_143dbb3f0, u"GameplayMediaEncoder.FPS=", &var_98)
                int32_t rcx_24 = var_98.d
                int32_t rax_15
                
                if (rcx_24 != 0)
                    if (rcx_24 u>= 0xa)
                        rax_15 = 0x3c
                        
                        if (rcx_24 u< 0x3c)
                            rax_15 = rcx_24
                        
                        var_98.d = rax_15
                    else
                        var_98.d = 0xa
                    
                    rax_15.b = 1
                else
                    var_98.d = 0x3c
                    rax_15.b = 0
                
                *(arg1 + 0xd1) = rax_15.b
                uint32_t var_90 = 0x4c4b40
                sub_140af2b60()
                sub_140b2ab80(&data_143dbb3f0, u"GameplayMediaEncoder.Bitrate=", &var_90)
                uint32_t rcx_25 = var_90
                
                if (rcx_25 u>= 0xf4240)
                    uint32_t rax_16 = 0x1312d00
                    
                    if (rcx_25 u< 0x1312d00)
                        rax_16 = rcx_25
                    
                    var_90 = rax_16
                else
                    var_90 = 0xf4240
                
                var_c8 = nullptr
                int32_t var_c0_4 = 0
                sub_1405947f0(&var_c8, 5)
                int32_t rax_17 = var_c0_4 + 5
                var_c0_4 = rax_17
                
                if (rax_17 s> 0)
                    sub_140594770(&var_c8)
                
                sub_1405a7220(var_c8, 5, "h264", 5, 0x3f)
                char* rax_18 = sub_1425ee9e0(&var_c8)
                char* rcx_30 = var_c8
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                if (rax_18 == 0)
                    rbx_1.b = 0
                else
                    var_b0 = 0
                    int32_t var_a8_2 = 0
                    sub_1405947f0(&var_b0, 5)
                    int32_t rax_19 = var_a8_2 + 5
                    var_a8_2 = rax_19
                    
                    if (rax_19 s> 0)
                        sub_140594770(&var_b0)
                    
                    sub_1405a7220(var_b0, 5, "h264", 5, 0x3f)
                    int64_t* rax_21 = (*(*rax_18 + 0x18))(rax_18, &var_78, &var_b0)
                    
                    if (arg1 + 0xa8 != rax_21)
                        int64_t* rcx_35 = *(arg1 + 0xa8)
                        *(arg1 + 0xa8) = *rax_21
                        *rax_21 = 0
                        
                        if (rcx_35 != 0)
                            (**rcx_35)(rcx_35, 1)
                    
                    int64_t* rcx_36 = var_78
                    
                    if (rcx_36 != 0)
                        (**rcx_36)(rcx_36, 1)
                    
                    int64_t rcx_37 = var_b0
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    int64_t* rcx_38 = *(arg1 + 0xa8)
                    
                    if (rcx_38 == 0)
                        rbx_1.b = 0
                    else if ((*(*rcx_38 + 0x18))(rcx_38, &var_a0) == 0)
                        rbx_1.b = 0
                    else
                        int64_t* rcx_39 = *(arg1 + 0xa8)
                        (*(*rcx_39 + 0x60))(rcx_39, arg1 + 0x10)
                        var_c8 = nullptr
                        int32_t var_c0_5 = 0
                        sub_1405947f0(&var_c8, 0x1a)
                        int32_t rax_27 = var_c0_5 + 0x1a
                        var_c0_5 = rax_27
                        
                        if (rax_27 s> 0)
                            sub_140594770(&var_c8)
                        
                        rbx_1 = var_c8
                        sub_1405a7220(rbx_1, 0x1a, "Video encoder initialized", 0x1a, 0x3f)
                        
                        if (rbx_1 != 0)
                            sub_140a74f90(rbx_1)
                        
                        var_b8 = 1
                        rbx_1.b = 1
            else
                if (rax_14 == 0x438)
                    var_a0.d = 0x780
                    var_a0:4.d = rax_14
                    goto label_1425f32ff
                
                sub_140af98a0("Unknown", 0xc4, 
                    GameplayMediaEncoder.ResY can only have a value of 720 or 1080", r9_1)
                sub_140afbb40()
                rbx_1.b = 0
            
            sub_140846380(&var_88)
        else
            rbx_1.b = 0
        
        sub_140846380(&var_60)
    
    if (*zmm0_1.q == 0)
        sub_1425f4030(zmm0_1:8.q)
    
    result = zx.q(rbx_1.b)
else
    result.b = 1

__security_check_cookie(rax_1 ^ &var_f8)
return result
