// 函数: ?FPushFile@MRECmpImpl@@UEAAHPEAPEAUMREFile@@PEBGPEAX@Z
// 地址: 0x140e7db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int64_t r12 = 0
char rbx = 0
int32_t var_2e8 = 0
int64_t* r13 = *(arg3 + 0xa8)
int64_t* rdi = arg2
int64_t r15 = *(arg3 + 0xa0)
int64_t* var_2b8 = arg2

if (r13 != 0)
    r13[1].d += 1

uint8_t var_318
uint128_t var_308

if (sub_140db3500(rdi) == 0)
    var_318 = 0
else
    rbx = 1
    var_318 = *(*sub_140db22a0(rdi, &var_308) + 0x779) u>> 1 & 1

int64_t* var_300

if ((rbx & 1) != 0 && var_300 != 0)
    var_300[1].d -= 1
    
    if (var_300[1].d == 1)
        (**var_300)(var_300)
        int32_t temp1_1 = *(var_300 + 0xc)
        *(var_300 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_300 + 8))(var_300, 1)

int32_t r14_1

if (arg5 == 0)
    r14_1 = 0xa
else
    r14_1 = *(arg5 + 0x50)

int64_t* var_2d0
uint128_t zmm0 = sub_140e683e0(arg1, &var_2d0, arg6)

if (sub_140e6a060(var_2d0, r14_1) != 0 && ((*(arg3 + 0xb4) & 1) != 0 || r15 != 0))
    zmm0 = sub_140e85470(var_2d0, r14_1)

int32_t rcx_8 = *(arg3 + 0xb4)
void var_1b8
void var_1b0
int64_t* var_70
void var_68

if (((rcx_8 u>> 2).b & 1) != 0)
    char rdi_1 = *(arg3 + 0xb0)
    
    if (((rcx_8 u>> 3).b & 1) == 0)
        zmm0 = sub_140e5ad70(data_143e29f28, var_2d0[3].d, rdi_1)
    else
        (*(*arg1 + 0x148))(arg1, sub_140d947e0(&var_1b8), zx.q(rdi_1))
        sub_140596d80(&var_68)
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp3_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        zmm0 = sub_140d94d20(&var_1b0)
    
    rdi = var_2b8

if (((*(arg3 + 0xb4) u>> 7).b & 1) != 0)
    zmm0 = sub_140e5a710(var_2d0)

char var_328
int64_t* var_2e0
int64_t* var_298
int128_t var_270
int64_t* var_258
void** var_238

if (r15 != 0)
    if (r13 != 0)
        r13[1].d += 1
    
    int64_t* rax_17 = var_2d0
    
    if (r13 != 0)
        r13[1].d += 1
    
    int64_t rax_20
    int64_t* rcx_19
    
    if (&rax_17[0x3a] != &var_308)
        rax_17[0x3a] = r15
        int64_t* rbx_5 = rax_17[0x3b]
        
        if (r13 == rbx_5)
            goto label_140e7dd53
        
        rax_17[0x3b] = r13
        
        if (rbx_5 == 0)
            goto label_140e7dd7e
        
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d != 1)
            goto label_140e7dd7e
        
        (**rbx_5)(rbx_5)
        int32_t temp11_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp11_1 != 1)
            goto label_140e7dd7e
        
        rax_20 = *rbx_5
        rcx_19 = rbx_5
        goto label_140e7dd7b
    
