// 函数: sub_141e48770
// 地址: 0x141e48770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a94c8)
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int32_t rax_1 = arg2[8].d

if (rax_1 s>= 0x136)
    zmm1 = sub_141e38ee0(arg2, arg1 + 0x58, zmm1)
    rax_1 = arg2[8].d

int64_t* var_48
int32_t arg_8
int32_t var_b8
void* var_b0
int32_t i_3
void* var_88_1
int16_t var_80_1
int128_t zmm0_1
int128_t zmm4_1

if (rax_1 s< 0x14b)
    int32_t rbx_4 = 0
    int32_t var_b4_3 = 1
    var_b8 = 0
    int32_t r10_2 = *(arg1 + 0x1c8)
    void* r8_5 = arg1 + 0x1b0
    var_b0 = r8_5
    int32_t rcx_23 = 0
    int32_t var_a8_2 = 0xffffffff
    int64_t var_a4_2 = 0
    
    if (r10_2 != 0)
        void* rax_30 = *(r8_5 + 0x10)
        
        if (rax_30 != 0)
            r8_5 = rax_30
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(r10_2 - 1)
        int32_t rdx_23 = *r8_5
        
        if (rdx_23 != 0)
        label_141e48b16:
            int32_t rax_37 = neg.d(rdx_23) & rdx_23
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_37)
            int32_t var_b4_4 = rax_37
            int32_t rax_38
            
            if (rax_37 == 0)
                rax_38 = 0x20
            else
                rax_38 = 0x1f - temp0_4
            
            var_a4_2.d = rcx_23 - rax_38 + 0x1f
            
            if (rcx_23 - rax_38 + 0x1f s> r10_2)
                var_a4_2.d = r10_2
        else
            while (true)
                int64_t rdx_24 = sx.q(rbx_4)
                rcx_23 += 0x20
                rbx_4 += 1
                var_a4_2:4.d = rcx_23
                var_b8 = rbx_4
                
                if (rdx_24.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                    break
                
                rdx_23 = *(r8_5 + (rdx_24 << 2) + 4)
                var_a8_2 = 0xffffffff
                
                if (rdx_23 != 0)
                    goto label_141e48b16
            
            var_a4_2.d = r10_2
    
    zmm4_1 = var_a8_2.o
    void* var_50_2 = arg1 + 0x1a0
    zmm0_1 = var_b8.o
    int128_t var_60_2 = zmm4_1
    var_88_1 = arg1 + 0x1a0
    var_80_1 = 0
    void* rax_40 = zmm0_1.q
    var_a8_2.o = zmm0_1
    zmm1.o = zmm4_1
    var_b8.o = (arg1 + 0x1a0).o
    zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm4_1.q)
    zmm0_1.q = (zmm1.o).q
    int128_t var_98_2 = zmm0_1
    
    if ((zmm4_1.q u>> 0x20).d s< *(rax_40 + 0x18))
        int32_t i = i_3
        
        do
            void** rbx_5 = var_b8.q
            int64_t r8_6 = *arg2
            int64_t rdi_2 = sx.q(i) * 0x28
            (*(r8_6 + 0x140))(arg2, *rbx_5 + rdi_2, r8_6)
            void* rbx_6 = *rbx_5
            (*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
            (*(*arg2 + 0x140))(arg2, rbx_6 + 8 + rdi_2)
            zmm1 = sub_141e39770(arg2, rbx_6 + 0x10 + rdi_2, zmm1)
            var_a4_2:4.d &= not.d(var_b0:4.d)
            sub_14059bdd0(&var_b0)
            i = i_3
        while (i s< *(var_a8_2.q + 0x18))
        
    label_141e48c1b:
        
        if (var_80_1.b != 0 && var_80_1:1.b != 0)
            zmm1 = sub_14093d550(var_88_1, *(var_88_1 + 8) - *(var_88_1 + 0x34), 1)
else
    int64_t* rcx_3 = arg2[1]
    
    if ((arg2[5].b & 1) == 0)
        arg_8 = *(arg1 + 0x1a8) - *(arg1 + 0x1d4)
        int32_t* rdx_8 = *rcx_3
        
        if (&rdx_8[1] u> rcx_3[1])
            int32_t* rdx_9 = &arg_8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_9, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_9, 4)
        else
            arg_8 = *rdx_8
            *rcx_3 += 4
        
        int32_t rbx_1 = 0
        int32_t var_b4_1 = 1
        var_b8 = 0
        int32_t r10_1 = *(arg1 + 0x1c8)
        void* r8_2 = arg1 + 0x1b0
        var_b0 = r8_2
        int32_t rcx_13 = 0
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r10_1 != 0)
            void* rax_13 = *(r8_2 + 0x10)
            
            if (rax_13 != 0)
                r8_2 = rax_13
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_12 = *r8_2
            
            if (rdx_12 != 0)
            label_141e48996:
                int32_t rax_20 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_20)
                int32_t var_b4_2 = rax_20
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_1
                
                var_a4_1.d = rcx_13 - rax_21 + 0x1f
                
                if (rcx_13 - rax_21 + 0x1f s> r10_1)
                    var_a4_1.d = r10_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rbx_1)
                    rcx_13 += 0x20
                    rbx_1 += 1
                    var_a4_1:4.d = rcx_13
                    var_b8 = rbx_1
                    
                    if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r8_2 + (rdx_13 << 2) + 4)
                    var_a8_1 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_141e48996
                
                var_a4_1.d = r10_1
        
        zmm4_1 = var_a8_1.o
        void* var_50_1 = arg1 + 0x1a0
        zmm0_1 = var_b8.o
        int128_t var_60_1 = zmm4_1
        var_88_1 = arg1 + 0x1a0
        var_80_1 = 0
        void* rax_23 = zmm0_1.q
        var_a8_1.o = zmm0_1
        zmm1.o = zmm4_1
        var_b8.o = (arg1 + 0x1a0).o
        zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm4_1.q)
        zmm0_1.q = (zmm1.o).q
        int128_t var_98_1 = zmm0_1
        
        if ((zmm4_1.q u>> 0x20).d s< *(rax_23 + 0x18))
            int32_t i_1 = i_3
            
            do
                void** rbx_2 = var_b8.q
                int64_t r8_3 = *arg2
                int64_t rdi_1 = sx.q(i_1) * 0x28
                (*(r8_3 + 0x140))(arg2, *rbx_2 + rdi_1, r8_3)
                void* rbx_3 = *rbx_2
                (*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
                (*(*arg2 + 0x140))(arg2, rbx_3 + 8 + rdi_1)
                zmm1 = sub_141e39770(arg2, rbx_3 + 0x10 + rdi_1, zmm1)
                var_a4_1:4.d &= not.d(var_b0:4.d)
                sub_14059bdd0(&var_b0)
                i_1 = i_3
            while (i_1 s< *(var_a8_1.q + 0x18))
            
            goto label_141e48c1b
    else
        int32_t* rdx_2 = *rcx_3
        
        if (&rdx_2[1] u> rcx_3[1])
            int32_t* rdx_3 = &arg_8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_3, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_3, 4)
        else
            arg_8 = *rdx_2
            *rcx_3 += 4
        
        int32_t rbx = 0
        int64_t arg_18 = 0
        __builtin_memset(&var_b8, 0, 0x18)
        zmm1 = sub_141e3d1b0(arg1 + 0x1a0, 0)
        
        if (arg_8 s> 0)
            var_48 = &arg_18
            int32_t* var_40_1 = &var_b8
            
            do
                (*(*arg2 + 0x140))(arg2, &arg_18)
                (*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
                (*(*arg2 + 0x140))(arg2, &var_b8)
                sub_141e39770(arg2, &var_b0, zmm1)
                void arg_10
                zmm1 = sub_141e35550(arg1 + 0x1a0, &arg_10, &var_48, nullptr)
                rbx += 1
            while (rbx s< arg_8)
        
        void* rcx_11 = var_b0
        
        if (rcx_11 != 0)
            zmm1 = sub_140a74f90(rcx_11)

if (arg2[8].d s>= 0x152)
    sub_1409ac860(arg2, arg1 + 0x160, zmm1)
else
    *(arg1 + 0x160) = *sub_140b214c0(&var_48)

int32_t rax_50 = arg2[8].d

if (rax_50 s>= 0x184)
    sub_140d23dc0(arg1, 0x30)
    sub_141e6afc0(arg1 + 0x1f0, arg2, zmm1)
    *(arg1 + 0x240) = sub_141e5f5c0(arg1 + 0x1f0, &data_143f398c8)
    rax_50 = arg2[8].d

if (rax_50 s>= 0x1f5)
    sub_141c9c3e0(arg1 + 0x290, 0)
    int64_t* i_2 = *(arg1 + 0x280)
    
    for (void* r12_1 = &i_2[sx.q(*(arg1 + 0x288)) * 3]; i_2 != r12_1; i_2 = &i_2[3])
        int64_t* j = i_2[1]
        
        for (void* r14_1 = &j[sx.q(i_2[2].d)]; j != r14_1; j = &j[1])
            sub_141e35350(arg1 + 0x290, j, i_2)
else
    sub_141e3bbc0(arg1, 1)

int32_t rax_53
int512_t zmm1_1
rax_53, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a94c8)

if (rax_53 s>= 2)
    sub_141ff4780(&arg_8, arg2, 0, 0xd6)
    
    if ((arg_8.b & 1) == 0)
        sub_1409ad9b0(arg2, arg1 + 0x258, zmm1_1)

return sub_141e464f0(arg1 + 0x58, arg1, 0) __tailcall
