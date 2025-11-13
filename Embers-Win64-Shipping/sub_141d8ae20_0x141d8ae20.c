// 函数: sub_141d8ae20
// 地址: 0x141d8ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg1[0x14] == 0 && arg1[0x17].d s<= 0)
    void* rcx = data_143ddb400
    char r15_1 = 0
    int128_t var_58
    __builtin_memset(&var_58, 0, 0x20)
    int16_t var_30_1 = 0
    char arg_8 = 0
    int32_t var_38_1 = 0xbf800000
    int32_t var_34 = 0x101
    sub_140af2fd0(rcx, /Script/MoviePlayer.MoviePlayerSettings", bWaitForMoviesToComplete", &arg_8, 
        &data_143de5830)
    sub_140af2fd0(data_143ddb400, /Script/MoviePlayer.MoviePlayerSettings", bMoviesAreSkippable", 
        &var_34:1, &data_143de5830)
    bool cond:1_1 = arg_8 == 0
    void* rcx_2 = data_143ddb400
    int64_t* var_98 = nullptr
    var_34.b = cond:1_1
    int32_t i_8 = 0
    int64_t* var_a8_1 = &data_143de5830
    sub_140af2c50(rcx_2, /Script/MoviePlayer.MoviePlayerSettings", StartupMovies", &var_98, 
        &data_143de5830)
    int16_t* var_88
    
    if (i_8 == 0)
        var_88 = nullptr
        int32_t var_80
        var_80.q = 0
        sub_1405947f0(&var_88, 0x10)
        int32_t var_7c
        int32_t rdi_1 = var_7c
        int32_t rbx_1 = var_80 + 0x10
        
        if (rbx_1 s> rdi_1)
            sub_140594770(&var_88)
            rdi_1 = var_7c
        
        int16_t* r14_1 = var_88
        UnDecorator::getReferenceType(r14_1, u"Default_Startup", 0x20)
        int64_t i_13 = sx.q(i_8)
        int32_t i_12 = (i_13 + 1).d
        i_8 = i_12
        
        if (i_12 s> 0)
            sub_1405a4f90(&var_98)
        
        int64_t* rax_2 = &var_98[i_13 * 2]
        *rax_2 = r14_1
        rax_2[1].d = rbx_1
        *(rax_2 + 0xc) = rdi_1
    
    int64_t* i_4 = nullptr
    int32_t i_9 = 0
    sub_140a464c0()
    int64_t var_68
    int64_t* rax_3 = sub_140b25050(&var_68)
    int16_t* rcx_8 = *rax_3
    int32_t rdx_3 = rax_3[1].d
    int32_t rdx_4 = neg.d(rdx_3)
    *rax_3 = 0
    int32_t r8_1 = rax_3[1].d
    var_88 = rcx_8
    int32_t rcx_9 = *(rax_3 + 0xc)
    int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 7 + r8_1
    int32_t var_7c_1 = rcx_9
    rax_3[1] = 0
    
    if (rdx_7 s> rcx_9)
        sub_1405947f0(&var_88, rdx_7)
    
    sub_140a20ba0(&var_88, u"Movies", 6)
    int16_t* const r8_2 = &data_142d40450
    int16_t* rbx_2 = var_88
    var_88 = nullptr
    
    if (r8_1 != 0)
        r8_2 = rbx_2
    
    int32_t var_80_2
    var_80_2.q = 0
    result = (*(data_14399ea08 + 0x70))(&data_14399ea08, &i_4, r8_2, 0)
    
    if (rbx_2 != 0)
        result = sub_140a74f90(rbx_2)
    
    int64_t rcx_13 = var_68
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
    
    int64_t* rdi_2 = var_98
    void* r14_4 = &rdi_2[sx.q(i_8) * 2]
    int64_t* var_48
    int64_t var_40_1
    
    if (rdi_2 != r14_4)
        do
            for (int64_t* i = i_4; i != &i[sx.q(i_9) * 2]; i = &i[2])
                int16_t* rdx_9
                
                if (rdi_2[1].d == 0)
                    rdx_9 = &data_142d40450
                else
                    rdx_9 = *rdi_2
                
                var_a8_1.d = 0xffffffff
                result = sub_140a23cf0(i, rdx_9, 1, 0, 0xffffffff)
                
                if (result != 0xffffffff)
                    if (i != 0)
                        int64_t rbx_3 = sx.q(var_40_1.d)
                        r15_1 = 1
                        int32_t rax_6 = (rbx_3 + 1).d
                        var_40_1.d = rax_6
                        
                        if (rax_6 s> var_40_1:4.d)
                            sub_1405a4f90(&var_48)
                        
                        result = sub_140596d10(&var_48[rbx_3 * 2], rdi_2)
                    
                    break
            
            rdi_2 = &rdi_2[2]
        while (rdi_2 != r14_4)
        
        if (r15_1 != 0)
            var_34:3.b = 1
            result = (*(*arg1 + 0x20))(arg1, &var_58)
    
    int32_t i_5 = i_9
    int64_t* i_11 = i_4
    
    if (i_5 != 0)
        int32_t i_1
        
        do
            int64_t rcx_20 = *i_11
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
            
            i_11 = &i_11[2]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    int64_t* i_10 = i_4
    
    if (i_10 != 0)
        result = sub_140a74f90(i_10)
    
    int32_t i_6 = i_8
    int64_t* rbx_4 = var_98
    
    if (i_6 != 0)
        int32_t i_2
        
        do
            int64_t rcx_21 = *rbx_4
            
            if (rcx_21 != 0)
                result = sub_140a74f90(rcx_21)
            
            rbx_4 = &rbx_4[2]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    int64_t* rdi_3 = var_98
    
    if (rdi_3 != 0)
        result = sub_140a74f90(rdi_3)
    
    int32_t i_7 = var_40_1.d
    int64_t* rbx_5 = var_48
    
    if (i_7 != 0)
        int32_t i_3
        
        do
            int64_t rcx_23 = *rbx_5
            
            if (rcx_23 != 0)
                result = sub_140a74f90(rcx_23)
            
            rbx_5 = &rbx_5[2]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        rbx_5 = var_48
    
    if (rbx_5 != 0)
        result = sub_140a74f90(rbx_5)
    
    int64_t* rbx_6 = var_58:8.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t temp5_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rbx_6 + 8))(rbx_6, 1)

return result
