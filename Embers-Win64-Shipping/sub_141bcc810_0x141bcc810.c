// 函数: sub_141bcc810
// 地址: 0x141bcc810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x3a8)
int32_t rdi = 0
void arg_8
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    sub_140b58260(&arg_8, u"RichTextStyle", 1)
    rsi = sub_140ddacc0(rax, &arg_8)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_143084f28
    rbx_1[2] = rsi

void*** var_98 = rsi
void*** var_90 = rbx_1

if (arg1 + 0x648 == &var_98)
label_141bcc904:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 0x648) = rsi
    int64_t* rsi_1 = *(arg1 + 0x650)
    var_98 = nullptr
    
    if (rbx_1 == rsi_1)
        goto label_141bcc904
    
    void*** var_90_1 = nullptr
    *(arg1 + 0x650) = rbx_1
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
        
        rbx_1 = var_90_1
        goto label_141bcc904

int64_t result = *(arg1 + 0x140)

if (result != 0)
    void* rbx_2 = *(result + 0x28)
    result = sub_141c067e0()
    
    if (result != 0)
        void* rdx_2 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rbx_2 + 0x38))
            int64_t result_2 = result
            result = *(rbx_2 + 0x30)
            
            if (*(result + (result_2 << 3)) == rdx_2)
                int64_t* rcx_6 = *(arg1 + 0x140)
                void* rax_8 = (*(*rcx_6 + 0x270))(rcx_6)
                int32_t r10_1 = *(rax_8 + 0x28)
                int32_t rcx_7 = 0
                var_98.d = 0
                var_98:4.d = 1
                int32_t var_88_1 = 0xffffffff
                void* var_90_2 = rax_8 + 0x10
                int32_t var_84_1 = 0
                int32_t var_80_1 = 0
                
                if (r10_1 != 0)
                    void* rax_9 = *(rax_8 + 0x20)
                    void* r8_1 = rax_8 + 0x10
                    
                    if (rax_9 != 0)
                        r8_1 = rax_9
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r10_1 - 1)
                    int32_t rdx_5 = *r8_1
                    int32_t var_84_3
                    
                    if (rdx_5 != 0)
                    label_141bcca08:
                        int32_t rax_16 = neg.d(rdx_5) & rdx_5
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
                        var_98:4.d = rax_16
                        int32_t rax_17
                        
                        if (rax_16 == 0)
                            rax_17 = 0x20
                        else
                            rax_17 = 0x1f - temp0_2
                        
                        int32_t var_84_2 = rcx_7 - rax_17 + 0x1f
                        
                        if (rcx_7 - rax_17 + 0x1f s> r10_1)
                            var_84_3 = r10_1
                    else
                        while (true)
                            int64_t rdx_6 = sx.q(rdi)
                            rcx_7 += 0x20
                            rdi += 1
                            int32_t var_80_2 = rcx_7
                            var_98.d = rdi
                            
                            if (rdx_6.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_5 = *(r8_1 + (rdx_6 << 2) + 4)
                            var_88_1 = 0xffffffff
                            
                            if (rdx_5 != 0)
                                goto label_141bcca08
                        
                        var_84_3 = r10_1
                
                int32_t rdx_8 = *(rax_8 + 0x28)
                double zmm2_1[0x2] = var_88_1.o
                double var_38_1[0x2] = zmm2_1
                int32_t rsi_2 = 0xffffffff << (rdx_8.b & 0x1f)
                int128_t var_48_1 = var_98.o
                int32_t r8_3 = rdx_8 s>> 5
                int32_t r9_2 = rdx_8 & 0xffffffe0
                int64_t var_58_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int32_t var_88_2 = rsi_2
                int32_t var_84_4 = rdx_8
                int128_t var_78 = rax_8.o
                int96_t var_68_1 = var_48_1:8.12
                
                if (rdx_8 != r10_1)
                    void* rax_19 = *(rax_8 + 0x20)
                    void* r10_2 = rax_8 + 0x10
                    
                    if (rax_19 != 0)
                        r10_2 = rax_19
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(r10_1 - 1)
                    int32_t rdx_12 = *(r10_2 + (sx.q(r8_3) << 2)) & rsi_2
                    int32_t var_84_6
                    
                    if (rdx_12 != 0)
                    label_141bccad2:
                        int32_t rax_26 = neg.d(rdx_12) & rdx_12
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
                        int32_t rbx_3
                        
                        if (rax_26 == 0)
                            rbx_3 = 0x20
                        else
                            rbx_3 = 0x1f - temp0_4
                        
                        int32_t var_84_5 = r9_2 - rbx_3 + 0x1f
                        
                        if (r9_2 - rbx_3 + 0x1f s> r10_1)
                            var_84_6 = r10_1
                    else
                        while (true)
                            int64_t rcx_12 = sx.q(r8_3)
                            r9_2 += 0x20
                            r8_3 += 1
                            
                            if (rcx_12.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_12 = *(r10_2 + (rcx_12 << 2) + 4)
                            var_88_2 = 0xffffffff
                            
                            if (rdx_12 != 0)
                                goto label_141bccad2
                        
                        var_84_6 = r10_1
                
                while (true)
                    int32_t result_1
                    result = sx.q(result_1)
                    int64_t* rdx_13 = var_78.q
                    
                    if (result.d == (var_88_2.q u>> 0x20).d && var_68_1.q == rax_8 + 0x10
                            && rdx_13 == rax_8)
                        break
                    
                    void* rcx_14 = result * 3
                    int64_t rax_28 = *rdx_13
                    int64_t rbx_4 = *(rax_28 + (rcx_14 << 3))
                    void* rdi_2 = *(rax_28 + (rcx_14 << 3) + 8)
                    
                    if (rbx_4 == *sub_140b58260(&arg_8, u"Default", 1))
                        sub_140de1940(arg1 + 0x3d0, rdi_2 + 8)
                    
                    sub_140dd4f60(*(arg1 + 0x648), rbx_4, rdi_2 + 8)
                    var_68_1:8.d &= not.d(var_78:0xc.d)
                    sub_14059bdd0(&var_78:8)

return result
