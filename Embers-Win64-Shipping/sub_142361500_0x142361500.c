// 函数: sub_142361500
// 地址: 0x142361500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
uint64_t var_268 = arg1
void* var_238 = arg3
int32_t var_278 = 0xffffffff
int32_t var_274 = 0

if (arg3 != 0)
    sub_140d3a3a0(&var_278, arg3)
    var_278.q = var_278.q

int32_t var_270
sub_1423611b0(arg1 + 0x3d0, &var_270, &var_278)
int64_t rax_3 = sx.q(var_270)
void* const rcx_4

if (rax_3.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_3 << 5) + *(arg1 + 0x3d0)

int64_t* rdi = rcx_4 + 8

if (rcx_4 == 0)
    rdi = nullptr

if (rdi == 0)
    void*** rax_4 = j_sub_140a82f30(0xf8)
    void*** rbx_2
    
    if (rax_4 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_141b7b9a0(rax_4)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    
    if (rax_6 == 0)
        rax_6 = nullptr
    else
        rax_6[1].d = 1
        *rax_6 = &data_142d42ea8
        *(rax_6 + 0xc) = 1
        rax_6[2] = rbx_2
    
    sub_142376c40(rbx_2, 2)
    sub_142376c40(rbx_2, 3)
    sub_142376c40(rbx_2, 0)
    sub_142376c40(rbx_2, 1)
    sub_142376c40(rbx_2, 5)
    sub_142376c40(rbx_2, 4)
    void** rax_7 = j_sub_140a82f30(0x78)
    void** rdi_1 = rax_7
    
    if (rax_7 == 0)
        rdi_1 = nullptr
    else
        __builtin_memset(rax_7, 0, 0x38)
        int64_t* rcx_12 = &rax_7[7]
        rcx_12[2] = 0
        rcx_12[3].d = 0
        *(rcx_12 + 0x1c) = 0x80
        int64_t* rax_8 = rcx_12[2]
        
        if (rax_8 != 0)
            rcx_12 = rax_8
        
        *rcx_12 = 0
        rcx_12[1] = 0
        rdi_1[0xb].d = 0xffffffff
        *(rdi_1 + 0x5c) = 0
        rdi_1[0xd] = 0
        rdi_1[0xe].d = 0
    
    void*** rax_9 = j_sub_140a82f30(0x18)
    void*** rbx_3 = rax_9
    
    if (rax_9 == 0)
        rbx_3 = nullptr
    else
        rax_9[1].d = 1
        *(rax_9 + 0xc) = 1
        *rbx_3 = &data_143334730
        rbx_3[2] = rdi_1
    
    void** var_248 = rdi_1
    
    if (rdi_1 != 0)
        void* rax_10
        
        if (*rdi_1 != 0)
            rax_10 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_10 == 0 || *(rax_10 + 8) s<= 0)
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            *rdi_1 = rdi_1
            int64_t* rcx_13 = rdi_1[1]
            
            if (rbx_3 != rcx_13)
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                    rcx_13 = rdi_1[1]
                
                if (rcx_13 != 0)
                    int32_t temp4_1 = *(rcx_13 + 0xc)
                    *(rcx_13 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rcx_13 + 8))(rcx_13, 1)
                
                rdi_1[1] = rbx_3
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*rbx_3)[1](rbx_3, 1)
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    void var_1e8
    int64_t* rax_14 = sub_140dd5ba0(&var_1e8)
    int64_t rsi_1 = sx.q(rax_14[0x33].d)
    int32_t rax_15 = (rsi_1 + 1).d
    rax_14[0x33].d = rax_15
    
    if (rax_15 s> *(rax_14 + 0x19c))
        sub_1405a4f90(&rax_14[0x32])
    
    void**** rax_18 = (rsi_1 << 4) + rax_14[0x32]
    *rax_18 = rbx_2
    rax_18[1] = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
        
        if (rax_6 != 0)
            rax_6[1].d -= 1
            
            if (rax_6[1].d == 1)
                (**rax_6)(rax_6)
                int32_t temp2_1 = *(rax_6 + 0xc)
                *(rax_6 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_6)[1](rax_6, 1)
    
    var_278.q = &var_238
    void*** rax_21 = sub_14234e7d0()
    void* var_220 = &rax_21[2]
    sub_140918950(&var_220, &rax_21[2])
    int64_t var_288_1 = 0x2d8
    int32_t* var_210_1 = &var_278
    void* var_208
    void** rax_22 =
        sub_142355bf0(&var_220, &var_208, rax_14, sub_140e23ed0(&rax_21[2], "SPlayerLayer"))
    int64_t* rbx_6 = rax_22[1]
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
    
    void* rax_24 = &var_248[2]
    void var_1f8
    
    if (rax_24 == &var_1f8)
    label_1423618e4:
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp7_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    else
        *rax_24 = *rax_22
        int64_t* rdi_2 = *(rax_24 + 8)
        
        if (rbx_6 == rdi_2)
            goto label_1423618e4
        
        *(rax_24 + 8) = rbx_6
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp11_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t* var_200
    
    if (var_200 != 0)
        var_200[1].d -= 1
        
        if (var_200[1].d == 1)
            (**var_200)(var_200)
            int32_t temp10_1 = *(var_200 + 0xc)
            *(var_200 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_200 + 8))(var_200, 1)
    
    if (rax_21 != 0)
        rax_21[1].d -= 1
        
        if (rax_21[1].d == 1)
            (**rax_21)(rax_21)
            int32_t temp12_1 = *(rax_21 + 0xc)
            *(rax_21 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rax_21)[1](rax_21, 1)
    
    sub_140ddea30(&var_1e8)
    void** rax_32 = var_248
    int64_t* rbx_9 = rax_32[3]
    uint64_t r12_1 = rax_32[2]
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
        
        if (rbx_9 != 0)
            rbx_9[1].d += 1
    
    void** r13_1 = var_248
    void* r15_3 = *(var_268 + 0x450)
    void*** rax_33 = j_sub_140a82f30(0x68)
    void*** rdi_3 = rax_33
    
    if (rax_33 == 0)
        rdi_3 = nullptr
    else
        sub_140ddb700(rax_33)
        *rdi_3 = &data_14332c950
        uint128_t zmm2_1 = zx.o(data_143dbb1f0)
        rdi_3[4].d = data_143dbb1f0.d
        rdi_3[5].b = 1
        *(rdi_3 + 0x24) = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
        rdi_3[6] = 0
        rdi_3[7].d = 0
        rdi_3[8].d = 0x3f800000
        *(rdi_3 + 0x44) = 0x3f800000
        rdi_3[9].b = 1
        rdi_3[0xa] = 0
        rdi_3[0xb].d = 0
        rdi_3[0xc].d = 1
        *(rdi_3 + 0x64) = 1
        var_268 = zmm2_1.q
    
    if (*(r15_3 + 0x2c8) == 0)
        int64_t r14_2 = sx.q(*(r15_3 + 0x2c0))
        int32_t rax_34 = (r14_2 + 1).d
        *(r15_3 + 0x2c0) = rax_34
        
        if (rax_34 s> *(r15_3 + 0x2c4))
            sub_140638870(r15_3 + 0x2b8)
        
        *(*(r15_3 + 0x2b8) + (r14_2 << 3)) = rdi_3
        int64_t rax_36 = *(r15_3 + 0x2b0)
        
        if (rax_36 != 0 && rdi_3[1] != rax_36)
            rdi_3[1] = rax_36
            sub_140de7bf0(rdi_3)
    
    rdi_3[0xc] = 0
    r13_1[4] = rdi_3
    int64_t* rsi_2 = rdi_3[3]
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    sub_140e0dfc0(rdi_3)
    var_268 = r12_1
    int64_t* r14_3 = rbx_9
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    if (&var_268 != &rdi_3[2])
        var_268.o = *(rdi_3 + 0x10)
        r14_3 = rbx_9
        *(rdi_3 + 0x10) = var_268.o
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp15_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    sub_140de7bf0(rdi_3)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp17_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp18_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t temp23_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
    
    void* rdx_11 = var_238
    var_278 = 0xffffffff
    int32_t var_274_1 = 0
    
    if (rdx_11 != 0)
        sub_140d3a3a0(&var_268, rdx_11)
        var_278.q = var_268
    
    var_268 = &var_278
    void*** var_260_2 = &var_248
    sub_14234d850(arg1 + 0x3d0, &var_270, &var_268, nullptr)
    rdi = *(arg1 + 0x3d0) + 8 + (sx.q(var_270) << 5)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp22_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*rbx_3)[1](rbx_3, 1)
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp24_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp24_1 == 1)
                void** r8_5 = *rax_6
                r8_5[1](rax_6, 1, r8_5)

*arg2 = *rdi
void* rcx_54 = rdi[1]
arg2[1] = rcx_54

if (rcx_54 != 0)
    *(rcx_54 + 8) += 1

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
