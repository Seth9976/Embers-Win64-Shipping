// 函数: sub_141e6b020
// 地址: 0x141e6b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
int32_t rax_4
int512_t zmm1
rax_4, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)
int32_t rbx = 0
void* var_78
int64_t var_70
int64_t var_68

if (rax_4 s>= 7)
    int32_t rax_5
    int512_t zmm1_1
    rax_5, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a94b8)
    
    if (rax_5 s< 0xa)
        __builtin_memset(&var_78, 0, 0x2c)
        int32_t var_4c_1 = 0x80
        int32_t var_48_1 = 0xffffffff
        int32_t var_44_1 = 0
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        sub_141e51cc0(arg2, &var_78, zmm1_1)
        int32_t var_30_2 = 0
        
        if (var_38_1 != 0)
            sub_140a74f90(var_38_1)
        
        var_70.d = 0
    label_141e6b1b7:
        int32_t var_48_3 = 0xffffffff
        int32_t var_44_3 = 0
        sub_14059a8e0(&var_68, 0)
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        void* rcx_14 = var_78
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
else if (arg2[8].d s>= 0x184)
    int64_t* rcx_7 = arg2[1]
    int16_t* rdx_1 = *rcx_7
    int16_t var_a8
    
    if (&rdx_1[1] u> rcx_7[1])
        int16_t* rdx_2 = &var_a8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_2, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 2)
    else
        var_a8 = *rdx_1
        *rcx_7 += 2
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_4c_2 = 0x80
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    int64_t var_38_2 = 0
    int32_t var_30_3 = 0
    sub_141e51bf0(arg2, &var_78, zmm1)
    int32_t var_30_4 = 0
    
    if (var_38_2 != 0)
        sub_140a74f90(var_38_2)
    
    var_70.d = 0
    goto label_141e6b1b7

int32_t result
int512_t zmm1_2
result, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9418)

if (result s< 0xf)
label_141e6b244:
    
    if ((arg2[5].b & 1) != 0)
        int32_t rdx_8 = arg1[5].d - *(arg1 + 0x54)
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != rdx_8)
            sub_140638c50(arg1, rdx_8)
        
        int32_t r9_1 = arg1[9].d
        void* r8_1 = &arg1[6]
        int32_t var_a0_1 = 0
        int32_t rcx_20 = 0
        int32_t var_9c_1 = 1
        void* var_98 = r8_1
        int32_t var_90_1 = 0xffffffff
        int64_t var_8c_1 = 0
        
        if (r9_1 != 0)
            void* rax_10 = *(r8_1 + 0x10)
            
            if (rax_10 != 0)
                r8_1 = rax_10
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_1 - 1)
            int32_t rdx_11 = *r8_1
            
            if (rdx_11 != 0)
            label_141e6b2d6:
                int32_t rax_17 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
                int32_t var_9c_2 = rax_17
                int32_t rax_18
                
                if (rax_17 == 0)
                    rax_18 = 0x20
                else
                    rax_18 = 0x1f - temp0_2
                
                var_8c_1.d = rcx_20 - rax_18 + 0x1f
                
                if (rcx_20 - rax_18 + 0x1f s> r9_1)
                    var_8c_1.d = r9_1
            else
                while (true)
                    int64_t rdx_12 = sx.q(rbx)
                    rcx_20 += 0x20
                    rbx += 1
                    var_8c_1:4.d = rcx_20
                    var_a0_1 = rbx
                    
                    if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r8_1 + (rdx_12 << 2) + 4)
                    var_90_1 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_141e6b2d6
                
                var_8c_1.d = r9_1
        
        var_78 = &arg1[4]
        int64_t var_60
        var_60.o = 0xffffffff
        var_70.o = var_a0_1.o
        zmm1_2.o = var_68.o
        var_a0_1.o = var_78.o
        int64_t var_80_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_90_1.o = zmm1_2.o
        
        if (0 s< r9_1)
            int32_t i_1
            int32_t i = i_1
            
            do
                int64_t rbx_1 = sx.q(arg1[1].d)
                int32_t rax_20 = (rbx_1 + 1).d
                arg1[1].d = rax_20
                
                if (rax_20 s> *(arg1 + 0xc))
                    sub_1405a4d70(arg1)
                
                int64_t* r8_2 = *arg1 + (rbx_1 << 3)
                
                if (r8_2 != 0)
                    *r8_2 = *(*var_a0_1.q + sx.q(i) * 0x30)
                
                var_8c_1:4.d &= not.d(var_98:4.d)
                sub_14059bdd0(&var_98)
                i = i_1
            while (i s< *(var_90_1.q + 0x18))
        
        result = sub_141e4d1c0(&arg1[4], &arg1[2])
else
    result = sub_141e52120(arg2, &arg1[4], zmm1_2)
    
    if ((arg2[5].b & 1) != 0)
        int64_t rcx_17 = arg1[0xc]
        
        if (rcx_17 != 0)
            arg1[0xc] = sub_140a84c80(rcx_17, 0, 0)
        
        arg1[0xd].d = 0
        result, zmm1_2 = sub_140a6d3f0(&arg1[4], arg1[5].d - *(arg1 + 0x54), 0)
        goto label_141e6b244

__security_check_cookie(rax_1 ^ &var_c8)
return result
