// 函数: sub_1410aa9a0
// 地址: 0x1410aa9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *sub_14139d440(&data_143ec4c60)
int64_t r9 = *rcx_1
(*(r9 + 0x18))(rcx_1, u"SceneColor", arg4, r9)
sub_14139d440(&data_143ec4c60)
int64_t result = sub_1410ee7c0(arg3)

if (result.b != 0)
    char arg_20 = 0
    void*** (* var_108)() = j_sub_140597fc0
    char* var_100_1 = &arg_20
    int64_t* rax_2 = sub_140a756e0(&var_108, &data_143958018) + 0x10
    int64_t* var_c0 = rax_2
    int64_t rcx_4 = *rax_2
    int64_t rcx_5 = rax_2[2]
    char var_a8_1 = 0
    int64_t result_1 = rax_2[3]
    rax_2[3] = &var_c0
    int64_t* rax_3 = var_c0
    rax_3[4].d += 1
    void var_98
    sub_141385550(&var_98, arg2, arg3)
    void var_f8
    void var_68
    sub_1412ff950(&var_f8, arg2, &var_68, arg3)
    int64_t* var_e8
    int64_t* rcx_8 = var_e8
    int64_t* var_f0
    int128_t var_d0
    
    if ((*(*rcx_8 + 0x28) & 0x200) != 0)
        arg_20 = 0
        char* var_100_2 = &arg_20
        var_108 = j_sub_140597fc0
        void*** rax_6 = sub_14081d830(0xc0, sub_140a756e0(&var_108, &data_143958018) + 0x10, 1, 0)
        void*** rax_7
        
        if (rax_6 == 0)
            rax_7 = nullptr
        else
            rax_7 = sub_1410eab00(rax_6, 1)
        
        int64_t* rax_8 = sub_14107ee00(var_f0, rax_7)
        int64_t r9_2 = *rax_8
        (*(r9_2 + 0x18))(rax_8, 0, &var_d0, r9_2)
        rcx_8 = var_e8
        var_108 = rax_8
        var_100_2.d = 0
        var_d0 = var_108.o
    
    int64_t r15
    
    if ((*(*rcx_8 + 0x28) & 0x200) == 0)
        r15.b = 0
    else
        r15.b = 1
        int32_t rax_10 = sub_1422e5a30(arg3)
        
        if (sub_1410a09e0(rax_10) == 0 && sub_1419a4830(rax_10) == 0)
            arg_20 = 0
            char* var_100_3 = &arg_20
            var_108 = j_sub_140597fc0
            void*** rax_14 =
                sub_14081d830(0xc0, sub_140a756e0(&var_108, &data_143958018) + 0x10, 1, 0)
            void*** rax_15
            
            if (rax_14 == 0)
                rax_15 = nullptr
            else
                rax_15 = sub_1410eab00(rax_14, 2)
            
            int64_t* rax_16 = sub_14107ee00(var_f0, rax_15)
            int64_t r9_3 = *rax_16
            (*(r9_3 + 0x18))(rax_16, 0, &var_d0, r9_3)
            var_108 = rax_16
            var_100_3.d = 0
            var_d0 = var_108.o
        
        if (sub_1419a4830(sub_1422e5a30(arg3)) == 0)
            arg_20 = 0
            char* var_100_4 = &arg_20
            var_108 = j_sub_140597fc0
            void*** rax_20 =
                sub_14081d830(0xc0, sub_140a756e0(&var_108, &data_143958018) + 0x10, 1, 0)
            void*** rax_21
            
            if (rax_20 == 0)
                rax_21 = nullptr
            else
                rax_21 = sub_1410eab00(rax_20, 5)
            
            int64_t* rax_22 = sub_14107ee00(var_f0, rax_21)
            int64_t r9_4 = *rax_22
            (*(r9_4 + 0x18))(rax_22, 0, &var_d0, r9_4)
            var_108 = rax_22
            var_100_4.d = 0
            var_d0 = var_108.o
    
    if (sub_1410a09e0(sub_1422e5a30(arg3)) == 0)
        if (sub_1413ab380(arg3) != 0 && data_143ec4e38 != 0)
            arg_20 = 0
            char* var_100_5 = &arg_20
            var_108 = j_sub_140597fc0
            void*** rax_27 =
                sub_14081d830(0xc0, sub_140a756e0(&var_108, &data_143958018) + 0x10, 1, 0)
            void*** rax_28
            
            if (rax_27 == 0)
                rax_28 = nullptr
            else
                rax_28 = sub_141346640(rax_27, &data_143ec4d20)
            
            sub_14107ee00(var_f0, rax_28)
        
        int32_t rax_29 = sub_1410911f0(var_e8)
        
        if (rax_29 != 0)
            int64_t* rbx_5 = var_e8
            char rdx_10 = data_143f0f1c5
            void* r8_5 = data_143e2de08
            int32_t rcx_33
            
            if (rbx_5[0x2a9].d s>= 3)
                rcx_33 = *(r8_5 + 4)
            
            if (rbx_5[0x2a9].d s< 3 || rcx_33 s< 1 || rax_29 != 1 || rcx_33 s< 2
                    || (rcx_33 != 3 && rdx_10 == 0))
                if (*(data_143e2de98 + 4) != 1)
                    sub_14108f6e0(&var_108, arg2, &var_f8, rax_29)
                else if (*(arg3 + 0x1548) s< 3)
                    sub_14108fe40(&var_108, arg2, &var_f8, 3)
                else
                    int32_t rax_34 = *(r8_5 + 4)
                    
                    if (rax_34 s< 1 || rax_34 s< 2)
                        sub_14108fe40(&var_108, arg2, &var_f8, 3)
                    else if (rax_34 == 3)
                        if (rdx_10 != 0)
                            sub_14108f6e0(&var_108, arg2, &var_f8, rax_29)
                        else
                            sub_14108fe40(&var_108, arg2, &var_f8, 3)
                    else if (rdx_10 == 0)
                        sub_14108fe40(&var_108, arg2, &var_f8, 3)
                    else
                        sub_14108f6e0(&var_108, arg2, &var_f8, rax_29)
                
                if (r15.b != 0)
                    arg_20 = 0
                    char* var_100_6 = &arg_20
                    var_108 = j_sub_140597fc0
                    void*** rax_36 =
                        sub_14081d830(0xc0, sub_140a756e0(&var_108, &data_143958018) + 0x10, 1, 0)
                    void*** rax_37
                    
                    if (rax_36 == 0)
                        rax_37 = nullptr
                    else
                        rax_37 = sub_1410eab00(rax_36, 4)
                    
                    void*** (* rax_38)() = sub_14107ee00(var_f0, rax_37)
                    int64_t r8_9 = *rax_38
                    (*(r8_9 + 0x20))(rax_38, &var_d0, r8_9)
                    var_108 = rax_38
                    var_100_6.d = 0
                    var_d0 = var_108.o
            else
                int32_t rax_30 = sub_141096d50(arg3)
                int32_t rax_31
                
                if (rax_30 != 2)
                    rax_31 = sub_141096d50(arg3)
                
                if (rax_30 == 2 || rax_31 == 1)
                    sub_1410907c0(&var_108, arg2, &var_f8, sub_141096d50(arg3))
                    rbx_5 = var_e8
                
                sub_1410edd90(*(*rbx_5 + 0x20), rbx_5, 4, nullptr)
    
    int64_t* rax_39 = sub_14139d440(&data_143ec4c60)
    int64_t* rcx_46 = *rax_39
    int64_t rdx_18 = *rcx_46
    int128_t* rax_40 = (*(rdx_18 + 0x10))(rcx_46, rdx_18)
    int128_t* rax_41 = sub_14139d290(&var_d0)
    *rax_41 = *rax_40
    rax_41[1].d = rax_40[1].d
    *(rax_41 + 0x14) = *(rax_40 + 0x14)
    *(rax_41 + 0x18) = *(rax_40 + 0x18)
    *(rax_41 + 0x1c) = *(rax_40 + 0x1c)
    rax_41[2].d = rax_40[2].d
    *(rax_41 + 0x24) = *(rax_40 + 0x24)
    *(rax_41 + 0x25) = *(rax_40 + 0x25)
    *(rax_41 + 0x26) = *(rax_40 + 0x26)
    *(rax_41 + 0x28) = *(rax_40 + 0x28)
    *(rax_41 + 0x2c) = *(rax_40 + 0x2c)
    rax_41[3].d = rax_40[3].d
    *(rax_41 + 0x34) = *(rax_40 + 0x34)
    *(rax_41 + 0x38) = *(rax_40 + 0x38)
    *(rax_41 + 0x39) = *(rax_40 + 0x39)
    rax_41[4].q = rax_40[4].q
    *(rax_41 + 0x48) = *(rax_40 + 0x48)
    *(rax_41 + 0x49) = *(rax_40 + 0x49)
    *(rax_41 + 0x4a) = *(rax_40 + 0x4a)
    void* rax_56 = sub_14139d290(&var_d0)
    int64_t* rcx_53 = *rax_39
    int64_t* rbx_8 = *(rax_56 + 0x50)
    *(rax_56 + 0x50) = rcx_53
    
    if (rcx_53 != 0)
        (*(*rcx_53 + 0x30))()
    
    if (rbx_8 != 0)
        (*(*rbx_8 + 0x38))(rbx_8)
    
    int64_t rbx_9 = var_d0.q
    var_108 = nullptr
    int64_t var_100_7 = 1
    sub_1405a4d70(&var_108)
    *var_108 = rbx_9
    sub_1413a1370(&var_98, &var_108)
    void*** (* rcx_57)() = var_108
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    result = sub_141386800(&var_98)
    
    if (var_a8_1 == 0)
        int64_t* rax_60 = var_c0
        char var_a8_2 = 1
        rax_60[4].d -= 1
        int64_t* rcx_59 = var_c0
        
        if (rcx_5 != rcx_59[2])
            sub_140b16b40(rcx_59, rcx_5)
            rcx_59 = var_c0
        
        *rcx_59 = rcx_4
        result = result_1
        var_c0[3] = result

int64_t* rcx_61 = data_143ec4d28
data_143ec4d28 = 0

if (rcx_61 != 0)
    result = (*(*rcx_61 + 0x38))(rcx_61)

int64_t* rcx_62 = data_143ec4d30
data_143ec4d30 = 0

if (rcx_62 == 0)
    return result

return (*(*rcx_62 + 0x38))(rcx_62)
