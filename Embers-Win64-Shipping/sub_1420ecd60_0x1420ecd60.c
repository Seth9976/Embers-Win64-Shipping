// 函数: sub_1420ecd60
// 地址: 0x1420ecd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a9478)
sub_1420ed5e0(arg1, arg2, zmm1)
void* rbx = data_143f483b0
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

char rax_3

if (*(rbx + (rcx_3 << 2)) != 0)
    arg2[0xe]
    rax_3 = sub_1419ba670(data_1439c7a08)

int64_t r12

if (*(rbx + (rcx_3 << 2)) == 0 || rax_3 == 0)
    r12.b = 0
else
    r12.b = 1

int64_t arg_8

if ((arg2[5].b & 1) == 0)
label_1420ed0a4:
    int64_t* rcx_25 = arg2[0xe]
    void* rdx_23
    
    if (rcx_25 == 0)
        (*(*arg2 + 0x130))(arg2, arg1 + 0x20)
        rdx_23 = arg1 + 0x28
    else
        if ((*(*rcx_25 + 0xd8))(rcx_25, 5) == 0 || r12.b != 0)
            rbx.b = 1
        else
            rbx.b = 0
        
        int64_t* rcx_26 = arg2[0xe]
        char rax_34 = (*(*rcx_26 + 0xd8))(rcx_26, 4)
        void* rdx_22
        
        if (rax_34 != 0)
            rdx_22 = arg1 + 0x20
        
        if (rax_34 == 0 || r12.b != 0)
            rdx_22 = &arg_8
        
        bool cond:6_1 = rbx.b != 0
        arg_8 = 0
        rbx = &arg_8
        
        if (not(cond:6_1))
            rbx = arg1 + 0x28
        
        (*(*arg2 + 0x130))(arg2, rdx_22)
        rdx_23 = rbx
    
    (*(*arg2 + 0x130))(arg2, rdx_23)
    
    if (arg2[8].d s>= 0x148)
        int64_t* rcx_30 = arg2[0xe]
        
        if (rcx_30 == 0)
            (*(*arg2 + 0x130))(arg2, arg1 + 0x30)
            
            if (arg2[8].d s>= 0x1dd)
                (*(*arg2 + 0x130))(arg2, arg1 + 0x38)
        else
            void* rdx_25
            
            if ((*(*rcx_30 + 0xd8))(rcx_30, 4) == 0 || r12.b != 0)
                rbx.b = 1
                rdx_25 = &arg_8
            else
                rbx.b = 0
                rdx_25 = arg1 + 0x30
            
            int64_t rax_40 = *arg2
            arg_8 = 0
            (*(rax_40 + 0x130))(arg2, rdx_25)
            
            if (arg2[8].d s>= 0x1dd)
                if (rbx.b != 0)
                    (*(*arg2 + 0x130))(arg2, &arg_8)
                else
                    (*(*arg2 + 0x130))(arg2, arg1 + 0x38)
    
    void* rbx_1 = arg1 + 0x58
    int64_t i_6 = 4
    int64_t i
    
    do
        int64_t* rcx_34 = arg2[1]
        int32_t* r8_1 = *rcx_34
        
        if (&r8_1[1] u<= rcx_34[1])
            *(rbx_1 - 8) = *r8_1
            int64_t* rax_45 = arg2[1]
            *rax_45 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 - 8, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 - 8, 4)
        
        int64_t* rcx_36 = arg2[1]
        int32_t* r8_2 = *rcx_36
        
        if (&r8_2[1] u<= rcx_36[1])
            *(rbx_1 - 4) = *r8_2
            int64_t* rax_49 = arg2[1]
            *rax_49 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 - 4, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 - 4, 4)
        
        int64_t* rcx_38 = arg2[1]
        int32_t* rdx_30 = *rcx_38
        
        if (&rdx_30[1] u<= rcx_38[1])
            *rbx_1 = *rdx_30
            int64_t* rax_53 = arg2[1]
            *rax_53 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1, 4)
        
        int64_t* rcx_40 = arg2[1]
        int32_t* r8_3 = *rcx_40
        
        if (&r8_3[1] u<= rcx_40[1])
            *(rbx_1 + 4) = *r8_3
            int64_t* rax_57 = arg2[1]
            *rax_57 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 + 4, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 + 4, 4)
        
        int64_t* rcx_42 = arg2[1]
        int32_t* r8_4 = *rcx_42
        
        if (&r8_4[1] u<= rcx_42[1])
            *(rbx_1 + 0x38) = *r8_4
            int64_t* rax_61 = arg2[1]
            *rax_61 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 + 0x38, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 + 0x38, 4)
        
        int64_t* rcx_44 = arg2[1]
        int32_t* r8_5 = *rcx_44
        
        if (&r8_5[1] u<= rcx_44[1])
            *(rbx_1 + 0x3c) = *r8_5
            int64_t* rax_65 = arg2[1]
            *rax_65 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 + 0x3c, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 + 0x3c, 4)
        
        int64_t* rcx_46 = arg2[1]
        int32_t* r8_6 = *rcx_46
        
        if (&r8_6[1] u<= rcx_46[1])
            *(rbx_1 + 0x40) = *r8_6
            int64_t* rax_69 = arg2[1]
            *rax_69 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 + 0x40, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 + 0x40, 4)
        
        int64_t* rcx_48 = arg2[1]
        int32_t* r8_7 = *rcx_48
        
        if (&r8_7[1] u<= rcx_48[1])
            *(rbx_1 + 0x44) = *r8_7
            int64_t* rax_73 = arg2[1]
            *rax_73 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rbx_1 + 0x44, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rbx_1 + 0x44, 4)
        
        rbx_1 += 0x10
        i = i_6
        i_6 -= 1
    while (i != 1)