label_140e7dd53:
    
    if (r13 != 0)
        r13[1].d -= 1
        
        if (r13[1].d != 1)
            goto label_140e7dd7e
        
        (**r13)(r13)
        int32_t temp6_1 = *(r13 + 0xc)
        *(r13 + 0xc) -= 1
        
        if (temp6_1 != 1)
            goto label_140e7dd7e
        
        rax_20 = *r13
        rcx_19 = r13
    label_140e7dd7b:
        (*(rax_20 + 8))(rcx_19, 1)
    label_140e7dd7e:
        
        if (r13 != 0)
            r13[1].d -= 1
            
            if (r13[1].d == 1)
                (**r13)(r13)
                int32_t temp15_1 = *(r13 + 0xc)
                *(r13 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*r13 + 8))(r13, 1)
    
    char* rax_25 = sub_140dbf000(&var_270, &var_1b8, 0, 0, sub_140e67580(var_2d0, &var_270, r14_1), 
        data_1439ae51c)
    char* var_2e0_1 = rax_25
    var_2e8 = *(rax_25 + 0x130) - 1
    var_308 = var_2e8.o
    var_328.q = &var_2e8
    sub_140e49c00(&var_298, arg1, &var_308, sub_140e51390(&var_238, arg5))
    int64_t* var_288
    
    if (var_288 != 0)
        var_288[1].d -= 1
        
        if (var_288[1].d == 1)
            (**var_288)(var_288)
            int32_t temp9_1 = *(var_288 + 0xc)
            *(var_288 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_288 + 8))(var_288, 1)
    
    sub_140596d80(&var_68)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp14_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    sub_140d94d20(&var_1b0)
    int64_t* var_2e0_2 = rdi
    var_2e8 = rdi[0x26].d - 1
    var_308 = var_2e8.o
    var_2e8.q = r15
    var_2e0 = r13
    
    if (r13 != 0)
        r13[1].d += 1
    
    var_328.q = &var_2e8
    sub_140e49e90(&var_298, arg1, &var_308, sub_140e50d60(&var_238, arg5, &var_2e8))
    
    if (var_288 != 0)
        var_288[1].d -= 1
        
        if (var_288[1].d == 1)
            (**var_288)(var_288)
            int32_t temp25_1 = *(var_288 + 0xc)
            *(var_288 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*var_288 + 8))(var_288, 1)
    
    if (var_258 != 0)
        int32_t temp24_1 = *(var_258 + 0xc)
        *(var_258 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*var_258 + 8))(var_258, 1)
    
    zmm0 = sub_140d94cb0(&var_270)

uint8_t rax_38

if (arg1[0x2e].b == 0)
    rax_38 = var_318

int32_t var_290
int64_t* var_280
int16_t var_230
void* r15_2

if (arg1[0x2e].b == 0 && rax_38 == 0)
    r15_2 = arg3
