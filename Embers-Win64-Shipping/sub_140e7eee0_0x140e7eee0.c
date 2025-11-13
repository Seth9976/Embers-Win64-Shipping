// 函数: sub_140e7eee0
// 地址: 0x140e7eee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t var_2a0 = 0
int64_t* var_298
int64_t* rax_3
int64_t rdx
int32_t rbx
int64_t* rdi

if (arg1[0x37].d s<= 0)
    rdi = var_298
    rdx = 0
    rax_3 = nullptr
    rbx = 0x40
else
    int64_t rax_2 = arg1[0x36]
    int64_t rcx_1 = sx.q(arg1[0x37].d) * 2
    rdi = *(rax_2 + (rcx_1 << 3) - 8)
    rdx = *(rax_2 + (rcx_1 << 3) - 0x10)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rbx = 0x20
    rax_3 = rdi

int64_t var_290 = rdx

if (rax_3 != 0)
    rax_3[1].d += 1

if ((rbx.b & 0x40) != 0)
    rbx &= 0xffffffbf

if ((rbx.b & 0x20) != 0)
    rbx &= 0xffffffdf
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)

uint64_t result
int64_t* rdi_5
int64_t var_280

if (*arg2 == 2)
    int64_t* r14_5 = *(arg2 + 0x10)
    int32_t rbx_7 = rbx | 4
    
    if (r14_5 != 0)
        r14_5[1].d += 1
    
    int64_t* rdi_4
    int64_t r13
    int64_t* r15_3
    
    if (sub_140de7d60(*(arg2 + 8)) == 0)
        rdi_4 = var_298
        r15_3 = var_298
        r13.b = 0
    else
        rdi_4 = arg1[0x35]
        rbx_7 |= 0x18
        int64_t rcx_60 = 0
        int64_t* rax_60 = rdi_4
        
        if (rdi_4 == 0)
            goto label_140e7f661
        
        int32_t rax_61 = rdi_4[1].d
        
        if (rax_61 == 0)
            rdi_4 = nullptr
        else
            rdi_4[1].d = rax_61 + 1
            rax_60 = rdi_4
        label_140e7f661:
            
            if (rax_60 != 0)
                rcx_60 = arg1[0x34]
        
        r15_3 = *(arg2 + 0x10)
        
        if (r15_3 != 0)
            r15_3[1].d += 1
        
        if (rcx_60 == 0 || rcx_60 != *(arg2 + 8))
            r13.b = 0
        else
            r13.b = 1
    
    if ((rbx_7.b & 0x10) != 0)
        rbx_7 &= 0xffffffef
        
        if (r15_3 != 0)
            r15_3[1].d -= 1
            
            if (r15_3[1].d == 1)
                (**r15_3)(r15_3)
                int32_t temp7_1 = *(r15_3 + 0xc)
                *(r15_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*r15_3 + 8))(r15_3, 1)
    
    if ((rbx_7.b & 8) != 0 && rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp9_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    if (r14_5 != 0)
        r14_5[1].d -= 1
        
        if (r14_5[1].d == 1)
            (**r14_5)(r14_5)
            int32_t temp8_1 = *(r14_5 + 0xc)
            *(r14_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*r14_5 + 8))(r14_5, 1)
    
    if (r13.b != 0 && &arg1[0x34] != &var_280)
        arg1[0x34] = 0
        int64_t* rcx_67 = arg1[0x35]
        arg1[0x35] = 0
        
        if (rcx_67 != 0)
            int32_t temp10_1 = *(rcx_67 + 0xc)
            *(rcx_67 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rcx_67 + 8))(rcx_67, 1)
    
    *(arg1 + 0x171) = 0
    int64_t* rbx_8 = *(arg2 + 0x10)
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t temp18_1 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
                
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t temp20_1 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rbx_9 = *(arg2 + 0x10)
    int64_t* rcx_72 = *(arg2 + 8)
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    (*(*rcx_72 + 0x240))(rcx_72, arg2)
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp16_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    rdi_5 = *(arg2 + 0x10)
    void* rcx_75 = *(arg2 + 8)
    
    if (rdi_5 != 0)
        rdi_5[1].d += 1
    
    int64_t* rbx_10 = *(rcx_75 + 0x7b8)
    
    if (rbx_10 != 0)
        int32_t rax_79 = rbx_10[1].d
        
        if (rax_79 == 0)
            rbx_10 = nullptr
        else
            rbx_10[1].d = rax_79 + 1
        
        if (rbx_10 != 0)
            int64_t* rcx_76 = *(rcx_75 + 0x7b0)
            
            if (rcx_76 != 0)
                (*(*rcx_76 + 0x148))(rcx_76, arg2)
    
    sub_140e86990(arg1)
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t temp25_1 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)
else
    int128_t zmm0_1
    int512_t zmm1_1
    zmm0_1, zmm1_1 = sub_140e85410(arg1)
    
    if (*arg2 == 1)
        (*(*arg1 + 0x50))(arg1)
        zmm1_1.o = zmm0_1
        zmm1_1 = sub_140e89370(arg1, zmm1_1.o)
    
    int64_t* i = arg1[0x57]
    void* r14_2 = &i[sx.q(arg1[0x58].d) * 2]
    char var_2b8 = 0
    
    for (; i != r14_2; i = &i[2])
        void* rdx_1 = *i
        
        if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
            sub_140e5a170(&var_2b8, rdx_1)
    
    void** var_2b0 = *(arg2 + 8)
    int64_t* rax_8 = *(arg2 + 0x10)
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    sub_140d9a850(&arg1[0x30], &var_2b0)
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp3_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rax_8 + 8))(rax_8, 1)
    
    int64_t* rdi_2
    int64_t* r14_3
    int64_t r15
    
    if (var_290 == 0)
        r14_3 = var_298
        rdi_2 = var_2a0.q
        r15.b = 1
    else
        r14_3 = *(arg2 + 0x10)
        rbx |= 1
        rdi_2 = r14_3
        
        if (r14_3 != 0)
            r14_3[1].d += 1
            rdi_2 = *(arg2 + 0x10)
        
        int64_t rax_11 = var_290
        
        if (rax_11 == 0 || rax_11 != *(arg2 + 8))
            rbx |= 2
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            if (sub_140e1a690(*(arg2 + 8), &var_290, zmm1_1) != 0)
                r15.b = 1
            else
                r15.b = 0
        else
            rdi_2 = var_2a0.q
            r15.b = 1
    
    if ((rbx.b & 2) != 0)
        rbx &= 0xfffffffd
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp15_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    if ((rbx.b & 1) != 0 && r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp19_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    if (r15.b == 0)
        sub_140de87e0(var_290, 0)
        sub_140e111a0(var_290)
    else
        int64_t* rbx_1 = *(arg2 + 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp28_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp28_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp32_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp32_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = *(arg2 + 0x10)
        int64_t* rcx_21 = *(arg2 + 8)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        (*(*rcx_21 + 0x240))(rcx_21, arg2)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp26_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* rbx_3 = *(arg2 + 0x10)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        char rax_24 = sub_140de7d60(*(arg2 + 8))
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                int64_t rdx_5 = *rbx_3
                (*rdx_5)(rbx_3, rdx_5)
                int32_t temp34_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp34_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rax_24 != 0)
            int64_t* rbx_4 = *(arg2 + 0x10)
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            arg1[0x34] = *(arg2 + 8)
            int64_t* rcx_27 = arg1[0x35]
            
            if (rbx_4 != rcx_27)
                if (rbx_4 != 0)
                    *(rbx_4 + 0xc) += 1
                    rcx_27 = arg1[0x35]
                
                if (rcx_27 != 0)
                    int32_t temp44_1 = *(rcx_27 + 0xc)
                    *(rcx_27 + 0xc) -= 1
                    
                    if (temp44_1 == 1)
                        (*(*rcx_27 + 8))(rcx_27, 1)
                
                arg1[0x35] = rbx_4
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp43_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp43_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
        
        *(arg1 + 0x171) = 1
        int64_t* rbx_5 = *(arg2 + 0x10)
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp42_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp42_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp46_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp46_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
        
        var_2b0 = *(arg2 + 8)
        void* rax_35 = *(arg2 + 0x10)
        void* var_2a8_2 = rax_35
        
        if (rax_35 != 0)
            *(rax_35 + 8) += 1
        
        sub_140e77da0(&arg1[0x3a], &var_2b0, zmm1_1)
        var_2b0 = *(arg2 + 8)
        void* rax_37 = *(arg2 + 0x10)
        void* var_2a8_3 = rax_37
        
        if (rax_37 != 0)
            *(rax_37 + 8) += 1
        
        sub_140efea80(sub_140eff820(), &var_2b0)
        int64_t* rcx_36 = arg1[4]
        var_2b0 = *(arg2 + 8)
        void* rax_40 = *(arg2 + 0x10)
        void* var_2a8_4 = rax_40
        
        if (rax_40 != 0)
            *(rax_40 + 8) += 1
        
        (*(*rcx_36 + 0x40))(rcx_36, &var_2b0)
    
    rdi_5 = *(arg2 + 0x10)
    void* r13_1 = *(arg2 + 8)
    
    if (rdi_5 != 0)
        rdi_5[1].d += 1
    
    int64_t* r14_4 = *(r13_1 + 0x7b8)
    
    if (r14_4 != 0)
        result = zx.q(r14_4[1].d)
        
        if (result.d == 0)
            r14_4 = nullptr
        else
            r14_4[1].d = result.d + 1
        
        if (r14_4 != 0)
            int64_t* rcx_39 = *(r13_1 + 0x7b0)
            
            if (rcx_39 != 0)
                int64_t* rax_43 = (*(*rcx_39 + 0x138))(rcx_39, &var_280)
                result = 0
                var_2a0.q = 0
                int64_t* rbx_6 = rax_43[1]
                
                if (rbx_6 != 0)
                    int32_t rax_44 = rbx_6[1].d
                    int64_t* rcx_40
                    
                    if (rax_44 != 0)
                        rbx_6[1].d = rax_44 + 1
                        rcx_40 = rax_43[1]
                    else
                        rcx_40 = rbx_6
                        rbx_6 = nullptr
                    
                    int32_t temp40_1 = *(rcx_40 + 0xc)
                    *(rcx_40 + 0xc) -= 1
                    
                    if (temp40_1 == 1)
                        (*(*rcx_40 + 8))(rcx_40, 1)
                    
                    result = var_2a0.q
                    rax_43[1] = 0
                    
                    if (rbx_6 != 0)
                        result = *rax_43
                        var_2a0.q = result
                        *rax_43 = 0
                
                int64_t* var_278
                
                if (var_278 != 0)
                    int32_t temp37_1 = *(var_278 + 0xc)
                    *(var_278 + 0xc) -= 1
                    
                    if (temp37_1 == 1)
                        (*(*var_278 + 8))(var_278, 1)
                        result = var_2a0.q
                
                if (result != 0)
                    var_2b0 = nullptr
                    int64_t var_2a8_5 = 1
                    uint128_t zmm0_2 = sub_1405a4f90(&var_2b0)
                    void** rax_48 = var_2b0
                    *rax_48 = r13_1
                    rax_48[1] = rdi_5
                    
                    if (rdi_5 != 0)
                        rdi_5[1].d += 1
                    
                    void var_1a8
                    sub_140d947e0(&var_1a8)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                    
                    var_280 = var_2a0.q
                    int64_t* var_278_1 = rbx_6
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                    
                    char rax_50 =
                        sub_140da1990(&var_2b0, &var_280, &var_1a8, data_1439ae521, zmm0_2)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            int64_t rdx_12 = *rbx_6
                            (*rdx_12)(rbx_6, rdx_12)
                            int32_t temp49_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp49_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    if (rax_50 != 0)
                        char var_268
                        (*(*rcx_39 + 0x140))(rcx_39, &var_268, arg2)
                        
                        if (var_268 != 0)
                            MRECmpImpl::FPushFile(arg1, &var_1a8, &var_268, nullptr, nullptr, 0)
                        
                        sub_140597700(&var_268)
                    
                    void var_58
                    sub_140596d80(&var_58)
                    int64_t* var_60
                    
                    if (var_60 != 0)
                        var_60[1].d -= 1
                        
                        if (var_60[1].d == 1)
                            (**var_60)(var_60)
                            int32_t temp51_1 = *(var_60 + 0xc)
                            *(var_60 + 0xc) -= 1
                            
                            if (temp51_1 == 1)
                                (*(*var_60 + 8))(var_60, 1)
                    
                    void var_1a0
                    sub_140d94d20(&var_1a0)
                    sub_140596d80(&var_2b0)
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp47_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp47_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
            
            if (r14_4 != 0)
                r14_4[1].d -= 1
                
                if (r14_4[1].d == 1)
                    (**r14_4)(r14_4)
                    int32_t temp36_1 = *(r14_4 + 0xc)
                    *(r14_4 + 0xc) -= 1
                    
                    if (temp36_1 == 1)
                        (*(*r14_4 + 8))(r14_4, 1)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp30_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp33_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*rax_3 + 8))(rax_3, 1)

result.b = 1
__security_check_cookie(rax_1 ^ &var_2e8)
return result
