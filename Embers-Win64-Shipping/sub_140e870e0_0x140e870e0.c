// 函数: sub_140e870e0
// 地址: 0x140e870e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_668
int64_t rax_1 = __security_cookie ^ &var_668
int32_t var_588 = 0
arg1[0xb0].d += 1
char var_638 = arg4
int64_t* r14 = arg3
int64_t* var_608 = arg3
int32_t r13 = 0
int64_t var_5a8
void var_3c8
sub_140d94220(&var_5a8, sub_140d947e0(&var_3c8))
void var_278
sub_140596d80(&var_278)
int64_t* var_280

if (var_280 != 0)
    var_280[1].d -= 1
    
    if (var_280[1].d == 1)
        (**var_280)(var_280)
        int32_t temp1_1 = *(var_280 + 0xc)
        *(var_280 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_280 + 8))(var_280, 1)

void var_3c0
sub_140d94d20(&var_3c0)
void* var_5e8
sub_140e683e0(arg1, &var_5e8, *(r14 + 0xc))
float zmm0[0x4] = sub_140e732d0(var_5e8, r14)
void* r10 = var_5e8
int64_t* var_628
int32_t i_2
int128_t var_5c8
int64_t* var_5b8
void** var_568
int128_t var_4e8
int64_t* var_4a8
char var_4a0
char var_488
char var_268
int64_t* var_610

if (*(r10 + 0x1d0) != 0)
label_140e874e5:
    
    if (*(r10 + 0x1f8) == *(r10 + 0x224))
    label_140e87552:
        sub_140d94220(&var_628, sub_140d947e0(&var_3c8))
        sub_140596d80(&var_278)
        
        if (var_280 != 0)
            var_280[1].d -= 1
            
            if (var_280[1].d == 1)
                (**var_280)(var_280)
                int32_t temp3_1 = *(var_280 + 0xc)
                *(var_280 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_280 + 8))(var_280, 1)
        
        sub_140d94d20(&var_3c0)
    else
        void* r8_4 = r10 + 0x228
        void* rdx_10 = *(r8_4 + 8)
        int64_t r9_1 = sx.q(r14[0xa].d)
        
        if (rdx_10 != 0)
            r8_4 = rdx_10
        
        int32_t rax_31 = *(r8_4 + (((sx.q(*(r10 + 0x238)) - 1) & r9_1) << 2))
        
        if (rax_31 == 0xffffffff)
            goto label_140e87552
        
        int64_t r8_5 = *(r10 + 0x1f0)
        int64_t rdx_11
        
        while (true)
            rdx_11 = sx.q(rax_31)
            int64_t rcx_40 = rdx_11 * 6
            
            if (*(r8_5 + (rcx_40 << 3)) == r9_1.d)
                break
            
            rax_31 = *(r8_5 + (rcx_40 << 3) + 0x28)
            
            if (rax_31 == 0xffffffff)
                goto label_140e87552
        
        if (rax_31 == 0xffffffff)
            goto label_140e87552
        
        int64_t rsi_3 = rdx_11 * 0x30
        void* rsi_4 = rsi_3 + r8_5
        
        if (rsi_3 == neg.q(r8_5))
            goto label_140e87552
        
        var_628 = nullptr
        int32_t i_1 = *(rsi_4 + 0x10)
        int64_t* rbx_11 = *(rsi_4 + 8)
        i_2 = i_1
        
        if (i_1 != 0)
            sub_1405a4be0(&var_628, i_1, 0)
            int64_t* rcx_69 = var_628
            int32_t i
            
            do
                *rcx_69 = *rbx_11
                void* rax_57 = rbx_11[1]
                rcx_69[1] = rax_57
                
                if (rax_57 != 0)
                    *(rax_57 + 0xc) += 1
                
                rcx_69 = &rcx_69[2]
                rbx_11 = &rbx_11[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        else
            int32_t var_61c_1 = 0
        
        int64_t var_618_2 = *(rsi_4 + 0x18)
        int64_t* rax_59 = *(rsi_4 + 0x20)
        var_610 = rax_59
        
        if (rax_59 != 0)
            *(rax_59 + 0xc) += 1
    
    sub_140e553b0(&var_5a8, &var_628)
    
    if (var_610 != 0)
        int32_t temp5_1 = *(var_610 + 0xc)
        *(var_610 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_610 + 8))(var_610, 1)
    
    zmm0 = sub_140d94cb0(&var_628)
    r10 = var_5e8