else
    int64_t* rsi_1 = *(arg3 + 0x40)
    int64_t rdi_2 = 0
    
    if (rsi_1 != 0)
        int32_t rax_39 = rsi_1[1].d
        
        if (rax_39 == 0)
            rsi_1 = nullptr
        else
            rsi_1[1].d = rax_39 + 1
        
        if (rsi_1 != 0)
            rdi_2 = *(arg3 + 0x38)
            var_2e8.q = rdi_2
            
            if (rdi_2 != 0 && r15 == 0)
                if (rsi_1 != 0)
                    rsi_1[1].d += 1
                
                var_308.q = rdi_2
                var_300 = rsi_1
                
                if (rsi_1 != 0)
                    rsi_1[1].d += 1
                
                char rax_42
                rax_42, zmm0 = sub_140e89440(var_2d0, r14_1, &var_308, var_2b8)
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        int64_t rdx_13 = *rsi_1
                        (*rdx_13)(rsi_1, rdx_13)
                        int32_t temp32_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp32_1 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
                
                if (rax_42 != 0 && arg4 != 0)
                    sub_140e67580(var_2d0, &var_298, r14_1)
                    
                    if (var_290 s> 0)
                        int64_t r15_1 = sx.q(var_290 - 1)
                        
                        if (var_290 - 1 s>= 0)
                            int64_t r14_3 = r15_1 << 4
                            int64_t temp49_1
                            
                            do
                                int64_t* rcx_45 = var_298
                                int64_t* rbx_10 = *(rcx_45 + r14_3 + 8)
                                
                                if (rbx_10 != 0)
                                    int32_t rax_47 = rbx_10[1].d
                                    
                                    if (rax_47 != 0)
                                        rbx_10[1].d = rax_47 + 1
                                        
                                        if (rbx_10 != 0)
                                            int64_t* rcx_46 = *(rcx_45 + r14_3)
                                            
                                            if (rcx_46 != 0)
                                                if (rcx_46 == rdi_2)
                                                    rbx_10[1].d -= 1
                                                    
                                                    if (rbx_10[1].d == 1)
                                                        (**rbx_10)(rbx_10)
                                                        int32_t temp75_1 = *(rbx_10 + 0xc)
                                                        *(rbx_10 + 0xc) -= 1
                                                        
                                                        if (temp75_1 == 1)
                                                            (*(*rbx_10 + 8))(rbx_10, 1)
                                                    
                                                    break
                                                
                                                if (arg5 == 0)
                                                    var_230 &= 0xfe00
                                                    char var_22e_1 = 0
                                                    int32_t var_22c
                                                    __builtin_memset(&var_22c, 0, 0x24)
                                                    var_238 = &data_142ecfd88
                                                    int64_t* var_208_1 = &data_143e20e70
                                                    int64_t var_200
                                                    __builtin_memset(&var_200, 0, 0x20)
                                                    int32_t var_1e0_1 = 0x3f800000
                                                    int16_t var_1dc_1 = 0
                                                    int64_t var_1d8_1 = 0
                                                    int16_t var_1d0_1 = 0
                                                    char var_1ce_1 = 0
                                                    (*(*rcx_46 + 0x80))(rcx_46, &var_238)
                                                    int128_t var_1f8
                                                    int64_t* rdi_3 = var_1f8:8.q
                                                    
                                                    if (rdi_3 != 0)
                                                        rdi_3[1].d -= 1
                                                        
                                                        if (rdi_3[1].d == 1)
                                                            (**rdi_3)(rdi_3)
                                                            int32_t temp84_1 = *(rdi_3 + 0xc)
                                                            *(rdi_3 + 0xc) -= 1
                                                            
                                                            if (temp84_1 == 1)
                                                                (*(*rdi_3 + 8))(rdi_3, 1)
                                                    
                                                    rdi_2 = var_2e8.q
                                                else
                                                    (*(*rcx_46 + 0x80))()
                                            
                                            rbx_10[1].d -= 1
                                            
                                            if (rbx_10[1].d == 1)
                                                (**rbx_10)(rbx_10)
                                                int32_t temp69_1 = *(rbx_10 + 0xc)
                                                *(rbx_10 + 0xc) -= 1
                                                
                                                if (temp69_1 == 1)
                                                    (*(*rbx_10 + 8))(rbx_10, 1)
                                
                                r14_3 -= 0x10
                                temp49_1 = r15_1
                                r15_1 -= 1
                            while (temp49_1 - 1 s>= 0)
                    
                    if (var_280 != 0)
                        int32_t temp42_1 = *(var_280 + 0xc)
                        *(var_280 + 0xc) -= 1
                        
                        if (temp42_1 == 1)
                            (*(*var_280 + 8))(var_280, 1)
                    
                    zmm0 = sub_140d94cb0(&var_298)
                
                *(var_2d0 + 0x31) = 1
    
    if (var_318 != 0)
        r15_2 = arg3
    else
        int64_t* rbx_11 = var_2b8
        r15_2 = arg3
        
        if (sub_140db3500(rbx_11) != 0 && rdi_2 != 0 && ((*(r15_2 + 0xb4) u>> 5).b & 1) != 0)
            sub_140db22a0(rbx_11, &var_2e8)
            int64_t* rbx_12 = data_143e20d18
            (*(*rbx_12 + 0x48))(rbx_12, sub_140e152a0(var_2e8.q, &var_308))
            
            if (var_300 != 0)
                var_300[1].d -= 1
                
                if (var_300[1].d == 1)
                    (**var_300)(var_300)
                    int32_t temp18_1 = *(var_300 + 0xc)
                    *(var_300 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*var_300 + 8))(var_300, 1)
            
            int64_t* rbx_14 = data_143e20d18
            int128_t* rdx_20
            rdx_20.b = 1
            (*(*rbx_14 + 0x78))(rbx_14, rdx_20, sub_140e152a0(var_2e8.q, &var_308))
            
            if (var_300 != 0)
                var_300[1].d -= 1
                
                if (var_300[1].d == 1)
                    (**var_300)(var_300)
                    int32_t temp22_1 = *(var_300 + 0xc)
                    *(var_300 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*var_300 + 8))(var_300, 1)
            
            *(var_2d0 + 0x31) = 1
            
            if (var_2e0 != 0)
                var_2e0[1].d -= 1
                
                if (var_2e0[1].d == 1)
                    (**var_2e0)(var_2e0)
                    int32_t temp27_1 = *(var_2e0 + 0xc)
                    *(var_2e0 + 0xc) -= 1
                    
                    if (temp27_1 == 1)
                        (*(*var_2e0 + 8))(var_2e0, 1)
    
    if (*(r15_2 + 0x20) != 0)
        int64_t rax_71 = *(r15_2 + 0x18)
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rax_71.d))
        zmm0 = sub_140e89a20(var_2d0, 0xa, int.d(zmm1_1.d), 
            int.d(_mm_cvtepi32_ps(zx.o((rax_71 u>> 0x20).d)).d))
    
    int64_t* rbx_17 = *(r15_2 + 0x60)
    
    if (rbx_17 != 0)
        int32_t rax_72 = rbx_17[1].d
        
        if (rax_72 != 0)
            rbx_17[1].d = rax_72 + 1
            rax_72.b = 1
        
        if (rax_72.b == 0)
            rbx_17 = nullptr
    
    rdi = nullptr
    
    if (rbx_17 != 0)
        rdi = *(r15_2 + 0x58)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t temp16_1 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_17 + 8))(rbx_17, 1)
    
    if (rdi != 0)
        int64_t* rbx_18 = *(r15_2 + 0x60)
        int64_t r14_4 = 0
        
        if (rbx_18 != 0)
            int32_t rax_75 = rbx_18[1].d
            
            if (rax_75 != 0)
                rbx_18[1].d = rax_75 + 1
                rax_75.b = 1
            
            if (rax_75.b == 0)
                rbx_18 = nullptr
            
            if (rbx_18 != 0)
                r14_4 = *(r15_2 + 0x58)
        
        rdi = var_2d0
        
        if (rdi[4] != 0)
            sub_140d947e0(&var_1b8)
            var_308.q = r14_4
            var_300 = rbx_18
            
            if (rbx_18 != 0)
                rbx_18[1].d += 1
            
            if (sub_140e649d0(data_143e29f28, &var_308, &var_1b8, data_1439ae51c, zmm0) != 0)
                sub_140e6d620(rdi, &var_1b8)
            
            sub_140596d80(&var_68)
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp41_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp41_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            zmm0 = sub_140d94d20(&var_1b0)
        
        if (rbx_18 != 0)
            rbx_18[1].d -= 1
            
            if (rbx_18[1].d == 1)
                (**rbx_18)(rbx_18)
                int32_t temp35_1 = *(rbx_18 + 0xc)
                *(rbx_18 + 0xc) -= 1
                
                if (temp35_1 == 1)
                    (*(*rbx_18 + 8))(rbx_18, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp26_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    rax_38 = var_318

int32_t rsi_3 = arg6

if (rsi_3 == 0 && rax_38 == 0 && sub_140db3500(var_2b8) != 0 && (*(r15_2 + 0xb4) & 1) != 0
        && ((*(r15_2 + 0xb4) u>> 5).b & 1) == 0)
    int64_t* rcx_84 = data_143e20d18
    
    if ((*(*rcx_84 + 0x80))(rcx_84) != 0)
        int64_t* rcx_85 = data_143e20d18
        var_308 = zx.o(0)
        (*(*rcx_85 + 0x78))(rcx_85, 0, &var_308)
        
        if (var_300 != 0)
            var_300[1].d -= 1
            
            if (var_300[1].d == 1)
                (**var_300)(var_300)
                int32_t temp34_1 = *(var_300 + 0xc)
                *(var_300 + 0xc) -= 1
                
                if (temp34_1 == 1)
                    (*(*var_300 + 8))(var_300, 1)
        
        int64_t* rcx_88 = data_143e20d18
        zmm0 = zx.o(0)
        var_308 = zmm0
        (*(*rcx_88 + 0x48))(rcx_88, &var_308)
        
        if (var_300 != 0)
            var_300[1].d -= 1
            
            if (var_300[1].d == 1)
                (**var_300)(var_300)
                int32_t temp37_1 = *(var_300 + 0xc)
                *(var_300 + 0xc) -= 1
                
                if (temp37_1 == 1)
                    (*(*var_300 + 8))(var_300, 1)
        
        *(var_2d0 + 0x31) = 1

if (((*(r15_2 + 0xb4) u>> 4).b & 1) != 0)
    zmm0 = sub_140e8cde0(var_2d0)

int64_t* rbx_21 = *(r15_2 + 0x80)

if (rbx_21 == 0)
label_140e7e5d1:
    
    if (*(r15_2 + 0xb1) != 7)
        rdi.b = 1
    else
        rdi.b = 0
else
    int32_t rax_97 = rbx_21[1].d
    
    if (rax_97 == 0)
        rbx_21 = nullptr
    else
        rbx_21[1].d = rax_97 + 1
    
    if (rbx_21 == 0)
        goto label_140e7e5d1
    
    if (*(r15_2 + 0x78) != 0 || *(r15_2 + 0xb1) != 7)
        rdi.b = 1
    else
        rdi.b = 0

if (rbx_21 != 0)
    rbx_21[1].d -= 1
    
    if (rbx_21[1].d == 1)
        (**rbx_21)(rbx_21)
        int32_t temp29_1 = *(rbx_21 + 0xc)
        *(rbx_21 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*rbx_21 + 8))(rbx_21, 1)

