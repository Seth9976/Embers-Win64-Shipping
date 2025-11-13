// 函数: sub_1419c85c0
// 地址: 0x1419c85c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x28)
void* r10 = arg1 + 0x10
int32_t var_a4 = 1
int32_t var_a8 = 0
void* var_a0 = r10
int32_t r8 = 0
int32_t var_98 = 0xffffffff
int32_t r9 = 0
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_1419c865a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_94:4.d = r9
            var_a8 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rcx != 0)
                goto label_1419c865a
        
        var_94.d = r11

double zmm4[0x2] = var_98.o
void* var_20 = arg1
int16_t var_50 = 0
double zmm3[0x2] = var_a8.o
double result = zmm3[0]
int128_t var_88 = arg1.o
double rcx_3 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_68[0x2] = zmm4

if ((rcx_3 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i = zmm3[1]:4.d
    
    do
        void** j = data_143f1d998
        int64_t rdx_4 = sx.q(i) << 5
        void* rcx_5 = *var_88.q
        int64_t** rsi_2 = rcx_5 + 8 + rdx_4
        
        for (; j != 0; j = *j)
            if (*(rdx_4 + rcx_5) == *(j[2] + 0x10))
                int64_t* rax_13 = j_sub_140a82f30(0x10)
                int64_t* rdi_1 = rax_13
                
                if (rax_13 == 0)
                    rdi_1 = nullptr
                else
                    *rax_13 = 0
                    rax_13[1] = 0
                
                void* r8_1 = j[2]
                int64_t* rax_14 = sub_1419cb620(&var_a8, *(r8_1 + 0x10), r8_1)
                
                if (rdi_1 != rax_14)
                    int64_t rcx_8 = *rdi_1
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    *rdi_1 = *rax_14
                    *rax_14 = 0
                    rdi_1[1].d = rax_14[1].d
                    *(rdi_1 + 0xc) = *(rax_14 + 0xc)
                    rax_14[1] = 0
                
                int64_t rcx_10 = var_a8.q
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                void*** rax_17 = j_sub_140a82f30(0x18)
                void*** rbx_2 = rax_17
                
                if (rax_17 == 0)
                    rbx_2 = nullptr
                else
                    rax_17[1].d = 1
                    *(rax_17 + 0xc) = 1
                    *rax_17 = &data_142ee2130
                    rax_17[2] = rdi_1
                
                int64_t* var_b8 = rdi_1
                void*** var_b0_1 = rbx_2
                
                if (rsi_2 == &var_b8)
                label_1419c8841:
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp3_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*rbx_2)[1](rbx_2, 1)
                else
                    *rsi_2 = rdi_1
                    int64_t* rdi_2 = rsi_2[1]
                    var_b8 = nullptr
                    
                    if (rbx_2 == rdi_2)
                        goto label_1419c8841
                    
                    void*** var_b0_2 = nullptr
                    rsi_2[1] = rbx_2
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t temp5_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
                        
                        rbx_2 = var_b0_2
                        goto label_1419c8841
                
                break
        
        zmm3[1].d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        result = zmm3[0]
        i = zmm3[1]:4.d
    while (i s< *(result i+ 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_1408854b0(arg1, *(arg1 + 8) - *(arg1 + 0x34), 1)

return result