else
    if (arg4 == 0)
        sub_140e5e850(r10, &var_3c8, r14, arg1[0x2f].d)
        
        if (sub_140db3500(&var_3c8) != 0)
            void* rdx_4 = &var_3c0
            void* var_2a0
            
            if (var_2a0 != 0)
                rdx_4 = var_2a0
            
            int32_t var_298
            int64_t rax_9 = sx.q(var_298 - 1) * 9
            int64_t* rbx_1 = *(rdx_4 + (rax_9 << 3) + 0x40)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            var_588.q = *(rdx_4 + (rax_9 << 3) + 0x38)
            int64_t* var_580_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int128_t* rdi_1 = sub_140d94370(&var_488)
            int128_t* rax_11 = sub_140d9fe70(&var_3c8, &var_568, &var_588)
            
            if (*(rax_11 + 0x58) != 0)
                rdi_1 = rax_11
            
            var_4e8 = *rdi_1
            uint128_t var_4d8_1 = rdi_1[1]
            int128_t var_4c8_1 = rdi_1[2]
            uint64_t var_4b8_1 = rdi_1[3].q
            int64_t var_4b0_1 = *(rdi_1 + 0x38)
            int64_t* rax_13 = rdi_1[4].q
            var_4a8 = rax_13
            
            if (rax_13 != 0)
                rax_13[1].d += 1
            
            var_4a0 = (*(rdi_1 + 0x48)).b
            int64_t* rax_15 = rdi_1[5].q
            
            if (rax_15 != 0)
                rax_15[1].d += 1
            
            char var_510
            
            if (var_510 != 0)
                char var_510_1 = 0
                sub_140e545a0(&var_568)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp22_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* var_438
            
            if (var_438 != 0)
                var_438[1].d -= 1
                
                if (var_438[1].d == 1)
                    (**var_438)(var_438)
                    int32_t temp28_1 = *(var_438 + 0xc)
                    *(var_438 + 0xc) -= 1
                    
                    if (temp28_1 == 1)
                        (*(*var_438 + 8))(var_438, 1)
            
            int64_t* var_448
            
            if (var_448 != 0)
                var_448[1].d -= 1
                
                if (var_448[1].d == 1)
                    (**var_448)(var_448)
                    int32_t temp34_1 = *(var_448 + 0xc)
                    *(var_448 + 0xc) -= 1
                    
                    if (temp34_1 == 1)
                        (*(*var_448 + 8))(var_448, 1)
            
            sub_140d94220(&var_628, &var_3c8)
            sub_140e553b0(&var_5a8, &var_628)
            
            if (var_610 != 0)
                int32_t temp33_1 = *(var_610 + 0xc)
                *(var_610 + 0xc) -= 1
                
                if (temp33_1 == 1)
                    (*(*var_610 + 8))(var_610, 1)
            
            sub_140d94cb0(&var_628)
            var_628.b = 0
            i_2.q = &var_3c8
            var_610 = &var_4e8
            var_5c8 = var_628.o
            var_5b8.o = arg2.o
            void var_600
            void* var_648_1 = &var_600
            sub_140e4d6c0(&var_268, arg1, &var_5c8, sub_140e51390(&var_568, r14))
            sub_140597700(&var_268)
            
            if (rax_15 != 0)
                rax_15[1].d -= 1
                
                if (rax_15[1].d == 1)
                    (**rax_15)(rax_15)
                    int32_t temp46_1 = *(rax_15 + 0xc)
                    *(rax_15 + 0xc) -= 1
                    
                    if (temp46_1 == 1)
                        (*(*rax_15 + 8))(rax_15, 1)
            
            if (var_4a8 != 0)
                var_4a8[1].d -= 1
                
                if (var_4a8[1].d == 1)
                    (**var_4a8)(var_4a8)
                    int32_t temp50_1 = *(var_4a8 + 0xc)
                    *(var_4a8 + 0xc) -= 1
                    
                    if (temp50_1 == 1)
                        (*(*var_4a8 + 8))(var_4a8, 1)
        
        sub_140596d80(&var_278)
        
        if (var_280 != 0)
            var_280[1].d -= 1
            
            if (var_280[1].d == 1)
                (**var_280)(var_280)
                int32_t temp6_1 = *(var_280 + 0xc)
                *(var_280 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_280 + 8))(var_280, 1)
        
        zmm0 = sub_140d94d20(&var_3c0)
        r10 = var_5e8
    
    if (*(r10 + 0x1d0) == 0)
        goto label_140e874e5
