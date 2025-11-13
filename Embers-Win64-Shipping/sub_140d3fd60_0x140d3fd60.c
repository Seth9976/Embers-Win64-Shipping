// 函数: sub_140d3fd60
// 地址: 0x140d3fd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_58 = &arg_8
void*** (* var_60)() = j_sub_140d3a3e0
void* rbx = sub_140a756e0(&var_60, &data_1439aae10) + 0x10
void* result

if (arg1 != 0xffffffff)
    int32_t r10_1 = *(rbx + 0x30)
    void* r9_1 = rbx + 0x18
    int32_t var_a4_1 = 1
    int32_t rcx_2 = 0
    int32_t var_a8 = 0
    int32_t r8_1 = 0
    void* var_a0_1 = r9_1
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_140d3fe68:
            int32_t rax_8 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_a4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_94_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r10_1)
                var_94_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_94_1:4.d = r8_1
                var_a8 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_140d3fe68
            
            var_94_1.d = r10_1
    
    double zmm2[0x2] = var_98_1.o
    double var_38_1[0x2] = zmm2
    double var_48_1[0x2] = var_a8.o
    double var_88[0x2] = (rbx + 8).o
    result = zmm2[0] u>> 0x20
    int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    
    if (result.d s< r10_1)
        int32_t i = var_48_1[1]:4.d
        
        do
            int64_t rdx_6 = sx.q(i) * 3
            int64_t rcx_4 = *var_88[0]
            int32_t r8_3 = *(rcx_4 + (rdx_6 << 3) + 8)
            
            if ((arg1 & r8_3) != 0)
                int64_t rdx_7 = *(rcx_4 + (rdx_6 << 3))
                *(rbx + 0x58) = rdx_7
                int32_t rax_16 = not.d(arg1) & r8_3
                *(rbx + 0x60) = rax_16
                
                if (rax_16 != 0)
                    if (*(rbx + 0x10) == *(rbx + 0x3c))
                        sub_140d186f0(&data_143e1d990, rbx)
                    
                    var_a8.q = rbx + 0x58
                    void* var_a0_2 = rbx + 0x60
                    int32_t arg_10
                    sub_1405a7a30(rbx + 8, &arg_10, &var_a8, nullptr)
                else
                    *(rbx + 0x60) = 0
                    int32_t rsi_4 = *(rbx + 0x10)
                    int32_t rdi_3 = *(rbx + 0x3c)
                    sub_140868c90(rbx + 8, rdx_7)
                    
                    if (rsi_4 - rdi_3 s> 0 && *(rbx + 0x10) == *(rbx + 0x3c))
                        sub_140d2af80(&data_143e1d990, rbx)
            
            var_48_1[1].d &= not.d(var_88[1]:4.d)
            sub_14059bdd0(&var_88[1])
            result = var_48_1[0]
            i = var_48_1[1]:4.d
        while (i s< *(result + 0x18))
else
    *(rbx + 0x58) = 0
    *(rbx + 0x60) = 0
    int32_t rsi_1 = *(rbx + 0x10)
    int32_t rdi_1 = *(rbx + 0x3c)
    result = sub_140865470(rbx + 8, 0)
    
    if (rsi_1 - rdi_1 s> 0)
        return sub_140d2af80(&data_143e1d990, rbx)

return result
