// 函数: sub_1414a5fc0
// 地址: 0x1414a5fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x570)).b
int64_t* rsi = arg2
char var_98_1

if ((rax & 0x40) != 0 && *(arg1 + 0x534) s>= 0)
    var_98_1 = 1

if ((rax & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax & 0x10) == 0)
    var_98_1 = 0

int64_t rbx
rbx.b = 0
int64_t rdi = sx.q(*(arg4 + 0x110))
int32_t var_78 = rdi.d
*(*arg2 + 0x2c)
int64_t rax_2 = rsi[0x2d9]
int32_t var_c8
int32_t var_c0
int16_t* var_b8
char var_b0
int32_t var_a8
char var_a0
int32_t i_3
int32_t var_88
int16_t arg_8
char i_4
int128_t zmm1

if (*(rax_2 + (rdi << 1)) == 0x7f || *(rax_2 + (rdi << 1) + 1) == 0x7f)
    int64_t* rcx = *(arg4 + 8)
    i_3 = 0
    char rax_4 = (*(*rcx + 0x180))(rcx)
    int16_t rax_8
    int512_t zmm2
    
    if ((*(arg4 + 0xfc) & 1) == 0)
        void* rax_9 = *(arg4 + 8)
        var_a0 = 1
        zmm1 = *(rax_9 + 0xc4)
        var_88 = (*(rax_9 + 0xc0)).d
        int32_t var_80_1 = (*(rax_9 + 0xc8)).d
        var_a8 = (*(arg2 + 0xd5c)).d
        var_b0 = rax_4
        rsi = arg2
        var_b8 = &i_3
        int32_t var_84_1 = zmm1.d
        var_c0 = 0xffffffff
        int32_t var_7c_1 = 0x3f800000
        var_c8 = (*(rax_9 + 0xd8)).d
        int16_t* rax_10
        rax_10, zmm2 = sub_1422e0040(&i_4, arg4 + 0x38, rsi, &var_88, var_c8, 0xffffffff, var_b8, 
            var_b0, var_a8, 1)
        rax_8 = *rax_10
        arg_8 = rax_8
    else
        int64_t* rcx_1 = *(arg4 + 8)
        var_c0.q = &i_3
        var_c8 = 0xffffffff
        int64_t r9 = *rcx_1
        int16_t rcx_2 = *(*(r9 + 0x168))(rcx_1, &i_4, arg2, r9, 0xffffffff, var_c0)
        arg_8 = rcx_2
        char rdx_1 = rcx_2.b
        char rax_6 = rax_4
        
        if (rdx_1 s>= rax_4)
            rax_6 = rdx_1
        
        char rdx_2 = rax_4
        arg_8.b = rax_6
        char rax_7 = arg_8:1.b
        rsi = arg2
        
        if (rax_7 s>= rax_4)
            rdx_2 = rax_7
        
        arg_8:1.b = rdx_2
        rax_8 = arg_8
    
    *(rsi[0x2d9] + (rdi << 1)) = rax_8
    
    if (arg3 != 0)
        int64_t rax_11 = sx.q(*(arg4 + 0x110))
        
        if (rax_11.d s< 0 || rax_11.d s>= rsi[0x2ac].d || *(rsi[0x2ab] + (rax_11 << 3)) == 0)
            int64_t* rcx_6 = *(arg4 + 8)
            zmm2.o = *(rsi + 0xd5c)
            var_b0.d = i_3.d
            var_b8 = &arg_8
            var_c0.b = 1
            var_c8.b = 1
            sub_141428a40(rsi, arg4, 
                (*(*rcx_6 + 0x150))(rcx_6, rsi, zmm2, rsi[0x913], 1, 1, var_b8, var_b0, var_a8, 
                    var_a0, var_98_1))

int32_t r10 = *(arg1 + 0x570)
int16_t* rdi_1 = rsi[0x2d9] + (rdi << 1)
i_3.w = *rdi_1
char i_10
char i_7

if (r10.b s< 0 || (test_bit(r10, 0xb) && data_143ed8ff4 != 0))
    int64_t i_5 = sx.q(*(arg4 + 0x40))
    i_7 = 0x81
    
    if (i_5 s<= 0)
        goto label_1414a626b
    
    char* r8_4 = *(arg4 + 0x38) + 0x10
    char i_9
    int64_t i
    
    do
        uint32_t rcx_8 = zx.d(*r8_4)
        r8_4 = &r8_4[0x14]
        i_9 = i_7
        
        if (rcx_8.b s>= i_7)
            i_9 = rcx_8.b
        
        i_7 = i_9
        i = i_5
        i_5 -= 1
    while (i != 1)
    i_4 = i_9
    
    if (i_9 == 0x81)
        goto label_1414a626b
    
    i_10 = i_9
else
label_1414a626b:
    i_7 = i_3.b
    i_10 = i_3:1.b
    i_4 = i_7

arg_8.b = i_10
int64_t rax_18
char i_1

if (*(arg1 + 0x530) != 0)
    rax_18 = sx.q(*(arg4 + 0x40))
    i_1 = i_7 + data_143f3ad88.b

char i_6