if (rdi.b != 0)
    sub_140d947e0(&var_1b8)
    uint128_t zmm0_4
    
    if (*(r15_2 + 0xb3) != 1)
        int64_t* rcx_96 = var_2d0
        
        if (rcx_96[0xf] == 0)
            var_328 = data_1439ae51c
            char** rax_102 = sub_140dbffe0(&rcx_96[0xb], &var_308, 0, 0, var_328)
            int64_t* rbx_22 = rax_102[1]
            
            if (rbx_22 != 0)
                rbx_22[1].d += 1
            
            if (&rcx_96[0xf] == &var_2b8)
            label_140e7e6b9:
                
                if (rbx_22 != 0)
                    rbx_22[1].d -= 1
                    
                    if (rbx_22[1].d == 1)
                        (**rbx_22)(rbx_22)
                        int32_t temp51_1 = *(rbx_22 + 0xc)
                        *(rbx_22 + 0xc) -= 1
                        
                        if (temp51_1 == 1)
                            (*(*rbx_22 + 8))(rbx_22, 1)
            else
                rcx_96[0xf] = *rax_102
                int64_t* rdi_6 = rcx_96[0x10]
                
                if (rbx_22 == rdi_6)
                    goto label_140e7e6b9
                
                rcx_96[0x10] = rbx_22
                
                if (rdi_6 != 0)
                    rdi_6[1].d -= 1
                    
                    if (rdi_6[1].d == 1)
                        (**rdi_6)(rdi_6)
                        int32_t temp57_1 = *(rdi_6 + 0xc)
                        *(rdi_6 + 0xc) -= 1
                        
                        if (temp57_1 == 1)
                            (*(*rdi_6 + 8))(rdi_6, 1)
            
            if (var_300 != 0)
                var_300[1].d -= 1
                
                if (var_300[1].d == 1)
                    (**var_300)(var_300)
                    int32_t temp56_1 = *(var_300 + 0xc)
                    *(var_300 + 0xc) -= 1
                    
                    if (temp56_1 == 1)
                        (*(*var_300 + 8))(var_300, 1)
        
        int64_t* rbx_24 = rcx_96[0x10]
        
        if (rbx_24 != 0)
            rbx_24[1].d += 1
        
        zmm0_4 = sub_140d965b0(&var_1b8, rcx_96[0xf])
        
        if (rbx_24 != 0)
            rbx_24[1].d -= 1
            
            if (rbx_24[1].d == 1)
                (**rbx_24)(rbx_24)
                int32_t temp45_1 = *(rbx_24 + 0xc)
                *(rbx_24 + 0xc) -= 1
                
                if (temp45_1 == 1)
                    (*(*rbx_24 + 8))(rbx_24, 1)
        
        rsi_3 = arg6
    else
        zmm0_4 = sub_140d965b0(&var_1b8, arg4)
    
    if (sub_140db3500(&var_1b8) != 0)
        int64_t* rbx_25 = *(r15_2 + 0x80)
        
        if (rbx_25 != 0)
            int32_t rax_111 = rbx_25[1].d
            
            if (rax_111 != 0)
                rbx_25[1].d = rax_111 + 1
                rax_111.b = 1
            
            if (rax_111.b == 0)
                rbx_25 = nullptr
        
        int64_t rdi_7 = 0
        
        if (rbx_25 != 0)
            rdi_7 = *(r15_2 + 0x78)
            rbx_25[1].d -= 1
            
            if (rbx_25[1].d == 1)
                (**rbx_25)(rbx_25)
                int32_t temp54_1 = *(rbx_25 + 0xc)
                *(rbx_25 + 0xc) -= 1
                
                if (temp54_1 == 1)
                    (*(*rbx_25 + 8))(rbx_25, 1)
        
        if (rdi_7 == 0)
            sub_140da4ac0(&var_1b8, &var_308)
            int64_t* rcx_113 = data_143e20d18
            char rdi_8 = *(r15_2 + 0xb2)
            char rbx_26 = *(r15_2 + 0xb1)
            int16_t rcx_114 = *(*(*rcx_113 + 0x58))(rcx_113, &var_2e8)
            var_298 = &data_142ecfdb8
            var_290.w = rcx_114
            int32_t var_88
            int64_t r15_3 = sx.q(var_88 - 1)
            var_290:2.b = 0
            int32_t var_28c_1 = rsi_3
            int64_t var_288_1 = 0
            var_280.b = rbx_26
            var_280:1.b = rdi_8
            __builtin_memset(&var_270, 0, 0x2c)
            char var_240_1 = 0
            
            if (var_88 - 1 s>= 0)
                int64_t r12_2 = r15_3 * 0x48
                int64_t temp79_1
                
                do
                    void* rsi_4 = &var_1b0
                    void* var_90
                    
                    if (var_90 != 0)
                        rsi_4 = var_90
                    
                    void* rsi_5 = rsi_4 + r12_2
                    char* rbx_28 = *(rsi_5 + 0x38) + 0x190
                    
                    if (*(rbx_28 + 0x10) != 0)
                        int64_t* rcx_115 = *(rbx_28 + 8)
                        
                        if (rcx_115 != 0 && (*(*rcx_115 + 0x28))(rcx_115) != 0)
                            int64_t* rcx_116
                            
                            if (*(rbx_28 + 0x10) == 0)
                                rcx_116 = nullptr
                            else
                                rcx_116 = *(rbx_28 + 8)
                            
                            *rbx_28 = (*(*rcx_116 + 0x48))(rcx_116)
                    
                    if (*rbx_28 != 0)
                        int64_t* rcx_117 = *(rsi_5 + 0x38)
                        int64_t* rax_127 =
                            (*(*rcx_117 + 0x140))(rcx_117, &var_238, rsi_5, &var_298, var_328)
                        int64_t* rbx_29 = *(rsi_5 + 0x40)
                        
                        if (rbx_29 != 0)
                            rbx_29[1].d += 1
                        
                        if (rax_127 == &var_2b8)
                        label_140e7e960:
                            
                            if (rbx_29 != 0)
                                rbx_29[1].d -= 1
                                
                                if (rbx_29[1].d == 1)
                                    (**rbx_29)(rbx_29)
                                    int32_t temp90_1 = *(rbx_29 + 0xc)
                                    *(rbx_29 + 0xc) -= 1
                                    
                                    if (temp90_1 == 1)
                                        (*(*rbx_29 + 8))(rbx_29, 1)
                        else
                            *rax_127 = *(rsi_5 + 0x38)
                            int64_t* rdi_9 = rax_127[1]
                            
                            if (rbx_29 == rdi_9)
                                goto label_140e7e960
                            
                            rax_127[1] = rbx_29
                            
                            if (rdi_9 != 0)
                                rdi_9[1].d -= 1
                                
                                if (rdi_9[1].d == 1)
                                    (**rdi_9)(rdi_9)
                                    int32_t temp94_1 = *(rdi_9 + 0xc)
                                    *(rdi_9 + 0xc) -= 1
                                    
                                    if (temp94_1 == 1)
                                        (*(*rdi_9 + 8))(rdi_9, 1)
                        
                        sub_140e54e20(&var_270, rax_127)
                        int128_t var_218
                        sub_140745b20(&var_218)
                        int64_t* var_220
                        
                        if (var_220 != 0)
                            var_220[1].d -= 1
                            
                            if (var_220[1].d == 1)
                                (**var_220)(var_220)
                                int32_t temp93_1 = *(var_220 + 0xc)
                                *(var_220 + 0xc) -= 1
                                
                                if (temp93_1 == 1)
                                    (*(*var_220 + 8))(var_220, 1)
                        
                        int64_t* rbx_31 = var_230.q
                        
                        if (rbx_31 != 0)
                            rbx_31[1].d -= 1
                            
                            if (rbx_31[1].d == 1)
                                (**rbx_31)(rbx_31)
                                int32_t temp95_1 = *(rbx_31 + 0xc)
                                *(rbx_31 + 0xc) -= 1
                                
                                if (temp95_1 == 1)
                                    (*(*rbx_31 + 8))(rbx_31, 1)
                        
                        if (var_240_1 != 0 || *(rsi_5 + 0x38) == var_308.q || r15_3 == 0)
                            var_328.q = rsi_5
                            sub_140e598d0(arg1, &var_1b8, &var_298, &var_270, var_328)
                            break
                    
                    r12_2 -= 0x48
                    temp79_1 = r15_3
                    r15_3 -= 1
                while (temp79_1 - 1 s>= 0)
                r12 = 0
            
            int64_t var_250
            sub_140745b20(&var_250)
            
            if (var_258 != 0)
                var_258[1].d -= 1
                
                if (var_258[1].d == 1)
                    (**var_258)(var_258)
                    int32_t temp68_1 = *(var_258 + 0xc)
                    *(var_258 + 0xc) -= 1
                    
                    if (temp68_1 == 1)
                        (*(*var_258 + 8))(var_258, 1)
            
            int64_t* rbx_33 = var_270:8.q
            
            if (rbx_33 != 0)
                rbx_33[1].d -= 1
                
                if (rbx_33[1].d == 1)
                    (**rbx_33)(rbx_33)
                    int32_t temp74_1 = *(rbx_33 + 0xc)
                    *(rbx_33 + 0xc) -= 1
                    
                    if (temp74_1 == 1)
                        (*(*rbx_33 + 8))(rbx_33, 1)
            
            var_298 = &data_142d7f690
            
            if (var_300 != 0)
                var_300[1].d -= 1
                
                if (var_300[1].d == 1)
                    (**var_300)(var_300)
                    int32_t temp78_1 = *(var_300 + 0xc)
                    *(var_300 + 0xc) -= 1
                    
                    if (temp78_1 == 1)
                        (*(*var_300 + 8))(var_300, 1)
            
            r15_2 = arg3
        else
            void* rcx_110 = *(r15_2 + 0x80)
            var_2b8 = nullptr
            void* var_2b0_1 = rcx_110
            
            if (rcx_110 != 0)
                int32_t rax_114 = *(rcx_110 + 8)
                
                if (rax_114 == 0)
                    int64_t var_2b0_2 = 0
                else
                    *(rcx_110 + 8) = rax_114 + 1
                    
                    if (rcx_110 != 0)
                        var_2b8 = *(r15_2 + 0x78)
            
            sub_140e62da0(arg1, &var_1b8, &var_2b8, rsi_3, zmm0_4, 0)
    
    sub_140596d80(&var_68)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp47_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp47_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    zmm0 = sub_140d94d20(&var_1b0)

