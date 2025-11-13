// 函数: sub_140fc39e0
// 地址: 0x140fc39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
(*(*arg1 + 0x58))(arg1, *sub_140b58260(&arg_8, u"WINDOWS", 1))
int64_t* rcx_2 = data_143e2b840

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    int64_t* rcx_3 = data_143e2b840
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    data_143e2b840 = 0

j_sub_140b3db50()
int32_t var_c4 = 1
int32_t r11 = arg1[7].d
void* r9 = &arg1[4]
void* var_c0 = r9
int32_t rcx_4 = 0
int32_t var_c8 = 0
int32_t var_b8 = 0xffffffff
int32_t r8 = 0
int64_t var_b4 = 0

if (r11 != 0)
    void* rax_3 = *(r9 + 0x10)
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140fc3ad8:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_c4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_b4:4.d = r8
            var_c8 = rcx_4
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140fc3ad8
        
        var_b4.d = r11

double zmm4[0x2] = var_b8.o
void* var_30 = &arg1[2]
char var_60 = 0
double zmm3[0x2] = var_c8.o
double result = zmm3[0]
int128_t var_98 = (&arg1[2]).o
double rcx_6 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_78[0x2] = zmm4

if ((rcx_6 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i = zmm3[1]:4.d
    
    do
        int64_t* rbx_1 = var_98.q
        int64_t rcx_8 = sx.q(i) * 3
        int64_t* rcx_9 = *(*rbx_1 + (rcx_8 << 3) + 8)
        (*(*rcx_9 + 0x10))(rcx_9)
        int64_t* rax_16 = sub_140b63b70(*rbx_1 + (rcx_8 << 3), &var_c8)
        int64_t var_e8 = 0
        int32_t var_e0_1 = 0
        sub_1405947f0(&var_e8, 8)
        int32_t rcx_13 = var_e0_1 + 8
        
        if (rcx_13 s> 0)
            sub_140594770(&var_e8)
        
        UnDecorator::getReferenceType(var_e8, u"Sockets", 0x10)
        int64_t rbx_4
        
        if (sub_140a32a50(rax_16, &var_e8, 0) != 0)
            int16_t* rdx_14
            
            if (rax_16[1].d == 0)
                rdx_14 = &data_142d40450
            else
                rdx_14 = *rax_16
            
            void arg_10
            rbx_4 = *sub_140b58260(&arg_10, rdx_14, 1)
        else
            int32_t rbx_2 = rax_16[1].d
            int16_t* rdi_4
            
            if (rcx_13 s> 1)
                int32_t r14_1 = rbx_2 - 1
                
                if (rbx_2 == 0)
                    r14_1 = 0
                
                int32_t rax_18
                
                if (rcx_13 == 0)
                    rax_18 = rcx_13 + 1
                
                if (rcx_13 != 0 || r14_1 == 0)
                    rax_18 = 0
                
                int64_t rbx_3 = var_e8
                int32_t rcx_19 = rax_18 + r14_1
                int16_t* var_d8 = nullptr
                int32_t var_cc
                
                if (rcx_13 != 0 || rcx_19 != 0)
                    sub_1405a4c70(&var_d8, rcx_13 + rcx_19, 0)
                    memcpy(var_d8, rbx_3, rcx_13 * 2)
                else
                    var_cc = 0
                
                sub_140a20ba0(&var_d8, *rax_16, r14_1)
                rdi_4 = var_d8
                rbx_2 = rcx_13
                int32_t var_9c_2 = var_cc
                int32_t var_d0_1
                var_d0_1.q = 0
                var_d8 = nullptr
            else
                int64_t rsi_2 = *rax_16
                rdi_4 = nullptr
                uint64_t var_a8 = 0
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_a8, rbx_2, 0)
                    rdi_4 = var_a8
                    memcpy(rdi_4, rsi_2, rbx_2 * 2)
                else
                    int32_t var_9c_1 = 0
            
            int16_t* const rdx_13 = &data_142d40450
            
            if (rbx_2 != 0)
                rdx_13 = rdi_4
            
            rbx_4 = *sub_140b58260(&arg_8, rdx_13, 1)
            
            if (rdi_4 != 0)
                sub_140a74f90(rdi_4)
        
        int64_t rcx_26 = var_e8
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_c8.q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        sub_140b4a6b0(&data_143de7d78, rbx_4, 1)
        zmm3[1].d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
        result = zmm3[0]
        i = zmm3[1]:4.d
    while (i s< *(result i+ 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        return sub_1405b6730(&arg1[2], arg1[3].d - *(arg1 + 0x44), 1)

return result