void var_1a8
sub_140e65360(r10, &var_1a8, r14[0xa].d, 1, zmm0, r14)
void* rax_36 = var_5e8
int64_t* rdi_2 = *(rax_36 + 0x1d0)
int64_t* var_5d8 = rdi_2
int64_t* rbx_8 = *(rax_36 + 0x1d8)
int64_t* var_5d0 = rbx_8

if (rbx_8 != 0)
    rbx_8[1].d += 1
    rbx_8 = var_5d0
    rdi_2 = var_5d8
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1

sub_140e51390(&var_568, r14)
int64_t* var_4f8 = rdi_2
var_568 = &data_142ed7318

if (rbx_8 != 0)
    rbx_8[1].d += 1
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp11_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)

int64_t* var_590

if (var_590 != 0)
    int32_t rax_39 = var_590[1].d
    
    if (rax_39 != 0)
        var_590[1].d = rax_39 + 1
        var_590[1].d -= 1
        
        if (var_590[1].d == 1)
            (**var_590)(var_590)
            int32_t temp13_1 = *(var_590 + 0xc)
            *(var_590 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_590 + 8))(var_590, 1)

int32_t var_5a0
int32_t r15_2 = var_5a0 - 1
int64_t r12 = sx.q(r15_2)

if (var_5a0 - 1 s>= 0)
    int64_t* rsi_1 = var_608
    int64_t temp17_1
    
    do
        if (r15_2 s>= var_5a0)
            uint64_t rax_45 = zx.q(r15_2 - var_5a0 + 1)
            r15_2 -= rax_45.d
            r12 -= rax_45
        
        if (r12 s>= 0)
            rdi_2 = nullptr
            int64_t** rcx_59 = (r12 << 4) + var_5a8
            int64_t* rbx_10 = rcx_59[1]
            
            if (rbx_10 != 0)
                int32_t rax_46 = rbx_10[1].d
                
                if (rax_46 == 0)
                    rbx_10 = nullptr
                else
                    rbx_10[1].d = rax_46 + 1
                    
                    if (rbx_10 != 0)
                        rdi_2 = *rcx_59
            
            if (rdi_2 != 0)
                if (rbx_10 != 0)
                    rbx_10[1].d += 1
                
                var_5c8.q = rdi_2
                var_5c8:8.q = rbx_10
                
                if (rbx_10 != 0)
                    rbx_10[1].d += 1
                
                sub_140d9fd80(arg2, &var_4e8, &var_5c8)
                
                if (rbx_10 != 0)
                    rbx_10[1].d -= 1
                    
                    if (rbx_10[1].d == 1)
                        (**rbx_10)(rbx_10)
                        int32_t temp44_1 = *(rbx_10 + 0xc)
                        *(rbx_10 + 0xc) -= 1
                        
                        if (temp44_1 == 1)
                            (*(*rbx_10 + 8))(rbx_10, 1)
                
                if (var_4a0 != 0)
                label_140e87945:
                    var_4a0 = 0
                    
                    if (var_4a8 != 0)
                        var_4a8[1].d -= 1
                        
                        if (var_4a8[1].d == 1)
                            (**var_4a8)(var_4a8)
                            int32_t temp52_1 = *(var_4a8 + 0xc)
                            *(var_4a8 + 0xc) -= 1
                            
                            if (temp52_1 == 1)
                                (*(*var_4a8 + 8))(var_4a8, 1)
                else
                    int64_t* rcx_63 = *(var_5e8 + 0x1d0)
                    char rax_52
                    
                    if (rcx_63 != 0)
                        rax_52 = (*(*rcx_63 + 8))(rcx_63, r14)
                    
                    if (rcx_63 == 0 || rax_52 == 0)
                        char rax_60 = sub_140db3500(&var_1a8)
                        char rax_61
                        
                        if (rax_60 != 0)
                            r13 |= 1
                            rsi_1 = rbx_10
                            
                            if (rbx_10 != 0)
                                rbx_10[1].d += 1
                            
                            var_628 = rdi_2
                            i_2.q = rbx_10
                            
                            if (rbx_10 != 0)
                                rbx_10[1].d += 1
                            
                            rax_61 = sub_140d9c320(&var_1a8, &var_628)
                        
                        if (rax_60 == 0 || rax_61 != 0)
                            r14.b = 1
                        else
                            r14.b = 0
                        
                        if ((r13.b & 1) != 0)
                            r13 &= 0xfffffffe
                            
                            if (rsi_1 != 0)
                                rsi_1[1].d -= 1
                                
                                if (rsi_1[1].d == 1)
                                    (**rsi_1)(rsi_1)
                                    int32_t temp56_1 = *(rsi_1 + 0xc)
                                    *(rsi_1 + 0xc) -= 1
                                    
                                    if (temp56_1 == 1)
                                        (*(*rsi_1 + 8))(rsi_1, 1)
                        
                        bool cond:1_1 = r14.b == 0
                        r14 = var_608
                        
                        if (not(cond:1_1))
                            (*(*rdi_2 + 0x80))(rdi_2, r14)
                    else
                        (*(*rdi_2 + 0xc8))(rdi_2, &var_568)
                        char var_584_1 = 0
                        
                        if (rbx_8 != 0)
                            rbx_8[1].d += 1
                        
                        sub_140dbd890(var_4f8, &var_588)
                        
                        if (rbx_8 != 0)
                            rbx_8[1].d -= 1
                            
                            if (rbx_8[1].d == 1)
                                (**rbx_8)(rbx_8)
                                int32_t temp55_1 = *(rbx_8 + 0xc)
                                *(rbx_8 + 0xc) -= 1
                                
                                if (temp55_1 == 1)
                                    (*(*rbx_8 + 8))(rbx_8, 1)
                    
                    if (var_4a0 != 0)
                        goto label_140e87945
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    (**rbx_10)(rbx_10)
                    int32_t temp32_1 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*rbx_10 + 8))(rbx_10, 1)
        
        r15_2 -= 1
        temp17_1 = r12
        r12 -= 1
    while (temp17_1 - 1 s>= 0)

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp15_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rbx_8 + 8))(rbx_8, 1)