int64_t* rbx_36 = *(r15_2 + 0x70)

if (rbx_36 != 0)
    int32_t rax_145 = rbx_36[1].d
    
    if (rax_145 != 0)
        rbx_36[1].d = rax_145 + 1
        rax_145.b = 1
    
    if (rax_145.b == 0)
        rbx_36 = nullptr

int64_t rdi_10 = 0

if (rbx_36 != 0)
    rdi_10 = *(r15_2 + 0x68)
    rbx_36[1].d -= 1
    
    if (rbx_36[1].d == 1)
        (**rbx_36)(rbx_36)
        int32_t temp40_1 = *(rbx_36 + 0xc)
        *(rbx_36 + 0xc) -= 1
        
        if (temp40_1 == 1)
            (*(*rbx_36 + 8))(rbx_36, 1)

if (rdi_10 != 0)
    var_2b8 = *(r15_2 + 0x88)
    int64_t var_2b0_3 = *(r15_2 + 0x90)
    void* rax_150 = *(r15_2 + 0x98)
    void* var_2a8_1 = rax_150
    
    if (rax_150 != 0)
        *(rax_150 + 8) += 1
    
    int64_t* rdi_11 = *(r15_2 + 0x70)
    int32_t rsi_6 = *(arg5 + 0x50)
    
    if (rdi_11 != 0)
        int32_t rax_151 = rdi_11[1].d
        
        if (rax_151 != 0)
            rdi_11[1].d = rax_151 + 1
            rax_151.b = 1
        
        if (rax_151.b == 0)
            rdi_11 = nullptr
    
    int64_t rax_152 = 0
    
    if (rdi_11 != 0)
        rax_152 = *(r15_2 + 0x68)
    
    var_308.q = rax_152
    int64_t* var_300_1 = rdi_11
    
    if (rdi_11 != 0)
        rdi_11[1].d += 1
    
    int64_t* rbx_37 = var_2d0
    char* rax_153 = sub_140da8ef0(arg4, &var_1b8, &var_308)
    var_328.q = *(arg5 + 0x18)
    sub_140e8bb80(rbx_37, rax_153, rsi_6, &var_2b8)
    sub_140596d80(&var_68)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp66_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp66_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    zmm0 = sub_140d94d20(&var_1b0)
    
    if (rdi_11 != 0)
        rdi_11[1].d -= 1
        
        if (rdi_11[1].d == 1)
            (**rdi_11)(rdi_11)
            int32_t temp72_1 = *(rdi_11 + 0xc)
            *(rdi_11 + 0xc) -= 1
            
            if (temp72_1 == 1)
                (*(*rdi_11 + 8))(rdi_11, 1)

