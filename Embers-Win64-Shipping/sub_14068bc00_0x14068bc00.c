// 函数: sub_14068bc00
// 地址: 0x14068bc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg2[1]
int64_t* i_1 = *arg2
*(arg1 + 0x2c) = 0x80
__builtin_memset(arg1, 0, 0x2c)
void* r14 = &arg1[2]
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
int32_t rdi_2 = ((r12 - i_1) s>> 4).d
arg1[8] = 0
arg1[9].d = 0
int64_t var_78

if (rdi_2 s> arg1[1].d)
    sub_1406a4ae0(arg1, rdi_2)
    int32_t i_3
    
    if (rdi_2 u< 4)
        i_3 = 1
    else
        uint32_t rdi_3 = rdi_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdi_3 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdi_3 + 7)
        i_3 = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_4 = arg1[9].d
    
    if (rax_4 == 0 || rax_4 s< i_3)
        arg1[9].d = i_3
        int64_t rcx_4 = arg1[8]
        
        if (rcx_4 != 0)
            arg1[8] = sub_140a84c80(rcx_4, 0, 0)
            i_3 = arg1[9].d
        
        if (i_3 != 0)
            int64_t rcx_5 = arg1[8]
            
            if (i_3 u> 1)
                arg1[8] = sub_140a84c80(rcx_5, sx.q(i_3) << 2, 0)
            else if (rcx_5 != 0)
                arg1[8] = sub_140a84c80(rcx_5, 0, 0)
            
            if (i_3 s> 0)
                int64_t r8_1 = 0
                uint64_t i_2 = zx.q(i_3)
                uint64_t i
                
                do
                    void* rcx_6 = arg1[8]
                    void* rax_7 = &arg1[7]
                    int64_t rdx_9 = (sx.q(arg1[9].d) - 1) & r8_1
                    
                    if (rcx_6 != 0)
                        rax_7 = rcx_6
                    
                    r8_1 += 1
                    *(rax_7 + (rdx_9 << 2)) = 0xffffffff
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            int32_t r9_1 = *(r14 + 0x18)
            int32_t rcx_7 = 0
            var_78.d = 0
            int32_t r8_2 = 0
            var_78:4.d = 1
            void* var_70_1 = r14
            int32_t var_68_1 = 0xffffffff
            int64_t var_64_1 = 0
            
            if (r9_1 != 0)
                void* rax_8 = *(r14 + 0x10)
                
                if (rax_8 != 0)
                    r14 = rax_8
                
                int32_t temp0_3
                int32_t temp1_1
                temp0_3:temp1_1 = sx.q(r9_1 - 1)
                int32_t rdx_12 = *r14
                
                if (rdx_12 != 0)
                label_14068bdc8:
                    int32_t rax_14 = neg.d(rdx_12) & rdx_12
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(rax_14)
                    var_78:4.d = rax_14
                    int32_t r15_1
                    
                    if (rax_14 == 0)
                        r15_1 = 0x20
                    else
                        r15_1 = 0x1f - temp0_4
                    
                    var_64_1.d = r8_2 - r15_1 + 0x1f
                    
                    if (r8_2 - r15_1 + 0x1f s> r9_1)
                        var_64_1.d = r9_1
                else
                    while (true)
                        rcx_7 += 1
                        r8_2 += 0x20
                        var_78.d = rcx_7
                        var_64_1:4.d = r8_2
                        
                        if (rcx_7 s> ((temp0_3 & 0x1f) + temp1_1) s>> 5)
                            break
                        
                        var_68_1 = 0xffffffff
                        rdx_12 = *(r14 + (sx.q(rcx_7) << 2))
                        
                        if (rdx_12 != 0)
                            goto label_14068bdc8
                    
                    var_64_1.d = r9_1
            
            int64_t zmm1 = var_68_1.q
            int64_t* rcx_9 = arg1
            int128_t var_50 = var_78.o
            int64_t var_40_1 = zmm1
            
            if ((zmm1 u>> 0x20).d s< r9_1)
                int32_t r14_1 = var_40_1:4.d
                
                while (true)
                    int64_t* rdi_6 = sx.q(r14_1) * 0xa0 + *rcx_9
                    int32_t rax_19 = rdi_6[1].d
                    int32_t rcx_10
                    int16_t* rdx_13
                    
                    if (rax_19 == 0)
                        rdx_13 = &data_142d40450
                        rcx_10 = 0
                    else
                        rdx_13 = *rdi_6
                        rcx_10 = rax_19 - 1
                    
                    int32_t rax_21 = sub_1405969c0(rcx_10, rdx_13) & (arg1[9].d - 1)
                    *(rdi_6 + 0x9c) = rax_21
                    void* rdx_14 = arg1[8]
                    int64_t r8_4 = sx.q(rax_21)
                    void* rax_22 = &arg1[7]
                    
                    if (rdx_14 != 0)
                        rax_22 = rdx_14
                    
                    rdi_6[0x13].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
                    void* rax_24 = &arg1[7]
                    void* rcx_16 = arg1[8]
                    
                    if (rcx_16 != 0)
                        rax_24 = rcx_16
                    
                    *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = r14_1
                    var_40_1.d &= not.d(var_50:4.d)
                    sub_14059bdd0(&var_50)
                    r14_1 = var_40_1:4.d
                    
                    if (r14_1 s>= *(var_50:8.q + 0x18))
                        break
                    
                    rcx_9 = arg1

for (; i_1 != r12; i_1 = &i_1[2])
    var_78 = *i_1
    int64_t var_70_2 = i_1[1]
    void arg_8
    sub_140687c50(arg1, &arg_8, &var_78, nullptr)

return arg1
