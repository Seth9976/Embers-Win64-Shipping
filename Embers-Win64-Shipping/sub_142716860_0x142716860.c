// 函数: sub_142716860
// 地址: 0x142716860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)
void* rsi = arg1
void* arg_10 = rbx
int64_t rax

if (rbx == 0)
    arg_10 = nullptr
else
    void* rax_1 = sub_14269bba0()
    void* rdx_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx_1 + 0x38))
        arg_10 = nullptr
    else if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
        arg_10 = nullptr

void* rbx_1 = *(rsi + 0x28)

if (rbx_1 == 0)
    return 

void* rax_2 = sub_1426a09e0()
void* rdx_2 = *(rbx_1 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax << 3)) != rax_2 + 0x30)
    return 

void* rbx_2 = rsi + 0x78
int32_t r11_1 = *(rbx_2 + 0x28)
void* r9_1 = rbx_2 + 0x10
int32_t rcx_2 = 0
int32_t var_e4_1 = 1
int32_t r8_3 = 0
int32_t var_e8_1 = 0
int64_t rax_4 = *(*(rsi + 0xd8) + 0x18)
void* var_e0 = r9_1
int32_t var_d8_1 = 0xffffffff
int64_t var_d4_1 = 0

if (r11_1 != 0)
    void* rax_5 = *(r9_1 + 0x10)
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14271697a:
        int32_t rax_12 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_e4_2 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_d4_1.d = r8_3 - rax_13 + 0x1f
        
        if (r8_3 - rax_13 + 0x1f s> r11_1)
            var_d4_1.d = r11_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_2)
            r8_3 += 0x20
            rcx_2 += 1
            var_d4_1:4.d = r8_3
            var_e8_1 = rcx_2
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            var_d8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14271697a
        
        var_d4_1.d = r11_1

void* var_68_1 = rbx_2
int128_t zmm0_1 = var_e8_1.o
int128_t var_78_1 = 0xffffffff
int16_t var_b0_1 = 0
void* rax_15 = zmm0_1.q
var_d8_1.o = zmm0_1
var_e8_1.o = rbx_2.o
zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_c8_1 = zmm0_1

if (_mm_bsrli_si128(0xffffffff, 4) s>= *(rax_15 + 0x18))
    return 

int32_t i_1
int32_t i = i_1

do
    int64_t* r12_1 = var_e8_1.q
    int64_t rdi_1 = sx.q(i) * 0x38
    int64_t r14_1 = *r12_1
    
    if ((*(r14_1 + rdi_1 + 0x28) & 1) != 0)
        int32_t rdx_7 = *(r14_1 + rdi_1 + 0x20)
        
        if (rdx_7 s>= 0)
            int64_t* rbx_3 = nullptr
            void* rax_17 = sub_14260f680(*(rsi + 0xd8), rdx_7)
            int64_t r15_1
            
            if (*(rax_17 + 0x50) == 0)
                r15_1 = 0
            else
                r15_1 = **(rax_17 + 0x48)
            
            void* rsi_3 = (sx.q(*(r14_1 + rdi_1 + 0x20)) << 6) + rax_4
            
            if (*(rsi_3 + 0x38) != 0)
                r15_1 = *(rsi_3 + 0x28)
                
                if (not(0f f!= *(rsi_3 + 0x30)))
                    int64_t rax_19 = sub_142656e00(arg_10, sub_1426863c0(rbx_1, r15_1))
                    
                    if (rax_19 != 0)
                        int32_t var_a0[0x4]
                        sub_142690d00(&var_a0, rsi_3 + 0x18)
                        sub_142616490(*(arg1 + 0xd8), *(r14_1 + rdi_1 + 0x20))
                        sub_1426160f0(*(arg1 + 0xd8), *(r14_1 + rdi_1 + 0x20))
                        rbx_3 = nullptr
                        int64_t* rcx_13 = (*r12_1)[sx.q(i) * 7]
                        
                        if (rcx_13 != 0)
                            int64_t* rax_21 = (*(*rcx_13 + 8))(rcx_13)
                            void* rax_22 = sub_142737e30()
                            void* rcx_14 = rax_21[2]
                            int64_t rdx_13 = sx.q(*(rax_22 + 0x38))
                            
                            if (rdx_13.d s<= *(rcx_14 + 0x38)
                                    && *(*(rcx_14 + 0x30) + (rdx_13 << 3)) == rax_22 + 0x30)
                                rbx_3 = rax_21
                        
                        if (rbx_3 != 0)
                            (*(*rbx_3 + 0x4e0))(rbx_3, rax_19, &var_a0)
            
            if (r15_1 != *(r14_1 + rdi_1 + 0x18))
                if (rbx_3 != 0)
                    (*(*rbx_3 + 0x560))(rbx_3, r15_1, *(r14_1 + rdi_1 + 0x18), 
                        zx.q(*(rax_17 + 0x50)), var_e8_1)
                    *(r14_1 + rdi_1 + 0x18) = r15_1
                else
                    int64_t* rcx_17 = (*r12_1)[sx.q(i) * 7]
                    
                    if (rcx_17 != 0)
                        int64_t* rax_27 = (*(*rcx_17 + 8))(rcx_17)
                        void* rax_28 = sub_142737e30()
                        void* rdx_15 = rax_27[2]
                        int64_t rcx_18 = sx.q(*(rax_28 + 0x38))
                        
                        if (rcx_18.d s<= *(rdx_15 + 0x38)
                                && *(*(rdx_15 + 0x30) + (rcx_18 << 3)) == rax_28 + 0x30)
                            rbx_3 = rax_27
                    
                    if (rbx_3 != 0)
                        (*(*rbx_3 + 0x560))(rbx_3, r15_1, *(r14_1 + rdi_1 + 0x18), 
                            zx.q(*(rax_17 + 0x50)), var_e8_1)
                        *(r14_1 + rdi_1 + 0x18) = r15_1
            
            rsi = arg1
    
    var_d4_1:4.d &= not.d(var_e0:4.d)
    sub_14059bdd0(&var_e0)
    i = i_1
while (i s< *(var_d8_1.q + 0x18))

if (var_b0_1.b != 0 && var_b0_1:1.b != 0)
    sub_140aa4bc0(rbx_2, *(rbx_2 + 8) - *(rbx_2 + 0x34), 1)
