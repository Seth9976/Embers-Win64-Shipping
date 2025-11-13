// 函数: sub_142381c50
// 地址: 0x142381c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = arg1
*arg1 = &data_143336478
sub_140d21fd0()
sub_1405a46b0(&data_1439aad30, rdi)
int32_t r8 = 0
int32_t var_d4 = 1
void* rsi = &rdi[2]
int32_t var_d8 = 0
int32_t r11 = *(rsi + 0x28)
void* r9 = rsi + 0x10
int32_t rcx = 0
void* var_d0 = r9
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_142381d08:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_c4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_c4:4.d = rcx
            var_d8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_c8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142381d08
        
        var_c4.d = r11

double zmm4[0x2] = var_c8.o
void* var_40 = rsi
double var_60[0x2] = var_d8.o
int16_t var_80 = 0
int128_t var_58
int128_t var_a8 = var_58
int128_t var_b8 = rsi.o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q

if ((rcx_2 u>> 0x20).d s< *(var_58.q + 0x18))
    int32_t i = var_a8:0xc.d
    
    do
        void* rsi_1 = *(*var_b8.q + sx.q(i) * 0x28 + 0x18)
        
        if (rsi_1 != 0)
            int32_t j = 0
            
            if (*(rsi_1 + 0x18) s> 0)
                int64_t r8_1 = 0
                
                do
                    r8_1 += 0x10
                    j += 1
                    void* rcx_5 = *(*(rsi_1 + 0x10) + r8_1 - 0x10)
                    *(rcx_5 + 0x5c) -= 1
                while (j s< *(rsi_1 + 0x18))
            
            sub_14095cd40(rsi_1 + 0x10, 0)
            int32_t j_1 = 0
            
            if (*(rsi_1 + 0x28) s> 0)
                int64_t r15_1 = 0
                
                do
                    int64_t* rdi_1 = *(rsi_1 + 0x20)
                    int64_t* rbx_1 = *(rdi_1 + r15_1 + 8)
                    
                    if (rbx_1 != 0)
                        int32_t rax_15 = rbx_1[1].d
                        
                        if (rax_15 != 0)
                            rbx_1[1].d = rax_15 + 1
                            
                            if (rbx_1 != 0)
                                void* rdi_2 = *(rdi_1 + r15_1)
                                
                                if (rdi_2 != 0 && *(rdi_2 + 0x12) == 0)
                                    *(rdi_2 + 0x12) = 1
                                    *(rdi_2 + 0x98) = 0
                                    
                                    if (*(rdi_2 + 0x11) == 0)
                                        rbx_1[1].d += 1
                                        int64_t var_78 = 0
                                        int32_t var_70_1 = 0
                                        var_d8.q = rdi_2
                                        int64_t* var_d0_1 = rbx_1
                                        sub_14238bbe0(rdi_2 + 0x28, &var_d8, &var_78)
                                        sub_14239b010(rdi_2)
                                    
                                    sub_142392400(rdi_2)
                                
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp3_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp3_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    j_1 += 1
                    r15_1 += 0x10
                while (j_1 s< *(rsi_1 + 0x28))
            
            sub_14238b300(rsi_1 + 0x20, 0)
            sub_140d94cb0(rsi_1 + 0x20)
            sub_140596d80(rsi_1 + 0x10)
            j_sub_140a74f90(rsi_1)
        
        sub_141e84750(zmm4[1], i)
        var_80.b = 1
        var_a8:8.d &= not.d(var_b8:0xc.d)
        sub_14059bdd0(&var_b8:8)
        i = var_a8:0xc.d
    while (i s< *(var_a8.q + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        sub_142387060(rsi, *(rsi + 8) - *(rsi + 0x34), 1)
    
    rdi = arg1

int64_t rcx_19 = rdi[0x1b]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_140596d80(&rdi[0x18])
sub_140596d80(&rdi[0x16])
rdi[0x15].d = 0
int64_t rcx_22 = rdi[0x14]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

sub_1423812c0(&rdi[0xc])
*(rsi + 0x48) = 0
int64_t rcx_24 = *(rsi + 0x40)

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

sub_1413c3790(rsi)
*rdi = &data_142d44d70
void* rcx_26 = data_143e1a338

if (rcx_26 != 0 && rdi[1].b != 0)
    return sub_140bb6e00(rcx_26, rdi)

return &data_142d44d70