else
    int32_t rax_4 = arg2[8].d
    int128_t var_38
    
    if (rax_4 s>= 0xf7)
        if (rax_4 s>= 0x131)
            goto label_1420ed0a4
        
        int64_t i_5 = 4
        int64_t i_1
        
        do
            int64_t rax_30 = *arg2
            arg_8 = 0
            (*(rax_30 + 0x130))(arg2, &arg_8)
            var_38 = data_142d3f660
            sub_1409ac860(arg2, &var_38, zmm1)
            sub_1409ac860(arg2, &var_38, zmm1)
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    else
        int64_t i_4 = 3
        int64_t i_2
        
        do
            int64_t rax_5 = *arg2
            arg_8 = 0
            (*(rax_5 + 0x130))(arg2, &arg_8)
            int64_t* rcx_6 = arg2[1]
            var_38 = data_142d3f660
            int32_t* rdx_3 = *rcx_6
            
            if (&rdx_3[1] u> rcx_6[1])
                int32_t* rdx_4 = &var_38
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_4, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_4, 4)
            else
                var_38.d = *rdx_3
                *rcx_6 += 4
            
            int64_t* rcx_8 = arg2[1]
            int32_t* rdx_5 = *rcx_8
            
            if (&rdx_5[1] u> rcx_8[1])
                int32_t* rdx_6 = &var_38:4
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_6, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_6, 4)
            else
                var_38:4.d = *rdx_5
                *rcx_8 += 4
            
            int64_t* rcx_10 = arg2[1]
            int32_t* rdx_7 = *rcx_10
            
            if (&rdx_7[1] u> rcx_10[1])
                int32_t* rdx_8 = &var_38:8
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_8, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_8, 4)
            else
                var_38:8.d = *rdx_7
                *rcx_10 += 4
            
            int64_t* rcx_12 = arg2[1]
            int32_t* rdx_9 = *rcx_12
            
            if (&rdx_9[1] u> rcx_12[1])
                int32_t* rdx_10 = &var_38:0xc
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_10, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_10, 4)
            else
                var_38:0xc.d = *rdx_9
                *rcx_12 += 4
            
            int64_t* rcx_14 = arg2[1]
            int32_t* rdx_11 = *rcx_14
            
            if (&rdx_11[1] u> rcx_14[1])
                int32_t* rdx_12 = &var_38
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_12, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_12, 4)
            else
                var_38.d = *rdx_11
                *rcx_14 += 4
            
            int64_t* rcx_16 = arg2[1]
            int32_t* rdx_13 = *rcx_16
            
            if (&rdx_13[1] u> rcx_16[1])
                int32_t* rdx_14 = &var_38:4
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_14, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_14, 4)
            else
                var_38:4.d = *rdx_13
                *rcx_16 += 4
            
            int64_t* rcx_18 = arg2[1]
            int32_t* rdx_15 = *rcx_18
            
            if (&rdx_15[1] u> rcx_18[1])
                int32_t* rdx_16 = &var_38:8
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_16, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_16, 4)
            else
                var_38:8.d = *rdx_15
                *rcx_18 += 4
            
            int64_t* rcx_20 = arg2[1]
            int32_t* rdx_17 = *rcx_20
            
            if (&rdx_17[1] u> rcx_20[1])
                int32_t* rdx_18 = &var_38:0xc
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_18, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_18, 4)
            else
                var_38:0xc.d = *rdx_17
                *rcx_20 += 4
            
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

