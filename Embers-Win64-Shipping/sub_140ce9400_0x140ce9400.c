// 函数: sub_140ce9400
// 地址: 0x140ce9400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rax_2 = *(arg1 + 0x78)
void* r10 = *arg2
char rdx = (*(arg1 + 0x80)).b
int64_t* r15 = arg3
int64_t* var_108 = arg3
int64_t* rsi = *(r10 + 8)
char r12 = rsi[5].b
char var_48 = 0
int32_t rcx = *(rax_2 + 0x3c)
void* var_120 = rax_2
int32_t var_124 = arg3[1].d
int64_t* r9 = *(r10 + 8)
int64_t* rcx_1 = r9[1]
int32_t* rdx_1 = *rcx_1

if (&rdx_1[1] u> rcx_1[1])
    int32_t* rdx_2 = &var_124
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_2, arg5)
    else
        (*(*r9 + 0x150))(r9, rdx_2, 4)
else
    var_124 = *rdx_1
    int64_t* rax_6 = r9[1]
    *rax_6 += 4

void* r14 = nullptr
uint64_t result
int64_t* var_f8
int32_t var_f0
int64_t* r9_1

if ((rsi[5].b & 1) == 0)
label_140ce9944:
    r9_1 = arg3
label_140ce953a:
    (*(*rsi + 8))(rsi, sx.q(r9_1[1].d * rcx), sx.q(*(r9_1 + 0xc) * rcx))
    int64_t* var_138
    int64_t var_130
    char var_128
    int32_t var_84
    
    if ((r12 & 0x20) != 0 || rsi[8].d s< 0x1f4)
    label_140ce997a:
        int32_t rax_43 = (*(*rsi + 0x20))(rsi)
        char r15_4 = *(rsi + 0x2b)
        int32_t i = 0
        var_128 = r15_4
        
        if ((r15_4 & 0x10) == 0)
            goto label_140ce9ab0
        
        int64_t* rax_44 = rsi[0xd]
        var_108 = rax_44
        
        if (rax_44 == 0)
            goto label_140ce9ab0
        
        int64_t* r15_5 = rax_44
        var_f8 = rsi
        r12 = 0
        var_f0.q = *(arg1 + 0x78)
        
        if (rsi[0xf] == arg1)
            sub_140bb37e0(&var_f8)
        else
            var_f0.q = 0
        
        if (r15_5 != 0)
            while (i s< var_124)
                if (r12 != 0)
                    break
                
                int64_t rax_46 = *r15_5
                
                if (rax_46 == *(arg1 + 0x78))
                    int128_t var_e0 = *r15_5
                    arg5.o = *(r15_5 + 0x10)
                    rsi[0xd] = &var_e0
                    int128_t var_d0_1 = arg5.o
                    var_e0:8.d = 0
                    var_d0_1:8.q = 0
                    i = r15_5[1].d
                    void* r8_16
                    
                    if (arg3[1].d != 0)
                        void* rcx_39 = *arg3
                        
                        if ((not.b(rdx) & 1) == 0 && (rcx_39.b & 1) != 0)
                            rcx_39 = (rcx_39 s>> 1) + arg3
                        
                        r8_16 = sx.q(i * rcx) + rcx_39
                    else
                        r8_16 = nullptr
                    
                    int64_t* rcx_41 = *(arg1 + 0x78)
                    (*(*rcx_41 + 0x88))(rcx_41, arg2, r8_16, 0, var_138, var_130)
                    r15_5 = r15_5[3]
                    rsi[0xd] = var_108
                else
                    if (rax_46 == 0)
                        i = r15_5[1].d
                    
                    r12 = 1
                
                if (r15_5 == 0)
                    break
        
        result = sub_140bafac0(&var_f8)
        
        if (r12 != 0)
            r15_4 = var_128
        label_140ce9ab0:
            *(rsi + 0x2b) &= 0xef
            int64_t var_100_1 = *(arg1 + 0x78)
            var_108 = rsi
            
            if (rsi[0xf] == arg1)
                sub_140bb37e0(&var_108)
            else
                int64_t var_100_2 = 0
            
            for (; i s< var_124; i += 1)
                void* r8_18
                
                if (arg3[1].d != 0)
                    void* rcx_45 = *arg3
                    
                    if ((not.b(rdx) & 1) == 0 && (rcx_45.b & 1) != 0)
                        rcx_45 = (rcx_45 s>> 1) + arg3
                    
                    r8_18 = sx.q(i * rcx) + rcx_45
                else
                    r8_18 = nullptr
                
                int64_t* rcx_47 = *(arg1 + 0x78)
                (*(*rcx_47 + 0x88))(rcx_47, arg2, r8_18, 0, var_138, var_130)
            
            *(rsi + 0x2b) &= 0xef
            *(rsi + 0x2b) |= r15_4 & 0x10
            result = sub_140bafac0(&var_108)
        
        if (var_48 != 0 && (rsi[5].b & 2) != 0)
            result = zx.q((*(*rsi + 0x20))(rsi) - rax_43)
            var_84 = result.d
            
            if (result.d s> 0)
                int64_t rax_60 = (*(*rsi + 0x20))(rsi)
                int64_t r8_20 = *rsi
                int64_t var_78
                (*(r8_20 + 0x178))(rsi, var_78, r8_20)
                int64_t* rdx_40 = rsi[1]
                int32_t* r8_21 = *rdx_40
                
                if (&r8_21[1] u> rdx_40[1])
                    int32_t* rdx_41 = &var_84
                    
                    if ((*(rsi + 0x29) & 0x20) != 0)
                        sub_140b54070(rsi, rdx_41, arg5)
                    else
                        (*(*rsi + 0x150))(rsi, rdx_41, 4)
                else
                    var_84 = *r8_21
                    int64_t* rcx_54 = rsi[1]
                    *rcx_54 += 4
                
                result = (*(*rsi + 0x178))(rsi, rax_60)
    else
        int64_t* r8_1 = *(arg1 + 0x78)
        
        if (((zx.q(*(r8_1[1] + 0x10)) u>> 0x14).b & 1) == 0)
            goto label_140ce997a
        
        if (var_48 == 0)
            var_130 = arg4
            var_138 = r15
            void var_c0
            sub_140cf05a0(&var_c0, rsi, r8_1, 0, var_138)
            var_48 = 1
            sub_140cf0b40(rsi, &var_c0, arg5)
        
        if ((rsi[5].b & 1) == 0)
            goto label_140ce997a
        
        void* r15_2 = *(arg1 + 0x78)
        int64_t* var_a4
        arg5 = sub_140cba300(&var_108, var_a4)
        int64_t rbx_4 = *(*(r15_2 + 0x78) + 0x18)
        int32_t rcx_10
        rcx_10.b = sub_140b5b8a0(var_108.d, 0) == 0
        int64_t* rcx_11 = var_a4
        
        if ((var_108:4.d != 0 | rcx_10.b) != 0)
            if (var_108 == rbx_4)
                rcx_11 = var_108
            
            int64_t* var_a4_1 = rcx_11
        
        int64_t* r8_2 = *(r15_2 + 0x78)
        
        if (rcx_11 == r8_2[3])
            goto label_140ce997a
        
        int32_t var_70
        int32_t var_6c
        int32_t var_68
        int32_t var_64
        
        if ((var_70 | var_6c | var_68 | var_64) != 0 && r8_2 != 0)
            int32_t* rax_22 = (*(*r8_2 + 0x318))(r8_2, &var_f8)
            
            if (((rax_22[1] ^ var_6c) | (rax_22[2] ^ var_68) | (rax_22[3] ^ var_64)
                    | (*rax_22 ^ var_70)) == 0)
                goto label_140ce997a
        
        int64_t rax_26 = (*(*rsi + 0x20))(rsi)
        int64_t rdx_14 = *rsi
        result = (*(rdx_14 + 0x20))(rsi, rdx_14)
        int64_t i_2 = sx.q(var_84) + rax_26 - result
        
        if (i_2 s> 0)
            int64_t i_1
            
            do
                int64_t* rcx_19 = rsi[1]
                char* rdx_15 = *rcx_19
                
                if (&rdx_15[1] u> rcx_19[1])
                    result = (*(*rsi + 0x150))(rsi, &var_128, 1)
                else
                    result = zx.q(*rdx_15)
                    var_128 = result.b
                    *rcx_19 += 1
                
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
else
    if ((*(rsi + 0x2b) & 0x10) != 0)
        r9_1 = arg3
        int32_t rbx_1 = var_124
        int32_t r15_1 = r9_1[1].d
        
        if (rbx_1 s> r15_1)
            sub_140cd78f0(&var_120, rbx_1 - r15_1)
            r9_1 = arg3
        else if (rbx_1 s< r15_1)
            int32_t r15_3 = r15_1 - rbx_1
            sub_140cd9680(&var_120, rbx_1, r15_3)
            var_f0 = rbx_1
            var_f8 = &var_120
            int32_t var_ec_1 = r15_3
            sub_140cd32c0(&var_120, &var_f8)
            r9_1 = arg3
        
        r15 = var_108
        goto label_140ce953a
    
    if ((r12 & 0x20) == 0)
        r9_1 = arg3
        int32_t rbx_9 = var_124
        int32_t r8_14 = r9_1[1].d
        
        if (r8_14 != 0)
            sub_140cd9680(&var_120, 0, r8_14)
            r9_1 = arg3
        else if (rbx_9 == 0)
            goto label_140ce953a
        
        r9_1[1].d = 0
        
        if ((not.b(rdx) & 1) != 0)
            if (rbx_9 != *(r9_1 + 0xc))
                sub_140ce4fc0(r9_1, rbx_9, rcx)
        else if (rbx_9 != *(r9_1 + 0xc))
            sub_140ce4f50(r9_1, rbx_9, rcx)
        
        if (rbx_9 != 0)
            sub_140cd78f0(&var_120, rbx_9)
        
        goto label_140ce9944
    
    void* rcx_22 = *(arg1 + 0x78)
    int64_t rdx_18 = *(*(rcx_22 + 8) + 0x10)
    
    if (not(test_bit(rdx_18, 0x18)) || ((rdx_18.b & 0x40) != 0 && *(rcx_22 + 0x78) != 0))
        int64_t* rcx_27 = arg3
        int32_t rbx_7 = var_124
        result.b = not.b(rdx)
        int32_t r8_10 = rcx_27[1].d
        
        if (r8_10 != 0)
            sub_140cd9680(&var_120, 0, r8_10)
            rcx_27 = arg3
        label_140ce9821:
            result.b = not.b(rdx)
            rcx_27[1].d = 0
            
            if ((result.b & 1) != 0)
                if (rbx_7 != *(rcx_27 + 0xc))
                    result = sub_140ce4fc0(rcx_27, rbx_7, rcx)
            else if (rbx_7 != *(rcx_27 + 0xc))
                result = sub_140ce4f50(rcx_27, rbx_7, rcx)
            
            if (rbx_7 != 0)
                result = sub_140cd78f0(&var_120, rbx_7)
            
            rcx_27 = arg3
        else if (rbx_7 != 0)
            goto label_140ce9821
        
        int32_t rbx_8 = 0
        
        if (var_124 s> 0)
            while (true)
                void* r8_12
                
                if (rcx_27[1].d != 0)
                    void* rdx_28 = *rcx_27
                    
                    if ((not.b(rdx) & 1) == 0 && (rdx_28.b & 1) != 0)
                        rdx_28 = (rdx_28 s>> 1) + rcx_27
                    
                    r8_12 = sx.q(rcx * rbx_8) + rdx_28
                else
                    r8_12 = nullptr
                
                int64_t* rcx_30 = *(arg1 + 0x78)
                result = (*(*rcx_30 + 0x88))(rcx_30, arg2, r8_12, 0)
                rbx_8 += 1
                
                if (rbx_8 s>= var_124)
                    break
                
                rcx_27 = arg3
    else
        int64_t* rcx_23 = arg3
        int32_t rbx_6 = var_124
        int32_t r8_4 = rcx_23[1].d
        
        if (r8_4 != 0)
            sub_140cd9680(&var_120, 0, r8_4)
            rcx_23 = arg3
        label_140ce973f:
            rcx_23[1].d = 0
            
            if ((not.b(rdx) & 1) != 0)
                if (rbx_6 != *(rcx_23 + 0xc))
                    sub_140ce4fc0(rcx_23, rbx_6, rcx)
            else if (rbx_6 != *(rcx_23 + 0xc))
                sub_140ce4f50(rcx_23, rbx_6, rcx)
            
            if (rbx_6 != 0)
                uint64_t rdx_21 = zx.q(arg3[1].d)
                int32_t rax_32 = rdx_21.d + rbx_6
                arg3[1].d = rax_32
                
                if ((not.b(rdx) & 1) != 0)
                    if (rax_32 s> *(arg3 + 0xc))
                        sub_140ce4cd0(arg3, rdx_21, rcx)
                else if (rax_32 s> *(arg3 + 0xc))
                    sub_140ce4c40(arg3, rdx_21.d, rcx)
            
            rcx_23 = arg3
        else if (rbx_6 != 0)
            goto label_140ce973f
        
        if (rcx_23[1].d != 0)
            r14 = *rcx_23
            
            if ((not.b(rdx) & 1) == 0 && (r14.b & 1) != 0)
                r14 = (r14 s>> 1) + rcx_23
        
        int64_t r9_2 = *rsi
        result = (*(r9_2 + 0x150))(rsi, r14, sx.q(*(*(arg1 + 0x78) + 0x3c) * var_124), r9_2)
__security_check_cookie(rax_1 ^ &var_158)
return result