int64_t* rbx_39 = *(r15_2 + 0x50)
int64_t* rax_158 = rbx_39

if (rbx_39 == 0)
    goto label_140e7ec9d

int32_t rax_159 = rbx_39[1].d

if (rax_159 == 0)
    rbx_39 = nullptr
else
    rbx_39[1].d = rax_159 + 1
    rax_158 = rbx_39
label_140e7ec9d:
    
    if (rax_158 != 0)
        r12 = *(r15_2 + 0x48)

int32_t rcx_149 = *(r15_2 + 0xb4)
uint8_t result = (rcx_149 u>> 1).b

if ((result & 1) == 0 || r12 == 0)
label_140e7ee39:
    
    if (rbx_39 != 0)
        rbx_39[1].d -= 1
        
        if (rbx_39[1].d == 1)
            result = (**rbx_39)(rbx_39)
            int32_t temp59_1 = *(rbx_39 + 0xc)
            *(rbx_39 + 0xc) -= 1
            
            if (temp59_1 == 1)
                result = (*(*rbx_39 + 8))(rbx_39, 1)
else
    char rdi_12 = *(r15_2 + 0xb0)
    
    if (((rcx_149 u>> 3).b & 1) != 0)
        sub_140d947e0(&var_1b8)
        
        if (rbx_39 != 0)
            rbx_39[1].d += 1
        
        var_308.q = r12
        int64_t* var_300_2 = rbx_39
        
        if (rbx_39 != 0)
            rbx_39[1].d += 1
        
        char rax_162 = sub_140da1990(&arg1[0x30], &var_308, &var_1b8, data_1439ae51c, zmm0)
        
        if (rbx_39 != 0)
            rbx_39[1].d -= 1
            
            if (rbx_39[1].d == 1)
                int64_t rdx_36 = *rbx_39
                (*rdx_36)(rbx_39, rdx_36)
                int32_t temp83_1 = *(rbx_39 + 0xc)
                *(rbx_39 + 0xc) -= 1
                
                if (temp83_1 == 1)
                    (*(*rbx_39 + 8))(rbx_39, 1)
        
        if (rax_162 != 0)
            (*(*arg1 + 0x148))(arg1, &var_1b8, zx.q(rdi_12))
        
        sub_140596d80(&var_68)
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp87_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp87_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        result = sub_140d94d20(&var_1b0)
        goto label_140e7ee39
    
    if (rbx_39 != 0)
        rbx_39[1].d += 1
    
    var_308.q = r12
    int64_t* var_300_3 = rbx_39
    
    if (rbx_39 != 0)
        rbx_39[1].d += 1
    
    result = sub_140e8ab30(data_143e29f28, var_2d0[3].d, &var_308, rdi_12, zmm0)
    
    if (rbx_39 != 0)
        rbx_39[1].d -= 1
        
        if (rbx_39[1].d == 1)
            result = (**rbx_39)(rbx_39)
            int32_t temp82_1 = *(rbx_39 + 0xc)
            *(rbx_39 + 0xc) -= 1
            
            if (temp82_1 == 1)
                result = (*(*rbx_39 + 8))(rbx_39, 1)
        
        rbx_39[1].d -= 1
        
        if (rbx_39[1].d == 1)
            result = (**rbx_39)(rbx_39)
            int32_t temp85_1 = *(rbx_39 + 0xc)
            *(rbx_39 + 0xc) -= 1
            
            if (temp85_1 == 1)
                result = (*(*rbx_39 + 8))(rbx_39, 1)
        
        goto label_140e7ee39

int64_t* var_2c8

if (var_2c8 != 0)
    var_2c8[1].d -= 1
    
    if (var_2c8[1].d == 1)
        result = (**var_2c8)(var_2c8)
        int32_t temp64_1 = *(var_2c8 + 0xc)
        *(var_2c8 + 0xc) -= 1
        
        if (temp64_1 == 1)
            result = (*(*var_2c8 + 8))(var_2c8, 1)

if (r13 != 0)
    r13[1].d -= 1
    
    if (r13[1].d == 1)
        result = (**r13)(r13)
        int32_t temp71_1 = *(r13 + 0xc)
        *(r13 + 0xc) -= 1
        
        if (temp71_1 == 1)
            result = (*(*r13 + 8))(r13, 1)

__security_check_cookie(rax_1 ^ &var_348)
return result