sub_1409ac7a0(sub_1409ac7a0(arg2, arg1 + 0xd0, zmm1), arg1 + 0xd8, zmm1)

if (rax_1 s>= 0x1d)
    int32_t i_3 = 0
    void* rbx_2 = arg1 + 0xf0
    
    do
        int64_t* rcx_52 = arg2[1]
        int32_t* rdx_39 = *rcx_52
        
        if (&rdx_39[1] u> rcx_52[1])
            int32_t rax_78
            rax_78.b = *rbx_2 != 0
            arg_8.d = rax_78
            (*(*arg2 + 0x150))(arg2, &arg_8, 4)
            *rbx_2 = arg_8.d != 0
        else
            void* rax_76
            rax_76.b = *rdx_39 != 0
            *rbx_2 = rax_76.b
            int64_t* rax_77 = arg2[1]
            *rax_77 += 4
        
        i_3 += 1
        rbx_2 += 1
    while (i_3 u< 4)
    
    sub_1409ac860(arg2, arg1 + 0xe0, zmm1)

if (rax_1 s< 0x1b)
    *(arg1 + 0x48) = 0
else
    int64_t* rax_82 = *arg2 + 0x130
    
    if (rax_1 s< 0x1f)
        arg_8 = 0
        (*rax_82)(arg2, &arg_8)
    label_1420ed4d1:
        
        if ((arg2[5].b & 1) != 0)
            *(arg1 + 0x48) = 0
    else
        int64_t r8_8 = *rax_82
        
        if (r12.b == 0)
            arg_8 = 0
            r8_8(arg2, &arg_8)
            goto label_1420ed4d1
        
        r8_8(arg2, arg1 + 0x48)

int64_t* result = zx.q(arg2[5].b)

if ((result.b & 1) != 0)
    *(arg1 + 0x70) = _mm_max_ss((*(arg1 + 0x70)).d, 0).d
    *(arg1 + 0xb0) = _mm_max_ss((*(arg1 + 0xb0)).d, 0x3c23d70a).d
    zmm1.o = *(arg1 + 0x74)
    zmm1.o = _mm_max_ss(zmm1.d, 0)
    *(arg1 + 0x74) = zmm1.d
    *(arg1 + 0xb4) = _mm_max_ss((*(arg1 + 0xb4)).d, 0x3c23d70a).d
    zmm1.o = *(arg1 + 0x78)
    zmm1.o = _mm_max_ss(zmm1.d, 0)
    *(arg1 + 0x78) = zmm1.d
    *(arg1 + 0xb8) = _mm_max_ss((*(arg1 + 0xb8)).d, 0x3c23d70a).d
    result = zx.q(arg2[5].b)

if ((result.b & 1) != 0)
    if (r12.b != 0)
        __builtin_memset(arg1 + 0x20, 0, 0x20)
        return result
    
    result = 0x20
    
    if (*(arg1 + 0x18) != 0)
        result = 0x28
    
    *(result + arg1) = 0
    
    if (*(arg1 + 0x18) == 0)
        *(arg1 + 0x30) = 0
        *(arg1 + 0x38) = 0
    
    *(arg1 + 0x48) = 0

return result
