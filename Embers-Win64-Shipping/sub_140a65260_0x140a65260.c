// 函数: sub_140a65260
// 地址: 0x140a65260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 8) - *(arg1 + 0x34) != arg2[1].d - *(arg2 + 0x34))
    result.b = 0
else
    int32_t r10_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x10
    int32_t var_74_1 = 1
    int32_t var_78_1 = 0
    int32_t rcx = 0
    int32_t var_60_1 = 0
    int32_t r8_2 = 0
    void* var_70 = r9_1
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        int32_t var_64_3
        
        if (rdx_2 != 0)
        label_140a65318:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_74_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            int32_t var_64_2 = rcx - rax_9 + 0x1f
            
            if (rcx - rax_9 + 0x1f s> r10_1)
                var_64_3 = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8_2)
                rcx += 0x20
                r8_2 += 1
                var_60_1 = rcx
                var_78_1 = r8_2
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_68_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_140a65318
            
            var_64_3 = r10_1
    
    int128_t var_38_1 = 0xffffffff
    int512_t zmm1
    zmm1.o = var_78_1.o
    var_78_1.o = arg1.o
    int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_68_1.o = zmm1.o
    
    if (0 s>= r10_1)
    label_140a6547c:
        result.b = 1
    else
        int32_t var_5c
        int32_t rcx_2 = var_5c
        
        while (true)
            int64_t rdx_5 = sx.q(rcx_2) * 5
            int64_t rcx_3 = *var_78_1.q
            int64_t* rbx_1 = *(rcx_3 + (rdx_5 << 3) + 0x18)
            int64_t* rdi_1 = rcx_3 + (rdx_5 << 3)
            int64_t* r15_1 = rdi_1[2]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int32_t arg_8
            sub_140926e00(arg2, &arg_8, rdi_1)
            int64_t rax_13 = sx.q(arg_8)
            void* const rcx_5
            
            if (rax_13.d == 0xffffffff)
                rcx_5 = nullptr
            else
                rcx_5 = *arg2 + rax_13 * 0x28
            
            int64_t** r14_1 = rcx_5 + 0x10
            
            if (rcx_5 == 0)
                r14_1 = nullptr
            
            if (r14_1 != 0 && *r14_1 != 0 && sub_140a32ae0(rdi_1, data_14399ea90, 1) == 0)
                int64_t* rsi_1 = *r14_1
                int32_t rax_17 = (*(*r15_1 + 0x38))(r15_1)
                int64_t rdx_9 = *rsi_1
                
                if (rax_17 != (*(rdx_9 + 0x38))(rsi_1, rdx_9).d)
                label_140a65480:
                    
                    if (rbx_1 == 0)
                        break
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    break
                
                if (sub_140a654d0(r15_1, *r14_1, zmm1).b == 0)
                    goto label_140a65480
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            var_60_1 &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            rcx_2 = var_5c
            
            if (rcx_2 s>= *(var_68_1.q + 0x18))
                goto label_140a6547c
        
        result.b = 0

return result