if (*(arg1 + 0x530) == 0 || rax_18.d s<= 0)
label_1414a62c4:
    i_6 = arg_8.b
else
    int64_t rdx_6 = rax_18 - 1
    char* r8_7 = *(arg4 + 0x38) + ((rdx_6 + ((rdx_6 + 1) << 2)) << 2)
    
    while (i_1 != *r8_7)
        r8_7 -= 0x14
        int64_t temp1_1 = rdx_6
        rdx_6 -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_1414a62c4
    
    i_7 = i_1
    i_4 = i_1
    i_6 = i_1
    arg_8.b = i_1

if (var_98_1 == 0)
    uint64_t rdx_19 = 0
    var_88.q = 0
    
    if (*(arg4 + 0x40) s> 0)
        void* rcx_30 = nullptr
        void* var_90_2 = nullptr
        int64_t rsi_4 = 0
        
        do
            int64_t rdi_7 = *(arg4 + 0x38)
            void* r13_3 = rcx_30 + *(arg4 + 0x48)
            char rax_57 = *(rsi_4 + rdi_7 + 0x11)
            
            if ((rax_57 & 8) != 0)
            label_1414a66bf:
                char rax_58 = *(rsi_4 + rdi_7 + 0x10)
                
                if (i_7 == rax_58 || i_6 == rax_58)
                    *(arg1 + 0x66c) += zx.d(*(rsi_4 + rdi_7 + 0xc))
                    int64_t r15_1 = sx.q(*(arg1 + 0x660))
                    int32_t rax_60 = (r15_1 + 1).d
                    *(arg1 + 0x660) = rax_60
                    
                    if (rax_60 s> *(arg1 + 0x664))
                        sub_14083a440(arg1 + 0x658, r15_1.d)
                    
                    *(*(arg1 + 0x658) + (r15_1 << 3)) = r13_3
                    
                    if ((*(rsi_4 + rdi_7 + 0x11) & 2) != 0)
                        int64_t* rcx_32 = *(r13_3 + 0x78)
                        *(arg2[0x2db] + (sx.q(*(r13_3 + 0xac)) << 3)) = (*(*rcx_32 + 0x70))(rcx_32, 
                            arg2, r13_3, 0, var_c8, var_c0, var_b8, var_b0, var_a8, var_a0, 
                            var_98_1, var_90_2)
                    
                    rcx_30 = var_90_2
                    rbx.b = 1
                    rdx_19 = var_88.q
                    i_7 = i_4
            else if ((*(arg1 + 0x570) & 0x1000) != 0 && (rax_57 & 0x20) != 0)
                goto label_1414a66bf
            
            i_6 = arg_8.b
            rdx_19 = zx.q(rdx_19.d + 1)
            rcx_30 += 0xb0
            var_88.q = rdx_19
            rsi_4 += 0x14
            var_90_2 = rcx_30
        while (rdx_19.d s< *(arg4 + 0x40))
