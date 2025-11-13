// 函数: sub_141dafa90
// 地址: 0x141dafa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x41].d s> 1
void** const var_48 = &data_142dd6130
char result = arg2[0xb].b
char result_1 = result
int32_t var_40 = 6

if (not(cond:0) && arg1[0x4b].d == 0 && arg1[0x46].d s> 1 && arg1[0x5f] == 0)
    sub_140597df0(&arg1[0x42], &arg2[8])
    int64_t rdi_2 = 0
    arg1[0x44].d = arg2[0xa].d
    *(arg1 + 0x224) = *(arg2 + 0x54)
    int64_t rdx_3
    
    if (arg3 != &arg1[0x54])
        int64_t* rcx_3
        
        if (arg3[1].d != 0)
            rcx_3 = *arg3
        
        if (arg3[1].d != 0 && rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3, &arg1[0x54])
        else if (arg1[0x55].d != 0)
            int64_t* rcx_4 = arg1[0x54]
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x38))(rcx_4, 0)
                int64_t rcx_5 = arg1[0x54]
                
                if (rcx_5 != 0)
                    int64_t rax_9
                    rax_9, rdx_3 = sub_140a84c80(rcx_5, 0, 0)
                    arg1[0x54] = rax_9
                
                arg1[0x55].d = 0
    
    rdx_3.b = arg2[0xb].b == 0
    (*(arg1[0x16] + 0xa0))(&arg1[0x16], rdx_3)
    (*(arg1[0x16] + 0xa8))(&arg1[0x16], zx.q(arg2[0xb].b))
    int64_t rax_12 = arg1[1]
    *(arg1 + 0x154) = 0
    int64_t rdx_6
    rdx_6.b = arg2[0xb].b == 0
    (*(rax_12 + 0xa0))(&arg1[1], rdx_6)
    (*(arg1[1] + 0xa8))(&arg1[1], zx.q(arg2[0xb].b))
    int64_t rdx_8
    rdx_8.b = arg2[0xb].b == 0
    (*(arg1[0x2b] + 0xa0))(&arg1[0x2b], rdx_8)
    (*(arg1[0x2b] + 0xa8))(&arg1[0x2b], zx.q(arg2[0xb].b))
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t zmm0_1 = float.d(performanceCount) f* data_143d796f8
    *(arg1 + 0x274) = 0
    *(arg1 + 0x27c) = 0
    arg1[0x48] = zmm0_1 f+ 16777216.0
    sub_14059ad90(&arg1[0x61], 0)
    int32_t i_4 = arg1[0x6a].d
    
    if (i_4 s> 0)
        int64_t r8 = 0
        uint64_t i_3 = zx.q(i_4)
        uint64_t i
        
        do
            void* rcx_14 = arg1[0x69]
            void* rax_16 = &arg1[0x68]
            int64_t rdx_12 = (sx.q(arg1[0x6a].d) - 1) & r8
            
            if (rcx_14 != 0)
                rax_16 = rcx_14
            
            r8 += 1
            *(rax_16 + (rdx_12 << 2)) = 0xffffffff
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int64_t* rax_17 = sub_141802500()
    int64_t r8_1 = *rax_17
    int64_t* var_78
    (*(r8_1 + 0x40))(rax_17, &var_78, r8_1)
    arg1[0x47].d = 0
    arg1[0x6b].d = 0
    arg1[0x76].d = 0
    uint64_t var_b8
    int64_t* var_b0
    int64_t var_98
    uint64_t var_88
    int64_t var_58
    
    if (arg2[0xb].b != 0)
        arg1[0x4b].d = 1
        arg1[0x41].d = 0
        
        if (*(arg1 + 0x20c) != 0)
            sub_1405947f0(&arg1[0x40], 0)
        
        bool cond:4_1 = arg2[1].d s<= 1
        var_88 = 0
        int64_t var_68
        int64_t rcx_47
        int16_t* const rbx_3
        int64_t var_80
        
        if (cond:4_1)
            int64_t* rax_35 = sub_14180a750(&var_68, &arg2[2])
            rbx_3 = &data_142d40450
            int16_t* const rcx_44
            
            if (rax_35[1].d == 0)
                rcx_44 = &data_142d40450
            else
                rcx_44 = *rax_35
            
            if (arg1[0x43].d != 0)
                arg1[0x42]
            
            int16_t* const r8_5
            
            if (arg1[0x46].d == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = arg1[0x45]
            
            int16_t* const var_c8_1 = rcx_44
            int32_t var_d0_2 = *(arg1 + 0x224)
            int16_t* const var_d8
            var_d8.d = arg1[0x44].d
            sub_140a2e390(&var_b8, u"%sreplay?app=%s&version=%u&cl=%u&friendlyName=%s", r8_5)
            uint64_t rcx_46 = var_88
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
            
            rcx_47 = var_68
            var_88 = var_b8
            var_80.d = var_b0.d
            var_80:4.d = var_b0:4.d
            var_b0 = nullptr
            var_b8 = 0
        else
            sub_140a35730(arg2, &var_98)
            int64_t* rax_29 = sub_14180a750(&var_68, &arg2[2])
            rbx_3 = &data_142d40450
            int16_t* const rdx_24
            
            if (rax_29[1].d == 0)
                rdx_24 = &data_142d40450
            else
                rdx_24 = *rax_29
            
            arg1[0x43].d
            int16_t* const r8_4
            
            if (arg1[0x46].d == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = arg1[0x45]
            
            int16_t* const var_c0_1 = rdx_24
            int64_t var_c8
            var_c8.d = *(arg1 + 0x224)
            int32_t var_d0_1 = arg1[0x44].d
            sub_140a2e390(&var_b8, u"%sreplay/%s?app=%s&version=%u&cl=%u&friendlyName=%s", r8_4)
            uint64_t rcx_41 = var_88
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            int64_t rcx_42 = var_68
            var_88 = var_b8
            var_80.d = var_b0.d
            var_80:4.d = var_b0:4.d
            var_b0 = nullptr
            var_b8 = 0
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            rcx_47 = var_98
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        (*(*arg1 + 0x1c0))(arg1, &var_58)
        int32_t var_50
        
        if (var_50 s> 1)
            int16_t** rax_42 = sub_14180a750(&var_68, &var_58)
            
            if (rax_42[1].d != 0)
                rbx_3 = *rax_42
            
            sub_140a2e390(&var_b8, u"&meta=%s", rbx_3)
            int32_t r8_7 = var_b0.d
            int32_t r8_8
            
            if (r8_7 == 0)
                r8_8 = 0
            else
                r8_8 = r8_7 - 1
            
            sub_140a20ba0(&var_88, var_b8, r8_8)
            uint64_t rcx_52 = var_b8
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            int64_t rcx_53 = var_68
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
        
        int64_t* rcx_54 = var_78
        (*(*rcx_54 + 0x50))(rcx_54, &var_88)
        var_98 = 0
        int32_t var_90
        var_90.q = 0
        sub_1405947f0(&var_98, 5)
        int32_t var_90_1 = var_90 + 5
        int32_t var_8c
        
        if (var_90 + 5 s> var_8c)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"POST", 0xa)
        int64_t* rcx_58 = var_78
        (*(*rcx_58 + 0x48))(rcx_58, &var_98)
        int64_t rcx_59 = var_98
        
        if (rcx_59 != 0)
            sub_140a74f90(rcx_59)
        
        int64_t* rcx_60 = var_78
        sub_141da4560((*(*rcx_60 + 0x90))(rcx_60), arg1, sub_141dacf80)
        var_b8 = 0
        var_b0 = nullptr
        sub_1405947f0(&var_b8, 0x11)
        var_b0.d += 0x11
        
        if (var_b0.d + 0x11 s> var_b0:4.d)
            sub_140594770(&var_b8)
        
        UnDecorator::getReferenceType(var_b8, u"application/json", 0x22)
        var_98 = 0
        var_90_1.q = 0
        sub_1405947f0(&var_98, 0xd)
        int32_t var_90_2 = var_90_1 + 0xd
        
        if (var_90_1 + 0xd s> var_8c)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"Content-Type", 0x1a)
        int64_t* rcx_68 = var_78
        (*(*rcx_68 + 0x78))(rcx_68, &var_98, &var_b8)
        int64_t rcx_69 = var_98
        
        if (rcx_69 != 0)
            sub_140a74f90(rcx_69)
        
        uint64_t rcx_70 = var_b8
        
        if (rcx_70 != 0)
            sub_140a74f90(rcx_70)
        
        if (arg2[7].d s> 0)
            int32_t* r14_2 = arg2[6]
            int64_t rax_51 = sx.q(arg2[7].d)
            var_b8 = &data_14323a0f8
            var_b0 = nullptr
            int64_t var_a8_1 = 0
            uint64_t r15_2 = rax_51 << 2 u>> 2
            
            if (r14_2 u> &r14_2[rax_51])
                r15_2 = 0
            
            if (r15_2 != 0)
                do
                    int64_t* rax_53 = sub_141da9ca0(&var_68, *r14_2)
                    int64_t rbx_4 = sx.q(var_a8_1.d)
                    int32_t rcx_72 = (rbx_4 + 1).d
                    var_a8_1.d = rcx_72
                    
                    if (rcx_72 s> var_a8_1:4.d)
                        sub_1405a4f90(&var_b0)
                    
                    sub_140596d10(&var_b0[rbx_4 * 2], rax_53)
                    int64_t rcx_77 = var_68
                    
                    if (rcx_77 != 0)
                        sub_140a74f90(rcx_77)
                    
                    r14_2 = &r14_2[1]
                    rdi_2 += 1
                while (rdi_2 != r15_2)
            
            int64_t* rbx_5 = var_78
            (*(*rbx_5 + 0x60))(rbx_5, sub_140937030(&var_b8, &var_68, 1))
            int64_t rcx_80 = var_68
            
            if (rcx_80 != 0)
                sub_140a74f90(rcx_80)
            
            int32_t i_2 = var_a8_1.d
            int64_t* rbx_6 = var_b0
            var_b8 = &data_14323a0f8
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_81 = *rbx_6
                    
                    if (rcx_81 != 0)
                        sub_140a74f90(rcx_81)
                    
                    rbx_6 = &rbx_6[2]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rbx_6 = var_b0
            
            if (rbx_6 != 0)
                sub_140a74f90(rbx_6)
        
        uint128_t zmm0_3 = var_78.o
        var_68.o = zmm0_3
        void* rax_55 = _mm_bsrli_si128(zmm0_3, 8).q
        
        if (rax_55 != 0)
            *(rax_55 + 8) += 1
        
        sub_141da6730(arg1, 0, &var_68, 3, 0x40000000)
        result = (*(*arg1 + 0xe8))(arg1)
        int64_t rcx_85 = var_58
        
        if (rcx_85 != 0)
            result = sub_140a74f90(rcx_85)
        
        uint64_t rcx_36 = var_88
        
        if (rcx_36 != 0)
            result = sub_140a74f90(rcx_36)
    else
        arg1[0x4b].d = 2
        sub_140597df0(&arg1[0x40], arg2)
        bool cond:3_1 = arg2[7].d != 1
        int16_t* const rbx_2 = &data_142d40450
        uint64_t r14_1 = 0
        var_b8 = 0
        var_b0 = nullptr
        
        if (not(cond:3_1))
            sub_140597df0(&var_b8, sub_141da9ca0(&var_98, *arg2[6]))
            int64_t rcx_19 = var_98
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            r14_1 = var_b8
        
        if (arg1[0x41].d != 0)
            arg1[0x40]
        
        if (arg1[0x46].d != 0)
            rbx_2 = arg1[0x45]
        
        sub_140a2e390(&var_58, u"%sreplay/%s/startDownloading?user=%s", rbx_2)
        int64_t* rcx_21 = var_78
        (*(*rcx_21 + 0x50))(rcx_21, &var_58)
        var_88 = 0
        int32_t var_80_1 = 0
        sub_1405947f0(&var_88, 5)
        int32_t rax_21 = var_80_1 + 5
        var_80_1 = rax_21
        
        if (rax_21 s> 0)
            sub_140594770(&var_88)
        
        UnDecorator::getReferenceType(var_88, u"POST", 0xa)
        int64_t* rcx_25 = var_78
        (*(*rcx_25 + 0x48))(rcx_25, &var_88)
        uint64_t rcx_26 = var_88
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t* rcx_27 = var_78
        sub_141da4560((*(*rcx_27 + 0x90))(rcx_27), arg1, sub_141daca80)
        uint128_t zmm0_2 = var_78.o
        var_b8.o = zmm0_2
        void* rax_25 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rax_25 != 0)
            *(rax_25 + 8) += 1
        
        sub_141da6730(arg1, 4, &var_b8, 0, 0)
        int64_t rax_26 = *arg1
        var_b8 = 0
        var_b0.d = 0
        (*(rax_26 + 0xf0))(arg1, &var_b8)
        uint64_t rax_28
        
        if (var_b0.d == 0)
            rax_28 = var_b8
        label_141dafee8:
            
            if (rax_28 != 0)
                sub_140a74f90(rax_28)
        else
            uint64_t rcx_31 = var_b8
            
            if (rcx_31 != 0)
                (*(*rcx_31 + 0x38))(rcx_31, 0)
                rax_28 = var_b8
                
                if (rax_28 != 0)
                    rax_28 = sub_140a84c80(rax_28, 0, 0)
                    var_b8 = rax_28
                
                var_b0.d = 0
                goto label_141dafee8
        result = sub_141da7ed0(arg1)
        int64_t rcx_35 = var_58
        
        if (rcx_35 != 0)
            result = sub_140a74f90(rcx_35)
        
        if (r14_1 != 0)
            result = sub_140a74f90(r14_1)
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            result = (**var_70)(var_70)
            int32_t temp2_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp2_1 == 1)
                return (*(*var_70 + 8))(var_70, 1)
else if (arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result != 0)
            if (arg3[1].d == 0)
                return (*(*nullptr + 0x50))(0, &var_48)
            
            int64_t* rdi_1 = *arg3
            return (*(*rdi_1 + 0x50))(rdi_1, &var_48)

return result
