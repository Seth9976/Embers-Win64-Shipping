// 函数: sub_1423e7370
// 地址: 0x1423e7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* r15 = arg5
int64_t* var_348 = r15
sub_140a751d0()
int16_t* const r14 = &data_142d40450
int32_t r12 = 0

if (*r15 != &data_142d40450)
    int32_t rax_3 = *(r15 + 0xc)
    int32_t rdx = 0
    r15[1].d = 0
    
    if (rax_3 != 0)
        sub_1405947f0(r15, 0)
        rdx = r15[1].d
        rax_3 = *(r15 + 0xc)
    
    if (rdx s> rax_3)
        sub_140594770(r15)

sub_140b3ce60()
void* rax_4 = *(arg2 + 0x278)

if (rax_4 != 0)
    *(rax_4 + 0x11b) &= 0x7f

int64_t rsi
rsi.b = 0
int32_t rdx_1 = data_1439aa960
int32_t rcx_5 = data_1439aa96c + 1
data_1439aa96c = rcx_5
int64_t rdi = sx.q(rdx_1 - 1)

if (rdx_1 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rcx_6 = data_1439aa958
        
        if (*(rbx_2 + rcx_6 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_7 = *(rbx_2 + rcx_6)
            
            if (rcx_7 == 0)
                rsi.b = 1
            else if ((*(*rcx_7 + 0x50))(rcx_7, &arg3[5]) == 0)
                rsi.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_5 = data_1439aa96c
    rdx_1 = data_1439aa960
    r15 = var_348

data_1439aa96c = rcx_5 - 1

if (rsi.b != 0 && rcx_5 - 1 s<= 0)
    int32_t rsi_1 = rdx_1
    int32_t rdi_1 = 0
    
    if (rdx_1 s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            int64_t rcx_9 = data_1439aa958
            
            if (*(rbx_3 + rcx_9 + 8) == 0)
                sub_1405a4880(&data_1439aa958, rdi_1, 1, 1)
            else
                int64_t* rcx_10 = *(rbx_3 + rcx_9)
                
                if (rcx_10 == 0)
                    sub_1405a4880(&data_1439aa958, rdi_1, 1, 1)
                else if ((*(*rcx_10 + 0x20))(rcx_10) != 0)
                    sub_1405a4880(&data_1439aa958, rdi_1, 1, 1)
                else
                    rdi_1 += 1
                    rbx_3 = &rbx_3[2]
            
            rdx_1 = data_1439aa960
        while (rdi_1 s< rdx_1)
    
    int32_t rax_10 = rdx_1 * 2
    
    if (rax_10 s<= 2)
        rax_10 = 2
    
    data_1439aa968 = rax_10
    
    if (rsi_1 s> rax_10 && data_1439aa964 != rdx_1)
        sub_1405a5410(&data_1439aa958, rdx_1)

sub_1423bd410()
int64_t* rsi_2 = arg1
*(rsi_2 + 0xc2c) &= 0xfffffffe
void* rax_11 = *(arg2 + 0x278)

if (rax_11 != 0)
    void* rcx_11 = *(rax_11 + 0x30)
    
    if (rcx_11 != 0)
        int64_t var_2b8 = *(sub_140d21d80(rcx_11) + 0x18)
        int64_t var_1c8
        sub_140b63b70(&var_2b8, &var_1c8)
        sub_1423d4310(rsi_2, arg2, 0, &var_1c8)
        int64_t rcx_15 = var_1c8
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)

int64_t var_210 = 0
int64_t var_208 = 0
sub_1423d4310(rsi_2, arg2, 1, &var_210)
int64_t var_200 = 0
int64_t var_1f8 = 0
sub_1423d4310(rsi_2, arg2, 2, &var_200)
int64_t var_1f0 = 0
int64_t var_1e8 = 0
sub_1423d4310(rsi_2, arg2, 4, &var_1f0)
sub_140bc7700(0xffffffff)
*(arg2 + 0x1c0) = 0

if (*(arg2 + 0x1c4) != 0)
    sub_140638c50(&arg2[0x1b8], 0)

*(arg2 + 0x1d0) = 0

if (*(arg2 + 0x1d4) != 0)
    sub_1405c5570(&arg2[0x1c8], 0)

if (*(arg2 + 0x1d8) != &data_142d40450)
    int32_t rax_13 = *(arg2 + 0x1e4)
    int32_t rdx_9 = 0
    *(arg2 + 0x1e0) = 0
    
    if (rax_13 != 0)
        sub_1405947f0(&arg2[0x1d8], 0)
        rdx_9 = *(arg2 + 0x1e0)
        rax_13 = *(arg2 + 0x1e4)
    
    if (rdx_9 s> rax_13)
        sub_140594770(&arg2[0x1d8])

*(arg2 + 0x1e8) &= 0xfffffffe
void* rcx_23 = *(arg2 + 0x278)

if (rcx_23 != 0)
    *(rcx_23 + 0x588) = 0
    
    if (*(rcx_23 + 0x58c) != 0)
        sub_140638c50(rcx_23 + 0x580, 0)

sub_14242e880(&arg2[8])
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8
void* rcx_27 = *(arg2 + 0x278)

if (rcx_27 != 0)
    sub_14242e4f0(rcx_27)
    
    if (sub_1424130d0(arg3, u"quiet") == 0)
        rsi_2[0x117].b = 2
        sub_140597df0(&rsi_2[0x118], &arg3[5])
        uint64_t rax_15
        
        if (sub_1424130d0(arg3, u"Game=").b != 0)
            rax_15 = sub_142411ce0(arg3, u"Game=", &data_142d40450)
            uint64_t rsi_3 = rax_15
            
            if (rsi_2[0x11a] != rax_15)
                int32_t rbx_7
                
                if (rax_15 == 0 || *rax_15 == 0)
                    rbx_7 = 0
                else
                    int64_t rbx_6 = -1
                    
                    do
                        rbx_6 += 1
                    while (*(rax_15 + (rbx_6 << 1)) != 0)
                    
                    rbx_7 = rbx_6.d + 1
                
                int32_t rdx_12 = 0
                rsi_2[0x11b].d = 0
                
                if (*(rsi_2 + 0x8dc) != rbx_7)
                    sub_1405947f0(&rsi_2[0x11a], rbx_7)
                    rdx_12 = rsi_2[0x11b].d
                
                rax_15 = zx.q(rbx_7 + rdx_12)
                rsi_2[0x11b].d = rax_15.d
                
                if (rax_15.d s> *(rsi_2 + 0x8dc))
                    sub_140594770(&rsi_2[0x11a])
                
                if (rbx_7 != 0)
                    memcpy(rsi_2[0x11a], rsi_3, rbx_7 * 2)
            
            rsi_2 = arg1
        else if (rsi_2[0x11a] != &data_142d40450)
            rax_15 = zx.q(*(rsi_2 + 0x8dc))
            int32_t rdx_15 = 0
            rsi_2[0x11b].d = 0
            
            if (rax_15.d != 0)
                sub_1405947f0(&rsi_2[0x11a], 0)
                rdx_15 = rsi_2[0x11b].d
                rax_15 = zx.q(*(rsi_2 + 0x8dc))
            
            if (rdx_15 s> rax_15.d)
                sub_140594770(&rsi_2[0x11a])
        
        if (data_143de56d0 == 0)
            rax_15.b = 0
        else
            int64_t* rcx_35 = data_143de56c8
            
            if (rcx_35 == 0)
                rax_15.b = 0
            else if ((*(*rcx_35 + 0x28))(rcx_35).b == 0)
                rax_15.b = 0
            else
                rax_15.b = 1
        
        char rax_18
        
        if (rax_15.b != 0)
            int64_t* rcx_38 = nullptr
            
            if (data_143de56d0 != 0)
                rcx_38 = data_143de56c8
            
            rax_18 = (*(*rcx_38 + 0x48))(rcx_38)
        
        if (rax_15.b == 0 || rax_18 == 0)
            (*(*rsi_2 + 0x468))(rsi_2)
        
        rsi_2[0x117].b = 0
    
    sub_1423f1a00(rsi_2, *(arg2 + 0x278))
    sub_142435600(*(arg2 + 0x278), 2)
    rsi_2.b = 0
    int32_t rdx_18 = data_143a30730
    int32_t rcx_43 = data_143a3073c + 1
    int64_t r14_1 = *(arg2 + 0x278)
    data_143a3073c = rcx_43
    int64_t rdi_3 = sx.q(rdx_18 - 1)
    
    if (rdx_18 - 1 s>= 0)
        int64_t rbx_9 = rdi_3 << 4
        int64_t temp2_1
        
        do
            int64_t rcx_44 = data_143a30728
            
            if (*(rbx_9 + rcx_44 + 8) == 0)
                rsi_2.b = 1
            else
                int64_t* rcx_45 = *(rbx_9 + rcx_44)
                
                if (rcx_45 == 0)
                    rsi_2.b = 1
                else if ((*(*rcx_45 + 0x50))(rcx_45, 0, r14_1) == 0)
                    rsi_2.b = 1
            
            rbx_9 -= 0x10
            temp2_1 = rdi_3
            rdi_3 -= 1
        while (temp2_1 - 1 s>= 0)
        rcx_43 = data_143a3073c
        rdx_18 = data_143a30730
    
    data_143a3073c = rcx_43 - 1
    
    if (rsi_2.b != 0 && rcx_43 - 1 s<= 0)
        int32_t rsi_4 = rdx_18
        int32_t rdi_4 = 0
        
        if (rdx_18 s> 0)
            int64_t* rbx_10 = nullptr
            
            do
                int64_t rcx_47 = data_143a30728
                
                if (*(rbx_10 + rcx_47 + 8) == 0)
                    sub_1405a4880(&data_143a30728, rdi_4, 1, 1)
                else
                    int64_t* rcx_48 = *(rbx_10 + rcx_47)
                    
                    if (rcx_48 == 0)
                        sub_1405a4880(&data_143a30728, rdi_4, 1, 1)
                    else if ((*(*rcx_48 + 0x20))(rcx_48) != 0)
                        sub_1405a4880(&data_143a30728, rdi_4, 1, 1)
                    else
                        rdi_4 += 1
                        rbx_10 = &rbx_10[2]
                
                rdx_18 = data_143a30730
            while (rdi_4 s< rdx_18)
        
        int32_t rax_25 = rdx_18 * 2
        
        if (rax_25 s<= 2)
            rax_25 = 2
        
        data_143a30738 = rax_25
        
        if (rsi_4 s> rax_25 && data_143a30734 != rdx_18)
            sub_1405a5410(&data_143a30728, rdx_18)
    
    int64_t rcx_49 = *(arg2 + 0x218)
    
    if (rcx_49 != 0)
        int64_t* var_258
        sub_14202a200(rcx_49, &var_258)
        int32_t var_250
        int32_t rax_26 = var_250
        
        while (true)
            int64_t* rdx_21 = var_258
            
            if (rax_26 s< 0 || rax_26 s>= rdx_21[1].d)
                rcx_49.b = 0
            else
                rcx_49.b = 1
            
            if (rcx_49.b == 0)
                break
            
            void* rdi_5 = *(*rdx_21 + (sx.q(rax_26) << 3))
            int64_t* rcx_51 = *(rdi_5 + 0x30)
            
            if (rcx_51 != 0 && (*(*rcx_51 + 0x150))(rcx_51) == *(arg2 + 0x278))
                int64_t* rdx_22 = *(rdi_5 + 0x30)
                int64_t* rax_30 = rdx_22[0x4a]
                
                if (rax_30 != 0)
                    sub_1420e0c80(*(arg2 + 0x278), rax_30, 1, 1)
                    rdx_22 = *(rdi_5 + 0x30)
                
                sub_1420e0c80(*(arg2 + 0x278), rdx_22, 1, 1)
                *(rdi_5 + 0x30) = 0
            
            *(rdi_5 + 0xa0) &= 0xfffffffe
            sub_1420f6ea0(rdi_5)
            rax_26 = var_250 + 1
            var_250 = rax_26
    
    int64_t rbx_12 = *(arg2 + 0x278)
    void* rax_32 = sub_142452380()
    void* var_1a8_1 = rax_32
    int32_t var_c8 = 5
    char var_70_1 = 0
    void* var_c0
    sub_1405ab0f0(&var_c0, rbx_12, rax_32)
    char var_70_2 = 1
    sub_1405b0c60(&var_c8)
    int64_t var_b8
    char var_a4
    int64_t var_90
    uint64_t r8_4
    
    if (var_a4 == 0)
        int64_t* var_98
        int64_t* rsi_5 = var_98
        
        while (true)
            sub_141dd6120(rsi_5, 1)
            void* rax_33 = var_c0
            int32_t var_88
            r8_4 = zx.q(var_88)
            int32_t var_b0
            int32_t rdx_25 = var_b0
            int32_t var_a8
            int32_t r15_3 = var_a8 + 1
            
            if (r15_3 s>= r8_4.d + rdx_25)
            label_1423e7c8a:
                r12 = 0
                char var_a4_1 = 1
                int64_t var_98_1 = 0
                break
            
            int64_t r12_1 = sx.q(r15_3) << 3
            
            while (true)
                if (r15_3 s>= rdx_25)
                    rsi_5 = *(var_90 + (sx.q(r15_3 - rdx_25) << 3))
                else
                    rsi_5 = *(r12_1 + var_b8)
                
                int32_t var_a0 = var_a0 + 1
                
                if (rsi_5 != 0)
                    void* rax_40
                    rax_40, r8_4 = sub_141dc9840(rsi_5)
                    
                    if (rax_40 != 0)
                        int64_t rax_47
                        
                        if ((var_c8.b & 1) != 0)
                            int32_t rax_41 = *(rsi_5 + 0xc)
                            
                            if (rax_41 s>= data_143e1d9b4)
                                rax_47 = 0
                            else
                                int16_t temp7_1
                                int32_t temp8_1
                                temp7_1:temp8_1 = sx.q(rax_41)
                                uint32_t rdx_27 = zx.d(temp7_1)
                                int32_t rax_43 = temp8_1 + rdx_27
                                rax_47 = *(data_143e1d9a0 + (sx.q(rax_43 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_43.w) - rdx_27) * 0x18
                        
                        if ((var_c8.b & 1) == 0 || ((*(rax_47 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_65 = var_c8
                            
                            if (((rcx_65 u>> 1).b & 1) == 0)
                                goto label_1423e7bb5
                            
                            uint64_t rax_51 = sub_1405949a0()
                            
                            if (rax_51.b != 0)
                                rcx_65 = var_c8
                            label_1423e7bb5:
                                
                                if (((rcx_65 u>> 2).b & 1) == 0)
                                label_1423e7c31:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_40) == rax_33)
                                        if (rax_40 == *(rax_33 + 0x30))
                                            break
                                        
                                        void* rax_53 = sub_1425bd0d0()
                                        void* rdx_29 = rsi_5[2]
                                        int64_t rax_54 = sx.q(*(rax_53 + 0x38))
                                        
                                        if (rax_54.d s> *(rdx_29 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_29 + 0x30) + (rax_54 << 3)) != rax_53 + 0x30)
                                            break
                                else
                                    if ((*(rax_40 + 0x1f4) & 0x20) == 0
                                            || (*(rax_40 + 0x1f6) & 8) != 0)
                                        rax_51 = zx.q(*(rax_40 + 0x1f5))
                                    
                                    if (((*(rax_40 + 0x1f4) & 0x20) != 0
                                            && (*(rax_40 + 0x1f6) & 8) == 0) || (rax_51.b & 0x40) != 0
                                            || rax_51.b s< 0)
                                        r14_1.b = 1
                                    else
                                        r14_1.b = 0
                                    
                                    void* rcx_67 = *(rax_40 + 0xb8)
                                    char* rdi_6 = *(rax_40 + 0x248)
                                    
                                    if (rcx_67 != 0)
                                        rax_51 = sub_1424359b0(rcx_67)
                                    
                                    if (rcx_67 == 0 || rax_51 == 0 || rdi_6 == rax_51)
                                        rcx_67.b = 1
                                    else
                                        rcx_67.b = 0
                                    
                                    if (rdi_6 == 0 || *rdi_6 == 2)
                                        rax_51.b = 1
                                    else
                                        rax_51.b = 0
                                    
                                    if (rcx_67.b != 0 || rax_51.b != 0)
                                        rax_51.b = 1
                                    
                                    if (r14_1.b != 0 && rax_51.b != 0)
                                        goto label_1423e7c31
                    
                    r8_4 = zx.q(var_88)
                    rdx_25 = var_b0
                
                r15_3 += 1
                r12_1 += 8
                
                if (r15_3 s>= r8_4.d + rdx_25)
                    goto label_1423e7c8a
            
            int64_t* var_98_2 = rsi_5
            var_a8 = r15_3
            
            if (var_a4 != 0)
                r12 = 0
                break
        
        r15 = var_348
    
    if (var_70_2 != 0)
        char var_70_3 = 0
        int64_t var_78
        sub_142441560(var_c0, var_78)
        
        if (var_90 != 0)
            sub_140a74f90(var_90)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
    
    r8_4.b = 1
    sub_14242eb30(*(arg2 + 0x278), 1, r8_4.b, 0)
    int64_t* rcx_74 = data_143f5b298
    
    if (rcx_74 != 0)
        if (rcx_74[0xf1] != 0)
            sub_1423d4470(arg1)
            rcx_74 = data_143f5b298
        
        (*(*rcx_74 + 0x268))(rcx_74, *(arg2 + 0x278))
    
    int32_t rax_59 = *(*(arg2 + 0x278) + 0xc)
    void* const rax_66
    
    if (rax_59 s>= data_143e1d9b4)
        rax_66 = nullptr
    else
        int16_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rax_59)
        uint32_t rdx_33 = zx.d(temp3_1)
        int32_t rax_61 = temp4_1 + rdx_33
        rax_66 =
            *(data_143e1d9a0 + (sx.q(rax_61 s>> 0x10) << 3)) + sx.q(zx.d(rax_61.w) - rdx_33) * 0x18
    
    *(rax_66 + 8) &= 0xbfffffff
    int64_t** var_2a8
    sub_142436b20(*(arg2 + 0x278), &var_2a8)
    int32_t var_2a0
    int32_t rdx_36 = var_2a0
    int64_t** r8_5 = var_2a8
    
    while (true)
        int64_t* rax_67
        
        if (rdx_36 s< 0 || rdx_36 s>= r8_5[1].d)
            rax_67.b = 0
        else
            rax_67.b = 1
        
        if (rax_67.b == 0)
            break
        
        void* rcx_82 = (*r8_5)[sx.q(rdx_36)]
        
        if (rcx_82 != 0)
            sub_14243c790(*(rcx_82 + 0x20))
            rdx_36 = var_2a0
            r8_5 = var_2a8
        
        rdx_36 += 1
        var_2a0 = rdx_36
    
    void* rcx_84 = *(arg2 + 0x278)
    int64_t rsi_6 = 0
    int64_t* rdi_7 = *(rcx_84 + 0x98)
    uint64_t r14_3 = sx.q(*(rcx_84 + 0xa0)) << 3 u>> 3
    
    if (rdi_7 u> &rdi_7[sx.q(*(rcx_84 + 0xa0))])
        r14_3 = 0
    
    if (r14_3 != 0)
        do
            int64_t* rbx_14 = *rdi_7
            
            if (rbx_14[0x25] != 0)
                char rax_71 = (*(*rbx_14 + 0x268))(rbx_14)
                char rax_73
                
                if (rax_71 != 0)
                    rax_73 = (*(*rbx_14 + 0x270))(rbx_14)
                
                if (rax_71 == 0 || rax_73 == 0)
                    sub_14243c790(*(rbx_14[0x25] + 0x20))
            
            rdi_7 = &rdi_7[1]
            rsi_6 += 1
        while (rsi_6 != r14_3)
        
        rcx_84 = *(arg2 + 0x278)
    
    int64_t* rax_74 = sub_142435f50(rcx_84)
    
    if (rax_74 != 0)
        sub_141e87ba0(rax_74, 0x3f800000, sub_141e7b450(rax_74, *(arg2 + 0x278), 1))
    
    int32_t i = 0
    
    if (*(arg2 + 0x270) s> 0)
        int64_t* rdx_38 = nullptr
        
        do
            int64_t* rcx_91 = *(rdx_38 + *(arg2 + 0x268))
            
            if (rcx_91 != 0 && *rcx_91 == *(arg2 + 0x278))
                *rcx_91 = 0
            
            i += 1
            rdx_38 = &rdx_38[1]
        while (i s< *(arg2 + 0x270))
    
    int64_t* rcx_92 = *(arg2 + 0x218)
    char rdx_10 = (*(arg2 + 0x278)).b
    *(arg2 + 0x278) = 0
    
    if (rcx_92 != 0)
        (*(*rcx_92 + 0x290))(rcx_92, rdx_10, 0)
    
    r14 = &data_142d40450

sub_140cb0ba0(0, 1)

if (sub_140a80f40() == 0)
    uint32_t rax_79
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_79.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_79.b == 0))
        void var_148
        int64_t* rax_80 = sub_1423d76b0(&var_148, nullptr, 0xff)
        void* rcx_94 = *rax_80
        int64_t* rbx_16 = *(rcx_94 + 0x18)
        
        if (rbx_16 != 0)
            rbx_16[9].d += 1
        
        sub_1405a5890(rcx_94, rax_80[1], rax_80[2].d, 1)
        
        if (rbx_16 != 0)
            rbx_16[9].d -= 1
            
            if (rbx_16[9].d == 1)
                sub_140a2f6e0(rbx_16)
    else
        sub_1423d0490()
else
    sub_1423d0490()

int64_t zmm6 = sub_1419a21e0(0)
sub_140af4b30()
sub_140599090(&data_1439a04c0)

if (sub_141f8cba0() == 0)
    void*** rax_83
    rax_83, zmm6 = sub_141f88540()
    void** rdx_42 = *rax_83
    rdx_42[5](rax_83, rdx_42)

int64_t* rbx_17 = *(arg2 + 0x218)
int64_t* rsi_7 = arg3
void var_130
(*(*rbx_17 + 0x328))(rbx_17, sub_1423cf790(&var_130, rsi_7))
bool cond:0 = *(arg2 + 0x240) s<= 1
uint64_t var_350 = 0
void* var_358 = nullptr
int32_t var_378
int64_t result

if (not(cond:0))
    void** rbx_18 = arg1[0x187]
    void* rdi_9 = &rbx_18[sx.q(arg1[0x188].d)]
    
    if (rbx_18 != rdi_9)
        while (true)
            void* rcx_99 = *rbx_18
            
            if (*(rcx_99 + 0x278) != *(arg2 + 0x278) && *(rcx_99 + 0x240) s> 1)
                int16_t* rdx_45
                
                if (*(rcx_99 + 0x240) == 0)
                    rdx_45 = &data_142d40450
                else
                    rdx_45 = *(rcx_99 + 0x238)
                
                var_378 = 0xffffffff
                
                if (sub_140a23cf0(&rsi_7[5], rdx_45, 1, 0, var_378) != 0xffffffff)
                    int16_t* var_2d8
                    sub_142441630(&var_2d8, &rsi_7[5])
                    data_14399fa48 = *(arg2 + 0x230)
                    sub_140ccddf0()
                    void* rax_90
                    rax_90, zmm6 = sub_142431fc0(&var_2d8, nullptr)
                    var_358 = rax_90
                    
                    if (rax_90 != 0)
                        var_350 = *(rax_90 + 0x20)
                    else
                        void* rax_91
                        rax_91, zmm6 = sub_1423d7070(arg2, &var_2d8, &var_350)
                        var_358 = rax_91
                        
                        if (rax_91 == 0)
                            int32_t var_2d0
                            
                            if (var_2d0 != rax_91.d)
                                r14 = var_2d8
                            
                            int64_t var_298
                            sub_140a2e390(&var_298, Failed to load package '%s' while in PIE", r14)
                            
                            if (r15 == &var_298)
                                int64_t rcx_111 = var_298
                                
                                if (rcx_111 != 0)
                                    sub_140a74f90(rcx_111)
                            else
                                int64_t rcx_105 = *r15
                                
                                if (rcx_105 != 0)
                                    sub_140a74f90(rcx_105)
                                
                                *r15 = var_298
                                int32_t var_290
                                r15[1].d = var_290
                                int32_t var_28c
                                *(r15 + 0xc) = var_28c
                            
                            int16_t* rcx_112 = var_2d8
                            
                            if (rcx_112 != 0)
                                sub_140a74f90(rcx_112)
                            
                            sub_140920c10(&data_1439aa970, 0)
                            sub_140a751d0()
                            sub_14094c030(arg3)
                            result.b = 0
                            goto label_1423e8e15
                    
                    int64_t var_190
                    int64_t* rax_96 = sub_14242e5f0(&var_190, *(arg2 + 0x230))
                    void* r14_5 = var_358 + 0xd0
                    
                    if (r14_5 != rax_96)
                        int64_t rcx_107 = *r14_5
                        
                        if (rcx_107 != 0)
                            sub_140a74f90(rcx_107)
                        
                        *r14_5 = *rax_96
                        *rax_96 = 0
                        *(r14_5 + 8) = rax_96[1].d
                        *(r14_5 + 0xc) = *(rax_96 + 0xc)
                        rax_96[1] = 0
                    
                    int64_t rcx_109 = var_190
                    
                    if (rcx_109 != 0)
                        sub_140a74f90(rcx_109)
                    
                    int16_t* rcx_110 = var_2d8
                    data_143de5451 = 1
                    
                    if (rcx_110 != 0)
                        sub_140a74f90(rcx_110)
                
                rsi_7 = arg3
            
            rbx_18 = &rbx_18[1]
            
            if (rbx_18 == rdi_9)
                break
            
            r14 = &data_142d40450

if (*arg2 == 6)
    int16_t* rdx_49
    
    if (rsi_7[6].d == 0)
        rdx_49 = &data_142d40450
    else
        rdx_49 = rsi_7[5]
    
    void var_1a0
    zmm6 = sub_142022190(*sub_140b58260(&var_1a0, rdx_49, 1), &var_350, &var_358)

int32_t rdi_10 = rsi_7[6].d
int16_t** performanceCount_2 = &rsi_7[5]
int64_t rsi_9 = rsi_7[5]
int64_t rbx_19 = 0
performanceCount = performanceCount_2
int64_t var_2e8 = 0
int32_t var_2e0_1 = rdi_10

if (rdi_10 != 0)
    sub_1405a4c70(&var_2e8, rdi_10, 0)
    rbx_19 = var_2e8
    memcpy(rbx_19, rsi_9, rdi_10 * 2)
else
    int32_t var_2dc_1 = 0

int64_t* rbx_20

if (var_358 != 0)
label_1423e8678:
    rbx_20 = arg1
label_1423e8689:
    int64_t var_48_1 = zmm6
    *(var_358 + 0x188) = *(arg2 + 0x218)
    void* rdx_65 = var_358
    data_143f5e920 = rdx_65
    sub_1423efa60(arg2, rdx_65)
    *(*(arg2 + 0x278) + 0x11a) = *arg2
    void* rax_136 = *(arg2 + 0x278)
    
    if (*arg2 != 3)
        int32_t rax_137 = *(rax_136 + 0xc)
        void* const rax_144
        
        if (rax_137 s>= data_143e1d9b4)
            rax_144 = nullptr
        else
            int16_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(rax_137)
            uint32_t rdx_67 = zx.d(temp5_1)
            int32_t rax_139 = temp6_1 + rdx_67
            rax_144 = *(data_143e1d9a0 + (sx.q(rax_139 s>> 0x10) << 3))
                + sx.q(zx.d(rax_139.w) - rdx_67) * 0x18
        
        *(rax_144 + 8) |= 0x40000000
    else
        *(rax_136 + 8) &= 0xfffffffd
    
    void* rcx_151 = *(arg2 + 0x278)
    
    if ((*(rcx_151 + 0x11b) & 0x40) == 0)
        int64_t var_1d0_1 = 0
        int32_t var_1d8
        int128_t var_178 = ((var_1d8 & 0xffffff7f) | 0x37f).o
        sub_142439130(rcx_151, &var_178)
    
    if (arg4 != 0)
        (*(*rbx_20 + 0x4c8))(rbx_20, arg2)
    
    int64_t* rsi_11 = arg3
    sub_142444aa0(*(arg2 + 0x278), rsi_11)
    void** rax_149 = sub_142435f50(*(arg2 + 0x278))
    
    if (rax_149 != 0)
        void* rax_150
        char r8_23
        rax_150, r8_23 = sub_142437e30(*(arg2 + 0x278), 0, 1)
        sub_141e86640(rax_149, *(rax_150 + 0x2e0), r8_23)
    
    if (arg4 == 0)
        char rax_151
        
        if (data_143de5429 != arg4.b)
            rax_151 = sub_1424130d0(rsi_11, u"Listen")
        
        if (data_143de5429 == arg4.b || rax_151 != 0)
            sub_14243b1c0(*(arg2 + 0x278), rsi_11)
    
    int16_t* r15_4 = &data_142d40450
    void* rax_152 = sub_142411ce0(rsi_11, u"Mutator=", &data_142d40450)
    
    if (rax_152 != 0)
        bool cond:7_1 = *rax_152 == 0
        int32_t rdx_74 = 0
        int32_t rcx_160 = 0
        int64_t var_310
        __builtin_memset(&var_310, 0, 0x1c)
        
        if (not(cond:7_1))
            int64_t rbx_22 = -1
            
            do
                rbx_22 += 1
            while (*(rax_152 + (rbx_22 << 1)) != 0)
            
            if (rbx_22.d + 1 s> 0)
                sub_1405947f0(&var_310, rbx_22.d + 1)
                int32_t var_304
                rcx_160 = var_304
                int32_t var_308
                rdx_74 = var_308
            
            int32_t rax_153 = rdx_74 + rbx_22.d + 1
            int32_t var_308_1 = rax_153
            
            if (rax_153 s> rcx_160)
                sub_140594770(&var_310)
            
            UnDecorator::getReferenceType(var_310, rax_152, (rbx_22.d + 1) * 2)
        
        int64_t* var_300
        sub_140a2ccb0(&var_310, &var_300, U",", 1)
        int64_t rcx_165 = var_310
        
        if (rcx_165 != 0)
            sub_140a74f90(rcx_165)
        
        int32_t i_3
        int32_t i_2 = i_3
        int32_t rdi_14 = 0
        
        if (i_2 s> 0)
            do
                sub_1423e8e40(arg1, *(arg2 + 0x278), 4, &var_300[sx.q(rdi_14) * 2])
                i_2 = i_3
                rdi_14 += 1
            while (rdi_14 s< i_2)
            
            performanceCount_2 = &rsi_11[5]
        
        int64_t* rdi_15 = var_300
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rcx_167 = *rdi_15
                
                if (rcx_167 != 0)
                    sub_140a74f90(rcx_167)
                
                rdi_15 = &rdi_15[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rdi_15 = var_300
        
        if (rdi_15 != 0)
            sub_140a74f90(rdi_15)
    
    char* rcx_169 = data_143f56338
    
    if (rcx_169 != 0)
        sub_1422ef960(rcx_169, 0, 1)
    
    int64_t var_220 = *(sub_140d21d80(*(*(arg2 + 0x278) + 0x30)) + 0x18)
    int64_t var_1b8
    sub_140b63b70(&var_220, &var_1b8)
    int64_t* rdi_16 = arg1
    sub_1423e8e40(rdi_16, *(arg2 + 0x278), 0, &var_1b8)
    int64_t rcx_175 = var_1b8
    
    if (rcx_175 != 0)
        sub_140a74f90(rcx_175)
    
    sub_142435600(*(arg2 + 0x278), 2)
    int16_t* rdx_82
    
    if (performanceCount_2[1].d == 0)
        rdx_82 = &data_142d40450
    else
        rdx_82 = *performanceCount_2
    
    void* rbx_24 = *(arg2 + 0x278)
    void var_198
    *sub_140b58260(&var_198, rdx_82, 1)
    sub_142431df0(rbx_24)
    sub_14242f9a0(*(arg2 + 0x278))
    int64_t rcx_180 = *(arg2 + 0x278)
    int64_t var_238 = rcx_180
    int64_t var_230_1 = 0
    int64_t var_228_1 = 0
    sub_14243a0c0(rcx_180, rsi_11, 1, &var_238)
    sub_141ef0980(&var_238)
    
    if (var_230_1 != 0)
        sub_140a74f90(var_230_1)
    
    var_378.b = 0
    sub_141de0ff0(*(arg2 + 0x278), 1, nullptr, 1, var_378.b)
    sub_141fa75e0(&arg2[0xd0], rsi_11)
    sub_140597df0(&arg2[0xf8], &var_2e8)
    
    if (sub_14243ac50(*(arg2 + 0x278)) == 3)
        sub_141fa75e0(&arg2[0x138], rsi_11)
    
    int16_t* rcx_188 = *(arg2 + 0x218)
    
    if (rcx_188 != 0)
        int64_t* var_248
        sub_14202a200(rcx_188, &var_248)
        int32_t var_240
        int32_t rax_157 = var_240
        
        while (true)
            int64_t* rdx_89 = var_248
            
            if (rax_157 s< 0 || rax_157 s>= rdx_89[1].d)
                rcx_188.b = 0
            else
                rcx_188.b = 1
            
            if (rcx_188.b == 0)
                break
            
            int64_t rbx_25 = *(arg2 + 0x278)
            int16_t* var_2c8 = nullptr
            int32_t var_2c0_1 = 0
            int64_t* rsi_12 = *(*rdx_89 + (sx.q(rax_157) << 3))
            int64_t var_168
            char rax_160 =
                (*(*rsi_12 + 0x290))(rsi_12, sub_142423a30(rsi_11, &var_168, 1), &var_2c8, rbx_25)
            int64_t rcx_192 = var_168
            rbx_25.b = rax_160 == 0
            
            if (rcx_192 != 0)
                sub_140a74f90(rcx_192)
            
            if (rbx_25.b != 0)
                int16_t* const r9_19 = &data_142d40450
                
                if (var_2c0_1 != 0)
                    r9_19 = var_2c8
                
                sub_140af98a0("Unknown", 0x3251, u"Couldn't spawn player: %s", r9_19)
                sub_140afbb40()
            
            rcx_188 = var_2c8
            
            if (rcx_188 != 0)
                sub_140a74f90(rcx_188)
            
            rax_157 = var_240 + 1
            var_240 = rax_157
        
        performanceCount_2 = performanceCount
        rsi_11 = arg3
        rdi_16 = arg1
    
    void*** rax_162 = sub_141f88540()
    void** rdx_92 = *rax_162
    rdx_92[6](rax_162, rdx_92)
    void* rcx_194 = data_143f5b298
    
    if (rcx_194 != 0)
        int64_t* rcx_195 = *(rcx_194 + 0xb08)
        
        if (rcx_195 != 0)
            (*(*rcx_195 + 0x138))(rcx_195, arg2)
    
    sub_14242e4a0(*(arg2 + 0x278))
    sub_140920c10(&data_1439aa970, *(arg2 + 0x278))
    void* rax_164 = *(arg2 + 0x278)
    *(rax_164 + 0x11b) |= 1
    (*(*rdi_16 + 0x458))(rdi_16, 0)
    void*** rax_166
    int512_t zmm1_2
    double zmm7_1
    rax_166, zmm1_2, zmm7_1 = sub_141f88540()
    sub_141f97b60(rax_166, 1)
    int64_t* rcx_199 = *(*(arg2 + 0x278) + 0x128)
    char rax_169
    
    if (rcx_199 != 0)
        rax_169 = (*(*rcx_199 + 0x7a0))(rcx_199)
    
    if ((rcx_199 == 0 || rax_169 == 0) && sub_1424130d0(rsi_11, DemoRec") != 0
            && *(arg2 + 0x218) != 0)
        void* rax_171 = sub_142411ce0(rsi_11, u"DemoRec=", nullptr)
        void* r15_5 = *(arg2 + 0x278)
        int32_t rdx_95 = 0
        int32_t var_328_1 = 0
        int32_t rcx_202 = 0
        int32_t var_324_1 = 0
        int64_t var_330 = 0
        
        if (rax_171 != 0 && *rax_171 != 0)
            int64_t rbx_26 = -1
            
            do
                rbx_26 += 1
            while (*(rax_171 + (rbx_26 << 1)) != 0)
            
            if (rbx_26.d + 1 s> 0)
                sub_1405947f0(&var_330, rbx_26.d + 1)
                rcx_202 = var_324_1
                rdx_95 = var_328_1
            
            int32_t rax_172 = rdx_95 + rbx_26.d + 1
            int32_t var_328_2 = rax_172
            
            if (rax_172 s> rcx_202)
                sub_140594770(&var_330)
            
            UnDecorator::getReferenceType(var_330, rax_171, (rbx_26.d + 1) * 2)
        
        int64_t* rdi_19 = *(arg2 + 0x218)
        int64_t rsi_13 = *rdi_19
        int64_t var_158
        int64_t* rax_173
        rax_173, zmm1_2 = sub_142436cb0(r15_5, &var_158)
        (*(rsi_13 + 0x2f0))(rdi_19, &var_330, rax_173, &arg3[9])
        int64_t rcx_208 = var_330
        
        if (rcx_208 != 0)
            sub_140a74f90(rcx_208)
        
        int64_t rcx_209 = var_158
        
        if (rcx_209 != 0)
            sub_140a74f90(rcx_209)
        
        rsi_11 = arg3
        r15_4 = &data_142d40450
    
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int64_t zmm6_1 = float.d(performanceCount_1) f* data_143d796f8
    sub_140b3ce60()
    
    if (performanceCount_2[1].d != 0)
        r15_4 = *performanceCount_2
    
    int64_t var_320 = 0
    int32_t rcx_212 = 0
    int32_t var_314_1 = 0
    int32_t var_318_1 = 0
    
    if (r15_4 != 0 && *r15_4 != 0)
        int64_t rbx_29 = -1
        
        do
            rbx_29 += 1
        while (r15_4[rbx_29] != 0)
        
        if (rbx_29.d + 1 s> 0)
            sub_1405947f0(&var_320, rbx_29.d + 1)
            rcx_212 = var_314_1
            r12 = var_318_1
        
        int32_t rax_174 = rbx_29.d + 1 + r12
        int32_t var_318_2 = rax_174
        
        if (rax_174 s> rcx_212)
            sub_140594770(&var_320)
        
        UnDecorator::getReferenceType(var_320, r15_4, (rbx_29.d + 1) * 2)
    
    int64_t* rcx_216 = *(arg2 + 0x218)
    zmm1_2.o = zx.o(0)
    zmm1_2.d = fconvert.s(zmm6_1 f- zmm7_1)
    (*(*rcx_216 + 0x2b0))(rcx_216, zmm1_2, &var_320)
    int64_t rcx_217 = var_320
    
    if (rcx_217 != 0)
        sub_140a74f90(rcx_217)
    
    int64_t rcx_218 = var_2e8
    
    if (rcx_218 != 0)
        sub_140a74f90(rcx_218)
    
    sub_140a751d0()
    sub_14094c030(rsi_11)
    result.b = 1
else
    int16_t* rsi_10 = &data_142d40450
    int16_t* rdx_53
    
    if (performanceCount_2[1].d == 0)
        rdx_53 = &data_142d40450
    else
        rdx_53 = *performanceCount_2
    
    sub_140b58260(&var_348, rdx_53, 1)
    int64_t* rax_101 = var_348
    uint32_t rdi_11 = zx.d(*arg2)
    int32_t r10_2 = sub_140b5ead0(rax_101.d) + rax_101:4.d
    uint32_t* rax_109
    
    if (data_143a305d8 == data_143a30604)
    labelid_10b:
        rax_109 = sub_1420d76a0(&data_143a305d0, r10_2, &var_348)
    else
        void* rdx_54 = data_143a30610
        void* rax_107 = &data_143a30608
        
        if (rdx_54 != 0)
            rax_107 = rdx_54
        
        int32_t rax_108 = *(rax_107 + ((sx.q(data_143a30618 - 1) & sx.q(r10_2)) << 2))
        
        if (rax_108 == 0xffffffff)
        label_1423e8376:
            rax_109 = sub_1420d76a0(&data_143a305d0, r10_2, &var_348)
        else
            int64_t r9_9 = data_143a305d0
            int64_t r8_14
            
            while (true)
                r8_14 = sx.q(rax_108) * 5
                
                if (*(r9_9 + (r8_14 << 2)) == var_348)
                    break
                
                rax_108 = *(r9_9 + (r8_14 << 2) + 0xc)
                
                if (rax_108 == 0xffffffff)
                    goto label_1423e8376_2
            
            if (rax_108 == 0xffffffff)
            label_1423e8376_1:
                rax_109 = sub_1420d76a0(&data_143a305d0, r10_2, &var_348)
            else
                void* rax_110 = r9_9 + (r8_14 << 2)
                
                if (rax_110 == 0)
                label_1423e8376_2:
                    rax_109 = sub_1420d76a0(&data_143a305d0, r10_2, &var_348)
                else
                    rax_109 = rax_110 + 8
    
    *rax_109 = rdi_11
    int16_t* rdx_57
    
    if (performanceCount_2[1].d == 0)
        rdx_57 = &data_142d40450
    else
        rdx_57 = *performanceCount_2
    
    uint64_t rax_111 = sub_140d1fe00(nullptr, rdx_57)
    var_350 = rax_111
    rdi_11.b = rax_111 != 0
    
    if (rax_111 == 0)
        int16_t* rdx_58
        
        if (performanceCount_2[1].d == rax_111.d)
            rdx_58 = &data_142d40450
        else
            rdx_58 = *performanceCount_2
        
        int32_t r8_16 = 0
        var_378.q = 0
        
        if (*arg2 == 3)
            r8_16 = 0x80000
        
        var_350 = sub_140d23fd0(nullptr, rdx_58, r8_16, nullptr, var_378)
    
    sub_140943780(&data_143a305d0, var_348)
    uint64_t rcx_124 = var_350
    int64_t rcx_127
    
    if (rcx_124 != 0)
        void* rax_117 = sub_142435380(rcx_124)
        var_358 = rax_117
        
        if (rax_117 == 0)
            void* rax_118 = sub_142435740(var_350, nullptr)
            var_358 = rax_118
            
            if (rax_118 != 0)
                rdi_11.b = 1
                var_350 = sub_140d21d80(rax_118)
                rax_117 = var_358
            
            if (rax_118 != 0 && rax_117 != 0)
                goto label_1423e8537
            
            if (performanceCount_2[1].d != 0)
                rsi_10 = *performanceCount_2
            
            int64_t var_278
            sub_140a2e390(&var_278, u"Failed to load package '%s'", rsi_10)
            
            if (r15 == &var_278)
                rcx_127 = var_278
                goto label_1423e8457
            
            int64_t rcx_134 = *r15
            
            if (rcx_134 != 0)
                sub_140a74f90(rcx_134)
            
            *r15 = var_278
            int32_t var_270
            r15[1].d = var_270
            int32_t var_26c
            *(r15 + 0xc) = var_26c
            goto label_1423e8464
        
    label_1423e8537:
        zmm6 = sub_1420fcdf0(*(rax_117 + 0x30))
        char rax_123 = *arg2
        
        if (rax_123 == 3)
            void* rcx_136 = var_358
            
            if (rdi_11.b != 0 || *(rcx_136 + 0x11a) == 2)
                if (*(arg2 + 0x230) == 0xffffffff)
                    *(arg2 + 0x230) = 0
                
                rbx_20 = arg1
                void* rax_127 =
                    (*(*rbx_20 + 0x390))(rbx_20, arg2, rcx_136, performanceCount_2, var_378)
                var_358 = rax_127
                data_143de5451 = 1
                (*(*rbx_20 + 0x368))(rbx_20, rax_127)
            else
                if (*(arg2 + 0x230) != 0xffffffff && (arg4 == 0 || *(arg4 + 0x38) != 0))
                    rcx_136 = var_358
                
                rbx_20 = arg1
                (*(*rbx_20 + 0x368))(rbx_20, rcx_136)
            
            goto label_1423e8689
        
        if (rax_123 != 1 || (*(var_358 + 0x11b) & 0x40) == 0 || *(arg2 + 0x230) == 0xffffffff)
            goto label_1423e8678
        
        void* rax_130
        rax_130, zmm6 = sub_1423d7070(arg2, performanceCount_2, &var_350)
        var_358 = rax_130
        
        if (rax_130 != 0)
            goto label_1423e8678
        
        if (performanceCount_2[1].d != rax_130.d)
            rsi_10 = *performanceCount_2
        
        int64_t var_268
        sub_140a2e390(&var_268, u"Failed to load package '%s' into a new game world.", rsi_10)
        
        if (r15 != &var_268)
            int64_t rcx_143 = *r15
            
            if (rcx_143 != 0)
                sub_140a74f90(rcx_143)
            
            *r15 = var_268
            int32_t var_260
            r15[1].d = var_260
            int32_t var_25c
            *(r15 + 0xc) = var_25c
            goto label_1423e8464
        
        rcx_127 = var_268
    else
        if (performanceCount_2[1].d != rcx_124.d)
            rsi_10 = *performanceCount_2
        
        int64_t var_288
        sub_140a2e390(&var_288, u"Failed to load package '%s'", rsi_10)
        
        if (r15 != &var_288)
            int64_t rcx_126 = *r15
            
            if (rcx_126 != 0)
                sub_140a74f90(rcx_126)
            
            *r15 = var_288
            int32_t var_280
            r15[1].d = var_280
            int32_t var_27c
            *(r15 + 0xc) = var_27c
            goto label_1423e8464
        
        rcx_127 = var_288
    
label_1423e8457:
    
    if (rcx_127 == 0)
        goto label_1423e8464
    
    sub_140a74f90(rcx_127)
label_1423e8464:
    
    if (rbx_19 != 0)
        sub_140a74f90(rbx_19)
    
    sub_140920c10(&data_1439aa970, 0)
    sub_140a751d0()
    sub_14094c030(arg3)
    result.b = 0
label_1423e8e15:
__security_check_cookie(rax_1 ^ &var_398)
return result
