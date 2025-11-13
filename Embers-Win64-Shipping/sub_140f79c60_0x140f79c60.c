// 函数: sub_140f79c60
// 地址: 0x140f79c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_538
int64_t rax_1 = __security_cookie ^ &var_538
int32_t var_4d0 = 0
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
int64_t* rcx = *arg1
uint128_t var_498
bool rax_4 = sub_140e19840(*(*(*rcx + 0x80))(rcx, &var_498), arg6)
int64_t* var_490

if (var_490 != 0)
    var_490[1].d -= 1
    
    if (var_490[1].d == 1)
        int64_t rdx_1 = *var_490
        (*rdx_1)(var_490, rdx_1)
        int32_t temp1_1 = *(var_490 + 0xc)
        *(var_490 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_490 + 8))(var_490, 1)

if (rax_4 != 0)
    int64_t* rbx_1 = *(arg4 + 0x48)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    bool r12
    
    if (*(arg4 + 0x38) != data_143e1e008 || arg1[0x109].b == 0)
        r12 = false
    else
        r12 = true
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_460
    
    if (r12 != 0)
        arg1[0x109].b = 0
        
        if (*(arg1 + 0x849) != 0)
            if (*(arg1 + 0x84a) == 0 || arg1[0xf1].b == 0)
                int64_t* rcx_6 = *arg1
                
                if ((*(*rcx_6 + 0x20))(rcx_6) != 0)
                    sub_140f89df0(arg1, rbx_1.d, sub_140f7ba40(arg1, 1, 0, arg5.q))
            
            *(arg1 + 0x849) = 0
        
        var_460 = 0
        int64_t var_458_1 = 0
        char var_448_1 = 0
        int64_t var_440
        __builtin_memset(&var_440, 0, 0x88)
        goto label_140f7a349
    
    int64_t* rbx_2 = *(arg4 + 0x48)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    r12 = *(arg4 + 0x38) == data_143e1e020
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r12 != 0)
        float zmm4_1 = *arg3
        float zmm5_1 = arg3[1]
        float zmm3 = zmm5_1 f* arg3[9]
        float zmm2 = zmm4_1 f* arg3[7]
        zmm5_1 = zmm5_1 f* arg3[0xa]
        zmm4_1 = zmm4_1 f* arg3[8]
        arg6.o = arg3[0xc]
        float var_4b8_1 = zmm3
        int32_t var_4c8 = arg3[0xb].d
        int32_t var_4c4_1 = arg6.d
        float var_4bc_1 = zmm4_1
        float var_4b4_1 = zmm5_1
        char var_468
        
        if (sub_140db3460(&var_4c8, arg4 + 0x18) != 0)
            char* rbx_3 = *(arg4 + 0x10)
            char* rax_15
            int32_t r12_1
            char r14_1
            
            if (rbx_3 == 0)
                void var_308
                rax_15 = sub_140d947e0(&var_308)
                r14_1 = 4
                r12_1 = 4
            else
                void var_1a8
                rax_15 = sub_140e52c00(&var_1a8, rbx_3)
                r12_1 = 0
                r14_1 = 2
            
            int32_t rbx_4 = (neg.q(rbx_3)).d
            sub_140e52b70(&var_468, rax_15)
            
            if (r12_1 != 0)
                r14_1 = (sbb.d(rbx_4, rbx_4, rbx_3 != 0)).b & 2
                void var_1b8
                sub_140596d80(&var_1b8)
                int64_t* var_1c0
                
                if (var_1c0 != 0)
                    var_1c0[1].d -= 1
                    
                    if (var_1c0[1].d == 1)
                        (**var_1c0)(var_1c0)
                        int32_t temp9_1 = *(var_1c0 + 0xc)
                        *(var_1c0 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_1c0 + 8))(var_1c0, 1)
                
                void var_300
                sub_140d94d20(&var_300)
            
            if ((r14_1 & 2) != 0)
                void var_58
                sub_140596d80(&var_58)
                int64_t* var_60
                
                if (var_60 != 0)
                    var_60[1].d -= 1
                    
                    if (var_60[1].d == 1)
                        (**var_60)(var_60)
                        int32_t temp11_1 = *(var_60 + 0xc)
                        *(var_60 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*var_60 + 8))(var_60, 1)
                
                void var_1a0
                sub_140d94d20(&var_1a0)
            
            int64_t* rcx_23 = *arg1
            int64_t var_478
            (*(*rcx_23 + 0x90))(rcx_23, &var_478)
            
            if (var_478 != 0)
                arg1[0x111].b = 1
                
                if (&arg1[0x112] != &var_4c8)
                    arg1[0x112] = 0
                    int64_t* rcx_24 = arg1[0x113]
                    arg1[0x113] = 0
                    
                    if (rcx_24 != 0)
                        int32_t temp14_1 = *(rcx_24 + 0xc)
                        *(rcx_24 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rcx_24 + 8))(rcx_24, 1)
                
                int64_t* rax_23 = sub_140db2260(arg4, &var_4c8)
                void* var_488 = *rax_23
                int64_t* rcx_27 = rax_23[1]
                
                if (rcx_27 != 0)
                    rcx_27[1].d += 1
                
                uint128_t zmm0_1 = var_478.o
                var_498 = zmm0_1
                zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
                void* rax_24 = zmm0_1.q
                char var_4d7_1 = 0
                var_4d0 = 5
                
                if (rax_24 != 0)
                    *(rax_24 + 8) += 1
                
                void var_4d8
                int64_t* var_4b0
                sub_140e80850(data_143e29f28, &var_4b0, &var_488, &var_468, zmm0_1, &var_498, 
                    arg4 + 0x18, &var_4d0, 1, &data_143dbb1f0, &var_4d8, 1)
                
                if (var_490 != 0)
                    var_490[1].d -= 1
                    
                    if (var_490[1].d == 1)
                        (**var_490)(var_490)
                        int32_t temp18_1 = *(var_490 + 0xc)
                        *(var_490 + 0xc) -= 1
                        
                        if (temp18_1 == 1)
                            (*(*var_490 + 8))(var_490, 1)
                
                if (rcx_27 != 0)
                    rcx_27[1].d -= 1
                    
                    if (rcx_27[1].d == 1)
                        (**rcx_27)(rcx_27)
                        int32_t temp20_1 = *(rcx_27 + 0xc)
                        *(rcx_27 + 0xc) -= 1
                        
                        if (temp20_1 == 1)
                            (*(*rcx_27 + 8))(rcx_27, 1)
                
                int64_t* rbx_11 = zmm2.q
                
                if (rbx_11 != 0)
                    rbx_11[1].d -= 1
                    
                    if (rbx_11[1].d == 1)
                        (**rbx_11)(rbx_11)
                        int32_t temp21_1 = *(rbx_11 + 0xc)
                        *(rbx_11 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*rbx_11 + 8))(rbx_11, 1)
                
                int64_t* rcx_35 = var_4b0
                int64_t* var_4a8
                
                if (rcx_35 == 0)
                    arg1[0x111].b = 0
                    
                    if (&arg1[0x112] != &var_4c8)
                        arg1[0x112] = 0
                        int64_t* rcx_41 = arg1[0x113]
                        arg1[0x113] = 0
                        
                        if (rcx_41 != 0)
                            int32_t temp23_1 = *(rcx_41 + 0xc)
                            *(rcx_41 + 0xc) -= 1
                            
                            if (temp23_1 == 1)
                                (*(*rcx_41 + 8))(rcx_41, 1)
                else
                    uint64_t* rax_32 = (*(*rcx_35 + 0x28))(rcx_35)
                    int64_t* rax_33 = sub_140a84c80(0, 0x30, 0)
                    
                    if (rax_33 != 0)
                        rax_33[1] = arg1
                        *rax_33 = &data_142ed9d18
                        rax_33[2] = sub_140f7e460
                        rax_33[4] = sub_140a387b0()
                        *rax_33 = &data_142ed9d70
                    
                    if (rax_33 != 0)
                        sub_140599630(rax_32, 1)
                        (*(*rax_33 + 0x30))(rax_33, &var_4d0)
                        int64_t r15_1 = sx.q(rax_32[1].d)
                        int32_t rax_36 = (r15_1 + 1).d
                        rax_32[1].d = rax_36
                        
                        if (rax_36 s> *(rax_32 + 0xc))
                            sub_1405a4f90(rax_32)
                        
                        void** rax_39 = (r15_1 << 4) + *rax_32
                        *rax_39 = rax_33
                        rax_39[1].d = 3
                    
                    if (var_4a8 != 0)
                        var_4a8[1].d += 1
                    
                    arg1[0x111].b = 0
                    arg1[0x112] = var_4b0
                    int64_t* rcx_39 = arg1[0x113]
                    
                    if (var_4a8 != rcx_39)
                        if (var_4a8 != 0)
                            *(var_4a8 + 0xc) += 1
                            rcx_39 = arg1[0x113]
                        
                        if (rcx_39 != 0)
                            int32_t temp27_1 = *(rcx_39 + 0xc)
                            *(rcx_39 + 0xc) -= 1
                            
                            if (temp27_1 == 1)
                                (*(*rcx_39 + 8))(rcx_39, 1)
                        
                        arg1[0x113] = var_4a8
                    
                    if (var_4a8 != 0)
                        var_4a8[1].d -= 1
                        
                        if (var_4a8[1].d == 1)
                            (**var_4a8)(var_4a8)
                            int32_t temp26_1 = *(var_4a8 + 0xc)
                            *(var_4a8 + 0xc) -= 1
                            
                            if (temp26_1 == 1)
                                (*(*var_4a8 + 8))(var_4a8, 1)
                
                if (var_4a8 != 0)
                    var_4a8[1].d -= 1
                    
                    if (var_4a8[1].d == 1)
                        (**var_4a8)(var_4a8)
                        int32_t temp24_1 = *(var_4a8 + 0xc)
                        *(var_4a8 + 0xc) -= 1
                        
                        if (temp24_1 == 1)
                            (*(*var_4a8 + 8))(var_4a8, 1)
            
            int64_t* var_470
            
            if (var_470 != 0)
                var_470[1].d -= 1
                
                if (var_470[1].d == 1)
                    (**var_470)(var_470)
                    int32_t temp13_1 = *(var_470 + 0xc)
                    *(var_470 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*var_470 + 8))(var_470, 1)
            
            void var_318
            sub_140596d80(&var_318)
            int64_t* var_320
            
            if (var_320 != 0)
                var_320[1].d -= 1
                
                if (var_320[1].d == 1)
                    (**var_320)(var_320)
                    int32_t temp15_1 = *(var_320 + 0xc)
                    *(var_320 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*var_320 + 8))(var_320, 1)
            
            sub_140d94d20(&var_460)
        
        var_460 = 0
        int64_t var_458_2 = 0
        char var_448_2 = 0
        int64_t var_440_1
        __builtin_memset(&var_440_1, 0, 0x88)
    label_140f7a349:
        int32_t var_3b4
        int32_t var_3b4_1 = var_3b4 & 0xffffff00
        var_468 = 1
        int32_t var_3b8_1 = 0x20702
        sub_1405979f0(arg2, &var_468)
        sub_140597700(&var_468)
        sub_140f896b0(arg2)

__security_check_cookie(rax_1 ^ &var_538)
return arg2