else
    char rdi_2
    
    if ((*(arg4 + 0xfc) & 2) == 0)
        rdi_2 = arg_8.b
    else
        uint128_t zmm0 = *(arg1 + 0x3c0)
        zmm0.d = zmm0.d f+ zmm0.d
        int64_t* rcx_10 = *(arg4 + 8)
        zmm1.d = float.s(zx.q(*(arg1 + 0x548) + (*(arg1 + 0x550) << 1)))
        uint64_t rax_21
        rax_21.b = (r10 & 0x880) == 0
        var_a0 = rax_21.b
        int64_t r9_3 = *rcx_10
        var_a8.b = *(arg1 + 0x50)
        var_b0.d = zmm0.d
        var_b8.d = zmm1.d
        var_c0.q = rdi_1
        var_c8 = 0xffffffff
        int16_t rcx_11 = *(*(r9_3 + 0x178))(rcx_10, &arg_8, rsi, r9_3, 0xffffffff, var_c0, var_b8, 
            var_b0, var_a8, var_a0, var_98_1)
        i_3.w = rcx_11
        i_7 = rcx_11.b
        rdi_2 = i_3:1.b
        arg_8.b = rdi_2
        i_4 = rcx_11.b
    
    int32_t rcx_12 = *(arg4 + 0x110)
    void* r8_9 = &rsi[0x2bf]
    void* rax_24 = *(r8_9 + 0x10)
    
    if (rax_24 != 0)
        r8_9 = rax_24
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rcx_12)
    char rax_30
    
    if (not(test_bit(*(r8_9 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), rcx_12 & 0x1f)))
        rax_30 = sub_1413a07e0(arg4)
    
    if (test_bit(*(r8_9 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), rcx_12 & 0x1f)
            || rax_30 != 0)
        i_6 = 0
    else
        i_6 = 1
    
    char i_8 = i_6
    int32_t i_2 = 0
    i_3 = 0
    
    if (*(arg4 + 0x40) s> 0)
        void* rdx_11 = nullptr
        var_88.q = 0
        int64_t r8_10 = 0
        int64_t var_90_1 = 0
        
        do
            int32_t* rsi_3 = *(arg4 + 0x38) + r8_10
            void* r13_1 = rdx_11 + *(arg4 + 0x48)
            char rax_32 = *(rsi_3 + 0x11)
            
            if ((rax_32 & 8) != 0)
            label_1414a6425:
                char rax_33 = rsi_3[4].b
                
                if (i_7 == rax_33 || rdi_2 == rax_33)
                    int32_t rax_34 = *(arg1 + 0x570)
                    
                    if (((rax_34 u>> 4).b & 1) != data_1439b6e1c.b
                            || ((rax_34 u>> 5).b & 1) != data_1439b6e1c:1.b
                            || ((rax_34 u>> 7).b & 1) != data_1439b6e1e || i_6 == 0)
                        *(arg1 + 0x66c) += zx.d(rsi_3[3].w)
                        int64_t rdi_6 = sx.q(*(arg1 + 0x660))
                        int32_t rax_54 = (rdi_6 + 1).d
                        *(arg1 + 0x660) = rax_54
                        
                        if (rax_54 s> *(arg1 + 0x664))
                            sub_14083a440(arg1 + 0x658, rdi_6.d)
                        
                        *(*(arg1 + 0x658) + (rdi_6 << 3)) = r13_1
                    else
                        void* rdi_3 = *(arg4 + 0xf0)
                        int32_t r13_2 = *(rdi_3 + 8)
                        char rax_36 = sub_1414336a0()
                        int64_t rax_37
                        
                        if (rax_36 != 0)
                            rax_37 = 0
                            
                            if (r13_2 s>= 3)
                                rax_37 = 0x48
                        
                        if (rax_36 == 0 || (not.b(*(rax_37 + &data_143e8e990)) & 1) != 0
                                || (*(rsi_3 + 0x12) & 0x40) == 0)
                            *(arg1 + 0x66c) += zx.d(rsi_3[3].w)
                            int64_t rdi_5 = sx.q(*(arg1 + 0x660))
                            int32_t rax_51 = (rdi_5 + 1).d
                            *(arg1 + 0x660) = rax_51
                            
                            if (rax_51 s> *(arg1 + 0x664))
                                sub_14083a440(arg1 + 0x658, rdi_5.d)
                            
                            *(*(arg1 + 0x658) + (rdi_5 << 3)) = r13_1
                        else
                            uint32_t rax_39 = sub_14141ff40(rsi_3, 4)
                            
                            if (rax_39 s>= 0)
                                int64_t r8_11 = *(arg4 + 0x28)
                                int64_t rdx_14 = sx.q(rax_39) * 5
                                int64_t r9_4 = sx.q(*(r8_11 + (rdx_14 << 2) + 0xc))
                                int64_t rcx_19
                                
                                if (r9_4.d s< 0)
                                    rcx_19 =
                                        sx.q(*(r8_11 + (rdx_14 << 2) + 8)) * 0xe8 + *(rdi_3 + 0xa00)
                                else
                                    rcx_19 = r9_4 * 0xf8 + *(rdi_3 + 0x510)
                                
                                rbx = sx.q(*(arg1 + 0x678))
                                int32_t var_54_1 = var_78
                                int32_t var_50_1 = 0xffffffff
                                int32_t var_4c_1 = r9_4.d
                                int32_t var_48 = var_48
                                    ^ ((*(r8_11 + (rdx_14 << 2) + 0x10) s>> 6 ^ var_48) & 0x3f)
                                int64_t var_60_1 = *(r8_11 + (rdx_14 << 2))
                                int32_t rax_46 = (rbx + 1).d
                                *(arg1 + 0x678) = rax_46
                                
                                if (rax_46 s> *(arg1 + 0x67c))
                                    sub_1410b38f0(arg1 + 0x670, rbx.d)
                                
                                int64_t rax_47 = *(arg1 + 0x670)
                                int64_t rcx_26 = rbx * 5
                                *(rax_47 + (rcx_26 << 3)) = rcx_19.o
                                *(rax_47 + (rcx_26 << 3) + 0x10) = var_78.o
                                *(rax_47 + (rcx_26 << 3) + 0x20) = var_48.q
                        
                        i_7 = i_4
                    
                    if ((*(rsi_3 + 0x11) & 2) != 0)
                        int64_t* rcx_27 = *(r13_1 + 0x78)
                        *(arg2[0x2db] + (sx.q(*(r13_1 + 0xac)) << 3)) = (*(*rcx_27 + 0x70))(rcx_27, 
                            arg2, r13_1, 0, var_c8, var_c0, var_b8, var_b0, var_a8, var_a0, i_8, 
                            var_90_1)
                    
                    i_2 = i_3
                    rbx.b = 1
                    rdx_11 = var_88.q
                    r8_10 = var_90_1
            else if ((*(arg1 + 0x570) & 0x1000) != 0 && (rax_32 & 0x20) != 0)
                goto label_1414a6425
            
            i_6 = i_8
            i_2 += 1
            rdi_2 = arg_8.b
            r8_10 += 0x14
            rdx_11 += 0xb0
            i_3 = i_2
            var_90_1 = r8_10
            var_88.q = rdx_11
        while (i_2 s< *(arg4 + 0x40))

return zx.q(rbx.b)
