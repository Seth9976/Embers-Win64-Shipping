// 函数: sub_1409e6b70
// 地址: 0x1409e6b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xdd) == 0)
    return 

void* rbx_1 = *(arg1 + 0x28)

if (*(rbx_1 + 0x88) == 0)
    sub_14235dec0(rbx_1)
    rbx_1 = *(arg1 + 0x28)

int64_t* rbx_2 = *(rbx_1 + 0x88)

if (rbx_2 == 0)
    return 

int32_t rdx_5 = rbx_2[0xe].d + rbx_2[0xc].d + rbx_2[8].d + rbx_2[0xa].d + rbx_2[6].d

if (rdx_5 s> 0)
    sub_1422345a0(rbx_2, rdx_5)

(*(*rbx_2 + 0x278))(rbx_2)
int64_t var_78
sub_1423633d0(*(arg1 + 0x28), &var_78)
char var_c0
char var_c0_1 = var_c0 | 1
int32_t var_d0_1 = 0
int64_t var_9c_1 = data_143dbb208
int64_t var_a8_1 = var_78
void** const var_d8
int64_t* var_b0_1 = &var_d8
int32_t rax_2 = data_143dbb210
int32_t var_6c
int64_t zmm0_1
zmm0_1.d = var_6c.d f* 2f
int64_t var_cc_1 = 0
int32_t var_c4_1 = 1
int32_t var_b8_1 = 6
int32_t var_90_1 = zmm0_1.d
var_d8 = &data_142e3e618
int32_t var_68
zmm0_1.d = var_68.d f* 2f
float var_8c_1 = zmm0_1.d
float var_64
float var_88_1 = var_64 * 2f
int64_t rdi_1 = sx.q(rbx_2[8].d)
int32_t rax_4 = (rdi_1 + 1).d
rbx_2[8].d = rax_4

if (rax_4 s> *(rbx_2 + 0x44))
    sub_1407755b0(&rbx_2[7])

void*** r8_2 = rdi_1 * 0x58 + rbx_2[7]
*r8_2 = &data_142e3e610
r8_2[1].d = var_d0_1.d
*(r8_2 + 0xc) = var_cc_1
*(r8_2 + 0x14) = var_c4_1
r8_2[3].b ^= (r8_2[3].b ^ var_c0_1) & 1
r8_2[4].d = 6
r8_2[5] = r8_2
*r8_2 = &data_142e3e618
r8_2[6] = var_a8_1
int32_t var_70
r8_2[7].d = var_70
*(r8_2 + 0x3c) = var_9c_1
*(r8_2 + 0x44) = rax_2
r8_2[9].d = var_90_1.d
*(r8_2 + 0x4c) = var_8c_1
r8_2[0xa].d = var_88_1.d
int32_t* var_58
sub_1409aa070(&var_58, sub_1425b0750(), 0, 0, 0)
int64_t* var_48
int64_t* rsi_1 = var_48

if (rsi_1 == 0)
    return 

int32_t* r14_1 = var_58
int32_t var_50
int32_t rbx_3 = var_50

while (true)
    int64_t* rdi_2
    
    if (rsi_1 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = *rsi_1
        
        if (rdi_2 == 0)
            rdi_2 = nullptr
        else
            void* rax_11 = sub_1425b0750()
            void* rdx_9 = rdi_2[2]
            int64_t rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (rax_12.d s> *(rdx_9 + 0x38) || *(*(rdx_9 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                rdi_2 = nullptr
    
    if (rdi_2[0x88] == *(arg1 + 0x28) && (rdi_2[0x11].b & 4) != 0)
        sub_141ef1240(rdi_2)
    
    while (true)
        int32_t r8_4 = r14_1[9]
        int32_t rax = rbx_3 + 1
        rbx_3 = rax
        
        if (rax s>= r8_4)
            return 
        
        void* rdi_3
        
        while (true)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx_3)
            uint32_t rdx_11 = zx.d(temp0_1)
            int32_t rax_17 = temp1_1 + rdx_11
            int64_t rdx_12 = *(*(r14_1 + 0x10) + (sx.q(rax_17 s>> 0x10) << 3))
            int64_t rcx_12 = sx.q(zx.d(rax_17.w) - rdx_11) * 3
            rdi_3 = *(rdx_12 + (rcx_12 << 3))
            rsi_1 = rdx_12 + (rcx_12 << 3)
            
            if (rdi_3 != 0)
                break
            
            rax = rbx_3 + 1
            rbx_3 = rax
            
            if (rax s>= r8_4)
                return 
        
        int32_t var_38
        
        if ((*(rdi_3 + 8) & var_38) == 0)
            void* var_40
            
            if (var_40 != sub_140d41340())
                void* rax_22 = *(rdi_3 + 0x10)
                int64_t rcx_13 = sx.q(*(var_40 + 0x38))
                
                if (rcx_13.d s> *(rax_22 + 0x38))
                    continue
                else if (*(*(rax_22 + 0x30) + (rcx_13 << 3)) != var_40 + 0x30)
                    continue
            
            int32_t rax_24 = *(rdi_3 + 0xc)
            void* const rax_28
            
            if (rax_24 s>= data_143e1d9b4)
                rax_28 = nullptr
            else
                uint32_t rdx_14 = zx.d(rax_24.w)
                
                if (rax_24 s< 0)
                    rax_24 += 0xffff
                    rdx_14 -= 0x10000
                
                rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3)) + sx.q(rdx_14) * 0x18
            
            int32_t var_34
            
            if ((*(rax_28 + 8) & var_34) == 0)
                break