int64_t* var_520

if (var_520 != 0)
    var_520[1].d -= 1
    
    if (var_520[1].d == 1)
        (**var_520)(var_520)
        int32_t temp16_1 = *(var_520 + 0xc)
        *(var_520 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_520 + 8))(var_520, 1)

int64_t* rsi_5

if (sub_140db3500(&var_1a8) == 0)
    int64_t* rcx_92 = *(var_5e8 + 0x1d0)
    char rax_82
    
    if (rcx_92 != 0)
        rax_82 = (*(*rcx_92 + 8))(rcx_92, r14)
    
    int64_t* rbx_17
    
    if (rcx_92 == 0 || rax_82 == 0)
        i_2.q = arg2
        var_638 = 0
        var_628.d = *(arg2 + 0x130) - 1
        var_628.o = var_628.o
        var_608 = &var_5a8
        rsi_5 = arg1
        sub_140e495f0(&var_5c8, rsi_5, &var_628, sub_140e51390(&var_568, r14), &var_608)
        rbx_17 = var_5b8
    else
        int64_t* rdi_3 = var_5d8
        var_638 = 1
        
        if (var_5d0 != 0)
            var_5d0[1].d += 1
        
        sub_140e51390(&var_568, r14)
        var_568 = &data_142ed7318
        
        if (var_5d0 != 0)
            var_5d0[1].d += 1
            
            if (var_5d0 != 0)
                var_5d0[1].d -= 1
                
                if (var_5d0[1].d == 1)
                    (**var_5d0)(var_5d0)
                    int32_t temp41_1 = *(var_5d0 + 0xc)
                    *(var_5d0 + 0xc) -= 1
                    
                    if (temp41_1 == 1)
                        (*(*var_5d0 + 8))(var_5d0, 1)
        
        i_2.q = arg2
        var_628.d = *(arg2 + 0x130) - 1
        var_628.o = var_628.o
        var_608 = &var_5a8
        sub_140e51390(&var_488, &var_568)
        int64_t* var_418_1 = rdi_3
        var_488.q = &data_142ed7318
        int64_t* var_410_1 = var_5d0
        
        if (var_5d0 != 0)
            var_5d0[1].d += 1
        
        rsi_5 = arg1
        sub_140e4a1b0(&var_5c8, rsi_5, &var_628, &var_488, &var_608)
        
        if (var_5b8 != 0)
            var_5b8[1].d -= 1
            
            if (var_5b8[1].d == 1)
                (**var_5b8)(var_5b8)
                int32_t temp48_1 = *(var_5b8 + 0xc)
                *(var_5b8 + 0xc) -= 1
                
                if (temp48_1 == 1)
                    (*(*var_5b8 + 8))(var_5b8, 1)
        
        if (var_5d0 != 0)
            var_5d0[1].d -= 1
            
            if (var_5d0[1].d == 1)
                (**var_5d0)(var_5d0)
                int32_t temp51_1 = *(var_5d0 + 0xc)
                *(var_5d0 + 0xc) -= 1
                
                if (temp51_1 == 1)
                    (*(*var_5d0 + 8))(var_5d0, 1)
        
        rbx_17 = var_520
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t temp29_1 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*(*rbx_17 + 8))(rbx_17, 1)
    
    i_2.q = arg2
    var_628.d = *(arg2 + 0x130) - 1
    int128_t zmm0_6 = var_628.o
    var_628 = &var_638
    i_2.q = &var_5d8
    var_5c8 = zmm0_6
    sub_140e4d270(&var_268, rsi_5, &var_5c8, sub_140e51390(&var_568, r14), &var_628)
    rdi_2 = zx.q(var_268)
    sub_140597700(&var_268)
