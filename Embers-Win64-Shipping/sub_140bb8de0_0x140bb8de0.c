// 函数: sub_140bb8de0
// 地址: 0x140bb8de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x290)
*(arg1 + 0x290) = rax & 0xffefffff
int64_t rdi = sx.q(*(arg1 + 0x358))
int32_t rax_2 = (rdi + 1).d
*(arg1 + 0x358) = rax_2

if (rax_2 s> *(arg1 + 0x35c))
    sub_1405a4d70(arg1 + 0x350)

*(*(arg1 + 0x350) + (rdi << 3)) = arg2
int64_t rax_5 = (*(*arg2 + 0x18))(arg2)
int32_t rdx_1 = arg2[1].d
int32_t rdi_1 = 0
int64_t arg_10 = 0
void* rbx_3

if (rdx_1 != 0)
    int32_t rdx_7 = not.d(rdx_1)
    void* rcx_12 = sx.q(rdx_7) * 0x38 + *(arg1 + 8)
    rbx_3 = *(rcx_12 + 0x20)
    
    if (rbx_3 == 0 || rbx_3 == rax_5)
        *(rcx_12 + 0x20) = 0
        rbx_3 = sub_140cb5e90(arg1, rdx_7)
else
    arg_10 = arg4
    int32_t var_88
    
    if (sub_140b5f8e0(arg4.d) == 0 || arg4 == 0)
        int32_t var_84_1 = 1
        int32_t r10_1 = *(arg1 + 0x388)
        void* r9 = arg1 + 0x370
        void* var_80 = r9
        int32_t rcx_3 = 0
        var_88 = 0
        int32_t r8 = 0
        int32_t var_78_1 = 0xffffffff
        int64_t var_74_1 = 0
        
        if (r10_1 != 0)
            void* rax_7 = *(r9 + 0x10)
            
            if (rax_7 != 0)
                r9 = rax_7
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_4 = *r9
            
            if (rdx_4 != 0)
            label_140bb8ef8:
                int32_t rax_14 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                int32_t var_84_2 = rax_14
                int32_t rax_15
                
                if (rax_14 == 0)
                    rax_15 = 0x20
                else
                    rax_15 = 0x1f - temp0_2
                
                var_74_1.d = r8 - rax_15 + 0x1f
                
                if (r8 - rax_15 + 0x1f s> r10_1)
                    var_74_1.d = r10_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_3)
                    r8 += 0x20
                    rcx_3 += 1
                    var_74_1:4.d = r8
                    var_88 = rcx_3
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9 + (rdx_5 << 2) + 4)
                    var_78_1 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140bb8ef8
                
                var_74_1.d = r10_1
        
        double zmm2[0x2] = var_78_1.o
        double var_48_1[0x2] = zmm2
        double var_58_1[0x2] = var_88.o
        var_88.o = (arg1 + 0x360).o
        uint32_t rax_18 = (zmm2[0] u>> 0x20).d
        int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_78_1.o = var_58_1
        
        if (rax_18 s< r10_1)
            int32_t i_2
            int32_t i = i_2
            
            do
                int64_t* r8_2 = var_88.q
                
                if (*(*r8_2 + sx.q(i) * 0x18 + 8) == arg2)
                    int64_t* rax_26 = *r8_2 + sx.q(i) * 0x18
                    
                    if (rax_26 != 0)
                        arg_10 = *rax_26
                    
                    break
                
                var_74_1:4.d &= not.d(var_80:4.d)
                sub_14059bdd0(&var_80)
                i = i_2
            while (i s< *(var_78_1.q + 0x18))
    
    int64_t* rax_28 = sub_140b63b70(&arg_10, &var_88)
    int16_t* rbx_2
    
    if (rax_28[1].d == 0)
        rbx_2 = &data_142d40450
    else
        rbx_2 = *rax_28
    
    void* rax_30 = sub_140d2f6f0(sub_140d41340(), 0, rbx_2, 0, 0x4002, 0, 1, 0)
    int64_t rcx_10 = var_88.q
    rbx_3 = rax_30
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if (arg3 != 0)
    void** i_1 = *(arg3 + 0x1d8)
    
    for (void* rcx_16 = &i_1[sx.q(*(arg3 + 0x1e0)) * 2]; i_1 != rcx_16; i_1 = &i_1[2])
        if (*i_1 == rax_5)
            rdi_1 += 1
            *i_1 = rbx_3

int32_t rdi_2 = rdi_1 + (*(*arg2 + 0x10))(arg2, rbx_3)

if (*(arg1 + 0x358) s> 0)
    *(arg1 + 0x358) -= 1
    sub_1405c53d0(arg1 + 0x350)

sub_140943590(arg1 + 0x360, arg_10)
*(arg1 + 0x290) = rax
return zx.q(rdi_2)