else if (var_638 != 0)
    rsi_5 = arg1
    rdi_2.b = 0
else
    i_2.q = arg2
    var_628.d = *(arg2 + 0x130) - 1
    int128_t zmm0_3 = var_628.o
    var_628 = &var_1a8
    i_2.q = &var_5a8
    var_5c8 = zmm0_3
    rsi_5 = arg1
    sub_140e498e0(&var_588, rsi_5, &var_5c8, sub_140e51390(&var_568, r14), &var_628)
    int64_t* var_578
    
    if (var_578 != 0)
        var_578[1].d -= 1
        
        if (var_578[1].d == 1)
            (**var_578)(var_578)
            int32_t temp25_1 = *(var_578 + 0xc)
            *(var_578 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*var_578 + 8))(var_578, 1)
    
    var_628.b = 0
    i_2.q = &var_1a8
    var_628.o = var_628.o
    var_608 = rsi_5
    sub_140e4e950(&var_488, rsi_5, &var_628, sub_140e51390(&var_568, r14), &var_608)
    rdi_2 = zx.q(var_488)
    sub_140597700(&var_488)

sub_140e73450(var_5e8, r14, arg2)

if (var_5d0 != 0)
    var_5d0[1].d -= 1
    
    if (var_5d0[1].d == 1)
        (**var_5d0)(var_5d0)
        int32_t temp31_1 = *(var_5d0 + 0xc)
        *(var_5d0 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_5d0 + 8))(var_5d0, 1)

void var_58
sub_140596d80(&var_58)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp37_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

void var_1a0
sub_140d94d20(&var_1a0)
int64_t* var_5e0

if (var_5e0 != 0)
    var_5e0[1].d -= 1
    
    if (var_5e0[1].d == 1)
        (**var_5e0)(var_5e0)
        int32_t temp43_1 = *(var_5e0 + 0xc)
        *(var_5e0 + 0xc) -= 1
        
        if (temp43_1 == 1)
            (*(*var_5e0 + 8))(var_5e0, 1)

if (var_590 != 0)
    int32_t temp42_1 = *(var_590 + 0xc)
    *(var_590 + 0xc) -= 1
    
    if (temp42_1 == 1)
        int64_t r8_14 = *var_590
        (*(r8_14 + 8))(var_590, 1, r8_14)

sub_140d94cb0(&var_5a8)
rsi_5[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_668)
return zx.q(rdi_2.b)
